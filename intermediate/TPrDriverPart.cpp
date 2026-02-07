#include "include/TPrDriverPart.h"

/**
 * Symbol: TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 001941b8
 */
TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
        1941b8:	e1a0c00d 	mov	ip, sp
        1941bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1941c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1941c4:	e24cb014 	sub	fp, ip, #20	; 0x14
        1941c8:	e1a05000 	mov	r5, r0
        1941cc:	e1a04001 	mov	r4, r1
        1941d0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1941d4:	e3a07000 	mov	r7, #0	; 0x0
        1941d8:	e59f0108 	ldr	r0, [pc, #108]	; 1942e8 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x130>
        1941dc:	e5900000 	ldr	r0, [r0]
        1941e0:	eb68b7d9 	bl	1bc214c <$AllocateRefHandle(long)>
        1941e4:	e1a06000 	mov	r6, r0
        1941e8:	e59f00fc 	ldr	r0, [pc, #fc]	; 1942ec <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x134>
        1941ec:	e5900000 	ldr	r0, [r0]
        1941f0:	e5901000 	ldr	r1, [r0]
        1941f4:	e5960000 	ldr	r0, [r6]
        1941f8:	eb68c018 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1941fc:	eb68b7d2 	bl	1bc214c <$AllocateRefHandle(long)>
        194200:	e58d0008 	str	r0, [sp, #8]
        194204:	e1a00006 	mov	r0, r6
        194208:	eb68bbeb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19420c:	e3a08000 	mov	r8, #0	; 0x0
        194210:	e5940000 	ldr	r0, [r4]
        194214:	e5900000 	ldr	r0, [r0]
        194218:	eb68c423 	bl	1bc52ac <$Length(long)>
        19421c:	e1a06000 	mov	r6, r0
        194220:	e3a00002 	mov	r0, #2	; 0x2
        194224:	eb68b7c8 	bl	1bc214c <$AllocateRefHandle(long)>
        194228:	e58d0000 	str	r0, [sp]
        19422c:	e1a0000d 	mov	r0, sp
        194230:	e1a01006 	mov	r1, r6
        194234:	eb68b7bf 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        194238:	eb68b7c3 	bl	1bc214c <$AllocateRefHandle(long)>
        19423c:	e58d0004 	str	r0, [sp, #4]
        194240:	e59d0000 	ldr	r0, [sp]
        194244:	eb68bbdc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194248:	e3a06000 	mov	r6, #0	; 0x0
        19424c:	e52d806c 	str	r8, [sp, -#108]!
        194250:	e28d0008 	add	r0, sp, #8	; 0x8
        194254:	eb6879c6 	bl	1bb2974 <$setjmp>
        194258:	e3300000 	teq	r0, #0	; 0x0
        19425c:	1a000023 	bne	1942f0 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x138>
        194260:	e1a0000d 	mov	r0, sp
        194264:	eb692f84 	bl	1be007c <$AddExceptionHandler>
        194268:	e24dd030 	sub	sp, sp, #48	; 0x30
        19426c:	e1a01004 	mov	r1, r4
        194270:	e1a0000d 	mov	r0, sp
        194274:	e3a02000 	mov	r2, #0	; 0x0
        194278:	eb68b39c 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        19427c:	e1a0000d 	mov	r0, sp
        194280:	eb68bbd5 	bl	1bc31dc <TObjectIterator::$Done(void)>
        194284:	e28d4008 	add	r4, sp, #8	; 0x8
        194288:	e3300000 	teq	r0, #0	; 0x0
        19428c:	1a00000f 	bne	1942d0 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x118>
        194290:	e1a01004 	mov	r1, r4
        194294:	e28d00a4 	add	r0, sp, #164	; 0xa4
        194298:	eb68b7a2 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        19429c:	e1a01006 	mov	r1, r6
        1942a0:	e2866001 	add	r6, r6, #1	; 0x1
        1942a4:	e59d0008 	ldr	r0, [sp, #8]
        1942a8:	e5902000 	ldr	r2, [r0]
        1942ac:	e59d00a0 	ldr	r0, [sp, #160]
        1942b0:	e5900000 	ldr	r0, [r0]
        1942b4:	eb68c827 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1942b8:	e1a0000d 	mov	r0, sp
        1942bc:	eb68c409 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        1942c0:	e1a0000d 	mov	r0, sp
        1942c4:	eb68bbc4 	bl	1bc31dc <TObjectIterator::$Done(void)>
        1942c8:	e3300000 	teq	r0, #0	; 0x0
        1942cc:	0affffef 	beq	194290 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0xd8>
        1942d0:	e1a0000d 	mov	r0, sp
        1942d4:	e3a01000 	mov	r1, #0	; 0x0
        1942d8:	e1a0e00f 	mov	lr, pc
        1942dc:	e59df000 	ldr	pc, [sp]
        1942e0:	e28dd030 	add	sp, sp, #48	; 0x30
        1942e4:	ea00000f 	b	194328 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x170>
        1942e8:	0c10180c 	ldceq	8, cr1, [r0], -#48
        1942ec:	00681f80 	rsbeq	r1, r8, r0, lsl #31
        1942f0:	e59d0060 	ldr	r0, [sp, #96]
        1942f4:	e59f1020 	ldr	r1, [pc, #20]	; 19431c <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x164>
        1942f8:	e5911000 	ldr	r1, [r1]
        1942fc:	eb693ba4 	bl	1be3194 <$Subexception>
        194300:	e3300000 	teq	r0, #0	; 0x0
        194304:	0a000005 	beq	194320 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x168>
        194308:	e1a00005 	mov	r0, r5
        19430c:	eb69165e 	bl	1bd9c8c <TPartHandler::$RejectPart(void)>
        194310:	e3a070e9 	mov	r7, #233	; 0xe9
        194314:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        194318:	ea000002 	b	194328 <TPrDriverPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x170>
        19431c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        194320:	e1a0000d 	mov	r0, sp
        194324:	eb69378a 	bl	1be2154 <$NextHandler>
        194328:	e1a0000d 	mov	r0, sp
        19432c:	eb693361 	bl	1be10b8 <$ExitHandler>
        194330:	e28dd06c 	add	sp, sp, #108	; 0x6c
        194334:	e3370000 	teq	r7, #0	; 0x0
        194338:	028d1004 	addeq	r1, sp, #4	; 0x4
        19433c:	01a00005 	moveq	r0, r5
        194340:	0b68c807 	bleq	1bc6364 <TFramePartHandler::$SetFrameRemoveObject(RefVar const &)>
        194344:	e59d0004 	ldr	r0, [sp, #4]
        194348:	eb68bb9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19434c:	e59d0008 	ldr	r0, [sp, #8]
        194350:	eb68bb99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194354:	e1a00007 	mov	r0, r7
        194358:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 0019435c
 */
TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
        19435c:	e1a0c00d 	mov	ip, sp
        194360:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        194364:	e24cb004 	sub	fp, ip, #4	; 0x4
        194368:	e1a04001 	mov	r4, r1
        19436c:	e24dd004 	sub	sp, sp, #4	; 0x4
        194370:	e3a06000 	mov	r6, #0	; 0x0
        194374:	e59f0098 	ldr	r0, [pc, #98]	; 194414 <TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xb8>
        194378:	e5900000 	ldr	r0, [r0]
        19437c:	eb68b772 	bl	1bc214c <$AllocateRefHandle(long)>
        194380:	e1a05000 	mov	r5, r0
        194384:	e59f008c 	ldr	r0, [pc, #8c]	; 194418 <TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xbc>
        194388:	e5900000 	ldr	r0, [r0]
        19438c:	e5901000 	ldr	r1, [r0]
        194390:	e5950000 	ldr	r0, [r5]
        194394:	eb68bfb1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        194398:	eb68b76b 	bl	1bc214c <$AllocateRefHandle(long)>
        19439c:	e58d0000 	str	r0, [sp]
        1943a0:	e1a00005 	mov	r0, r5
        1943a4:	eb68bb84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1943a8:	e24dd030 	sub	sp, sp, #48	; 0x30
        1943ac:	e1a01004 	mov	r1, r4
        1943b0:	e1a0000d 	mov	r0, sp
        1943b4:	e3a02000 	mov	r2, #0	; 0x0
        1943b8:	eb68b34c 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        1943bc:	e1a0000d 	mov	r0, sp
        1943c0:	eb68bb85 	bl	1bc31dc <TObjectIterator::$Done(void)>
        1943c4:	e28d4008 	add	r4, sp, #8	; 0x8
        1943c8:	e3300000 	teq	r0, #0	; 0x0
        1943cc:	1a000008 	bne	1943f4 <TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x98>
        1943d0:	e1a01004 	mov	r1, r4
        1943d4:	e28d0030 	add	r0, sp, #48	; 0x30
        1943d8:	eb69d01d 	bl	1c08454 <$ArrayRemove__FRC6RefVarT1>
        1943dc:	e1a0000d 	mov	r0, sp
        1943e0:	eb68c3c0 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        1943e4:	e1a0000d 	mov	r0, sp
        1943e8:	eb68bb7b 	bl	1bc31dc <TObjectIterator::$Done(void)>
        1943ec:	e3300000 	teq	r0, #0	; 0x0
        1943f0:	0afffff6 	beq	1943d0 <TPrDriverPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x74>
        1943f4:	e1a0000d 	mov	r0, sp
        1943f8:	e3a01000 	mov	r1, #0	; 0x0
        1943fc:	e1a0e00f 	mov	lr, pc
        194400:	e59df000 	ldr	pc, [sp]
        194404:	e59d0030 	ldr	r0, [sp, #48]
        194408:	eb68bb6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19440c:	e1a00006 	mov	r0, r6
        194410:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        194414:	0c10180c 	ldceq	8, cr1, [r0], -#48
        194418:	00681f80 	rsbeq	r1, r8, r0, lsl #31
    */
}

