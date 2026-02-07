#include "include/POptionDataOut.h"

/**
 * Symbol: Sizeof__14POptionDataOutSFv
 * Address: 0014be88
 */
void POptionDataOut::Sizeof() {
    /*
        14be88:	e3a00010 	mov	r0, #16	; 0x10
        14be8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataOut::New(void)
 * Address: 0014be90
 */
POptionDataOut::New(void) {
    /*
        14be90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataOut::Delete(void)
 * Address: 0014be94
 */
POptionDataOut::Delete(void) {
    /*
        14be94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataOut::Translate(void *, PipeCallBack *)
 * Address: 0014be98
 */
POptionDataOut::Translate(void *, PipeCallBack *) {
    /*
        14be98:	e1a0c00d 	mov	ip, sp
        14be9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14bea0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14bea4:	e1a05000 	mov	r5, r0
        14bea8:	e1a04001 	mov	r4, r1
        14beac:	e3a00002 	mov	r0, #2	; 0x2
        14beb0:	eb69d8a5 	bl	1bc214c <$AllocateRefHandle(long)>
        14beb4:	e1a06000 	mov	r6, r0
        14beb8:	e3a07000 	mov	r7, #0	; 0x0
        14bebc:	e3340000 	teq	r4, #0	; 0x0
        14bec0:	0a00000a 	beq	14bef0 <POptionDataOut::Translate(void *, PipeCallBack *)+0x58>
        14bec4:	e5943008 	ldr	r3, [r4, #8]
        14bec8:	e2841004 	add	r1, r4, #4	; 0x4
        14becc:	e1a00005 	mov	r0, r5
        14bed0:	e5942000 	ldr	r2, [r4]
        14bed4:	eb696915 	bl	1ba6330 <POptionDataOut::$ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)>
        14bed8:	e5860000 	str	r0, [r6]
        14bedc:	e5944000 	ldr	r4, [r4]
        14bee0:	e1a00006 	mov	r0, r6
        14bee4:	eb69dcb4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bee8:	e1a00004 	mov	r0, r4
        14beec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14bef0:	e1a00006 	mov	r0, r6
        14bef4:	eb69dcb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bef8:	e1a00007 	mov	r0, r7
        14befc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)
 * Address: 0014bf00
 */
POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *) {
    /*
        14bf00:	e1a0c00d 	mov	ip, sp
        14bf04:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        14bf08:	e24cb004 	sub	fp, ip, #4	; 0x4
        14bf0c:	e1a07000 	mov	r7, r0
        14bf10:	e1a04001 	mov	r4, r1
        14bf14:	e1a05002 	mov	r5, r2
        14bf18:	e1a06003 	mov	r6, r3
        14bf1c:	e3a00000 	mov	r0, #0	; 0x0
        14bf20:	e52d0004 	str	r0, [sp, -#4]!
        14bf24:	e1a00001 	mov	r0, r1
        14bf28:	eb6a9e97 	bl	1bf398c <$IsArray(RefVar const &)>
        14bf2c:	e3300000 	teq	r0, #0	; 0x0
        14bf30:	0a00001d 	beq	14bfac <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xac>
        14bf34:	e5940000 	ldr	r0, [r4]
        14bf38:	e5900000 	ldr	r0, [r0]
        14bf3c:	eb69e4da 	bl	1bc52ac <$Length(long)>
        14bf40:	e1a09000 	mov	r9, r0
        14bf44:	e3a08000 	mov	r8, #0	; 0x0
        14bf48:	e3500000 	cmp	r0, #0	; 0x0
        14bf4c:	9a000027 	bls	14bff0 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xf0>
        14bf50:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bf54:	e1a01008 	mov	r1, r8
        14bf58:	e5940000 	ldr	r0, [r4]
        14bf5c:	e5900000 	ldr	r0, [r0]
        14bf60:	eb69e0bb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14bf64:	eb69d878 	bl	1bc214c <$AllocateRefHandle(long)>
        14bf68:	e58d0000 	str	r0, [sp]
        14bf6c:	e1a0100d 	mov	r1, sp
        14bf70:	e1a03006 	mov	r3, r6
        14bf74:	e1a02005 	mov	r2, r5
        14bf78:	e1a00007 	mov	r0, r7
        14bf7c:	eb6968eb 	bl	1ba6330 <POptionDataOut::$ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)>
        14bf80:	e58d0004 	str	r0, [sp, #4]
        14bf84:	e59d0000 	ldr	r0, [sp]
        14bf88:	eb69dc8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bf8c:	e59d0004 	ldr	r0, [sp, #4]
        14bf90:	e3300000 	teq	r0, #0	; 0x0
        14bf94:	e28dd004 	add	sp, sp, #4	; 0x4
        14bf98:	1a000014 	bne	14bff0 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xf0>
        14bf9c:	e2888001 	add	r8, r8, #1	; 0x1
        14bfa0:	e1580009 	cmp	r8, r9
        14bfa4:	3affffe9 	bcc	14bf50 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0x50>
        14bfa8:	ea000010 	b	14bff0 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xf0>
        14bfac:	e1a03006 	mov	r3, r6
        14bfb0:	e1a0200d 	mov	r2, sp
        14bfb4:	e1a01004 	mov	r1, r4
        14bfb8:	e1a00007 	mov	r0, r7
        14bfbc:	eb6968dc 	bl	1ba6334 <POptionDataOut::$ConvertToOption(RefVar const &, long &, PFrameSink *)>
        14bfc0:	e1b04000 	movs	r4, r0
        14bfc4:	0a000009 	beq	14bff0 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xf0>
        14bfc8:	e59d0000 	ldr	r0, [sp]
        14bfcc:	e3300000 	teq	r0, #0	; 0x0
        14bfd0:	1a000006 	bne	14bff0 <POptionDataOut::ConvertToOptionArray(RefVar const &, TOptionArray *, PFrameSink *)+0xf0>
        14bfd4:	e1a02004 	mov	r2, r4
        14bfd8:	e5951000 	ldr	r1, [r5]
        14bfdc:	e1a00005 	mov	r0, r5
        14bfe0:	eb69b72f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        14bfe4:	e58d0000 	str	r0, [sp]
        14bfe8:	e1a00004 	mov	r0, r4
        14bfec:	eb6a05bb 	bl	1bcd6e0 <$__dl(void *)>
        14bff0:	e49d0004 	ldr	r0, [sp], #4
        14bff4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)
 * Address: 0014bff8
 */
POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *) {
    /*
        14bff8:	e1a0c00d 	mov	ip, sp
        14bffc:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14c000:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c004:	e1a06000 	mov	r6, r0
        14c008:	e1a05001 	mov	r5, r1
        14c00c:	e1a04002 	mov	r4, r2
        14c010:	e24dd004 	sub	sp, sp, #4	; 0x4
        14c014:	e3a0a000 	mov	sl, #0	; 0x0
        14c018:	e3a07000 	mov	r7, #0	; 0x0
        14c01c:	e3a00002 	mov	r0, #2	; 0x2
        14c020:	e582a000 	str	sl, [r2]
        14c024:	eb69d848 	bl	1bc214c <$AllocateRefHandle(long)>
        14c028:	e1a08000 	mov	r8, r0
        14c02c:	e1a00005 	mov	r0, r5
        14c030:	eb6a9e56 	bl	1bf3990 <$IsFrame(RefVar const &)>
        14c034:	e3300000 	teq	r0, #0	; 0x0
        14c038:	03a00f43 	moveq	r0, #268	; 0x10c
        14c03c:	02400b35 	subeq	r0, r0, #54272	; 0xd400
        14c040:	05840000 	streq	r0, [r4]
        14c044:	0a0000dd 	beq	14c3c0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3c8>
        14c048:	e24dd004 	sub	sp, sp, #4	; 0x4
        14c04c:	e59f1094 	ldr	r1, [pc, #94]	; 14c0e8 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0xf0>
        14c050:	e1a00005 	mov	r0, r5
        14c054:	e3a03000 	mov	r3, #0	; 0x0
        14c058:	e3a02000 	mov	r2, #0	; 0x0
        14c05c:	eb69e084 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c060:	eb69d839 	bl	1bc214c <$AllocateRefHandle(long)>
        14c064:	e58d0000 	str	r0, [sp]
        14c068:	e5900000 	ldr	r0, [r0]
        14c06c:	e3300002 	teq	r0, #2	; 0x2
        14c070:	0a00001f 	beq	14c0f4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0xfc>
        14c074:	e1a0000d 	mov	r0, sp
        14c078:	eb69e487 	bl	1bc529c <$IsString(RefVar const &)>
        14c07c:	e3300000 	teq	r0, #0	; 0x0
        14c080:	0a00001b 	beq	14c0f4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0xfc>
        14c084:	e24dd004 	sub	sp, sp, #4	; 0x4
        14c088:	e28d0004 	add	r0, sp, #4	; 0x4
        14c08c:	eb69dc3c 	bl	1bc3184 <$GetCString(RefVar const &)>
        14c090:	e28d1008 	add	r1, sp, #8	; 0x8
        14c094:	e3a03004 	mov	r3, #4	; 0x4
        14c098:	e3a02001 	mov	r2, #1	; 0x1
        14c09c:	eb6af501 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        14c0a0:	e59f1044 	ldr	r1, [pc, #44]	; 14c0ec <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0xf4>
        14c0a4:	e1a00005 	mov	r0, r5
        14c0a8:	e3a03000 	mov	r3, #0	; 0x0
        14c0ac:	e3a02000 	mov	r2, #0	; 0x0
        14c0b0:	eb69e06f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c0b4:	eb69d824 	bl	1bc214c <$AllocateRefHandle(long)>
        14c0b8:	e58d0000 	str	r0, [sp]
        14c0bc:	e1a0000d 	mov	r0, sp
        14c0c0:	e3a01000 	mov	r1, #0	; 0x0
        14c0c4:	eb65d403 	bl	1ac10d8 <$GetDataForm(RefVar const &, FormUser)>
        14c0c8:	e1a09000 	mov	r9, r0
        14c0cc:	e59d0000 	ldr	r0, [sp]
        14c0d0:	eb69dc39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c0d4:	e3390000 	teq	r9, #0	; 0x0
        14c0d8:	059f0010 	ldreq	r0, [pc, #10]	; 14c0f0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0xf8>
        14c0dc:	05840000 	streq	r0, [r4]
        14c0e0:	e28dd004 	add	sp, sp, #4	; 0x4
        14c0e4:	ea000005 	b	14c100 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x108>
        14c0e8:	00683400 	rsbeq	r3, r8, r0, lsl #8
        14c0ec:	00682e68 	rsbeq	r2, r8, r8, ror #28
        14c0f0:	ffff2d0f 	swinv	0x00ff2d0f
        14c0f4:	e3a00f43 	mov	r0, #268	; 0x10c
        14c0f8:	e2400b35 	sub	r0, r0, #54272	; 0xd400
        14c0fc:	e5840000 	str	r0, [r4]
        14c100:	e59d0000 	ldr	r0, [sp]
        14c104:	eb69dc2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c108:	e28dd004 	add	sp, sp, #4	; 0x4
        14c10c:	e5940000 	ldr	r0, [r4]
        14c110:	e3300000 	teq	r0, #0	; 0x0
        14c114:	1a0000a9 	bne	14c3c0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3c8>
        14c118:	e59f1058 	ldr	r1, [pc, #58]	; 14c178 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x180>
        14c11c:	e1a0a001 	mov	sl, r1
        14c120:	e1a00005 	mov	r0, r5
        14c124:	e3a03000 	mov	r3, #0	; 0x0
        14c128:	e3a02000 	mov	r2, #0	; 0x0
        14c12c:	eb69e050 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c130:	e5880000 	str	r0, [r8]
        14c134:	e59f1040 	ldr	r1, [pc, #40]	; 14c17c <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x184>
        14c138:	e5911000 	ldr	r1, [r1]
        14c13c:	e5911000 	ldr	r1, [r1]
        14c140:	eb69e03a 	bl	1bc4230 <$EQRef__FlT1>
        14c144:	e3300000 	teq	r0, #0	; 0x0
        14c148:	159d0000 	ldrne	r0, [sp]
        14c14c:	159f702c 	ldrne	r7, [pc, #2c]	; 14c180 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x188>
        14c150:	11300007 	teqne	r0, r7
        14c154:	0a00001a 	beq	14c1c4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x1cc>
        14c158:	e3a00014 	mov	r0, #20	; 0x14
        14c15c:	eb6a57f8 	bl	1be2144 <$NewPtrClear>
        14c160:	e1b05000 	movs	r5, r0
        14c164:	1a000006 	bne	14c184 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x18c>
        14c168:	e1a00008 	mov	r0, r8
        14c16c:	eb69dc12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c170:	e3a00000 	mov	r0, #0	; 0x0
        14c174:	ea00009b 	b	14c3e8 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3f0>
        14c178:	00684cb0 	streqh	r4, [r8], -#192
        14c17c:	00684540 	rsbeq	r4, r8, r0, asr #10
        14c180:	73696420 	cmnvc	r9, #536870912	; 0x20000000
        14c184:	e5857000 	str	r7, [r5]
        14c188:	e1a00005 	mov	r0, r5
        14c18c:	eb6af0ac 	bl	1c08444 <TOption::$SetAsService(void)>
        14c190:	e5950008 	ldr	r0, [r5, #8]
        14c194:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        14c198:	e3800c02 	orr	r0, r0, #512	; 0x200
        14c19c:	e5850008 	str	r0, [r5, #8]
        14c1a0:	e3a00008 	mov	r0, #8	; 0x8
        14c1a4:	e5850004 	str	r0, [r5, #4]
        14c1a8:	e59d0000 	ldr	r0, [sp]
        14c1ac:	e3a0a000 	mov	sl, #0	; 0x0
        14c1b0:	e285500c 	add	r5, r5, #12	; 0xc
        14c1b4:	e8850401 	stmia	r5, {r0, sl}
        14c1b8:	e245500c 	sub	r5, r5, #12	; 0xc
        14c1bc:	e1a07005 	mov	r7, r5
        14c1c0:	ea00007e 	b	14c3c0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3c8>
        14c1c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        14c1c8:	e59f1054 	ldr	r1, [pc, #54]	; 14c224 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x22c>
        14c1cc:	e1a00005 	mov	r0, r5
        14c1d0:	e3a03000 	mov	r3, #0	; 0x0
        14c1d4:	e3a02000 	mov	r2, #0	; 0x0
        14c1d8:	eb69e025 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c1dc:	eb69d7da 	bl	1bc214c <$AllocateRefHandle(long)>
        14c1e0:	e58d0000 	str	r0, [sp]
        14c1e4:	e5900000 	ldr	r0, [r0]
        14c1e8:	e3300002 	teq	r0, #2	; 0x2
        14c1ec:	0a000011 	beq	14c238 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x240>
        14c1f0:	e1a03004 	mov	r3, r4
        14c1f4:	e92d0008 	stmdb	sp!, {r3}
        14c1f8:	e1a03009 	mov	r3, r9
        14c1fc:	e28d2004 	add	r2, sp, #4	; 0x4
        14c200:	e1a00006 	mov	r0, r6
        14c204:	e51b102c 	ldr	r1, [fp, -#44]
        14c208:	eb696c77 	bl	1ba73ec <POptionDataOut::$ParseOutput(PFrameSink *, RefVar const &, FormType, long *)>
        14c20c:	e28dd004 	add	sp, sp, #4	; 0x4
        14c210:	e1a07000 	mov	r7, r0
        14c214:	e5940000 	ldr	r0, [r4]
        14c218:	e3300000 	teq	r0, #0	; 0x0
        14c21c:	1a000060 	bne	14c3a4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3ac>
        14c220:	ea00000d 	b	14c25c <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x264>
        14c224:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        14c228:	e1a00008 	mov	r0, r8
        14c22c:	eb69dbe2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c230:	e28dd004 	add	sp, sp, #4	; 0x4
        14c234:	ea000063 	b	14c3c8 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3d0>
        14c238:	e3a0000c 	mov	r0, #12	; 0xc
        14c23c:	eb6a57c0 	bl	1be2144 <$NewPtrClear>
        14c240:	e1a07000 	mov	r7, r0
        14c244:	eb6a57b5 	bl	1be2120 <$MemError>
        14c248:	e3370000 	teq	r7, #0	; 0x0
        14c24c:	e5840000 	str	r0, [r4]
        14c250:	0a000053 	beq	14c3a4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3ac>
        14c254:	e3300000 	teq	r0, #0	; 0x0
        14c258:	1a000051 	bne	14c3a4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3ac>
        14c25c:	e1a00007 	mov	r0, r7
        14c260:	eb6a53a4 	bl	1be10f8 <$GetPtrSize>
        14c264:	e240000c 	sub	r0, r0, #12	; 0xc
        14c268:	e5870004 	str	r0, [r7, #4]
        14c26c:	e5970008 	ldr	r0, [r7, #8]
        14c270:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        14c274:	e3800c01 	orr	r0, r0, #256	; 0x100
        14c278:	e5870008 	str	r0, [r7, #8]
        14c27c:	e59f107c 	ldr	r1, [pc, #7c]	; 14c300 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x308>
        14c280:	e1a00005 	mov	r0, r5
        14c284:	e3a03000 	mov	r3, #0	; 0x0
        14c288:	e3a02000 	mov	r2, #0	; 0x0
        14c28c:	eb69dff8 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c290:	e5880000 	str	r0, [r8]
        14c294:	e2001003 	and	r1, r0, #3	; 0x3
        14c298:	e3510000 	cmp	r1, #0	; 0x0
        14c29c:	1a000007 	bne	14c2c0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x2c8>
        14c2a0:	01a00140 	moveq	r0, r0, asr #2
        14c2a4:	0a000000 	beq	14c2ac <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x2b4>
        14c2a8:	eb69d79b 	bl	1bc211c <$_RINTError(long)>
        14c2ac:	e5971008 	ldr	r1, [r7, #8]
        14c2b0:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
        14c2b4:	e2000cff 	and	r0, r0, #65280	; 0xff00
        14c2b8:	e1810000 	orr	r0, r1, r0
        14c2bc:	e5870008 	str	r0, [r7, #8]
        14c2c0:	e1a0100a 	mov	r1, sl
        14c2c4:	e1a00005 	mov	r0, r5
        14c2c8:	e3a03000 	mov	r3, #0	; 0x0
        14c2cc:	e3a02000 	mov	r2, #0	; 0x0
        14c2d0:	eb69dfe7 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14c2d4:	e5880000 	str	r0, [r8]
        14c2d8:	e51f1164 	ldr	r1, [pc, #fffffe9c]	; 14c17c <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x184>
        14c2dc:	e5911000 	ldr	r1, [r1]
        14c2e0:	e5911000 	ldr	r1, [r1]
        14c2e4:	eb69dfd1 	bl	1bc4230 <$EQRef__FlT1>
        14c2e8:	e3300000 	teq	r0, #0	; 0x0
        14c2ec:	0a000004 	beq	14c304 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x30c>
        14c2f0:	e1a00007 	mov	r0, r7
        14c2f4:	e59d1004 	ldr	r1, [sp, #4]
        14c2f8:	eb69ba8d 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        14c2fc:	ea000025 	b	14c398 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3a0>
        14c300:	00683b58 	rsbeq	r3, r8, r8, asr fp
        14c304:	e59f0024 	ldr	r0, [pc, #24]	; 14c330 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x338>
        14c308:	e5900000 	ldr	r0, [r0]
        14c30c:	e5901000 	ldr	r1, [r0]
        14c310:	e5980000 	ldr	r0, [r8]
        14c314:	eb69dfc5 	bl	1bc4230 <$EQRef__FlT1>
        14c318:	e3300000 	teq	r0, #0	; 0x0
        14c31c:	0a000004 	beq	14c334 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x33c>
        14c320:	e1a00007 	mov	r0, r7
        14c324:	e59d1004 	ldr	r1, [sp, #4]
        14c328:	eb69ba80 	bl	1bbad30 <TOption::$SetAsOption(unsigned long)>
        14c32c:	ea000019 	b	14c398 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3a0>
        14c330:	00683b78 	rsbeq	r3, r8, r8, ror fp
        14c334:	e59f0024 	ldr	r0, [pc, #24]	; 14c360 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x368>
        14c338:	e5900000 	ldr	r0, [r0]
        14c33c:	e5901000 	ldr	r1, [r0]
        14c340:	e5980000 	ldr	r0, [r8]
        14c344:	eb69dfb9 	bl	1bc4230 <$EQRef__FlT1>
        14c348:	e3300000 	teq	r0, #0	; 0x0
        14c34c:	0a000004 	beq	14c364 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x36c>
        14c350:	e1a00007 	mov	r0, r7
        14c354:	e59d1004 	ldr	r1, [sp, #4]
        14c358:	eb69ba73 	bl	1bbad2c <TOption::$SetAsConfig(unsigned long)>
        14c35c:	ea00000d 	b	14c398 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3a0>
        14c360:	00682568 	rsbeq	r2, r8, r8, ror #10
        14c364:	e59f0044 	ldr	r0, [pc, #44]	; 14c3b0 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3b8>
        14c368:	e5900000 	ldr	r0, [r0]
        14c36c:	e5901000 	ldr	r1, [r0]
        14c370:	e5980000 	ldr	r0, [r8]
        14c374:	eb69dfad 	bl	1bc4230 <$EQRef__FlT1>
        14c378:	e3300000 	teq	r0, #0	; 0x0
        14c37c:	03a00f43 	moveq	r0, #268	; 0x10c
        14c380:	02400b35 	subeq	r0, r0, #54272	; 0xd400
        14c384:	05840000 	streq	r0, [r4]
        14c388:	0a000005 	beq	14c3a4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3ac>
        14c38c:	e1a00007 	mov	r0, r7
        14c390:	e59d1004 	ldr	r1, [sp, #4]
        14c394:	eb69ba63 	bl	1bbad28 <TOption::$SetAsAddress(unsigned long)>
        14c398:	e5940000 	ldr	r0, [r4]
        14c39c:	e3300000 	teq	r0, #0	; 0x0
        14c3a0:	0a000003 	beq	14c3b4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3bc>
        14c3a4:	e59d0000 	ldr	r0, [sp]
        14c3a8:	eb69db83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c3ac:	eaffff9d 	b	14c228 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x230>
        14c3b0:	00681db0 	streqh	r1, [r8], -#208
        14c3b4:	e59d0000 	ldr	r0, [sp]
        14c3b8:	eb69db7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c3bc:	e28dd004 	add	sp, sp, #4	; 0x4
        14c3c0:	e1a00008 	mov	r0, r8
        14c3c4:	eb69db7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c3c8:	e5940000 	ldr	r0, [r4]
        14c3cc:	e3300000 	teq	r0, #0	; 0x0
        14c3d0:	13370000 	teqne	r7, #0	; 0x0
        14c3d4:	0a000002 	beq	14c3e4 <POptionDataOut::ConvertToOption(RefVar const &, long &, PFrameSink *)+0x3ec>
        14c3d8:	e1a00007 	mov	r0, r7
        14c3dc:	eb6a04bf 	bl	1bcd6e0 <$__dl(void *)>
        14c3e0:	e3a07000 	mov	r7, #0	; 0x0
        14c3e4:	e1a00007 	mov	r0, r7
        14c3e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: POptionDataOut::ParseOutput(PFrameSink *, RefVar const &, FormType, long *)
 * Address: 0014c3ec
 */
POptionDataOut::ParseOutput(PFrameSink *, RefVar const &, FormType, long *) {
    /*
        14c3ec:	e1a0c00d 	mov	ip, sp
        14c3f0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14c3f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c3f8:	e1a06001 	mov	r6, r1
        14c3fc:	e1a05002 	mov	r5, r2
        14c400:	e1a04003 	mov	r4, r3
        14c404:	e59b8004 	ldr	r8, [fp, #4]
        14c408:	e24dd014 	sub	sp, sp, #20	; 0x14
        14c40c:	e3a00002 	mov	r0, #2	; 0x2
        14c410:	eb69d74d 	bl	1bc214c <$AllocateRefHandle(long)>
        14c414:	e3a07000 	mov	r7, #0	; 0x0
        14c418:	e58d0000 	str	r0, [sp]
        14c41c:	e5950000 	ldr	r0, [r5]
        14c420:	e5901000 	ldr	r1, [r0]
        14c424:	e41d006c 	ldr	r0, [sp], -#108
        14c428:	e5801000 	str	r1, [r0]
        14c42c:	e3a00001 	mov	r0, #1	; 0x1
        14c430:	e58d0074 	str	r0, [sp, #116]
        14c434:	e3a00000 	mov	r0, #0	; 0x0
        14c438:	e58d4070 	str	r4, [sp, #112]
        14c43c:	e5cd0078 	strb	r0, [sp, #120]
        14c440:	e3a0100c 	mov	r1, #12	; 0xc
        14c444:	e58d0000 	str	r0, [sp]
        14c448:	e58d107c 	str	r1, [sp, #124]
        14c44c:	e28d0008 	add	r0, sp, #8	; 0x8
        14c450:	eb699947 	bl	1bb2974 <$setjmp>
        14c454:	e3300000 	teq	r0, #0	; 0x0
        14c458:	1a000007 	bne	14c47c <POptionDataOut::ParseOutput(PFrameSink *, RefVar const &, FormType, long *)+0x90>
        14c45c:	e1a0000d 	mov	r0, sp
        14c460:	eb6a4f05 	bl	1be007c <$AddExceptionHandler>
        14c464:	e28d106c 	add	r1, sp, #108	; 0x6c
        14c468:	e1a00006 	mov	r0, r6
        14c46c:	e3a02000 	mov	r2, #0	; 0x0
        14c470:	eb696fe5 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
        14c474:	e1a07000 	mov	r7, r0
        14c478:	ea000001 	b	14c484 <POptionDataOut::ParseOutput(PFrameSink *, RefVar const &, FormType, long *)+0x98>
        14c47c:	e59d0064 	ldr	r0, [sp, #100]
        14c480:	e5880000 	str	r0, [r8]
        14c484:	e1a0000d 	mov	r0, sp
        14c488:	eb6a530a 	bl	1be10b8 <$ExitHandler>
        14c48c:	e5bd006c 	ldr	r0, [sp, #108]!
        14c490:	eb69db49 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c494:	e1a00007 	mov	r0, r7
        14c498:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__14POptionDataOutSFv
 * Address: 0038a3e8
 */
void POptionDataOut::ClassInfo() {
    /*
        38a3e8:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a3ec:	e1a0f00e 	mov	pc, lr
        38a3f0:	e3a00000 	mov	r0, #0	; 0x0
        38a3f4:	e1a0f00e 	mov	pc, lr
        38a3f8:	504f7074 	subpl	r7, pc, r4, ror r0
        38a3fc:	696f6e44 	stmvsdb	pc!, {r2, r6, r9, sl, fp, sp, lr}^
        38a400:	6174614f 	cmnvs	r4, pc, asr #2
        38a404:	75740050 	ldrvcb	r0, [r4, -#80]!
        38a408:	4672616d 	ldrmibt	r6, [r2], -sp, ror #2
        38a40c:	6553696e 	ldrvsb	r6, [r3, -#2414]
        38a410:	6b000000 	blvs	38a418 <ClassInfo__14POptionDataOutSFv+0x30>
        38a414:	00000000 	andeq	r0, r0, r0
        38a418:	eafffff2 	b	38a3e8 <ClassInfo__14POptionDataOutSFv>
        38a41c:	ea6073eb 	b	1ba73d0 <POptionDataOut::$New(void)>
        38a420:	ea606fcf 	b	1ba6364 <POptionDataOut::$Delete(void)>
        38a424:	ea607802 	b	1ba8434 <POptionDataOut::$Translate(void *, PipeCallBack *)>
        38a428:	00000000 	andeq	r0, r0, r0
        38a42c:	00000048 	andeq	r0, r0, r8, asr #32
        38a430:	00000052 	andeq	r0, r0, r2, asr r0
        38a434:	0000005b 	andeq	r0, r0, fp, asr r0
        38a438:	00000058 	andeq	r0, r0, r8, asr r0
        38a43c:	00000068 	andeq	r0, r0, r8, rrx
        38a440:	ea6094d8 	b	1baf7a8 <$Sizeof__13POptionDataInSFv>
        38a44c:	ea6073da 	b	1ba73bc <POptionDataIn::$New(void)>
        38a450:	ea606fbe 	b	1ba6350 <POptionDataIn::$Delete(void)>
        38a460:	ea000001 	b	38a46c <ClassInfo__13POptionDataInSFv+0x8>
    */
}

