#include "DDKIncludes/PCMCIA/CardHandler.h"

/**
 * Symbol: TCardPCMCIA::__ct(void)
 * Address: 0004f274
 */
TCardPCMCIA::TCardPCMCIA() {
    /*
         4f274:	e1a0c00d 	mov	ip, sp
         4f278:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4f27c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f280:	e1b04000 	movs	r4, r0
         4f284:	1a000003 	bne	4f298 <TCardPCMCIA::__ct(void)+0x24>
         4f288:	e3a000e0 	mov	r0, #224	; 0xe0
         4f28c:	eb6dfd29 	bl	1bce738 <$__nw(unsigned int)>
         4f290:	e1b04000 	movs	r4, r0
         4f294:	0a00000d 	beq	4f2d0 <TCardPCMCIA::__ct(void)+0x5c>
         4f298:	e2840048 	add	r0, r4, #72	; 0x48
         4f29c:	eb6e53e2 	bl	1be422c <CList::$__ct(void)>
         4f2a0:	e2840060 	add	r0, r4, #96	; 0x60
         4f2a4:	eb6e53e0 	bl	1be422c <CList::$__ct(void)>
         4f2a8:	e2840078 	add	r0, r4, #120	; 0x78
         4f2ac:	eb6e53de 	bl	1be422c <CList::$__ct(void)>
         4f2b0:	e2840094 	add	r0, r4, #148	; 0x94
         4f2b4:	eb6e53dc 	bl	1be422c <CList::$__ct(void)>
         4f2b8:	e28400ac 	add	r0, r4, #172	; 0xac
         4f2bc:	eb6e53da 	bl	1be422c <CList::$__ct(void)>
         4f2c0:	e28400c4 	add	r0, r4, #196	; 0xc4
         4f2c4:	eb6e53d8 	bl	1be422c <CList::$__ct(void)>
         4f2c8:	e1a00004 	mov	r0, r4
         4f2cc:	eb6e0554 	bl	1bd0824 <TCardPCMCIA::$ClearFields(void)>
         4f2d0:	e1a00004 	mov	r0, r4
         4f2d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::__dt(void)
 * Address: 0004f2d8
 */
TCardPCMCIA::~TCardPCMCIA() {
    /*
         4f2d8:	e1a0c00d 	mov	ip, sp
         4f2dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4f2e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f2e4:	e1a04000 	mov	r4, r0
         4f2e8:	e1a05001 	mov	r5, r1
         4f2ec:	eb6e2a7a 	bl	1bd9cdc <TCardPCMCIA::$RemoveFields(void)>
         4f2f0:	e28400c4 	add	r0, r4, #196	; 0xc4
         4f2f4:	e3a01000 	mov	r1, #0	; 0x0
         4f2f8:	eb6e57e1 	bl	1be5284 <CList::$__dt(void)>
         4f2fc:	e28400ac 	add	r0, r4, #172	; 0xac
         4f300:	e3a01000 	mov	r1, #0	; 0x0
         4f304:	eb6e57de 	bl	1be5284 <CList::$__dt(void)>
         4f308:	e2840094 	add	r0, r4, #148	; 0x94
         4f30c:	e3a01000 	mov	r1, #0	; 0x0
         4f310:	eb6e57db 	bl	1be5284 <CList::$__dt(void)>
         4f314:	e2840078 	add	r0, r4, #120	; 0x78
         4f318:	e3a01000 	mov	r1, #0	; 0x0
         4f31c:	eb6e57d8 	bl	1be5284 <CList::$__dt(void)>
         4f320:	e2840060 	add	r0, r4, #96	; 0x60
         4f324:	e3a01000 	mov	r1, #0	; 0x0
         4f328:	eb6e57d5 	bl	1be5284 <CList::$__dt(void)>
         4f32c:	e2840048 	add	r0, r4, #72	; 0x48
         4f330:	e3a01000 	mov	r1, #0	; 0x0
         4f334:	eb6e57d2 	bl	1be5284 <CList::$__dt(void)>
         4f338:	e3150001 	tst	r5, #1	; 0x1
         4f33c:	11a00004 	movne	r0, r4
         4f340:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4f344:	1a6df8e5 	bne	1bcd6e0 <$__dl(void *)>
         4f348:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::Clear(void)
 * Address: 0004f34c
 */
NewtonErr		TCardPCMCIA::Clear();									// 1336176 Clear current copy of cis {
    /*
         4f34c:	e1a0c00d 	mov	ip, sp
         4f350:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4f354:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f358:	e1a04000 	mov	r4, r0
         4f35c:	eb6e2a5e 	bl	1bd9cdc <TCardPCMCIA::$RemoveFields(void)>
         4f360:	e1a00004 	mov	r0, r4
         4f364:	eb6e052e 	bl	1bd0824 <TCardPCMCIA::$ClearFields(void)>
         4f368:	e3a00000 	mov	r0, #0	; 0x0
         4f36c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::Version(void)
 * Address: 0004f370
 */
ULong			TCardPCMCIA::Version() {
    /*
         4f370:	e3a00c02 	mov	r0, #512	; 0x200
         4f374:	e2800802 	add	r0, r0, #131072	; 0x20000
         4f378:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPCMCIA::ClearFields(void)
 * Address: 0004f37c
 */
NewtonErr		TCardPCMCIA::ClearFields() {
    /*
         4f37c:	e92d4000 	stmdb	sp!, {lr}
         4f380:	e5901000 	ldr	r1, [r0]
         4f384:	e3c12302 	bic	r2, r1, #134217728	; 0x8000000
         4f388:	e1a01202 	mov	r1, r2, lsl #4
         4f38c:	e1a01fa1 	mov	r1, r1, lsr #31
         4f390:	e3c22201 	bic	r2, r2, #268435456	; 0x10000000
         4f394:	e1822e01 	orr	r2, r2, r1, lsl #28
         4f398:	e1a01182 	mov	r1, r2, lsl #3
         4f39c:	e1a01fa1 	mov	r1, r1, lsr #31
         4f3a0:	e3c22202 	bic	r2, r2, #536870912	; 0x20000000
         4f3a4:	e1821e81 	orr	r1, r2, r1, lsl #29
         4f3a8:	e1a02101 	mov	r2, r1, lsl #2
         4f3ac:	e1a02fa2 	mov	r2, r2, lsr #31
         4f3b0:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         4f3b4:	e1811f02 	orr	r1, r1, r2, lsl #30
         4f3b8:	e1a02081 	mov	r2, r1, lsl #1
         4f3bc:	e1a02fa2 	mov	r2, r2, lsr #31
         4f3c0:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
         4f3c4:	e1811f82 	orr	r1, r1, r2, lsl #31
         4f3c8:	e3e02000 	mvn	r2, #0	; 0x0
         4f3cc:	e3a03000 	mov	r3, #0	; 0x0
         4f3d0:	e5802004 	str	r2, [r0, #4]	; TCardPCMCIA
         4f3d4:	e5803034 	str	r3, [r0, #52]	; fManufacturerName
         4f3d8:	e5803030 	str	r3, [r0, #48]	; fVendorSpecificV2Bytes
         4f3dc:	e580303c 	str	r3, [r0, #60]	; fV1String3
         4f3e0:	e5803038 	str	r3, [r0, #56]	; fProductName
         4f3e4:	e5803044 	str	r3, [r0, #68]	; fV2Vendor
         4f3e8:	e5803040 	str	r3, [r0, #64]	; fV1String4
         4f3ec:	e5803008 	str	r3, [r0, #8]	; fSocketNumber
         4f3f0:	e5c03027 	strb	r3, [r0, #39]	; fField39
         4f3f4:	e5c03028 	strb	r3, [r0, #40]	; fNumOfUnknownTuples
         4f3f8:	e5c03029 	strb	r3, [r0, #41]	; fField41
         4f3fc:	e5c0302a 	strb	r3, [r0, #42]	; fField42
         4f400:	e5803010 	str	r3, [r0, #16]	; fFirstDataByteAddress
         4f404:	e5803014 	str	r3, [r0, #20]	; fRegistersPresent
         4f408:	e5c0302b 	strb	r3, [r0, #43]	; fField43
         4f40c:	e580300c 	str	r3, [r0, #12]	; fTotalDeviceSize
         4f410:	e5c0302d 	strb	r3, [r0, #45]	; fField45
         4f414:	e5c0302c 	strb	r3, [r0, #44]	; fConfigurationLastEntryNumber
         4f418:	e5c0301b 	strb	r3, [r0, #27]	; fField27
         4f41c:	e5c0301a 	strb	r3, [r0, #26]	; fManufactureIdInfo
         4f420:	e5c03019 	strb	r3, [r0, #25]	; fField25
         4f424:	e5c03018 	strb	r3, [r0, #24]	; fManufactureId
         4f428:	e5c03026 	strb	r3, [r0, #38]	; fField38
         4f42c:	e5c0301d 	strb	r3, [r0, #29]	; fField29
         4f430:	e5c0301c 	strb	r3, [r0, #28]	; fNumOfDevice
         4f434:	e3c12402 	bic	r2, r1, #33554432	; 0x2000000
         4f438:	e1a01302 	mov	r1, r2, lsl #6
         4f43c:	e1a01fa1 	mov	r1, r1, lsr #31
         4f440:	e3c22301 	bic	r2, r2, #67108864	; 0x4000000
         4f444:	e1821d01 	orr	r1, r2, r1, lsl #26
         4f448:	e3c12501 	bic	r2, r1, #4194304	; 0x400000
         4f44c:	e1a01482 	mov	r1, r2, lsl #9
         4f450:	e1a01fa1 	mov	r1, r1, lsr #31
         4f454:	e3c22502 	bic	r2, r2, #8388608	; 0x800000
         4f458:	e1822b81 	orr	r2, r2, r1, lsl #23
         4f45c:	e1a01402 	mov	r1, r2, lsl #8
         4f460:	e1a01fa1 	mov	r1, r1, lsr #31
         4f464:	e3c22401 	bic	r2, r2, #16777216	; 0x1000000
         4f468:	e1821c01 	orr	r1, r2, r1, lsl #24
         4f46c:	e3a02000 	mov	r2, #0	; 0x0
         4f470:	e5801000 	str	r1, [r0]
         4f474:	e3a01000 	mov	r1, #0	; 0x0
         4f478:	e080c102 	add	ip, r0, r2, lsl #2
         4f47c:	e08ce001 	add	lr, ip, r1
         4f480:	e5ce301e 	strb	r3, [lr, #30]
         4f484:	e2811001 	add	r1, r1, #1	; 0x1
         4f488:	e3510004 	cmp	r1, #4	; 0x4
         4f48c:	3afffffa 	bcc	4f47c <TCardPCMCIA::ClearFields(void)+0x100>
         4f490:	e2822001 	add	r2, r2, #1	; 0x1
         4f494:	e3520002 	cmp	r2, #2	; 0x2
         4f498:	3afffff5 	bcc	4f474 <TCardPCMCIA::ClearFields(void)+0xf8>
         4f49c:	e5c030dd 	strb	r3, [r0, #221]	; fField221
         4f4a0:	e5c030de 	strb	r3, [r0, #222]	; fField222
         4f4a4:	e5803090 	str	r3, [r0, #144]	; fField144
         4f4a8:	e5c030dc 	strb	r3, [r0, #220]	; fField220
         4f4ac:	e1a00003 	mov	r0, r3
         4f4b0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TCardPCMCIA::RemoveFields(void)
 * Address: 0004f4c0
 */
NewtonErr		TCardPCMCIA::RemoveFields() {
    /*
         4f4c0:	e1a0c00d 	mov	ip, sp
         4f4c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4f4c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f4cc:	e1a04000 	mov	r4, r0
         4f4d0:	e5900040 	ldr	r0, [r0, #64]	; fV1String4
         4f4d4:	eb6df881 	bl	1bcd6e0 <$__dl(void *)>
         4f4d8:	e5940044 	ldr	r0, [r4, #68]	; fV2Vendor
         4f4dc:	eb6df87f 	bl	1bcd6e0 <$__dl(void *)>
         4f4e0:	e2840060 	add	r0, r4, #96	; 0x60
         4f4e4:	e1a05000 	mov	r5, r0
         4f4e8:	e5901000 	ldr	r1, [r0]
         4f4ec:	e2411001 	sub	r1, r1, #1	; 0x1
         4f4f0:	eb6e5b93 	bl	1be6344 <CList::$At(long)>
         4f4f4:	e1b06000 	movs	r6, r0
         4f4f8:	0a00000d 	beq	4f534 <TCardPCMCIA::RemoveFields(void)+0x74>
         4f4fc:	e1a00005 	mov	r0, r5
         4f500:	e5951000 	ldr	r1, [r5]
         4f504:	e2411001 	sub	r1, r1, #1	; 0x1
         4f508:	e3a02001 	mov	r2, #1	; 0x1
         4f50c:	eb6e7448 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f510:	e1b00006 	movs	r0, r6
         4f514:	13a01001 	movne	r1, #1	; 0x1
         4f518:	1b6df871 	blne	1bcd6e4 <TCardDevice::$__dt(void)>
         4f51c:	e1a00005 	mov	r0, r5
         4f520:	e5951000 	ldr	r1, [r5]
         4f524:	e2411001 	sub	r1, r1, #1	; 0x1
         4f528:	eb6e5b85 	bl	1be6344 <CList::$At(long)>
         4f52c:	e1b06000 	movs	r6, r0
         4f530:	1afffff1 	bne	4f4fc <TCardPCMCIA::RemoveFields(void)+0x3c>
         4f534:	e2840094 	add	r0, r4, #148	; 0x94
         4f538:	e1a07000 	mov	r7, r0
         4f53c:	e5901000 	ldr	r1, [r0]
         4f540:	e2411001 	sub	r1, r1, #1	; 0x1
         4f544:	eb6e5b7e 	bl	1be6344 <CList::$At(long)>
         4f548:	e1b05000 	movs	r5, r0
         4f54c:	0a000021 	beq	4f5d8 <TCardPCMCIA::RemoveFields(void)+0x118>
         4f550:	e5950000 	ldr	r0, [r5]
         4f554:	e2401001 	sub	r1, r0, #1	; 0x1
         4f558:	e1a00005 	mov	r0, r5
         4f55c:	eb6e5b78 	bl	1be6344 <CList::$At(long)>
         4f560:	e1b06000 	movs	r6, r0
         4f564:	0a00000d 	beq	4f5a0 <TCardPCMCIA::RemoveFields(void)+0xe0>
         4f568:	e5950000 	ldr	r0, [r5]
         4f56c:	e2401001 	sub	r1, r0, #1	; 0x1
         4f570:	e1a00005 	mov	r0, r5
         4f574:	e3a02001 	mov	r2, #1	; 0x1
         4f578:	eb6e742d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f57c:	e1b00006 	movs	r0, r6
         4f580:	13a01001 	movne	r1, #1	; 0x1
         4f584:	1b6df856 	blne	1bcd6e4 <TCardDevice::$__dt(void)>
         4f588:	e5950000 	ldr	r0, [r5]
         4f58c:	e2401001 	sub	r1, r0, #1	; 0x1
         4f590:	e1a00005 	mov	r0, r5
         4f594:	eb6e5b6a 	bl	1be6344 <CList::$At(long)>
         4f598:	e1b06000 	movs	r6, r0
         4f59c:	1afffff1 	bne	4f568 <TCardPCMCIA::RemoveFields(void)+0xa8>
         4f5a0:	e1a00007 	mov	r0, r7
         4f5a4:	e5971000 	ldr	r1, [r7]
         4f5a8:	e2411001 	sub	r1, r1, #1	; 0x1
         4f5ac:	e3a02001 	mov	r2, #1	; 0x1
         4f5b0:	eb6e741f 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f5b4:	e1b00005 	movs	r0, r5
         4f5b8:	13a01001 	movne	r1, #1	; 0x1
         4f5bc:	1b6e5730 	blne	1be5284 <CList::$__dt(void)>
         4f5c0:	e1a00007 	mov	r0, r7
         4f5c4:	e5971000 	ldr	r1, [r7]
         4f5c8:	e2411001 	sub	r1, r1, #1	; 0x1
         4f5cc:	eb6e5b5c 	bl	1be6344 <CList::$At(long)>
         4f5d0:	e1b05000 	movs	r5, r0
         4f5d4:	1affffdd 	bne	4f550 <TCardPCMCIA::RemoveFields(void)+0x90>
         4f5d8:	e28400ac 	add	r0, r4, #172	; 0xac
         4f5dc:	e1a06000 	mov	r6, r0
         4f5e0:	e5901000 	ldr	r1, [r0]
         4f5e4:	e2411001 	sub	r1, r1, #1	; 0x1
         4f5e8:	eb6e5b55 	bl	1be6344 <CList::$At(long)>
         4f5ec:	e1b05000 	movs	r5, r0
         4f5f0:	0a000021 	beq	4f67c <TCardPCMCIA::RemoveFields(void)+0x1bc>
         4f5f4:	e5950000 	ldr	r0, [r5]
         4f5f8:	e2401001 	sub	r1, r0, #1	; 0x1
         4f5fc:	e1a00005 	mov	r0, r5
         4f600:	eb6e5b4f 	bl	1be6344 <CList::$At(long)>
         4f604:	e1b07000 	movs	r7, r0
         4f608:	0a00000d 	beq	4f644 <TCardPCMCIA::RemoveFields(void)+0x184>
         4f60c:	e5950000 	ldr	r0, [r5]
         4f610:	e2401001 	sub	r1, r0, #1	; 0x1
         4f614:	e1a00005 	mov	r0, r5
         4f618:	e3a02001 	mov	r2, #1	; 0x1
         4f61c:	eb6e7404 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f620:	e1b00007 	movs	r0, r7
         4f624:	13a01001 	movne	r1, #1	; 0x1
         4f628:	1b6df82d 	blne	1bcd6e4 <TCardDevice::$__dt(void)>
         4f62c:	e5950000 	ldr	r0, [r5]
         4f630:	e2401001 	sub	r1, r0, #1	; 0x1
         4f634:	e1a00005 	mov	r0, r5
         4f638:	eb6e5b41 	bl	1be6344 <CList::$At(long)>
         4f63c:	e1b07000 	movs	r7, r0
         4f640:	1afffff1 	bne	4f60c <TCardPCMCIA::RemoveFields(void)+0x14c>
         4f644:	e1a00006 	mov	r0, r6
         4f648:	e5961000 	ldr	r1, [r6]
         4f64c:	e2411001 	sub	r1, r1, #1	; 0x1
         4f650:	e3a02001 	mov	r2, #1	; 0x1
         4f654:	eb6e73f6 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f658:	e1b00005 	movs	r0, r5
         4f65c:	13a01001 	movne	r1, #1	; 0x1
         4f660:	1b6e5707 	blne	1be5284 <CList::$__dt(void)>
         4f664:	e1a00006 	mov	r0, r6
         4f668:	e5961000 	ldr	r1, [r6]
         4f66c:	e2411001 	sub	r1, r1, #1	; 0x1
         4f670:	eb6e5b33 	bl	1be6344 <CList::$At(long)>
         4f674:	e1b05000 	movs	r5, r0
         4f678:	1affffdd 	bne	4f5f4 <TCardPCMCIA::RemoveFields(void)+0x134>
         4f67c:	e2840078 	add	r0, r4, #120	; 0x78
         4f680:	e1a06000 	mov	r6, r0
         4f684:	e5901000 	ldr	r1, [r0]
         4f688:	e2411001 	sub	r1, r1, #1	; 0x1
         4f68c:	eb6e5b2c 	bl	1be6344 <CList::$At(long)>
         4f690:	e1b05000 	movs	r5, r0
         4f694:	0a00000d 	beq	4f6d0 <TCardPCMCIA::RemoveFields(void)+0x210>
         4f698:	e1a00006 	mov	r0, r6
         4f69c:	e5961000 	ldr	r1, [r6]
         4f6a0:	e2411001 	sub	r1, r1, #1	; 0x1
         4f6a4:	e3a02001 	mov	r2, #1	; 0x1
         4f6a8:	eb6e73e1 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f6ac:	e1b00005 	movs	r0, r5
         4f6b0:	13a01001 	movne	r1, #1	; 0x1
         4f6b4:	1b6dfc18 	blne	1bce71c <TCardConfiguration::$__dt(void)>
         4f6b8:	e1a00006 	mov	r0, r6
         4f6bc:	e5961000 	ldr	r1, [r6]
         4f6c0:	e2411001 	sub	r1, r1, #1	; 0x1
         4f6c4:	eb6e5b1e 	bl	1be6344 <CList::$At(long)>
         4f6c8:	e1b05000 	movs	r5, r0
         4f6cc:	1afffff1 	bne	4f698 <TCardPCMCIA::RemoveFields(void)+0x1d8>
         4f6d0:	e2840048 	add	r0, r4, #72	; 0x48
         4f6d4:	e1a05000 	mov	r5, r0
         4f6d8:	e5901000 	ldr	r1, [r0]
         4f6dc:	e2411001 	sub	r1, r1, #1	; 0x1
         4f6e0:	eb6e5b17 	bl	1be6344 <CList::$At(long)>
         4f6e4:	e1b06000 	movs	r6, r0
         4f6e8:	0a00000d 	beq	4f724 <TCardPCMCIA::RemoveFields(void)+0x264>
         4f6ec:	e1a00005 	mov	r0, r5
         4f6f0:	e5951000 	ldr	r1, [r5]
         4f6f4:	e2411001 	sub	r1, r1, #1	; 0x1
         4f6f8:	e3a02001 	mov	r2, #1	; 0x1
         4f6fc:	eb6e73cc 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f700:	e1b00006 	movs	r0, r6
         4f704:	13a01001 	movne	r1, #1	; 0x1
         4f708:	1b6df7fb 	blne	1bcd6fc <TCardPackage::$__dt(void)>
         4f70c:	e1a00005 	mov	r0, r5
         4f710:	e5951000 	ldr	r1, [r5]
         4f714:	e2411001 	sub	r1, r1, #1	; 0x1
         4f718:	eb6e5b09 	bl	1be6344 <CList::$At(long)>
         4f71c:	e1b06000 	movs	r6, r0
         4f720:	1afffff1 	bne	4f6ec <TCardPCMCIA::RemoveFields(void)+0x22c>
         4f724:	e28400c4 	add	r0, r4, #196	; 0xc4
         4f728:	e1a06000 	mov	r6, r0
         4f72c:	e5901000 	ldr	r1, [r0]
         4f730:	e2411001 	sub	r1, r1, #1	; 0x1
         4f734:	eb6e5b02 	bl	1be6344 <CList::$At(long)>
         4f738:	e1b05000 	movs	r5, r0
         4f73c:	0a00000d 	beq	4f778 <TCardPCMCIA::RemoveFields(void)+0x2b8>
         4f740:	e1a00006 	mov	r0, r6
         4f744:	e5961000 	ldr	r1, [r6]
         4f748:	e2411001 	sub	r1, r1, #1	; 0x1
         4f74c:	e3a02001 	mov	r2, #1	; 0x1
         4f750:	eb6e73b7 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f754:	e1b00005 	movs	r0, r5
         4f758:	13a01001 	movne	r1, #1	; 0x1
         4f75c:	1b6ef7df 	blne	1c0d6e0 <TCardFunction::$__dt(void)>
         4f760:	e1a00006 	mov	r0, r6
         4f764:	e5961000 	ldr	r1, [r6]
         4f768:	e2411001 	sub	r1, r1, #1	; 0x1
         4f76c:	eb6e5af4 	bl	1be6344 <CList::$At(long)>
         4f770:	e1b05000 	movs	r5, r0
         4f774:	1afffff1 	bne	4f740 <TCardPCMCIA::RemoveFields(void)+0x280>
         4f778:	e1a00004 	mov	r0, r4
         4f77c:	e3a01000 	mov	r1, #0	; 0x0
         4f780:	eb6ef7db 	bl	1c0d6f4 <TCardPCMCIA::$GetCardCIS(unsigned long const)>
         4f784:	e1a05000 	mov	r5, r0
         4f788:	e1540000 	cmp	r4, r0
         4f78c:	0a000003 	beq	4f7a0 <TCardPCMCIA::RemoveFields(void)+0x2e0>
         4f790:	15951030 	ldrne	r1, [r5, #48]	; fVendorSpecificV2Bytes
         4f794:	15940030 	ldrne	r0, [r4, #48]	; fVendorSpecificV2Bytes
         4f798:	11310000 	teqne	r1, r0
         4f79c:	0a000001 	beq	4f7a8 <TCardPCMCIA::RemoveFields(void)+0x2e8>
         4f7a0:	e5940030 	ldr	r0, [r4, #48]	; fVendorSpecificV2Bytes
         4f7a4:	eb6df7cd 	bl	1bcd6e0 <$__dl(void *)>
         4f7a8:	e1540005 	cmp	r4, r5
         4f7ac:	0a000003 	beq	4f7c0 <TCardPCMCIA::RemoveFields(void)+0x300>
         4f7b0:	15951034 	ldrne	r1, [r5, #52]	; fManufacturerName
         4f7b4:	15940034 	ldrne	r0, [r4, #52]	; fManufacturerName
         4f7b8:	11310000 	teqne	r1, r0
         4f7bc:	0a000001 	beq	4f7c8 <TCardPCMCIA::RemoveFields(void)+0x308>
         4f7c0:	e5940034 	ldr	r0, [r4, #52]	; fManufacturerName
         4f7c4:	eb6df7c5 	bl	1bcd6e0 <$__dl(void *)>
         4f7c8:	e1540005 	cmp	r4, r5
         4f7cc:	0a000003 	beq	4f7e0 <TCardPCMCIA::RemoveFields(void)+0x320>
         4f7d0:	15950038 	ldrne	r0, [r5, #56]	; fProductName
         4f7d4:	15941038 	ldrne	r1, [r4, #56]	; fProductName
         4f7d8:	11300001 	teqne	r0, r1
         4f7dc:	0a000001 	beq	4f7e8 <TCardPCMCIA::RemoveFields(void)+0x328>
         4f7e0:	e5940038 	ldr	r0, [r4, #56]	; fProductName
         4f7e4:	eb6df7bd 	bl	1bcd6e0 <$__dl(void *)>
         4f7e8:	e1540005 	cmp	r4, r5
         4f7ec:	0a000003 	beq	4f800 <TCardPCMCIA::RemoveFields(void)+0x340>
         4f7f0:	1595003c 	ldrne	r0, [r5, #60]	; fV1String3
         4f7f4:	1594103c 	ldrne	r1, [r4, #60]	; fV1String3
         4f7f8:	11300001 	teqne	r0, r1
         4f7fc:	0a000001 	beq	4f808 <TCardPCMCIA::RemoveFields(void)+0x348>
         4f800:	e594003c 	ldr	r0, [r4, #60]	; fV1String3
         4f804:	eb6df7b5 	bl	1bcd6e0 <$__dl(void *)>
         4f808:	e3a07000 	mov	r7, #0	; 0x0
         4f80c:	e1340005 	teq	r4, r5
         4f810:	1a00001b 	bne	4f884 <TCardPCMCIA::RemoveFields(void)+0x3c4>
         4f814:	e5940090 	ldr	r0, [r4, #144]	; fField144
         4f818:	e3300000 	teq	r0, #0	; 0x0
         4f81c:	0a000018 	beq	4f884 <TCardPCMCIA::RemoveFields(void)+0x3c4>
         4f820:	e5901000 	ldr	r1, [r0]
         4f824:	e2411001 	sub	r1, r1, #1	; 0x1
         4f828:	eb6e5ac5 	bl	1be6344 <CList::$At(long)>
         4f82c:	e1b06000 	movs	r6, r0
         4f830:	0a00000e 	beq	4f870 <TCardPCMCIA::RemoveFields(void)+0x3b0>
         4f834:	e5940090 	ldr	r0, [r4, #144]	; fField144
         4f838:	e5901000 	ldr	r1, [r0]
         4f83c:	e2411001 	sub	r1, r1, #1	; 0x1
         4f840:	e3a02001 	mov	r2, #1	; 0x1
         4f844:	eb6e737a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f848:	e1360005 	teq	r6, r5
         4f84c:	11b00006 	movnes	r0, r6
         4f850:	13a01001 	movne	r1, #1	; 0x1
         4f854:	1b6df7a3 	blne	1bcd6e8 <TCardPCMCIA::$__dt(void)>
         4f858:	e5940090 	ldr	r0, [r4, #144]	; fField144
         4f85c:	e5901000 	ldr	r1, [r0]
         4f860:	e2411001 	sub	r1, r1, #1	; 0x1
         4f864:	eb6e5ab6 	bl	1be6344 <CList::$At(long)>
         4f868:	e1b06000 	movs	r6, r0
         4f86c:	1afffff0 	bne	4f834 <TCardPCMCIA::RemoveFields(void)+0x374>
         4f870:	e5940090 	ldr	r0, [r4, #144]	; fField144
         4f874:	e3300000 	teq	r0, #0	; 0x0
         4f878:	13a01001 	movne	r1, #1	; 0x1
         4f87c:	1b6e5680 	blne	1be5284 <CList::$__dt(void)>
         4f880:	e5a47090 	str	r7, [r4, #144]!	; fField144
         4f884:	e1a00007 	mov	r0, r7
         4f888:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardManufacturer(char *)
 * Address: 0004f88c
 */
char*			TCardPCMCIA::SetCardManufacturer(char* srcStr) {
    /*
         4f88c:	e2800030 	add	r0, r0, #48	; 0x30
         4f890:	ea6e3159 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardManufacturer( const(void))
 * Address: 0004f894
 */
const char*		TCardPCMCIA::GetCardManufacturer() const {
    /*
         4f894:	e5900030 	ldr	r0, [r0, #48]	; fVendorSpecificV2Bytes
         4f898:	e3300000 	teq	r0, #0	; 0x0
         4f89c:	059f0004 	ldreq	r0, [pc, #4]	; 4f8a8 <TCardPCMCIA::GetCardManufacturer( const(void))+0x14>	; TCardPCMCIA
         4f8a0:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f8a4:	e1a0f00e 	mov	pc, lr
         4f8a8:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardProduct(char *)
 * Address: 0004f8ac
 */
char*			TCardPCMCIA::SetCardProduct(char* srcStr) {
    /*
         4f8ac:	e2800034 	add	r0, r0, #52	; 0x34
         4f8b0:	ea6e3151 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardProduct( const(void))
 * Address: 0004f8b4
 */
const char*		TCardPCMCIA::GetCardProduct() const {
    /*
         4f8b4:	e5900034 	ldr	r0, [r0, #52]	; fManufacturerName
         4f8b8:	e3300000 	teq	r0, #0	; 0x0
         4f8bc:	059f0004 	ldreq	r0, [pc, #4]	; 4f8c8 <TCardPCMCIA::GetCardProduct( const(void))+0x14>	; TCardPCMCIA
         4f8c0:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f8c4:	e1a0f00e 	mov	pc, lr
         4f8c8:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardV1String3(char *)
 * Address: 0004f8cc
 */
char*			TCardPCMCIA::SetCardV1String3(char* srcStr) {
    /*
         4f8cc:	e2800038 	add	r0, r0, #56	; 0x38
         4f8d0:	ea6e3149 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardV1String3( const(void))
 * Address: 0004f8d4
 */
const char*		TCardPCMCIA::GetCardV1String3() const {
    /*
         4f8d4:	e5900038 	ldr	r0, [r0, #56]	; fProductName
         4f8d8:	e3300000 	teq	r0, #0	; 0x0
         4f8dc:	059f0004 	ldreq	r0, [pc, #4]	; 4f8e8 <TCardPCMCIA::GetCardV1String3( const(void))+0x14>	; TCardPCMCIA
         4f8e0:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f8e4:	e1a0f00e 	mov	pc, lr
         4f8e8:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardV1String4(char *)
 * Address: 0004f8ec
 */
char*			TCardPCMCIA::SetCardV1String4(char* srcStr) {
    /*
         4f8ec:	e280003c 	add	r0, r0, #60	; 0x3c
         4f8f0:	ea6e3141 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardV1String4( const(void))
 * Address: 0004f8f4
 */
const char*		TCardPCMCIA::GetCardV1String4() const {
    /*
         4f8f4:	e590003c 	ldr	r0, [r0, #60]	; fV1String3
         4f8f8:	e3300000 	teq	r0, #0	; 0x0
         4f8fc:	059f0004 	ldreq	r0, [pc, #4]	; 4f908 <TCardPCMCIA::GetCardV1String4( const(void))+0x14>	; TCardPCMCIA
         4f900:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f904:	e1a0f00e 	mov	pc, lr
         4f908:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardV2Vendor(char *)
 * Address: 0004f90c
 */
char*			TCardPCMCIA::SetCardV2Vendor(char* srcStr) {
    /*
         4f90c:	e2800040 	add	r0, r0, #64	; 0x40
         4f910:	ea6e3139 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardV2Vendor( const(void))
 * Address: 0004f930
 */
const char*		TCardPCMCIA::GetCardV2Vendor() const {
    /*
         4f930:	e5900040 	ldr	r0, [r0, #64]	; fV1String4
         4f934:	e3300000 	teq	r0, #0	; 0x0
         4f938:	059f0004 	ldreq	r0, [pc, #4]	; 4f944 <TCardPCMCIA::GetCardV2Vendor( const(void))+0x14>	; TCardPCMCIA
         4f93c:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f940:	e1a0f00e 	mov	pc, lr
         4f944:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::SetCardV2Info(char *)
 * Address: 0004f948
 */
char*			TCardPCMCIA::SetCardV2Info(char* srcStr) {
    /*
         4f948:	e2800044 	add	r0, r0, #68	; 0x44
         4f94c:	ea6e312a 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardV2Info( const(void))
 * Address: 0004f950
 */
const char*		TCardPCMCIA::GetCardV2Info() const {
    /*
         4f950:	e5900044 	ldr	r0, [r0, #68]	; fV2Vendor
         4f954:	e3300000 	teq	r0, #0	; 0x0
         4f958:	059f0004 	ldreq	r0, [pc, #4]	; 4f964 <TCardPCMCIA::GetCardV2Info( const(void))+0x14>	; TCardPCMCIA
         4f95c:	05900008 	ldreq	r0, [r0, #8]	; fSocketNumber
         4f960:	e1a0f00e 	mov	pc, lr
         4f964:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardDevice(TCardDevice *)
 * Address: 0004f968
 */
TCardDevice*	TCardPCMCIA::AddCardDevice(TCardDevice *device) {
    /*
         4f968:	e1a0c00d 	mov	ip, sp
         4f96c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4f970:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f974:	e1a04001 	mov	r4, r1
         4f978:	e1a02001 	mov	r2, r1
         4f97c:	e5b01060 	ldr	r1, [r0, #96]!	; fCardFunctions
         4f980:	eb6e66d9 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4f984:	e1a00004 	mov	r0, r4
         4f988:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardDevice(unsigned long const)
 * Address: 0004f98c
 */
TCardDevice*	TCardPCMCIA::GetCardDevice(const ULong deviceNumber) {
    /*
         4f98c:	e1a0c00d 	mov	ip, sp
         4f990:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4f994:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f998:	e3a02000 	mov	r2, #0	; 0x0
         4f99c:	e5b03060 	ldr	r3, [r0, #96]!	; fCardFunctions
         4f9a0:	e1530001 	cmp	r3, r1
         4f9a4:	9a000001 	bls	4f9b0 <TCardPCMCIA::GetCardDevice(unsigned long const)+0x24>
         4f9a8:	eb6e5a65 	bl	1be6344 <CList::$At(long)>
         4f9ac:	e1a02000 	mov	r2, r0
         4f9b0:	e1a00002 	mov	r0, r2
         4f9b4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::GetNumOfCISs(void)
 * Address: 0004f9b8
 */
ULong			TCardPCMCIA::GetNumOfCISs();								// Get the number of CISs {
    /*
         4f9b8:	e5900090 	ldr	r0, [r0, #144]	; fField144
         4f9bc:	e3300000 	teq	r0, #0	; 0x0
         4f9c0:	03a00001 	moveq	r0, #1	; 0x1
         4f9c4:	15900000 	ldrne	r0, [r0]
         4f9c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardCIS(unsigned long const)
 * Address: 0004f9cc
 */
TCardPCMCIA*	TCardPCMCIA::GetCardCIS(const ULong cisNumber);			// Get a TCardPCMCIA* {
    /*
         4f9cc:	e1a0c00d 	mov	ip, sp
         4f9d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4f9d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f9d8:	e1a05000 	mov	r5, r0
         4f9dc:	e1a04001 	mov	r4, r1
         4f9e0:	e3a00000 	mov	r0, #0	; 0x0
         4f9e4:	e5951090 	ldr	r1, [r5, #144]	; fField144
         4f9e8:	e3310000 	teq	r1, #0	; 0x0
         4f9ec:	01a00005 	moveq	r0, r5
         4f9f0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         4f9f4:	e5912000 	ldr	r2, [r1]
         4f9f8:	e1520004 	cmp	r2, r4
         4f9fc:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         4fa00:	e1a00001 	mov	r0, r1
         4fa04:	e1a01004 	mov	r1, r4
         4fa08:	eb6e5a4d 	bl	1be6344 <CList::$At(long)>
         4fa0c:	e3300000 	teq	r0, #0	; 0x0
         4fa10:	15c540dc 	strneb	r4, [r5, #220]	; fField220
         4fa14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardOtherCondDeviceList(unsigned long const)
 * Address: 0004fa4c
 */
Long			TCardPCMCIA::AddCardOtherCondDeviceList(const ULong forAttrMemory);								// Add a list to the Device_OC or Device_OA list and return the new list number (<0 error) {
    /*
         4fa4c:	e1a0c00d 	mov	ip, sp
         4fa50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4fa54:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fa58:	e1a04000 	mov	r4, r0
         4fa5c:	e1a05001 	mov	r5, r1
         4fa60:	e3a060e9 	mov	r6, #233	; 0xe9
         4fa64:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         4fa68:	e3a00000 	mov	r0, #0	; 0x0
         4fa6c:	eb6e51ee 	bl	1be422c <CList::$__ct(void)>
         4fa70:	e3300000 	teq	r0, #0	; 0x0
         4fa74:	0a000008 	beq	4fa9c <TCardPCMCIA::AddCardOtherCondDeviceList(unsigned long const)+0x50>
         4fa78:	e3350000 	teq	r5, #0	; 0x0
         4fa7c:	02844094 	addeq	r4, r4, #148	; 0x94
         4fa80:	128440ac 	addne	r4, r4, #172	; 0xac
         4fa84:	e1a02000 	mov	r2, r0
         4fa88:	e5941000 	ldr	r1, [r4]
         4fa8c:	e1a00004 	mov	r0, r4
         4fa90:	eb6e6695 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fa94:	e5940000 	ldr	r0, [r4]
         4fa98:	e2406001 	sub	r6, r0, #1	; 0x1
         4fa9c:	e1a00006 	mov	r0, r6
         4faa0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardOtherCondDevice(unsigned long const, unsigned long const, TCardDevice *)
 * Address: 0004faa4
 */
NewtonErr		TCardPCMCIA::AddCardOtherCondDevice(const ULong forAttrMemory, const ULong listNumber, TCardDevice *device);			// Add device to a Device_OC or Device_OA list {
    /*
         4faa4:	e1a0c00d 	mov	ip, sp
         4faa8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4faac:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fab0:	e1a04003 	mov	r4, r3
         4fab4:	e3a05000 	mov	r5, #0	; 0x0
         4fab8:	e3310000 	teq	r1, #0	; 0x0
         4fabc:	02800094 	addeq	r0, r0, #148	; 0x94
         4fac0:	128000ac 	addne	r0, r0, #172	; 0xac
         4fac4:	e5901000 	ldr	r1, [r0]
         4fac8:	e1510002 	cmp	r1, r2
         4facc:	9a000005 	bls	4fae8 <TCardPCMCIA::AddCardOtherCondDevice(unsigned long const, unsigned long const, TCardDevice *)+0x44>
         4fad0:	e1a01002 	mov	r1, r2
         4fad4:	eb6e5a1a 	bl	1be6344 <CList::$At(long)>
         4fad8:	e1a02004 	mov	r2, r4
         4fadc:	e5901000 	ldr	r1, [r0]
         4fae0:	eb6e6681 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fae4:	ea000001 	b	4faf0 <TCardPCMCIA::AddCardOtherCondDevice(unsigned long const, unsigned long const, TCardDevice *)+0x4c>
         4fae8:	e3a050ea 	mov	r5, #234	; 0xea
         4faec:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         4faf0:	e1a00005 	mov	r0, r5
         4faf4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardPackage(TCardPackage *)
 * Address: 0004faf8
 */
TCardPackage*	TCardPCMCIA::AddCardPackage(TCardPackage *package) {
    /*
         4faf8:	e1a0c00d 	mov	ip, sp
         4fafc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4fb00:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fb04:	e1a04001 	mov	r4, r1
         4fb08:	e1a02001 	mov	r2, r1
         4fb0c:	e5b01048 	ldr	r1, [r0, #72]!	; fV2Info
         4fb10:	eb6e6675 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fb14:	e1a00004 	mov	r0, r4
         4fb18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardPackage(unsigned long const)
 * Address: 0004fb1c
 */
TCardPackage*	TCardPCMCIA::GetCardPackage(const ULong packageNumber) {
    /*
         4fb1c:	e1a0c00d 	mov	ip, sp
         4fb20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4fb24:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fb28:	e3a02000 	mov	r2, #0	; 0x0
         4fb2c:	e5b03048 	ldr	r3, [r0, #72]!	; fV2Info
         4fb30:	e1530001 	cmp	r3, r1
         4fb34:	9a000001 	bls	4fb40 <TCardPCMCIA::GetCardPackage(unsigned long const)+0x24>
         4fb38:	eb6e5a01 	bl	1be6344 <CList::$At(long)>
         4fb3c:	e1a02000 	mov	r2, r0
         4fb40:	e1a00002 	mov	r0, r2
         4fb44:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardConfiguration(TCardConfiguration *)
 * Address: 0004fb48
 */
TCardConfiguration*  TCardPCMCIA::AddCardConfiguration(TCardConfiguration *configuration) {
    /*
         4fb48:	e1a0c00d 	mov	ip, sp
         4fb4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4fb50:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fb54:	e1a04001 	mov	r4, r1
         4fb58:	e1a02001 	mov	r2, r1
         4fb5c:	e5b01078 	ldr	r1, [r0, #120]!	; fField120
         4fb60:	eb6e6661 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fb64:	e1a00004 	mov	r0, r4
         4fb68:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardConfiguration(unsigned long const)
 * Address: 0004fb6c
 */
TCardConfiguration*  TCardPCMCIA::GetCardConfiguration(const ULong configNumber) {
    /*
         4fb6c:	e1a0c00d 	mov	ip, sp
         4fb70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4fb74:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fb78:	e3a02000 	mov	r2, #0	; 0x0
         4fb7c:	e5b03078 	ldr	r3, [r0, #120]!	; fField120
         4fb80:	e1530001 	cmp	r3, r1
         4fb84:	9a000001 	bls	4fb90 <TCardPCMCIA::GetCardConfiguration(unsigned long const)+0x24>
         4fb88:	eb6e59ed 	bl	1be6344 <CList::$At(long)>
         4fb8c:	e1a02000 	mov	r2, r0
         4fb90:	e1a00002 	mov	r0, r2
         4fb94:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::GetNumOfCardFunctions(void)
 * Address: 0004fb98
 */
ULong			TCardPCMCIA::GetNumOfCardFunctions();					// 1384004 Get the number of card function {
    /*
         4fb98:	e59000c4 	ldr	r0, [r0, #196]	; fField196
         4fb9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPCMCIA::GetCardFunction(unsigned long const)
 * Address: 0004fba0
 */
TCardFunction*	TCardPCMCIA::GetCardFunction(const ULong funcNumber);	// 1384004 Get a card function {
    /*
         4fba0:	e1a0c00d 	mov	ip, sp
         4fba4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4fba8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fbac:	e3a02000 	mov	r2, #0	; 0x0
         4fbb0:	e5b030c4 	ldr	r3, [r0, #196]!	; fField196
         4fbb4:	e1530001 	cmp	r3, r1
         4fbb8:	9a000001 	bls	4fbc4 <TCardPCMCIA::GetCardFunction(unsigned long const)+0x24>
         4fbbc:	eb6e59e0 	bl	1be6344 <CList::$At(long)>
         4fbc0:	e1a02000 	mov	r2, r0
         4fbc4:	e1a00002 	mov	r0, r2
         4fbc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddCardFunction(TCardFunction *)
 * Address: 0004fbcc
 */
TCardFunction*	TCardPCMCIA::AddCardFunction(TCardFunction* cardFunction);// 1384004 Add a new card function {
    /*
         4fbcc:	e1a0c00d 	mov	ip, sp
         4fbd0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4fbd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fbd8:	e1a04001 	mov	r4, r1
         4fbdc:	e1a02001 	mov	r2, r1
         4fbe0:	e5b010c4 	ldr	r1, [r0, #196]!	; fField196
         4fbe4:	eb6e6640 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fbe8:	e1a00004 	mov	r0, r4
         4fbec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPCMCIA::AddFuncSpecificCIS(void)
 * Address: 0004fbf0
 */
NewtonErr		TCardPCMCIA::AddFuncSpecificCIS();						// Add a new copy of function specific TCardPCMCIA to fCISs list {
    /*
         4fbf0:	e1a0c00d 	mov	ip, sp
         4fbf4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4fbf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fbfc:	e1a04000 	mov	r4, r0
         4fc00:	e3a060e9 	mov	r6, #233	; 0xe9
         4fc04:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         4fc08:	e5900090 	ldr	r0, [r0, #144]	; fField144
         4fc0c:	e3300000 	teq	r0, #0	; 0x0
         4fc10:	1a000007 	bne	4fc34 <TCardPCMCIA::AddFuncSpecificCIS(void)+0x44>
         4fc14:	e3a00000 	mov	r0, #0	; 0x0
         4fc18:	eb6e5183 	bl	1be422c <CList::$__ct(void)>
         4fc1c:	e5840090 	str	r0, [r4, #144]	; fField144
         4fc20:	e3300000 	teq	r0, #0	; 0x0
         4fc24:	0a00004f 	beq	4fd68 <TCardPCMCIA::AddFuncSpecificCIS(void)+0x178>
         4fc28:	e1a02004 	mov	r2, r4
         4fc2c:	e5901000 	ldr	r1, [r0]
         4fc30:	eb6e662d 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fc34:	e3a00000 	mov	r0, #0	; 0x0
         4fc38:	eb6df289 	bl	1bcc664 <TCardPCMCIA::$__ct(void)>
         4fc3c:	e1b05000 	movs	r5, r0
         4fc40:	0a000048 	beq	4fd68 <TCardPCMCIA::AddFuncSpecificCIS(void)+0x178>
         4fc44:	e1a02005 	mov	r2, r5
         4fc48:	e5940090 	ldr	r0, [r4, #144]	; fField144
         4fc4c:	e5901000 	ldr	r1, [r0]
         4fc50:	eb6e6625 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4fc54:	e3a06000 	mov	r6, #0	; 0x0
         4fc58:	e5940000 	ldr	r0, [r4]
         4fc5c:	e1a00fa0 	mov	r0, r0, lsr #31
         4fc60:	e5951000 	ldr	r1, [r5]
         4fc64:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
         4fc68:	e1811f80 	orr	r1, r1, r0, lsl #31
         4fc6c:	e5851000 	str	r1, [r5]
         4fc70:	e5940000 	ldr	r0, [r4]
         4fc74:	e1a00080 	mov	r0, r0, lsl #1
         4fc78:	e1a00fa0 	mov	r0, r0, lsr #31
         4fc7c:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         4fc80:	e1810f00 	orr	r0, r1, r0, lsl #30
         4fc84:	e5850000 	str	r0, [r5]
         4fc88:	e5941000 	ldr	r1, [r4]
         4fc8c:	e1a01101 	mov	r1, r1, lsl #2
         4fc90:	e1a01fa1 	mov	r1, r1, lsr #31
         4fc94:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
         4fc98:	e1801e81 	orr	r1, r0, r1, lsl #29
         4fc9c:	e5851000 	str	r1, [r5]
         4fca0:	e5940000 	ldr	r0, [r4]
         4fca4:	e1a00280 	mov	r0, r0, lsl #5
         4fca8:	e1a00fa0 	mov	r0, r0, lsr #31
         4fcac:	e3c11301 	bic	r1, r1, #67108864	; 0x4000000
         4fcb0:	e1810d00 	orr	r0, r1, r0, lsl #26
         4fcb4:	e5850000 	str	r0, [r5]
         4fcb8:	e5941000 	ldr	r1, [r4]
         4fcbc:	e1a01301 	mov	r1, r1, lsl #6
         4fcc0:	e1a01fa1 	mov	r1, r1, lsr #31
         4fcc4:	e3c00402 	bic	r0, r0, #33554432	; 0x2000000
         4fcc8:	e1801c81 	orr	r1, r0, r1, lsl #25
         4fccc:	e5851000 	str	r1, [r5]
         4fcd0:	e5940000 	ldr	r0, [r4]
         4fcd4:	e1a00380 	mov	r0, r0, lsl #7
         4fcd8:	e1a00fa0 	mov	r0, r0, lsr #31
         4fcdc:	e3c11401 	bic	r1, r1, #16777216	; 0x1000000
         4fce0:	e1810c00 	orr	r0, r1, r0, lsl #24
         4fce4:	e5850000 	str	r0, [r5]
         4fce8:	e5941004 	ldr	r1, [r4, #4]	; TCardPCMCIA
         4fcec:	e5851004 	str	r1, [r5, #4]	; TCardPCMCIA
         4fcf0:	e5941018 	ldr	r1, [r4, #24]	; fManufactureId
         4fcf4:	e1a01821 	mov	r1, r1, lsr #16
         4fcf8:	e5c51019 	strb	r1, [r5, #25]	; fField25
         4fcfc:	e1a01441 	mov	r1, r1, asr #8
         4fd00:	e5c51018 	strb	r1, [r5, #24]	; fManufactureId
         4fd04:	e594101a 	ldr	r1, [r4, #26]	; fManufactureIdInfo
         4fd08:	e1a01821 	mov	r1, r1, lsr #16
         4fd0c:	e5c5101b 	strb	r1, [r5, #27]	; fField27
         4fd10:	e1a01441 	mov	r1, r1, asr #8
         4fd14:	e5c5101a 	strb	r1, [r5, #26]	; fManufactureIdInfo
         4fd18:	e5941030 	ldr	r1, [r4, #48]	; fVendorSpecificV2Bytes
         4fd1c:	e5851030 	str	r1, [r5, #48]	; fVendorSpecificV2Bytes
         4fd20:	e5941034 	ldr	r1, [r4, #52]	; fManufacturerName
         4fd24:	e5851034 	str	r1, [r5, #52]	; fManufacturerName
         4fd28:	e5941038 	ldr	r1, [r4, #56]	; fProductName
         4fd2c:	e5851038 	str	r1, [r5, #56]	; fProductName
         4fd30:	e594103c 	ldr	r1, [r4, #60]	; fV1String3
         4fd34:	e585103c 	str	r1, [r5, #60]	; fV1String3
         4fd38:	e5d410dd 	ldrb	r1, [r4, #221]	; fField221
         4fd3c:	e5c510dd 	strb	r1, [r5, #221]	; fField221
         4fd40:	e5d410de 	ldrb	r1, [r4, #222]	; fField222
         4fd44:	e5c510de 	strb	r1, [r5, #222]	; fField222
         4fd48:	e5941090 	ldr	r1, [r4, #144]	; fField144
         4fd4c:	e3800501 	orr	r0, r0, #4194304	; 0x400000
         4fd50:	e5850000 	str	r0, [r5]
         4fd54:	e5851090 	str	r1, [r5, #144]	; fField144
         4fd58:	e5b40090 	ldr	r0, [r4, #144]!	; fField144
         4fd5c:	e5900000 	ldr	r0, [r0]
         4fd60:	e2400001 	sub	r0, r0, #1	; 0x1
         4fd64:	e5c500dc 	strb	r0, [r5, #220]	; fField220
         4fd68:	e1a00006 	mov	r0, r6
         4fd6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

