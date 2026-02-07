#include "include/TFaxDriver.h"

/**
 * Symbol: Sizeof__10TFaxDriverSFv
 * Address: 0020f044
 */
void TFaxDriver::Sizeof() {
    /*
        20f044:	e3a00034 	mov	r0, #52	; 0x34
        20f048:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxDriver::Open(void)
 * Address: 0020f04c
 */
TFaxDriver::Open(void) {
    /*
        20f04c:	e1a0c00d 	mov	ip, sp
        20f050:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20f054:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f058:	e1a05000 	mov	r5, r0
        20f05c:	e24dd004 	sub	sp, sp, #4	; 0x4
        20f060:	e5900010 	ldr	r0, [r0, #16]
        20f064:	e5900004 	ldr	r0, [r0, #4]
        20f068:	e5900000 	ldr	r0, [r0]
        20f06c:	eb66cc36 	bl	1bc214c <$AllocateRefHandle(long)>
        20f070:	e3a08000 	mov	r8, #0	; 0x0
        20f074:	e58d0000 	str	r0, [sp]
        20f078:	e5858018 	str	r8, [r5, #24]	; fField24
        20f07c:	e585801c 	str	r8, [r5, #28]	; fField28
        20f080:	e5858020 	str	r8, [r5, #32]	; fField32
        20f084:	e5c58024 	strb	r8, [r5, #36]	; fField36
        20f088:	e3e00000 	mvn	r0, #0	; 0x0
        20f08c:	e585002c 	str	r0, [r5, #44]	; fField44
        20f090:	e3a00000 	mov	r0, #0	; 0x0
        20f094:	e5858028 	str	r8, [r5, #40]	; fField40
        20f098:	eb669a91 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        20f09c:	e585001c 	str	r0, [r5, #28]	; fField28
        20f0a0:	e59f7068 	ldr	r7, [pc, #68]	; 20f110 <TFaxDriver::Open(void)+0xc4>
        20f0a4:	e3300000 	teq	r0, #0	; 0x0
        20f0a8:	0a000014 	beq	20f100 <TFaxDriver::Open(void)+0xb4>
        20f0ac:	eb66a6f2 	bl	1bb8c7c <TOptionArray::$Init(void)>
        20f0b0:	e3a00000 	mov	r0, #0	; 0x0
        20f0b4:	eb669a8a 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        20f0b8:	e5850020 	str	r0, [r5, #32]	; fField32
        20f0bc:	e3300000 	teq	r0, #0	; 0x0
        20f0c0:	0a00000e 	beq	20f100 <TFaxDriver::Open(void)+0xb4>
        20f0c4:	eb66a6ec 	bl	1bb8c7c <TOptionArray::$Init(void)>
        20f0c8:	e3a00f9b 	mov	r0, #620	; 0x26c
        20f0cc:	eb66fd99 	bl	1bce738 <$__nw(unsigned int)>
        20f0d0:	e1b06000 	movs	r6, r0
        20f0d4:	e59f4038 	ldr	r4, [pc, #38]	; 20f114 <TFaxDriver::Open(void)+0xc8>
        20f0d8:	0a000005 	beq	20f0f4 <TFaxDriver::Open(void)+0xa8>
        20f0dc:	e1a00006 	mov	r0, r6
        20f0e0:	e59f2030 	ldr	r2, [pc, #30]	; 20f118 <TFaxDriver::Open(void)+0xcc>
        20f0e4:	e1a01004 	mov	r1, r4
        20f0e8:	eb5fe8fd 	bl	1a094e4 <TFaxToolInterface::$__ct(unsigned long, unsigned long)>
        20f0ec:	e59f0028 	ldr	r0, [pc, #28]	; 20f11c <TFaxDriver::Open(void)+0xd0>	; fField28
        20f0f0:	e5860000 	str	r0, [r6]
        20f0f4:	e5856018 	str	r6, [r5, #24]	; fField24
        20f0f8:	e1b01006 	movs	r1, r6
        20f0fc:	1a000007 	bne	20f120 <TFaxDriver::Open(void)+0xd4>
        20f100:	e59d0000 	ldr	r0, [sp]
        20f104:	eb66d02c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f108:	e1a00007 	mov	r0, r7
        20f10c:	ea0000eb 	b	20f4c0 <TFaxDriver::Open(void)+0x474>
        20f110:	ffff541f 	swinv	0x00ff541f
        20f114:	66617873 	undefined
        20f118:	6d6f6473 	stcvsl	4, cr6, [pc, -#460]!
        20f11c:	0001d7f0 	streqd	sp, [r1], -r0
        20f120:	e5950014 	ldr	r0, [r5, #20]	; fField20
        20f124:	e5a1023c 	str	r0, [r1, #572]!
        20f128:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f12c:	e5c08240 	strb	r8, [r0, #576]
        20f130:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f134:	e5c08241 	strb	r8, [r0, #577]
        20f138:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f13c:	e5c08268 	strb	r8, [r0, #616]
        20f140:	e5950028 	ldr	r0, [r5, #40]	; fField40
        20f144:	e3300000 	teq	r0, #0	; 0x0
        20f148:	1a0000d8 	bne	20f4b0 <TFaxDriver::Open(void)+0x464>
        20f14c:	e3a02000 	mov	r2, #0	; 0x0
        20f150:	e2851018 	add	r1, r5, #24	; 0x18
        20f154:	e8910003 	ldmia	r1, {r0, r1}
        20f158:	eb607125 	bl	1a2b5f4 <TFaxToolInterface::$SetDefaultConfig(TOptionArray *, unsigned long)>
        20f15c:	e2851018 	add	r1, r5, #24	; 0x18
        20f160:	e8910003 	ldmia	r1, {r0, r1}
        20f164:	e59f3358 	ldr	r3, [pc, #358]	; 20f4c4 <TFaxDriver::Open(void)+0x478>
        20f168:	e1a02004 	mov	r2, r4
        20f16c:	eb601205 	bl	1a13988 <TFaxToolInterface::$Init(TOptionArray *, unsigned long, unsigned long)>
        20f170:	e5951028 	ldr	r1, [r5, #40]	; fField40
        20f174:	e3310000 	teq	r1, #0	; 0x0
        20f178:	05850028 	streq	r0, [r5, #40]	; fField40
        20f17c:	e5950028 	ldr	r0, [r5, #40]	; fField40
        20f180:	e3300000 	teq	r0, #0	; 0x0
        20f184:	1a0000c9 	bne	20f4b0 <TFaxDriver::Open(void)+0x464>
        20f188:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f18c:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20f190:	eb602abf 	bl	1a19c94 <TFaxToolInterface::$SetDefaultOptions(TOptionArray *)>
        20f194:	e24dd020 	sub	sp, sp, #32	; 0x20
        20f198:	e1a0000d 	mov	r0, sp
        20f19c:	eb66b30c 	bl	1bbbdd4 <TCMOModemDialing::$__ct(void)>
        20f1a0:	e1a0000d 	mov	r0, sp
        20f1a4:	eb624bd9 	bl	1aa2110 <$SetDialingOptionsFromPrefs(TCMOModemDialing *)>
        20f1a8:	e24ddf41 	sub	sp, sp, #260	; 0x104
        20f1ac:	e59f0314 	ldr	r0, [pc, #314]	; 20f4c8 <TFaxDriver::Open(void)+0x47c>
        20f1b0:	e5900000 	ldr	r0, [r0]
        20f1b4:	e5901000 	ldr	r1, [r0]
        20f1b8:	e59d0124 	ldr	r0, [sp, #292]
        20f1bc:	e5900000 	ldr	r0, [r0]
        20f1c0:	eb66d426 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        20f1c4:	eb66cbe0 	bl	1bc214c <$AllocateRefHandle(long)>
        20f1c8:	e58d0100 	str	r0, [sp, #256]
        20f1cc:	e5900000 	ldr	r0, [r0]
        20f1d0:	e3300002 	teq	r0, #2	; 0x2
        20f1d4:	03a00020 	moveq	r0, #32	; 0x20
        20f1d8:	05cd0000 	streqb	r0, [sp]
        20f1dc:	05cd8001 	streqb	r8, [sp, #1]
        20f1e0:	0a000013 	beq	20f234 <TFaxDriver::Open(void)+0x1e8>
        20f1e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        20f1e8:	e28d1f42 	add	r1, sp, #264	; 0x108
        20f1ec:	e1a0000d 	mov	r0, sp
        20f1f0:	eb66c7b8 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        20f1f4:	e1a0100d 	mov	r1, sp
        20f1f8:	e28d0004 	add	r0, sp, #4	; 0x4
        20f1fc:	eb66c7b4 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        20f200:	e1a0000d 	mov	r0, sp
        20f204:	e3a01000 	mov	r1, #0	; 0x0
        20f208:	eb66cbbc 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        20f20c:	e28d0004 	add	r0, sp, #4	; 0x4
        20f210:	eb66cbbf 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        20f214:	e28d1008 	add	r1, sp, #8	; 0x8
        20f218:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        20f21c:	e3a02001 	mov	r2, #1	; 0x1
        20f220:	eb676056 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        20f224:	e28d0004 	add	r0, sp, #4	; 0x4
        20f228:	e3a01000 	mov	r1, #0	; 0x0
        20f22c:	eb66cbb3 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        20f230:	e28dd008 	add	sp, sp, #8	; 0x8
        20f234:	e59f0290 	ldr	r0, [pc, #290]	; 20f4cc <TFaxDriver::Open(void)+0x480>
        20f238:	e5900000 	ldr	r0, [r0]
        20f23c:	e5901000 	ldr	r1, [r0]
        20f240:	e59d0124 	ldr	r0, [sp, #292]
        20f244:	e5900000 	ldr	r0, [r0]
        20f248:	eb66d404 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        20f24c:	eb66cbbe 	bl	1bc214c <$AllocateRefHandle(long)>
        20f250:	e1a04000 	mov	r4, r0
        20f254:	e5900000 	ldr	r0, [r0]
        20f258:	e2500002 	subs	r0, r0, #2	; 0x2
        20f25c:	13a00001 	movne	r0, #1	; 0x1
        20f260:	e5cd0114 	strb	r0, [sp, #276]
        20f264:	e31000ff 	tst	r0, #255	; 0xff
        20f268:	15cd8111 	strneb	r8, [sp, #273]
        20f26c:	15cd8112 	strneb	r8, [sp, #274]
        20f270:	e28d2f41 	add	r2, sp, #260	; 0x104
        20f274:	e5950020 	ldr	r0, [r5, #32]	; fField32
        20f278:	e5901000 	ldr	r1, [r0]
        20f27c:	eb66aa88 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        20f280:	e24dd004 	sub	sp, sp, #4	; 0x4
        20f284:	e59f0244 	ldr	r0, [pc, #244]	; 20f4d0 <TFaxDriver::Open(void)+0x484>
        20f288:	e5900000 	ldr	r0, [r0]
        20f28c:	e5901000 	ldr	r1, [r0]
        20f290:	e59d0128 	ldr	r0, [sp, #296]
        20f294:	e5900000 	ldr	r0, [r0]
        20f298:	eb66d3f0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        20f29c:	eb66cbaa 	bl	1bc214c <$AllocateRefHandle(long)>
        20f2a0:	e58d0000 	str	r0, [sp]
        20f2a4:	e5900000 	ldr	r0, [r0]
        20f2a8:	e3300002 	teq	r0, #2	; 0x2
        20f2ac:	0a000011 	beq	20f2f8 <TFaxDriver::Open(void)+0x2ac>
        20f2b0:	e24dd024 	sub	sp, sp, #36	; 0x24
        20f2b4:	e1a0000d 	mov	r0, sp
        20f2b8:	eb66b2b3 	bl	1bbbd8c <TCMOFaxLocalId::$__ct(void)>
        20f2bc:	e59d0008 	ldr	r0, [sp, #8]
        20f2c0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        20f2c4:	e3800c02 	orr	r0, r0, #512	; 0x200
        20f2c8:	e58d0008 	str	r0, [sp, #8]
        20f2cc:	e28d0024 	add	r0, sp, #36	; 0x24
        20f2d0:	eb66cfab 	bl	1bc3184 <$GetCString(RefVar const &)>
        20f2d4:	e28d100c 	add	r1, sp, #12	; 0xc
        20f2d8:	e3a03014 	mov	r3, #20	; 0x14
        20f2dc:	e3a02001 	mov	r2, #1	; 0x1
        20f2e0:	eb676026 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        20f2e4:	e1a0200d 	mov	r2, sp
        20f2e8:	e5950020 	ldr	r0, [r5, #32]	; fField32
        20f2ec:	e5901000 	ldr	r1, [r0]
        20f2f0:	eb66aa6b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        20f2f4:	e28dd024 	add	sp, sp, #36	; 0x24
        20f2f8:	e59f01d4 	ldr	r0, [pc, #1d4]	; 20f4d4 <TFaxDriver::Open(void)+0x488>
        20f2fc:	e5900000 	ldr	r0, [r0]
        20f300:	e5901000 	ldr	r1, [r0]
        20f304:	e59d0128 	ldr	r0, [sp, #296]
        20f308:	e5900000 	ldr	r0, [r0]
        20f30c:	eb66d3d3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        20f310:	e59d1000 	ldr	r1, [sp]
        20f314:	e5810000 	str	r0, [r1]
        20f318:	e3300002 	teq	r0, #2	; 0x2
        20f31c:	0a000013 	beq	20f370 <TFaxDriver::Open(void)+0x324>
        20f320:	e3a06002 	mov	r6, #2	; 0x2
        20f324:	e59f11ac 	ldr	r1, [pc, #1ac]	; 20f4d8 <TFaxDriver::Open(void)+0x48c>
        20f328:	e5911000 	ldr	r1, [r1]
        20f32c:	e5911000 	ldr	r1, [r1]
        20f330:	eb66d3be 	bl	1bc4230 <$EQRef__FlT1>
        20f334:	e3300000 	teq	r0, #0	; 0x0
        20f338:	13a06001 	movne	r6, #1	; 0x1
        20f33c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        20f340:	e1a0000d 	mov	r0, sp
        20f344:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20f348:	eb6699ea 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
        20f34c:	e1a0000d 	mov	r0, sp
        20f350:	e59f1184 	ldr	r1, [pc, #184]	; 20f4dc <TFaxDriver::Open(void)+0x490>
        20f354:	eb66a62e 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
        20f358:	e3300000 	teq	r0, #0	; 0x0
        20f35c:	15a06014 	strne	r6, [r0, #20]!	; fField20
        20f360:	e1a0000d 	mov	r0, sp
        20f364:	e3a01000 	mov	r1, #0	; 0x0
        20f368:	eb669df3 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
        20f36c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        20f370:	e24dd024 	sub	sp, sp, #36	; 0x24
        20f374:	e1a0000d 	mov	r0, sp
        20f378:	eb66b286 	bl	1bbbd98 <TCMOFaxRemoteId::$__ct(void)>
        20f37c:	e59d0008 	ldr	r0, [sp, #8]
        20f380:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        20f384:	e3800b01 	orr	r0, r0, #1024	; 0x400
        20f388:	e58d0008 	str	r0, [sp, #8]
        20f38c:	e1a0200d 	mov	r2, sp
        20f390:	e5950020 	ldr	r0, [r5, #32]	; fField32
        20f394:	e5901000 	ldr	r1, [r0]
        20f398:	eb66aa41 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        20f39c:	e3a0701c 	mov	r7, #28	; 0x1c
        20f3a0:	e2477b2b 	sub	r7, r7, #44032	; 0xac00
        20f3a4:	e5950028 	ldr	r0, [r5, #40]	; fField40
        20f3a8:	e1300007 	teq	r0, r7
        20f3ac:	0a000037 	beq	20f490 <TFaxDriver::Open(void)+0x444>
        20f3b0:	e3a03001 	mov	r3, #1	; 0x1
        20f3b4:	e5956018 	ldr	r6, [r5, #24]	; fField24
        20f3b8:	e92d0008 	stmdb	sp!, {r3}
        20f3bc:	e28d002c 	add	r0, sp, #44	; 0x2c
        20f3c0:	eb6699ba 	bl	1bb5ab0 <$strlen>
        20f3c4:	e1a03000 	mov	r3, r0
        20f3c8:	e28d202c 	add	r2, sp, #44	; 0x2c
        20f3cc:	e1a00006 	mov	r0, r6
        20f3d0:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20f3d4:	e596c000 	ldr	ip, [r6]
        20f3d8:	e1a0e00f 	mov	lr, pc
        20f3dc:	e28cf014 	add	pc, ip, #20	; 0x14
        20f3e0:	e28dd004 	add	sp, sp, #4	; 0x4
        20f3e4:	e3a01001 	mov	r1, #1	; 0x1
        20f3e8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f3ec:	e5c01240 	strb	r1, [r0, #576]
        20f3f0:	e3e00000 	mvn	r0, #0	; 0x0
        20f3f4:	e5951014 	ldr	r1, [r5, #20]	; fField20
        20f3f8:	eb673ed4 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        20f3fc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20f400:	e5c08240 	strb	r8, [r0, #576]
        20f404:	e5950028 	ldr	r0, [r5, #40]	; fField40
        20f408:	e1300007 	teq	r0, r7
        20f40c:	0a00001f 	beq	20f490 <TFaxDriver::Open(void)+0x444>
        20f410:	e3300000 	teq	r0, #0	; 0x0
        20f414:	1a00001d 	bne	20f490 <TFaxDriver::Open(void)+0x444>
        20f418:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        20f41c:	e1a0000d 	mov	r0, sp
        20f420:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20f424:	eb6699b3 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
        20f428:	e1a0000d 	mov	r0, sp
        20f42c:	e59f10ac 	ldr	r1, [pc, #ac]	; 20f4e0 <TFaxDriver::Open(void)+0x494>
        20f430:	eb66a5f7 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
        20f434:	e3300000 	teq	r0, #0	; 0x0
        20f438:	0a000010 	beq	20f480 <TFaxDriver::Open(void)+0x434>
        20f43c:	e24dd030 	sub	sp, sp, #48	; 0x30
        20f440:	e280000c 	add	r0, r0, #12	; 0xc
        20f444:	e28d1004 	add	r1, sp, #4	; 0x4
        20f448:	e3a03014 	mov	r3, #20	; 0x14
        20f44c:	e3a02001 	mov	r2, #1	; 0x1
        20f450:	eb675fcb 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        20f454:	e28d0004 	add	r0, sp, #4	; 0x4
        20f458:	eb66d79d 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        20f45c:	eb66cb3a 	bl	1bc214c <$AllocateRefHandle(long)>
        20f460:	e58d0000 	str	r0, [sp]
        20f464:	e1a0200d 	mov	r2, sp
        20f468:	e59f1074 	ldr	r1, [pc, #74]	; 20f4e4 <TFaxDriver::Open(void)+0x498>
        20f46c:	e28d0f66 	add	r0, sp, #408	; 0x198
        20f470:	eb66dbbc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        20f474:	e59d0000 	ldr	r0, [sp]
        20f478:	eb66cf4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f47c:	e28dd030 	add	sp, sp, #48	; 0x30
        20f480:	e1a0000d 	mov	r0, sp
        20f484:	e3a01000 	mov	r1, #0	; 0x0
        20f488:	eb669dab 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
        20f48c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        20f490:	e5bd0024 	ldr	r0, [sp, #36]!	; fField36
        20f494:	eb66cf48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f498:	e28dd004 	add	sp, sp, #4	; 0x4
        20f49c:	e1a00004 	mov	r0, r4
        20f4a0:	eb66cf45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f4a4:	e59d0100 	ldr	r0, [sp, #256]
        20f4a8:	eb66cf43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f4ac:	e28ddf49 	add	sp, sp, #292	; 0x124
        20f4b0:	e5b54028 	ldr	r4, [r5, #40]!	; fField40
        20f4b4:	e59d0000 	ldr	r0, [sp]
        20f4b8:	eb66cf3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20f4bc:	e1a00004 	mov	r0, r4
        20f4c0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20f4c4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        20f4c8:	00683e18 	rsbeq	r3, r8, r8, lsl lr
        20f4cc:	00683728 	rsbeq	r3, r8, r8, lsr #14
        20f4d0:	00683620 	rsbeq	r3, r8, r0, lsr #12
        20f4d4:	00682d58 	rsbeq	r2, r8, r8, asr sp
        20f4d8:	00683a80 	rsbeq	r3, r8, r0, lsl #21
        20f4dc:	66707375 	undefined
        20f4e0:	66726964 	ldrvsbt	r6, [r2], -r4, ror #18
        20f4e4:	00684268 	rsbeq	r4, r8, r8, ror #4
    */
}

/**
 * Symbol: TFaxDriver::GetPageInfo(PrPageInfo *)
 * Address: 0020f4e8
 */
TFaxDriver::GetPageInfo(PrPageInfo *) {
    /*
        20f4e8:	e1a0c00d 	mov	ip, sp
        20f4ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20f4f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f4f4:	e1a04000 	mov	r4, r0
        20f4f8:	e1a05001 	mov	r5, r1
        20f4fc:	e24dd030 	sub	sp, sp, #48	; 0x30
        20f500:	e5900010 	ldr	r0, [r0, #16]
        20f504:	e59f1084 	ldr	r1, [pc, #84]	; 20f590 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xa8>
        20f508:	e5911000 	ldr	r1, [r1]
        20f50c:	e5911000 	ldr	r1, [r1]
        20f510:	e5900008 	ldr	r0, [r0, #8]
        20f514:	e5900000 	ldr	r0, [r0]
        20f518:	eb66d344 	bl	1bc4230 <$EQRef__FlT1>
        20f51c:	e20000ff 	and	r0, r0, #255	; 0xff
        20f520:	e28d2024 	add	r2, sp, #36	; 0x24
        20f524:	e59f1068 	ldr	r1, [pc, #68]	; 20f594 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xac>
        20f528:	e8915008 	ldmia	r1, {r3, ip, lr}
        20f52c:	e8825008 	stmia	r2, {r3, ip, lr}
        20f530:	e28d2018 	add	r2, sp, #24	; 0x18
        20f534:	e59f105c 	ldr	r1, [pc, #5c]	; 20f598 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xb0>
        20f538:	e8915008 	ldmia	r1, {r3, ip, lr}
        20f53c:	e8825008 	stmia	r2, {r3, ip, lr}
        20f540:	e28d200c 	add	r2, sp, #12	; 0xc
        20f544:	e59f1050 	ldr	r1, [pc, #50]	; 20f59c <TFaxDriver::GetPageInfo(PrPageInfo *)+0xb4>
        20f548:	e8915008 	ldmia	r1, {r3, ip, lr}
        20f54c:	e8825008 	stmia	r2, {r3, ip, lr}
        20f550:	e59f2048 	ldr	r2, [pc, #48]	; 20f5a0 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xb8>	; fField48
        20f554:	e8925008 	ldmia	r2, {r3, ip, lr}
        20f558:	e88d5008 	stmia	sp, {r3, ip, lr}
        20f55c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        20f560:	e5d12241 	ldrb	r2, [r1, #577]
        20f564:	e3320000 	teq	r2, #0	; 0x0
        20f568:	1a000001 	bne	20f574 <TFaxDriver::GetPageInfo(PrPageInfo *)+0x8c>
        20f56c:	e3320000 	teq	r2, #0	; 0x0
        20f570:	0afffffd 	beq	20f56c <TFaxDriver::GetPageInfo(PrPageInfo *)+0x84>
        20f574:	e5911254 	ldr	r1, [r1, #596]
        20f578:	e33100c4 	teq	r1, #196	; 0xc4
        20f57c:	1a000008 	bne	20f5a4 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xbc>
        20f580:	e3300000 	teq	r0, #0	; 0x0
        20f584:	028d0024 	addeq	r0, sp, #36	; 0x24
        20f588:	128d000c 	addne	r0, sp, #12	; 0xc
        20f58c:	ea00000e 	b	20f5cc <TFaxDriver::GetPageInfo(PrPageInfo *)+0xe4>
        20f590:	00681d08 	rsbeq	r1, r8, r8, lsl #26
        20f594:	00378be4 	eoreqs	r8, r7, r4, ror #23
        20f598:	00378bf0 	ldreqsh	r8, [r7], -r0
        20f59c:	00378bfc 	ldreqsh	r8, [r7], -ip
        20f5a0:	00378c08 	eoreqs	r8, r7, r8, lsl #24
        20f5a4:	e3310062 	teq	r1, #98	; 0x62
        20f5a8:	1a000002 	bne	20f5b8 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xd0>
        20f5ac:	e3300000 	teq	r0, #0	; 0x0
        20f5b0:	0a000004 	beq	20f5c8 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xe0>
        20f5b4:	ea000001 	b	20f5c0 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xd8>
        20f5b8:	e3300000 	teq	r0, #0	; 0x0
        20f5bc:	0a000001 	beq	20f5c8 <TFaxDriver::GetPageInfo(PrPageInfo *)+0xe0>
        20f5c0:	e1a0000d 	mov	r0, sp
        20f5c4:	ea000000 	b	20f5cc <TFaxDriver::GetPageInfo(PrPageInfo *)+0xe4>
        20f5c8:	e28d0018 	add	r0, sp, #24	; 0x18
        20f5cc:	e5901008 	ldr	r1, [r0, #8]
        20f5d0:	e1a01841 	mov	r1, r1, asr #16
        20f5d4:	e5a41030 	str	r1, [r4, #48]!	; fField48
        20f5d8:	e8901009 	ldmia	r0, {r0, r3, ip}
        20f5dc:	e8851009 	stmia	r5, {r0, r3, ip}
        20f5e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::GetBandPrefs(DotPrinterPrefs *)
 * Address: 0020f5e4
 */
TFaxDriver::GetBandPrefs(DotPrinterPrefs *) {
    /*
        20f5e4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        20f5e8:	e59f2010 	ldr	r2, [pc, #10]	; 20f600 <TFaxDriver::GetBandPrefs(DotPrinterPrefs *)+0x1c>
        20f5ec:	e8921009 	ldmia	r2, {r0, r3, ip}
        20f5f0:	e88d1009 	stmia	sp, {r0, r3, ip}
        20f5f4:	e8bd100c 	ldmia	sp!, {r2, r3, ip}
        20f5f8:	e881100c 	stmia	r1, {r2, r3, ip}
        20f5fc:	e1a0f00e 	mov	pc, lr
        20f600:	00378c14 	eoreqs	r8, r7, r4, lsl ip
    */
}

/**
 * Symbol: TFaxDriver::PrintBlankLines(long)
 * Address: 0020f604
 */
TFaxDriver::PrintBlankLines(long) {
    /*
        20f604:	e1a0c00d 	mov	ip, sp
        20f608:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20f60c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f610:	e1a04000 	mov	r4, r0
        20f614:	e1a05001 	mov	r5, r1
        20f618:	eb64c25f 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f61c:	e3300000 	teq	r0, #0	; 0x0
        20f620:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        20f624:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f628:	e5d00268 	ldrb	r0, [r0, #616]
        20f62c:	e3300000 	teq	r0, #0	; 0x0
        20f630:	13e00000 	mvnne	r0, #0	; 0x0
        20f634:	15941014 	ldrne	r1, [r4, #20]	; fField20
        20f638:	1b673e44 	blne	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        20f63c:	e3a01001 	mov	r1, #1	; 0x1
        20f640:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f644:	e5c01268 	strb	r1, [r0, #616]
        20f648:	e3a03001 	mov	r3, #1	; 0x1
        20f64c:	e3a02000 	mov	r2, #0	; 0x0
        20f650:	e594c018 	ldr	ip, [r4, #24]	; fField24
        20f654:	e92d000c 	stmdb	sp!, {r2, r3}
        20f658:	e1a02005 	mov	r2, r5
        20f65c:	e1a0000c 	mov	r0, ip
        20f660:	e3a03000 	mov	r3, #0	; 0x0
        20f664:	e3a01000 	mov	r1, #0	; 0x0
        20f668:	e59cc000 	ldr	ip, [ip]
        20f66c:	e1a0e00f 	mov	lr, pc
        20f670:	e28cf03c 	add	pc, ip, #60	; 0x3c
        20f674:	e594002c 	ldr	r0, [r4, #44]	; fField44
        20f678:	e0800005 	add	r0, r0, r5
        20f67c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        20f680:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::Delete(void)
 * Address: 0020f684
 */
TFaxDriver::Delete(void) {
    /*
        20f684:	e1a0c00d 	mov	ip, sp
        20f688:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f68c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f690:	e1a04000 	mov	r4, r0
        20f694:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20f698:	e3300000 	teq	r0, #0	; 0x0
        20f69c:	0a000002 	beq	20f6ac <TFaxDriver::Delete(void)+0x28>
        20f6a0:	e3a01001 	mov	r1, #1	; 0x1
        20f6a4:	e1a0e00f 	mov	lr, pc
        20f6a8:	e590f000 	ldr	pc, [r0]
        20f6ac:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20f6b0:	e3300000 	teq	r0, #0	; 0x0
        20f6b4:	13a01001 	movne	r1, #1	; 0x1
        20f6b8:	1b669d1b 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        20f6bc:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        20f6c0:	e3300000 	teq	r0, #0	; 0x0
        20f6c4:	13a01001 	movne	r1, #1	; 0x1
        20f6c8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        20f6cc:	1a669d16 	bne	1bb6b2c <TOptionArray::$__dt(void)>
        20f6d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::Close(void)
 * Address: 0020f738
 */
TFaxDriver::Close(void) {
    /*
        20f738:	e1a0c00d 	mov	ip, sp
        20f73c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f740:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f744:	e1a04000 	mov	r4, r0
        20f748:	eb64c213 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f74c:	e3300000 	teq	r0, #0	; 0x0
        20f750:	15d40024 	ldrneb	r0, [r4, #36]	; fField36
        20f754:	13300000 	teqne	r0, #0	; 0x0
        20f758:	0a000008 	beq	20f780 <TFaxDriver::Close(void)+0x48>
        20f75c:	e3a02001 	mov	r2, #1	; 0x1
        20f760:	e3a01000 	mov	r1, #0	; 0x0
        20f764:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f768:	e5903000 	ldr	r3, [r0]
        20f76c:	e1a0e00f 	mov	lr, pc
        20f770:	e283f034 	add	pc, r3, #52	; 0x34
        20f774:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f778:	e5900260 	ldr	r0, [r0, #608]
        20f77c:	e5840028 	str	r0, [r4, #40]	; fField40
        20f780:	e1a00004 	mov	r0, r4
        20f784:	eb64c204 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f788:	e3300000 	teq	r0, #0	; 0x0
        20f78c:	15940018 	ldrne	r0, [r4, #24]	; fField24
        20f790:	15d00268 	ldrneb	r0, [r0, #616]
        20f794:	13300000 	teqne	r0, #0	; 0x0
        20f798:	13e00000 	mvnne	r0, #0	; 0x0
        20f79c:	15941014 	ldrne	r1, [r4, #20]	; fField20
        20f7a0:	1b673dea 	blne	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        20f7a4:	e3a01000 	mov	r1, #0	; 0x0
        20f7a8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f7ac:	e5902000 	ldr	r2, [r0]
        20f7b0:	e1a0e00f 	mov	lr, pc
        20f7b4:	e282f024 	add	pc, r2, #36	; 0x24
        20f7b8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        20f7bc:	e3300000 	teq	r0, #0	; 0x0
        20f7c0:	05940018 	ldreq	r0, [r4, #24]	; fField24
        20f7c4:	05900258 	ldreq	r0, [r0, #600]
        20f7c8:	05840028 	streq	r0, [r4, #40]	; fField40
        20f7cc:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        20f7d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::OpenPage(void)
 * Address: 0020f7d4
 */
TFaxDriver::OpenPage(void) {
    /*
        20f7d4:	e1a0c00d 	mov	ip, sp
        20f7d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f7e0:	e1a04000 	mov	r4, r0
        20f7e4:	eb64c1ec 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f7e8:	e3300000 	teq	r0, #0	; 0x0
        20f7ec:	0a000009 	beq	20f818 <TFaxDriver::OpenPage(void)+0x44>
        20f7f0:	e3a01000 	mov	r1, #0	; 0x0
        20f7f4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f7f8:	e5902000 	ldr	r2, [r0]
        20f7fc:	e1a0e00f 	mov	lr, pc
        20f800:	e282f02c 	add	pc, r2, #44	; 0x2c
        20f804:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f808:	e590025c 	ldr	r0, [r0, #604]
        20f80c:	e5840028 	str	r0, [r4, #40]	; fField40
        20f810:	e3a00001 	mov	r0, #1	; 0x1
        20f814:	e5c40024 	strb	r0, [r4, #36]	; fField36
        20f818:	e3a00000 	mov	r0, #0	; 0x0
        20f81c:	e584002c 	str	r0, [r4, #44]	; fField44
        20f820:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f824:	e5900254 	ldr	r0, [r0, #596]
        20f828:	e1a01120 	mov	r1, r0, lsr #2
        20f82c:	e1a00004 	mov	r0, r4
        20f830:	eb64ce58 	bl	1b43198 <TFaxDriver::$PrintBlankLines(long)>
        20f834:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        20f838:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::FaxEndPage(long)
 * Address: 0020f83c
 */
TFaxDriver::FaxEndPage(long) {
    /*
        20f83c:	e1a0c00d 	mov	ip, sp
        20f840:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f844:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f848:	e1a04000 	mov	r4, r0
        20f84c:	e3310000 	teq	r1, #0	; 0x0
        20f850:	0a000010 	beq	20f898 <TFaxDriver::FaxEndPage(long)+0x5c>
        20f854:	e1a00004 	mov	r0, r4
        20f858:	eb64c1cf 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f85c:	e3300000 	teq	r0, #0	; 0x0
        20f860:	15d40024 	ldrneb	r0, [r4, #36]	; fField36
        20f864:	13300000 	teqne	r0, #0	; 0x0
        20f868:	0a00000a 	beq	20f898 <TFaxDriver::FaxEndPage(long)+0x5c>
        20f86c:	e3a02000 	mov	r2, #0	; 0x0
        20f870:	e3a01000 	mov	r1, #0	; 0x0
        20f874:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f878:	e5903000 	ldr	r3, [r0]
        20f87c:	e1a0e00f 	mov	lr, pc
        20f880:	e283f034 	add	pc, r3, #52	; 0x34
        20f884:	e5940028 	ldr	r0, [r4, #40]	; fField40
        20f888:	e3300000 	teq	r0, #0	; 0x0
        20f88c:	05940018 	ldreq	r0, [r4, #24]	; fField24
        20f890:	05900260 	ldreq	r0, [r0, #608]
        20f894:	05840028 	streq	r0, [r4, #40]	; fField40
        20f898:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        20f89c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::ClosePage(void)
 * Address: 0020f8a0
 */
TFaxDriver::ClosePage(void) {
    /*
        20f8a0:	e1a0c00d 	mov	ip, sp
        20f8a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f8a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f8ac:	e1a04000 	mov	r4, r0
        20f8b0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20f8b4:	e5900254 	ldr	r0, [r0, #596]
        20f8b8:	e1a01120 	mov	r1, r0, lsr #2
        20f8bc:	e1a00004 	mov	r0, r4
        20f8c0:	eb64ce34 	bl	1b43198 <TFaxDriver::$PrintBlankLines(long)>
        20f8c4:	e3e00000 	mvn	r0, #0	; 0x0
        20f8c8:	e584002c 	str	r0, [r4, #44]	; fField44
        20f8cc:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        20f8d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::ImageBand(PixelMap *, Rect const *)
 * Address: 0020f8d4
 */
TFaxDriver::ImageBand(PixelMap *, Rect const *) {
    /*
        20f8d4:	e1a0c00d 	mov	ip, sp
        20f8d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20f8dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f8e0:	e1a04000 	mov	r4, r0
        20f8e4:	e1a05001 	mov	r5, r1
        20f8e8:	e1a06002 	mov	r6, r2
        20f8ec:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20f8f0:	e5900250 	ldr	r0, [r0, #592]
        20f8f4:	e1a0a1a0 	mov	sl, r0, lsr #3
        20f8f8:	e591000c 	ldr	r0, [r1, #12]
        20f8fc:	e1a00840 	mov	r0, r0, asr #16
        20f900:	e5911008 	ldr	r1, [r1, #8]
        20f904:	e0407841 	sub	r7, r0, r1, asr #16
        20f908:	e5921004 	ldr	r1, [r2, #4]
        20f90c:	e1a01841 	mov	r1, r1, asr #16
        20f910:	e5920000 	ldr	r0, [r2]
        20f914:	e0418840 	sub	r8, r1, r0, asr #16
        20f918:	e1a00004 	mov	r0, r4
        20f91c:	eb64c19e 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f920:	e3300000 	teq	r0, #0	; 0x0
        20f924:	0a00003a 	beq	20fa14 <TFaxDriver::ImageBand(PixelMap *, Rect const *)+0x140>
        20f928:	e3580000 	cmp	r8, #0	; 0x0
        20f92c:	d1a01007 	movle	r1, r7
        20f930:	da000035 	ble	20fa0c <TFaxDriver::ImageBand(PixelMap *, Rect const *)+0x138>
        20f934:	e5957000 	ldr	r7, [r5]
        20f938:	e5951008 	ldr	r1, [r5, #8]
        20f93c:	e5960000 	ldr	r0, [r6]
        20f940:	e1a00840 	mov	r0, r0, asr #16
        20f944:	e0509841 	subs	r9, r0, r1, asr #16
        20f948:	0a000005 	beq	20f964 <TFaxDriver::ImageBand(PixelMap *, Rect const *)+0x90>
        20f94c:	e1a01009 	mov	r1, r9
        20f950:	e1a00004 	mov	r0, r4
        20f954:	eb64ce0f 	bl	1b43198 <TFaxDriver::$PrintBlankLines(long)>
        20f958:	e5950004 	ldr	r0, [r5, #4]
        20f95c:	e1a00840 	mov	r0, r0, asr #16
        20f960:	e0277099 	mla	r7, r9, r0, r7
        20f964:	e1a00004 	mov	r0, r4
        20f968:	eb64c18b 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f96c:	e3300000 	teq	r0, #0	; 0x0
        20f970:	15940018 	ldrne	r0, [r4, #24]	; fField24
        20f974:	15d00268 	ldrneb	r0, [r0, #616]
        20f978:	13300000 	teqne	r0, #0	; 0x0
        20f97c:	13e00000 	mvnne	r0, #0	; 0x0
        20f980:	15941014 	ldrne	r1, [r4, #20]	; fField20
        20f984:	1b673d71 	blne	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        20f988:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f98c:	e5900264 	ldr	r0, [r0, #612]
        20f990:	e3a09001 	mov	r9, #1	; 0x1
        20f994:	e3300000 	teq	r0, #0	; 0x0
        20f998:	11a00009 	movne	r0, r9
        20f99c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20f9a0:	e1a00004 	mov	r0, r4
        20f9a4:	eb64c17c 	bl	1b3ff9c <TFaxDriver::$ContinueIO(void)>
        20f9a8:	e3300000 	teq	r0, #0	; 0x0
        20f9ac:	0a000011 	beq	20f9f8 <TFaxDriver::ImageBand(PixelMap *, Rect const *)+0x124>
        20f9b0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20f9b4:	e5c09268 	strb	r9, [r0, #616]
        20f9b8:	e3a03001 	mov	r3, #1	; 0x1
        20f9bc:	e1a0200a 	mov	r2, sl
        20f9c0:	e594c018 	ldr	ip, [r4, #24]	; fField24
        20f9c4:	e92d000c 	stmdb	sp!, {r2, r3}
        20f9c8:	e5953004 	ldr	r3, [r5, #4]
        20f9cc:	e1a03843 	mov	r3, r3, asr #16
        20f9d0:	e1a02008 	mov	r2, r8
        20f9d4:	e1a01007 	mov	r1, r7
        20f9d8:	e1a0000c 	mov	r0, ip
        20f9dc:	e59cc000 	ldr	ip, [ip]
        20f9e0:	e1a0e00f 	mov	lr, pc
        20f9e4:	e28cf03c 	add	pc, ip, #60	; 0x3c
        20f9e8:	e28dd008 	add	sp, sp, #8	; 0x8
        20f9ec:	e594002c 	ldr	r0, [r4, #44]	; fField44
        20f9f0:	e0800008 	add	r0, r0, r8
        20f9f4:	e584002c 	str	r0, [r4, #44]	; fField44
        20f9f8:	e595000c 	ldr	r0, [r5, #12]
        20f9fc:	e1a00840 	mov	r0, r0, asr #16
        20fa00:	e5961004 	ldr	r1, [r6, #4]
        20fa04:	e0501841 	subs	r1, r0, r1, asr #16
        20fa08:	0a000001 	beq	20fa14 <TFaxDriver::ImageBand(PixelMap *, Rect const *)+0x140>
        20fa0c:	e1a00004 	mov	r0, r4
        20fa10:	eb64cde0 	bl	1b43198 <TFaxDriver::$PrintBlankLines(long)>
        20fa14:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        20fa18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::CancelJob(unsigned char)
 * Address: 0020fa1c
 */
TFaxDriver::CancelJob(unsigned char) {
    /*
        20fa1c:	e1a0c00d 	mov	ip, sp
        20fa20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20fa24:	e24cb004 	sub	fp, ip, #4	; 0x4
        20fa28:	e1a04000 	mov	r4, r0
        20fa2c:	e20110ff 	and	r1, r1, #255	; 0xff
        20fa30:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20fa34:	e5d02241 	ldrb	r2, [r0, #577]
        20fa38:	e3a0501c 	mov	r5, #28	; 0x1c
        20fa3c:	e2455b2b 	sub	r5, r5, #44032	; 0xac00
        20fa40:	e3320000 	teq	r2, #0	; 0x0
        20fa44:	0a00000c 	beq	20fa7c <TFaxDriver::CancelJob(unsigned char)+0x60>
        20fa48:	e3310000 	teq	r1, #0	; 0x0
        20fa4c:	1a00000a 	bne	20fa7c <TFaxDriver::CancelJob(unsigned char)+0x60>
        20fa50:	e594102c 	ldr	r1, [r4, #44]	; fField44
        20fa54:	e3510000 	cmp	r1, #0	; 0x0
        20fa58:	da000013 	ble	20faac <TFaxDriver::CancelJob(unsigned char)+0x90>
        20fa5c:	e5942030 	ldr	r2, [r4, #48]	; fField48
        20fa60:	e0421001 	sub	r1, r2, r1
        20fa64:	e5900254 	ldr	r0, [r0, #596]
        20fa68:	e1500001 	cmp	r0, r1
        20fa6c:	31a01000 	movcc	r1, r0
        20fa70:	e1a00004 	mov	r0, r4
        20fa74:	eb64cdc7 	bl	1b43198 <TFaxDriver::$PrintBlankLines(long)>
        20fa78:	ea00000b 	b	20faac <TFaxDriver::CancelJob(unsigned char)+0x90>
        20fa7c:	e3310000 	teq	r1, #0	; 0x0
        20fa80:	15d01240 	ldrneb	r1, [r0, #576]
        20fa84:	13310000 	teqne	r1, #0	; 0x0
        20fa88:	0a000007 	beq	20faac <TFaxDriver::CancelJob(unsigned char)+0x90>
        20fa8c:	e3a01000 	mov	r1, #0	; 0x0
        20fa90:	e5902000 	ldr	r2, [r0]
        20fa94:	e1a0e00f 	mov	lr, pc
        20fa98:	e282f024 	add	pc, r2, #36	; 0x24
        20fa9c:	e5845028 	str	r5, [r4, #40]	; fField40
        20faa0:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        20faa4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20faa8:	ea673d27 	b	1bdef4c <$PrRegainControl(TPrinter *)>
        20faac:	e5a45028 	str	r5, [r4, #40]!	; fField40
        20fab0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxDriver::IsProblemResolved(void)
 * Address: 0020fab4
 */
TFaxDriver::IsProblemResolved(void) {
    /*
        20fab4:	e5b01028 	ldr	r1, [r0, #40]!	; fField40
        20fab8:	e3a00001 	mov	r0, #1	; 0x1
        20fabc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxDriver::ContinueIO(void)
 * Address: 0020fac0
 */
TFaxDriver::ContinueIO(void) {
    /*
        20fac0:	e1a01000 	mov	r1, r0
        20fac4:	e3a00000 	mov	r0, #0	; 0x0
        20fac8:	e5911028 	ldr	r1, [r1, #40]	; fField40
        20facc:	e3310000 	teq	r1, #0	; 0x0
        20fad0:	1281ccab 	addne	ip, r1, #43776	; 0xab00
        20fad4:	137c00e4 	cmnne	ip, #228	; 0xe4
        20fad8:	1281cc55 	addne	ip, r1, #21760	; 0x5500
        20fadc:	137c00f5 	cmnne	ip, #245	; 0xf5
        20fae0:	03a00001 	moveq	r0, #1	; 0x1
        20fae4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__10TFaxDriverSFv
 * Address: 00388298
 */
void TFaxDriver::ClassInfo() {
    /*
        388298:	e24f0044 	sub	r0, pc, #68	; 0x44
        38829c:	e1a0f00e 	mov	pc, lr
        3882a0:	e3a00000 	mov	r0, #0	; 0x0
        3882a4:	e1a0f00e 	mov	pc, lr
        3882a8:	54466178 	strplb	r6, [r6], -#376
        3882ac:	44726976 	ldrmibt	r6, [r2], -#2422
        3882b0:	65720054 	ldrvsb	r0, [r2, -#84]!
        3882b4:	446f7450 	strmibt	r7, [pc], #450	; 3882bc <ClassInfo__10TFaxDriverSFv+0x24>
        3882b8:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        3882bc:	65724472 	ldrvsb	r4, [r2, -#1138]!
        3882c0:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        3882cc:	eafffff1 	b	388298 <ClassInfo__10TFaxDriverSFv>
        3882d0:	ea5edf3a 	b	1b3ffc0 <TFaxDriver::$Delete(void)>
        3882d4:	ea5ee799 	b	1b42140 <TFaxDriver::$Open(void)>
        3882d8:	ea5edb19 	b	1b3ef44 <TFaxDriver::$Close(void)>
        3882dc:	ea5ee79f 	b	1b42160 <TFaxDriver::$OpenPage(void)>
        3882e0:	ea5edb1f 	b	1b3ef64 <TFaxDriver::$ClosePage(void)>
        3882e4:	ea5ee37d 	b	1b410e0 <TFaxDriver::$ImageBand(PixelMap *, Rect const *)>
        3882e8:	ea5ed701 	b	1b3def4 <TFaxDriver::$CancelJob(unsigned char)>
        3882ec:	ea5ee784 	b	1b42104 <TFaxDriver::$IsProblemResolved(void)>
        3882f0:	ea5ee365 	b	1b4108c <TFaxDriver::$GetPageInfo(PrPageInfo *)>
        3882f4:	ea5edf5c 	b	1b4006c <TFaxDriver::$GetBandPrefs(DotPrinterPrefs *)>
        3882f8:	ea5ef802 	b	1b46308 <TFaxDriver::$FaxEndPage(long)>
        3882fc:	00000000 	andeq	r0, r0, r0
        388300:	00000048 	andeq	r0, r0, r8, asr #32
        388304:	00000053 	andeq	r0, r0, r3, asr r0
        388308:	00000061 	andeq	r0, r0, r1, rrx
        38830c:	00000060 	andeq	r0, r0, r0, rrx
        388310:	00000090 	muleq	r0, r0, r0
        388314:	ea5ef80c 	b	1b4634c <$Sizeof__14TSWGroupDriverSFv>
        388320:	e1a0f00e 	mov	pc, lr
        388324:	ea5ef813 	b	1b46378 <TSWGroupDriver::$Delete(void)>
        388328:	00020000 	andeq	r0, r2, r0
        388334:	ea000001 	b	388340 <ClassInfo__14TSWGroupDriverSFv+0x8>
    */
}

