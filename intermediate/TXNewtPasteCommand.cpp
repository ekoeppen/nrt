#include "include/TXNewtPasteCommand.h"

/**
 * Symbol: TXNewtPasteCommand::DoMainAction(void)
 * Address: 002492a8
 */
TXNewtPasteCommand::DoMainAction(void) {
    /*
        2492a8:	e1a0c00d 	mov	ip, sp
        2492ac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2492b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2492b4:	e1a04000 	mov	r4, r0
        2492b8:	e3a00000 	mov	r0, #0	; 0x0
        2492bc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2492c0:	e52d006c 	str	r0, [sp, -#108]!
        2492c4:	e28d0008 	add	r0, sp, #8	; 0x8
        2492c8:	eb65a5a9 	bl	1bb2974 <$setjmp>
        2492cc:	e3300000 	teq	r0, #0	; 0x0
        2492d0:	e1a0000d 	mov	r0, sp
        2492d4:	1a000096 	bne	249534 <TXNewtPasteCommand::DoMainAction(void)+0x28c>
        2492d8:	eb665b67 	bl	1be007c <$AddExceptionHandler>
        2492dc:	e59f0168 	ldr	r0, [pc, #168]	; 24944c <TXNewtPasteCommand::DoMainAction(void)+0x1a4>
        2492e0:	e5900000 	ldr	r0, [r0]
        2492e4:	eb627412 	bl	1ae6334 <TRootView::$GetClipboard(void)>
        2492e8:	e1a08000 	mov	r8, r0
        2492ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2492f0:	e1a0000d 	mov	r0, sp
        2492f4:	e3a01000 	mov	r1, #0	; 0x0
        2492f8:	eb622dda 	bl	1ad4a68 <TDragInfo::$__ct(long)>
        2492fc:	e1a0100d 	mov	r1, sp
        249300:	e1a00008 	mov	r0, r8
        249304:	eb6267b4 	bl	1ae31dc <TClipboard::$GetClipboardDataInfo(TDragInfo *)>
        249308:	e24dd024 	sub	sp, sp, #36	; 0x24
        24930c:	e2841068 	add	r1, r4, #104	; 0x68
        249310:	e28d0014 	add	r0, sp, #20	; 0x14
        249314:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        249318:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        24931c:	e28d1014 	add	r1, sp, #20	; 0x14
        249320:	e59f3128 	ldr	r3, [pc, #128]	; 249450 <TXNewtPasteCommand::DoMainAction(void)+0x1a8>
        249324:	e1a0000d 	mov	r0, sp
        249328:	e3a02004 	mov	r2, #4	; 0x4
        24932c:	eb5eefd4 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        249330:	e59f011c 	ldr	r0, [pc, #11c]	; 249454 <TXNewtPasteCommand::DoMainAction(void)+0x1ac>
        249334:	e5900000 	ldr	r0, [r0]
        249338:	e5900000 	ldr	r0, [r0]
        24933c:	e59d1000 	ldr	r1, [sp]
        249340:	e5810000 	str	r0, [r1]
        249344:	e59f010c 	ldr	r0, [pc, #10c]	; 249458 <TXNewtPasteCommand::DoMainAction(void)+0x1b0>
        249348:	e5900000 	ldr	r0, [r0]
        24934c:	e5900000 	ldr	r0, [r0]
        249350:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        249354:	e5810000 	str	r0, [r1]
        249358:	e59f00fc 	ldr	r0, [pc, #fc]	; 24945c <TXNewtPasteCommand::DoMainAction(void)+0x1b4>
        24935c:	e5900000 	ldr	r0, [r0]
        249360:	e5901000 	ldr	r1, [r0]
        249364:	e59d0008 	ldr	r0, [sp, #8]
        249368:	e5801000 	str	r1, [r0]
        24936c:	e59f00ec 	ldr	r0, [pc, #ec]	; 249460 <TXNewtPasteCommand::DoMainAction(void)+0x1b8>
        249370:	e5900000 	ldr	r0, [r0]
        249374:	e5900000 	ldr	r0, [r0]
        249378:	e59d100c 	ldr	r1, [sp, #12]
        24937c:	e28d9010 	add	r9, sp, #16	; 0x10
        249380:	e5810000 	str	r0, [r1]
        249384:	e59f00d8 	ldr	r0, [pc, #d8]	; 249464 <TXNewtPasteCommand::DoMainAction(void)+0x1bc>
        249388:	e5900000 	ldr	r0, [r0]
        24938c:	e5900000 	ldr	r0, [r0]
        249390:	e59d1010 	ldr	r1, [sp, #16]
        249394:	e5810000 	str	r0, [r1]
        249398:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24939c:	e59d0030 	ldr	r0, [sp, #48]
        2493a0:	e5900000 	ldr	r0, [r0]
        2493a4:	eb65efc0 	bl	1bc52ac <$Length(long)>
        2493a8:	e1a07000 	mov	r7, r0
        2493ac:	e3a00002 	mov	r0, #2	; 0x2
        2493b0:	eb65e365 	bl	1bc214c <$AllocateRefHandle(long)>
        2493b4:	e58d0008 	str	r0, [sp, #8]
        2493b8:	e3a00002 	mov	r0, #2	; 0x2
        2493bc:	eb65e362 	bl	1bc214c <$AllocateRefHandle(long)>
        2493c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2493c4:	e3a00002 	mov	r0, #2	; 0x2
        2493c8:	eb65e35f 	bl	1bc214c <$AllocateRefHandle(long)>
        2493cc:	e3a05000 	mov	r5, #0	; 0x0
        2493d0:	e3570000 	cmp	r7, #0	; 0x0
        2493d4:	e58d0000 	str	r0, [sp]
        2493d8:	da000044 	ble	2494f0 <TXNewtPasteCommand::DoMainAction(void)+0x248>
        2493dc:	e1a01005 	mov	r1, r5
        2493e0:	e28d0030 	add	r0, sp, #48	; 0x30
        2493e4:	eb621d14 	bl	1ad083c <TDragInfo::$GetItemDragRef( const(long))>
        2493e8:	e59d1008 	ldr	r1, [sp, #8]
        2493ec:	e3a06000 	mov	r6, #0	; 0x0
        2493f0:	e5810000 	str	r0, [r1]
        2493f4:	e28d000c 	add	r0, sp, #12	; 0xc
        2493f8:	e0800106 	add	r0, r0, r6, lsl #2
        2493fc:	e5900000 	ldr	r0, [r0]
        249400:	e5901000 	ldr	r1, [r0]
        249404:	e59d0000 	ldr	r0, [sp]
        249408:	e28d2008 	add	r2, sp, #8	; 0x8
        24940c:	e5801000 	str	r1, [r0]
        249410:	e1a0100d 	mov	r1, sp
        249414:	e1a00008 	mov	r0, r8
        249418:	e5983000 	ldr	r3, [r8]
        24941c:	e1a0e00f 	mov	lr, pc
        249420:	e283f0cc 	add	pc, r3, #204	; 0xcc
        249424:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        249428:	e5810000 	str	r0, [r1]
        24942c:	e3300002 	teq	r0, #2	; 0x2
        249430:	0a00000c 	beq	249468 <TXNewtPasteCommand::DoMainAction(void)+0x1c0>
        249434:	e28d1004 	add	r1, sp, #4	; 0x4
        249438:	e1a0000d 	mov	r0, sp
        24943c:	eb6556b4 	bl	1b9ef14 <$FixupDropData__FRC6RefVarT1>
        249440:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        249444:	e5810000 	str	r0, [r1]
        249448:	ea000009 	b	249474 <TXNewtPasteCommand::DoMainAction(void)+0x1cc>
        24944c:	0c101934 	ldceq	9, cr1, [r0], -#208
        249450:	0038ae64 	eoreqs	sl, r8, r4, ror #28
        249454:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        249458:	00684600 	rsbeq	r4, r8, r0, lsl #12
        24945c:	00683f28 	rsbeq	r3, r8, r8, lsr #30
        249460:	00683220 	rsbeq	r3, r8, r0, lsr #4
        249464:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        249468:	e2866001 	add	r6, r6, #1	; 0x1
        24946c:	e3560005 	cmp	r6, #5	; 0x5
        249470:	baffffdf 	blt	2493f4 <TXNewtPasteCommand::DoMainAction(void)+0x14c>
        249474:	e24dd034 	sub	sp, sp, #52	; 0x34
        249478:	e28d1038 	add	r1, sp, #56	; 0x38
        24947c:	e28d0024 	add	r0, sp, #36	; 0x24
        249480:	eb65252c 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        249484:	e28d1024 	add	r1, sp, #36	; 0x24
        249488:	e1a0000d 	mov	r0, sp
        24948c:	e3a02007 	mov	r2, #7	; 0x7
        249490:	eb655adc 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        249494:	e59d1054 	ldr	r1, [sp, #84]
        249498:	e59d205c 	ldr	r2, [sp, #92]
        24949c:	e1a0300d 	mov	r3, sp
        2494a0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2494a4:	eb655ac8 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2494a8:	e58d00d4 	str	r0, [sp, #212]
        2494ac:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2494b0:	e5900014 	ldr	r0, [r0, #20]
        2494b4:	e28d1054 	add	r1, sp, #84	; 0x54
        2494b8:	eb651cef 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2494bc:	e59d00d4 	ldr	r0, [sp, #212]
        2494c0:	e3300000 	teq	r0, #0	; 0x0
        2494c4:	e28d0024 	add	r0, sp, #36	; 0x24
        2494c8:	e3a01000 	mov	r1, #0	; 0x0
        2494cc:	0a000002 	beq	2494dc <TXNewtPasteCommand::DoMainAction(void)+0x234>
        2494d0:	eb652519 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        2494d4:	e28dd034 	add	sp, sp, #52	; 0x34
        2494d8:	ea000004 	b	2494f0 <TXNewtPasteCommand::DoMainAction(void)+0x248>
        2494dc:	eb652516 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        2494e0:	e28dd034 	add	sp, sp, #52	; 0x34
        2494e4:	e2855001 	add	r5, r5, #1	; 0x1
        2494e8:	e1550007 	cmp	r5, r7
        2494ec:	baffffba 	blt	2493dc <TXNewtPasteCommand::DoMainAction(void)+0x134>
        2494f0:	e59d0000 	ldr	r0, [sp]
        2494f4:	eb65e730 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2494f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2494fc:	eb65e72e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249500:	e59d0008 	ldr	r0, [sp, #8]
        249504:	eb65e72c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249508:	e28dd00c 	add	sp, sp, #12	; 0xc
        24950c:	e24d1004 	sub	r1, sp, #4	; 0x4
        249510:	e1a00009 	mov	r0, r9
        249514:	e59f3014 	ldr	r3, [pc, #14]	; 249530 <TXNewtPasteCommand::DoMainAction(void)+0x288>
        249518:	e3e02003 	mvn	r2, #3	; 0x3
        24951c:	eb5eef59 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
        249520:	e5bd0024 	ldr	r0, [sp, #36]!
        249524:	eb65e724 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249528:	e28dd004 	add	sp, sp, #4	; 0x4
        24952c:	ea000003 	b	249540 <TXNewtPasteCommand::DoMainAction(void)+0x298>
        249530:	0038c550 	eoreqs	ip, r8, r0, asr r5
        249534:	e2800060 	add	r0, r0, #96	; 0x60
        249538:	eb626b4f 	bl	1ae427c <$GetExceptionErr(Exception *)>
        24953c:	e58d006c 	str	r0, [sp, #108]
        249540:	e1a0000d 	mov	r0, sp
        249544:	eb665edb 	bl	1be10b8 <$ExitHandler>
        249548:	e5bd006c 	ldr	r0, [sp, #108]!
        24954c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

