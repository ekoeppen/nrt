#include "include/TADC.h"

/**
 * Symbol: TADC::SortThemSamples(void)
 * Address: 00021488
 */
TADC::SortThemSamples(void) {
    /*
         21488:	e1a0c00d 	mov	ip, sp
         2148c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         21490:	e24cb004 	sub	fp, ip, #4	; 0x4
         21494:	e1a04000 	mov	r4, r0
         21498:	e3a08000 	mov	r8, #0	; 0x0
         2149c:	e590704c 	ldr	r7, [r0, #76]	; fField76
         214a0:	e5900024 	ldr	r0, [r0, #36]	; fField36
         214a4:	e0840280 	add	r0, r4, r0, lsl #5
         214a8:	e3a05000 	mov	r5, #0	; 0x0
         214ac:	e5b06084 	ldr	r6, [r0, #132]!
         214b0:	e3560000 	cmp	r6, #0	; 0x0
         214b4:	da000007 	ble	214d8 <TADC::SortThemSamples(void)+0x50>
         214b8:	e7972085 	ldr	r2, [r7, r5, lsl #1]
         214bc:	e1a02822 	mov	r2, r2, lsr #16
         214c0:	e1a01005 	mov	r1, r5
         214c4:	e1a00004 	mov	r0, r4
         214c8:	eb691be8 	bl	1a68470 <TADC::$InsertionSort(unsigned long, unsigned long)>
         214cc:	e2855001 	add	r5, r5, #1	; 0x1
         214d0:	e1560005 	cmp	r6, r5
         214d4:	cafffff7 	bgt	214b8 <TADC::SortThemSamples(void)+0x30>
         214d8:	e1a00008 	mov	r0, r8
         214dc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::InsertionSort(unsigned long, unsigned long)
 * Address: 000214e0
 */
TADC::InsertionSort(unsigned long, unsigned long) {
    /*
         214e0:	e3510000 	cmp	r1, #0	; 0x0
         214e4:	da000007 	ble	21508 <TADC::InsertionSort(unsigned long, unsigned long)+0x28>
         214e8:	e0803101 	add	r3, r0, r1, lsl #2
         214ec:	e593c050 	ldr	ip, [r3, #80]	; fField80
         214f0:	e5a3c054 	str	ip, [r3, #84]!	; fField84
         214f4:	e15c0002 	cmp	ip, r2
         214f8:	9a000002 	bls	21508 <TADC::InsertionSort(unsigned long, unsigned long)+0x28>
         214fc:	e2411001 	sub	r1, r1, #1	; 0x1
         21500:	e3510000 	cmp	r1, #0	; 0x0
         21504:	cafffff7 	bgt	214e8 <TADC::InsertionSort(unsigned long, unsigned long)+0x8>
         21508:	e0800101 	add	r0, r0, r1, lsl #2
         2150c:	e5a02054 	str	r2, [r0, #84]!	; fField84
         21510:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADC::ADCTimerIntrptEntry(void)
 * Address: 00021514
 */
TADC::ADCTimerIntrptEntry(void) {
    /*
         21514:	ea691bd1 	b	1a68460 <TADC::$SampleMachine(void)>
    */
}

/**
 * Symbol: TADC::ADCDMAIntrptEntry(void)
 * Address: 00021518
 */
TADC::ADCDMAIntrptEntry(void) {
    /*
         21518:	e1a0c00d 	mov	ip, sp
         2151c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         21520:	e24cb004 	sub	fp, ip, #4	; 0x4
         21524:	e1a04000 	mov	r4, r0
         21528:	e590100c 	ldr	r1, [r0, #12]	; fField12
         2152c:	e2810b02 	add	r0, r1, #2048	; 0x800
         21530:	e5911400 	ldr	r1, [r1, #1024]
         21534:	e5801000 	str	r1, [r0]
         21538:	e3a01000 	mov	r1, #0	; 0x0
         2153c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         21540:	e5801000 	str	r1, [r0]
         21544:	e5940010 	ldr	r0, [r4, #16]	; fField16
         21548:	e59f1028 	ldr	r1, [pc, #28]	; 21578 <TADC::ADCDMAIntrptEntry(void)+0x60>	; fField28
         2154c:	e5810000 	str	r0, [r1]
         21550:	e59f0024 	ldr	r0, [pc, #24]	; 2157c <TADC::ADCDMAIntrptEntry(void)+0x64>	; fField24
         21554:	e3a01001 	mov	r1, #1	; 0x1
         21558:	eb69305f 	bl	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
         2155c:	e3300000 	teq	r0, #0	; 0x0
         21560:	13a0006f 	movne	r0, #111	; 0x6f
         21564:	12800c01 	addne	r0, r0, #256	; 0x100
         21568:	1b6f7256 	blne	1bfdec8 <$ShortTimerDelay(unsigned long)>
         2156c:	e1a00004 	mov	r0, r4
         21570:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         21574:	ea691bb9 	b	1a68460 <TADC::$SampleMachine(void)>
         21578:	0f098400 	swieq	0x00098400
         2157c:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: TADC::FilterSamples(void)
 * Address: 00021580
 */
TADC::FilterSamples(void) {
    /*
         21580:	e1a0c00d 	mov	ip, sp
         21584:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         21588:	e24cb004 	sub	fp, ip, #4	; 0x4
         2158c:	e1a04000 	mov	r4, r0
         21590:	e3a05001 	mov	r5, #1	; 0x1
         21594:	e5900024 	ldr	r0, [r0, #36]	; fField36
         21598:	e0840280 	add	r0, r4, r0, lsl #5
         2159c:	e5d00091 	ldrb	r0, [r0, #145]
         215a0:	e3300000 	teq	r0, #0	; 0x0
         215a4:	1a000003 	bne	215b8 <TADC::FilterSamples(void)+0x38>
         215a8:	e1a00004 	mov	r0, r4
         215ac:	eb691bae 	bl	1a6846c <TADC::$SortThemSamples(void)>
         215b0:	e3300000 	teq	r0, #0	; 0x0
         215b4:	13a05000 	movne	r5, #0	; 0x0
         215b8:	e5941048 	ldr	r1, [r4, #72]	; fField72
         215bc:	e0840101 	add	r0, r4, r1, lsl #2
         215c0:	e5b02050 	ldr	r2, [r0, #80]!	; fField80
         215c4:	e5940054 	ldr	r0, [r4, #84]	; fField84
         215c8:	e0420000 	sub	r0, r2, r0
         215cc:	e5942024 	ldr	r2, [r4, #36]	; fField36
         215d0:	e0842282 	add	r2, r4, r2, lsl #5
         215d4:	e5922078 	ldr	r2, [r2, #120]
         215d8:	e1520000 	cmp	r2, r0
         215dc:	33a00000 	movcc	r0, #0	; 0x0
         215e0:	23a00001 	movcs	r0, #1	; 0x1
         215e4:	e0000005 	and	r0, r0, r5
         215e8:	e21000ff 	ands	r0, r0, #255	; 0xff
         215ec:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         215f0:	e1a020c1 	mov	r2, r1, asr #1
         215f4:	e3510002 	cmp	r1, #2	; 0x2
         215f8:	e0841102 	add	r1, r4, r2, lsl #2
         215fc:	d5911054 	ldrle	r1, [r1, #84]	; fField84
         21600:	da000005 	ble	2161c <TADC::FilterSamples(void)+0x9c>
         21604:	e5912054 	ldr	r2, [r1, #84]	; fField84
         21608:	e1a030a2 	mov	r3, r2, lsr #1
         2160c:	e5912050 	ldr	r2, [r1, #80]	; fField80
         21610:	e0832122 	add	r2, r3, r2, lsr #2
         21614:	e5911058 	ldr	r1, [r1, #88]
         21618:	e0821121 	add	r1, r2, r1, lsr #2
         2161c:	e5a41040 	str	r1, [r4, #64]!	; fField64
         21620:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::ReadSamples(void)
 * Address: 00021624
 */
TADC::ReadSamples(void) {
    /*
         21624:	e1a0c00d 	mov	ip, sp
         21628:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2162c:	e24cb004 	sub	fp, ip, #4	; 0x4
         21630:	e1a04000 	mov	r4, r0
         21634:	e3a0a001 	mov	sl, #1	; 0x1
         21638:	e5900024 	ldr	r0, [r0, #36]	; fField36
         2163c:	e0840280 	add	r0, r4, r0, lsl #5
         21640:	e5d00091 	ldrb	r0, [r0, #145]
         21644:	e3300000 	teq	r0, #0	; 0x0
         21648:	0a000048 	beq	21770 <TADC::ReadSamples(void)+0x14c>
         2164c:	e3e09000 	mvn	r9, #0	; 0x0
         21650:	e59f00e8 	ldr	r0, [pc, #e8]	; 21740 <TADC::ReadSamples(void)+0x11c>
         21654:	e1a05000 	mov	r5, r0
         21658:	e3a01002 	mov	r1, #2	; 0x2
         2165c:	eb693018 	bl	1a6d6c4 <TBIOInterface::$BIOUnSafeReadRegister(int)>
         21660:	e3808902 	orr	r8, r0, #32768	; 0x8000
         21664:	e3a0700a 	mov	r7, #10	; 0xa
         21668:	e1a02008 	mov	r2, r8
         2166c:	e1a00005 	mov	r0, r5
         21670:	e3a01002 	mov	r1, #2	; 0x2
         21674:	eb693016 	bl	1a6d6d4 <TBIOInterface::$BIOUnSafeWriteCommand(int, unsigned long)>
         21678:	e3a06000 	mov	r6, #0	; 0x0
         2167c:	e5940048 	ldr	r0, [r4, #72]	; fField72
         21680:	e3500000 	cmp	r0, #0	; 0x0
         21684:	9a000032 	bls	21754 <TADC::ReadSamples(void)+0x130>
         21688:	e1a00005 	mov	r0, r5
         2168c:	e3a01001 	mov	r1, #1	; 0x1
         21690:	e2811b02 	add	r1, r1, #2048	; 0x800
         21694:	eb693010 	bl	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
         21698:	e3300000 	teq	r0, #0	; 0x0
         2169c:	0a000007 	beq	216c0 <TADC::ReadSamples(void)+0x9c>
         216a0:	e59f009c 	ldr	r0, [pc, #9c]	; 21744 <TADC::ReadSamples(void)+0x120>
         216a4:	e5900000 	ldr	r0, [r0]
         216a8:	e1a02800 	mov	r2, r0, lsl #16
         216ac:	e1a02822 	mov	r2, r2, lsr #16
         216b0:	e1a01006 	mov	r1, r6
         216b4:	e2866001 	add	r6, r6, #1	; 0x1
         216b8:	e1a00004 	mov	r0, r4
         216bc:	eb691b6b 	bl	1a68470 <TADC::$InsertionSort(unsigned long, unsigned long)>
         216c0:	e1a00005 	mov	r0, r5
         216c4:	e3a01004 	mov	r1, #4	; 0x4
         216c8:	eb693003 	bl	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
         216cc:	e3300000 	teq	r0, #0	; 0x0
         216d0:	0a00001c 	beq	21748 <TADC::ReadSamples(void)+0x124>
         216d4:	e1a00005 	mov	r0, r5
         216d8:	e3a01002 	mov	r1, #2	; 0x2
         216dc:	eb692ff7 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         216e0:	e3100902 	tst	r0, #32768	; 0x8000
         216e4:	0a000004 	beq	216fc <TADC::ReadSamples(void)+0xd8>
         216e8:	e1a00005 	mov	r0, r5
         216ec:	e3a01002 	mov	r1, #2	; 0x2
         216f0:	eb692ff2 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         216f4:	e3100902 	tst	r0, #32768	; 0x8000
         216f8:	1afffffa 	bne	216e8 <TADC::ReadSamples(void)+0xc4>
         216fc:	e1a00005 	mov	r0, r5
         21700:	e3a01001 	mov	r1, #1	; 0x1
         21704:	e2811b02 	add	r1, r1, #2048	; 0x800
         21708:	eb692ff3 	bl	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
         2170c:	e3300000 	teq	r0, #0	; 0x0
         21710:	0a000007 	beq	21734 <TADC::ReadSamples(void)+0x110>
         21714:	e59f0028 	ldr	r0, [pc, #28]	; 21744 <TADC::ReadSamples(void)+0x120>	; fField28
         21718:	e5900000 	ldr	r0, [r0]
         2171c:	e1a00005 	mov	r0, r5
         21720:	e3a01001 	mov	r1, #1	; 0x1
         21724:	e2811b02 	add	r1, r1, #2048	; 0x800
         21728:	eb692feb 	bl	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
         2172c:	e3300000 	teq	r0, #0	; 0x0
         21730:	1afffff7 	bne	21714 <TADC::ReadSamples(void)+0xf0>
         21734:	e1a00005 	mov	r0, r5
         21738:	eb692fd4 	bl	1a6d690 <TBIOInterface::$SoftReset(void)>
         2173c:	ea000004 	b	21754 <TADC::ReadSamples(void)+0x130>
         21740:	0c100e98 	ldceq	14, cr0, [r0], -#608
         21744:	0f048800 	swieq	0x00048800
         21748:	e5940048 	ldr	r0, [r4, #72]	; fField72
         2174c:	e1500006 	cmp	r0, r6
         21750:	8affffcc 	bhi	21688 <TADC::ReadSamples(void)+0x64>
         21754:	e5940048 	ldr	r0, [r4, #72]	; fField72
         21758:	e1300006 	teq	r0, r6
         2175c:	0a000003 	beq	21770 <TADC::ReadSamples(void)+0x14c>
         21760:	e2477001 	sub	r7, r7, #1	; 0x1
         21764:	e3390000 	teq	r9, #0	; 0x0
         21768:	13370000 	teqne	r7, #0	; 0x0
         2176c:	1affffbd 	bne	21668 <TADC::ReadSamples(void)+0x44>
         21770:	e1a0000a 	mov	r0, sl
         21774:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::TestSetPenWait(void)
 * Address: 00021778
 */
TADC::TestSetPenWait(void) {
    /*
         21778:	e1a0c00d 	mov	ip, sp
         2177c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         21780:	e24cb004 	sub	fp, ip, #4	; 0x4
         21784:	e1a04000 	mov	r4, r0
         21788:	e5d0003b 	ldrb	r0, [r0, #59]	; fField59
         2178c:	e3300000 	teq	r0, #0	; 0x0
         21790:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         21794:	e3a05000 	mov	r5, #0	; 0x0
         21798:	e5940028 	ldr	r0, [r4, #40]	; fField40
         2179c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         217a0:	e1310000 	teq	r1, r0
         217a4:	05d40038 	ldreqb	r0, [r4, #56]	; fField56
         217a8:	03300000 	teqeq	r0, #0	; 0x0
         217ac:	05940018 	ldreq	r0, [r4, #24]	; fField24
         217b0:	03300000 	teqeq	r0, #0	; 0x0
         217b4:	1a000008 	bne	217dc <TADC::TestSetPenWait(void)+0x64>
         217b8:	e5845020 	str	r5, [r4, #32]	; fField32
         217bc:	e59f0070 	ldr	r0, [pc, #70]	; 21834 <TADC::TestSetPenWait(void)+0xbc>
         217c0:	e3a02018 	mov	r2, #24	; 0x18
         217c4:	e2822a02 	add	r2, r2, #8192	; 0x2000
         217c8:	e3a01000 	mov	r1, #0	; 0x0
         217cc:	eb692fbf 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         217d0:	e3a0006f 	mov	r0, #111	; 0x6f
         217d4:	e2800c01 	add	r0, r0, #256	; 0x100
         217d8:	eb6f71ba 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         217dc:	e5d40039 	ldrb	r0, [r4, #57]	; fField57
         217e0:	e3300000 	teq	r0, #0	; 0x0
         217e4:	05940018 	ldreq	r0, [r4, #24]	; fField24
         217e8:	03300000 	teqeq	r0, #0	; 0x0
         217ec:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         217f0:	e5d4003a 	ldrb	r0, [r4, #58]	; fField58
         217f4:	e3300000 	teq	r0, #0	; 0x0
         217f8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         217fc:	e594100c 	ldr	r1, [r4, #12]	; fField12
         21800:	e2810b02 	add	r0, r1, #2048	; 0x800
         21804:	e5911400 	ldr	r1, [r1, #1024]
         21808:	e5801000 	str	r1, [r0]
         2180c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         21810:	e5805000 	str	r5, [r0]
         21814:	e5940010 	ldr	r0, [r4, #16]	; fField16
         21818:	e59f1018 	ldr	r1, [pc, #18]	; 21838 <TADC::TestSetPenWait(void)+0xc0>
         2181c:	e5810000 	str	r0, [r1]
         21820:	eb69233d 	bl	1a6a51c <$GetDMAManagerObject(void)>
         21824:	e3a01004 	mov	r1, #4	; 0x4
         21828:	eb691f1f 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
         2182c:	e5c4503a 	strb	r5, [r4, #58]	; fField58
         21830:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         21834:	0c100e98 	ldceq	14, cr0, [r0], -#608
         21838:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: TADC::ShutDown(void)
 * Address: 0002183c
 */
TADC::ShutDown(void) {
    /*
         2183c:	e1a0c00d 	mov	ip, sp
         21840:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         21844:	e24cb004 	sub	fp, ip, #4	; 0x4
         21848:	e1a04000 	mov	r4, r0
         2184c:	e5905024 	ldr	r5, [r0, #36]	; fField36
         21850:	eb0dc49a 	bl	392ac0 <EnterAtomic>
         21854:	e5940028 	ldr	r0, [r4, #40]	; fField40
         21858:	e1300005 	teq	r0, r5
         2185c:	0a000004 	beq	21874 <TADC::ShutDown(void)+0x38>
         21860:	eb0dc4ad 	bl	392b1c <ExitAtomic>
         21864:	eb0dc495 	bl	392ac0 <EnterAtomic>
         21868:	e5940028 	ldr	r0, [r4, #40]	; fField40
         2186c:	e1300005 	teq	r0, r5
         21870:	1afffffa 	bne	21860 <TADC::ShutDown(void)+0x24>
         21874:	e3a06000 	mov	r6, #0	; 0x0
         21878:	e3a00001 	mov	r0, #1	; 0x1
         2187c:	e5846030 	str	r6, [r4, #48]	; fField48
         21880:	e5c4003c 	strb	r0, [r4, #60]	; fField60
         21884:	e5c4603b 	strb	r6, [r4, #59]	; fField59
         21888:	e59f0080 	ldr	r0, [pc, #80]	; 21910 <TADC::ShutDown(void)+0xd4>	; fField80
         2188c:	e1a05000 	mov	r5, r0
         21890:	e3a02901 	mov	r2, #16384	; 0x4000
         21894:	e3a01001 	mov	r1, #1	; 0x1
         21898:	eb692f8c 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         2189c:	e1a00005 	mov	r0, r5
         218a0:	e3a02a01 	mov	r2, #4096	; 0x1000
         218a4:	e3a01001 	mov	r1, #1	; 0x1
         218a8:	eb692f88 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         218ac:	e1a00005 	mov	r0, r5
         218b0:	e3a02000 	mov	r2, #0	; 0x0
         218b4:	e3a01000 	mov	r1, #0	; 0x0
         218b8:	eb692f84 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         218bc:	e5d40039 	ldrb	r0, [r4, #57]	; fField57
         218c0:	e3300000 	teq	r0, #0	; 0x0
         218c4:	1a00000f 	bne	21908 <TADC::ShutDown(void)+0xcc>
         218c8:	e5d4003a 	ldrb	r0, [r4, #58]	; fField58
         218cc:	e3300000 	teq	r0, #0	; 0x0
         218d0:	0a00000c 	beq	21908 <TADC::ShutDown(void)+0xcc>
         218d4:	e594100c 	ldr	r1, [r4, #12]	; fField12
         218d8:	e2810b02 	add	r0, r1, #2048	; 0x800
         218dc:	e5911400 	ldr	r1, [r1, #1024]
         218e0:	e5801000 	str	r1, [r0]
         218e4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         218e8:	e5806000 	str	r6, [r0]
         218ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         218f0:	e59f101c 	ldr	r1, [pc, #1c]	; 21914 <TADC::ShutDown(void)+0xd8>
         218f4:	e5810000 	str	r0, [r1]
         218f8:	eb692307 	bl	1a6a51c <$GetDMAManagerObject(void)>
         218fc:	e3a01004 	mov	r1, #4	; 0x4
         21900:	eb691ee9 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
         21904:	e5c4603a 	strb	r6, [r4, #58]	; fField58
         21908:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         2190c:	ea0dc482 	b	392b1c <ExitAtomic>
         21910:	0c100e98 	ldceq	14, cr0, [r0], -#608
         21914:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: TADC::WakeUp(void)
 * Address: 00021918
 */
TADC::WakeUp(void) {
    /*
         21918:	e3a02000 	mov	r2, #0	; 0x0
         2191c:	e2803024 	add	r3, r0, #36	; 0x24
         21920:	e893000a 	ldmia	r3, {r1, r3}
         21924:	e1330001 	teq	r3, r1
         21928:	0a000009 	beq	21954 <TADC::WakeUp(void)+0x3c>
         2192c:	e0803281 	add	r3, r0, r1, lsl #5
         21930:	e5c32090 	strb	r2, [r3, #144]
         21934:	e2911001 	adds	r1, r1, #1	; 0x1
         21938:	e5a32074 	str	r2, [r3, #116]!
         2193c:	42611000 	rsbmi	r1, r1, #0	; 0x0
         21940:	e2011007 	and	r1, r1, #7	; 0x7
         21944:	42611000 	rsbmi	r1, r1, #0	; 0x0
         21948:	e5903028 	ldr	r3, [r0, #40]	; fField40
         2194c:	e1330001 	teq	r3, r1
         21950:	1afffff5 	bne	2192c <TADC::WakeUp(void)+0x14>
         21954:	e5801024 	str	r1, [r0, #36]	; fField36
         21958:	e5c0203c 	strb	r2, [r0, #60]	; fField60
         2195c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADC::PrimeADCPenWait(void)
 * Address: 00021960
 */
TADC::PrimeADCPenWait(void) {
    /*
         21960:	e3a01001 	mov	r1, #1	; 0x1
         21964:	e5c0103b 	strb	r1, [r0, #59]	; fField59
         21968:	ea691ec5 	b	1a69484 <TADC::$TestSetPenWait(void)>
    */
}

/**
 * Symbol: TADC::__ct(void)
 * Address: 0002196c
 */
TADC::TADC(void) {
    /*
         2196c:	e1a0c00d 	mov	ip, sp
         21970:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         21974:	e24cb004 	sub	fp, ip, #4	; 0x4
         21978:	e3300000 	teq	r0, #0	; 0x0
         2197c:	1a000003 	bne	21990 <TADC::__ct(void)+0x24>
         21980:	e3a00f5d 	mov	r0, #372	; 0x174
         21984:	eb6eb36b 	bl	1bce738 <$__nw(unsigned int)>
         21988:	e3300000 	teq	r0, #0	; 0x0
         2198c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         21990:	e3a01001 	mov	r1, #1	; 0x1
         21994:	e5c01039 	strb	r1, [r0, #57]	; fField57
         21998:	e3a01008 	mov	r1, #8	; 0x8
         2199c:	e5801044 	str	r1, [r0, #68]	; fField68
         219a0:	e3a02000 	mov	r2, #0	; 0x0
         219a4:	e5801048 	str	r1, [r0, #72]	; fField72
         219a8:	e5802020 	str	r2, [r0, #32]	; fField32
         219ac:	e5802018 	str	r2, [r0, #24]	; fField24
         219b0:	e5802024 	str	r2, [r0, #36]	; fField36
         219b4:	e5802028 	str	r2, [r0, #40]	; fField40
         219b8:	e5c02038 	strb	r2, [r0, #56]	; fField56
         219bc:	e5c0203b 	strb	r2, [r0, #59]	; fField59
         219c0:	e3a0100c 	mov	r1, #12	; 0xc
         219c4:	e580102c 	str	r1, [r0, #44]	; fField44
         219c8:	e5802034 	str	r2, [r0, #52]	; fField52
         219cc:	e5c0203a 	strb	r2, [r0, #58]	; fField58
         219d0:	e3a01000 	mov	r1, #0	; 0x0
         219d4:	e0803281 	add	r3, r0, r1, lsl #5
         219d8:	e5832074 	str	r2, [r3, #116]
         219dc:	e5c32090 	strb	r2, [r3, #144]
         219e0:	e2811001 	add	r1, r1, #1	; 0x1
         219e4:	e3510008 	cmp	r1, #8	; 0x8
         219e8:	bafffff9 	blt	219d4 <TADC::__ct(void)+0x68>
         219ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADC::ClearADCPenWait(void)
 * Address: 000219f0
 */
TADC::ClearADCPenWait(void) {
    /*
         219f0:	e3a01000 	mov	r1, #0	; 0x0
         219f4:	e5c0103b 	strb	r1, [r0, #59]	; fField59
         219f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADC::Discharge(void)
 * Address: 000219fc
 */
TADC::Discharge(void) {
    /*
         219fc:	e2802024 	add	r2, r0, #36	; 0x24
         21a00:	e8920006 	ldmia	r2, {r1, r2}
         21a04:	e1310002 	teq	r1, r2
         21a08:	05d01038 	ldreqb	r1, [r0, #56]	; fField56
         21a0c:	03310000 	teqeq	r1, #0	; 0x0
         21a10:	11a0f00e 	movne	pc, lr
         21a14:	e3a01000 	mov	r1, #0	; 0x0
         21a18:	e5a01020 	str	r1, [r0, #32]!	; fField32
         21a1c:	e59f0004 	ldr	r0, [pc, #4]	; 21a28 <TADC::Discharge(void)+0x2c>	; fField4
         21a20:	e3a02000 	mov	r2, #0	; 0x0
         21a24:	ea692f29 	b	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         21a28:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: TADC::SetADCXfer(void)
 * Address: 00021a2c
 */
TADC::SetADCXfer(void) {
    /*
         21a2c:	e1a0c00d 	mov	ip, sp
         21a30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         21a34:	e24cb004 	sub	fp, ip, #4	; 0x4
         21a38:	e1a04000 	mov	r4, r0
         21a3c:	e3a01001 	mov	r1, #1	; 0x1
         21a40:	e5c01038 	strb	r1, [r0, #56]	; fField56
         21a44:	e5900024 	ldr	r0, [r0, #36]	; fField36
         21a48:	e0840280 	add	r0, r4, r0, lsl #5
         21a4c:	e5900084 	ldr	r0, [r0, #132]
         21a50:	e1a02080 	mov	r2, r0, lsl #1
         21a54:	e594300c 	ldr	r3, [r4, #12]	; fField12
         21a58:	e2830b02 	add	r0, r3, #2048	; 0x800
         21a5c:	e5933400 	ldr	r3, [r3, #1024]
         21a60:	e5803000 	str	r3, [r0]
         21a64:	e3a05000 	mov	r5, #0	; 0x0
         21a68:	e594000c 	ldr	r0, [r4, #12]	; fField12
         21a6c:	e5805000 	str	r5, [r0]
         21a70:	e5940010 	ldr	r0, [r4, #16]	; fField16
         21a74:	e59f307c 	ldr	r3, [pc, #7c]	; 21af8 <TADC::SetADCXfer(void)+0xcc>
         21a78:	e5830000 	str	r0, [r3]
         21a7c:	e3a03020 	mov	r3, #32	; 0x20
         21a80:	e5940008 	ldr	r0, [r4, #8]	; fField8
         21a84:	e5a03c00 	str	r3, [r0, #3072]!
         21a88:	e5940008 	ldr	r0, [r4, #8]	; fField8
         21a8c:	e5943050 	ldr	r3, [r4, #80]	; fField80
         21a90:	e5a03400 	str	r3, [r0, #1024]!
         21a94:	e5940008 	ldr	r0, [r4, #8]	; fField8
         21a98:	e2800b05 	add	r0, r0, #5120	; 0x1400
         21a9c:	e5802000 	str	r2, [r0]
         21aa0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         21aa4:	e2800b06 	add	r0, r0, #6144	; 0x1800
         21aa8:	e5805000 	str	r5, [r0]
         21aac:	e594000c 	ldr	r0, [r4, #12]	; fField12
         21ab0:	e5801000 	str	r1, [r0]
         21ab4:	e3a01001 	mov	r1, #1	; 0x1
         21ab8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         21abc:	eb6f68c5 	bl	1bfbdd8 <$EnableInterrupt>
         21ac0:	e3a01926 	mov	r1, #622592	; 0x98000
         21ac4:	e281140f 	add	r1, r1, #251658240	; 0xf000000
         21ac8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         21acc:	e5810000 	str	r0, [r1]
         21ad0:	e59f0024 	ldr	r0, [pc, #24]	; 21afc <TADC::SetADCXfer(void)+0xd0>	; fField24
         21ad4:	e1a04000 	mov	r4, r0
         21ad8:	e3a01002 	mov	r1, #2	; 0x2
         21adc:	eb692ef8 	bl	1a6d6c4 <TBIOInterface::$BIOUnSafeReadRegister(int)>
         21ae0:	e3802902 	orr	r2, r0, #32768	; 0x8000
         21ae4:	e1a00004 	mov	r0, r4
         21ae8:	e3a01002 	mov	r1, #2	; 0x2
         21aec:	eb692ef8 	bl	1a6d6d4 <TBIOInterface::$BIOUnSafeWriteCommand(int, unsigned long)>
         21af0:	e1a00005 	mov	r0, r5
         21af4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         21af8:	0f098400 	swieq	0x00098400
         21afc:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: TADC::DumpRegs(void)
 * Address: 00021b00
 */
TADC::DumpRegs(void) {
    /*
         21b00:	e1a0c00d 	mov	ip, sp
         21b04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         21b08:	e24cb004 	sub	fp, ip, #4	; 0x4
         21b0c:	e3a00912 	mov	r0, #294912	; 0x48000
         21b10:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         21b14:	e5900000 	ldr	r0, [r0]
         21b18:	e3a00a4a 	mov	r0, #303104	; 0x4a000
         21b1c:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         21b20:	e5900000 	ldr	r0, [r0]
         21b24:	e59f0040 	ldr	r0, [pc, #40]	; 21b6c <TADC::DumpRegs(void)+0x6c>	; fField40
         21b28:	e1a04000 	mov	r4, r0
         21b2c:	e3a01013 	mov	r1, #19	; 0x13
         21b30:	eb692ee2 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21b34:	e1a00004 	mov	r0, r4
         21b38:	e3a01012 	mov	r1, #18	; 0x12
         21b3c:	eb692edf 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21b40:	e1a00004 	mov	r0, r4
         21b44:	e3a01011 	mov	r1, #17	; 0x11
         21b48:	eb692edc 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21b4c:	e1a00004 	mov	r0, r4
         21b50:	e3a01000 	mov	r1, #0	; 0x0
         21b54:	eb692ed9 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21b58:	e1a00004 	mov	r0, r4
         21b5c:	e3a01002 	mov	r1, #2	; 0x2
         21b60:	eb692ed6 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21b64:	e3a00000 	mov	r0, #0	; 0x0
         21b68:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         21b6c:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: TADC::Init(void)
 * Address: 00021b70
 */
TADC::Init(void) {
    /*
         21b70:	e1a0c00d 	mov	ip, sp
         21b74:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         21b78:	e24cb004 	sub	fp, ip, #4	; 0x4
         21b7c:	e1a04000 	mov	r4, r0
         21b80:	e2801f5d 	add	r1, r0, #372	; 0x174
         21b84:	e3a02000 	mov	r2, #0	; 0x0
         21b88:	eb6ed3f1 	bl	1bd6b54 <$LockHeapRange>
         21b8c:	e1a00004 	mov	r0, r4
         21b90:	ebffffda 	bl	21b00 <TADC::DumpRegs(void)>
         21b94:	eb692264 	bl	1a6a52c <$InitIRQTimerObject(void)>
         21b98:	e1a02004 	mov	r2, r4
         21b9c:	e59f11b0 	ldr	r1, [pc, #1b0]	; 21d54 <TADC::Init(void)+0x1e4>
         21ba0:	e59f01b0 	ldr	r0, [pc, #1b0]	; 21d58 <TADC::Init(void)+0x1e8>
         21ba4:	e5900000 	ldr	r0, [r0]
         21ba8:	eb692263 	bl	1a6a53c <TIRQTimer::$AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
         21bac:	e5840000 	str	r0, [r4]
         21bb0:	e24dd010 	sub	sp, sp, #16	; 0x10
         21bb4:	eb692258 	bl	1a6a51c <$GetDMAManagerObject(void)>
         21bb8:	e1a0200d 	mov	r2, sp
         21bbc:	e3a01004 	mov	r1, #4	; 0x4
         21bc0:	eb691e37 	bl	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
         21bc4:	e59d0000 	ldr	r0, [sp]
         21bc8:	e5840008 	str	r0, [r4, #8]	; fField8
         21bcc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         21bd0:	e584000c 	str	r0, [r4, #12]	; fField12
         21bd4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         21bd8:	e5840010 	str	r0, [r4, #16]	; fField16
         21bdc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         21be0:	e3a07000 	mov	r7, #0	; 0x0
         21be4:	e5840014 	str	r0, [r4, #20]	; fField20
         21be8:	e5c4703a 	strb	r7, [r4, #58]	; fField58
         21bec:	e59f2168 	ldr	r2, [pc, #168]	; 21d5c <TADC::Init(void)+0x1ec>
         21bf0:	e1a01004 	mov	r1, r4
         21bf4:	e3a03001 	mov	r3, #1	; 0x1
         21bf8:	eb6edc1b 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
         21bfc:	e1a01007 	mov	r1, r7
         21c00:	e3a08001 	mov	r8, #1	; 0x1
         21c04:	e1a02008 	mov	r2, r8
         21c08:	e5840004 	str	r0, [r4, #4]	; fField4
         21c0c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         21c10:	eb6f9e38 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
         21c14:	e594000c 	ldr	r0, [r4, #12]	; fField12
         21c18:	e5a08c00 	str	r8, [r0, #3072]!
         21c1c:	e3a00010 	mov	r0, #16	; 0x10
         21c20:	eb6f014a 	bl	1be2150 <$NewWiredPtr>
         21c24:	e584004c 	str	r0, [r4, #76]	; fField76
         21c28:	eb02dea8 	bl	d96d0 <VToP(unsigned long)>
         21c2c:	e5840050 	str	r0, [r4, #80]	; fField80
         21c30:	e59f0128 	ldr	r0, [pc, #128]	; 21d60 <TADC::Init(void)+0x1f0>
         21c34:	e1a05000 	mov	r5, r0
         21c38:	e3a0100b 	mov	r1, #11	; 0xb
         21c3c:	eb692e9f 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21c40:	e3802d0a 	orr	r2, r0, #640	; 0x280
         21c44:	e1a00005 	mov	r0, r5
         21c48:	e3a0100b 	mov	r1, #11	; 0xb
         21c4c:	eb692e9f 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         21c50:	e59f610c 	ldr	r6, [pc, #10c]	; 21d64 <TADC::Init(void)+0x1f4>
         21c54:	e5960014 	ldr	r0, [r6, #20]	; fField20
         21c58:	e280cd9d 	add	ip, r0, #10048	; 0x2740
         21c5c:	e37c0023 	cmn	ip, #35	; 0x23
         21c60:	1280cd9d 	addne	ip, r0, #10048	; 0x2740
         21c64:	137c0024 	cmnne	ip, #36	; 0x24
         21c68:	1280cd9d 	addne	ip, r0, #10048	; 0x2740
         21c6c:	137c0020 	cmnne	ip, #32	; 0x20
         21c70:	159f00f0 	ldrne	r0, [pc, #f0]	; 21d68 <TADC::Init(void)+0x1f8>
         21c74:	1a000018 	bne	21cdc <TADC::Init(void)+0x16c>
         21c78:	e1a00005 	mov	r0, r5
         21c7c:	e3a02008 	mov	r2, #8	; 0x8
         21c80:	e3a01002 	mov	r1, #2	; 0x2
         21c84:	eb692e91 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         21c88:	e1a00005 	mov	r0, r5
         21c8c:	e3a01002 	mov	r1, #2	; 0x2
         21c90:	eb692e8a 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21c94:	e1a00005 	mov	r0, r5
         21c98:	e3a01002 	mov	r1, #2	; 0x2
         21c9c:	eb692e87 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21ca0:	e3100008 	tst	r0, #8	; 0x8
         21ca4:	1afffffa 	bne	21c94 <TADC::Init(void)+0x124>
         21ca8:	e1a00005 	mov	r0, r5
         21cac:	e3a02902 	mov	r2, #32768	; 0x8000
         21cb0:	e3a01000 	mov	r1, #0	; 0x0
         21cb4:	eb692e85 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         21cb8:	e1a00005 	mov	r0, r5
         21cbc:	e3a01002 	mov	r1, #2	; 0x2
         21cc0:	eb692e7e 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21cc4:	e1a00005 	mov	r0, r5
         21cc8:	e3a01000 	mov	r1, #0	; 0x0
         21ccc:	eb692e7b 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         21cd0:	e3100902 	tst	r0, #32768	; 0x8000
         21cd4:	1afffffa 	bne	21cc4 <TADC::Init(void)+0x154>
         21cd8:	e59f008c 	ldr	r0, [pc, #8c]	; 21d6c <TADC::Init(void)+0x1fc>	; fField8
         21cdc:	e5a60138 	str	r0, [r6, #312]!
         21ce0:	e5c48039 	strb	r8, [r4, #57]	; fField57
         21ce4:	e3a00008 	mov	r0, #8	; 0x8
         21ce8:	e5840044 	str	r0, [r4, #68]	; fField68
         21cec:	e5840048 	str	r0, [r4, #72]	; fField72
         21cf0:	e5847020 	str	r7, [r4, #32]	; fField32
         21cf4:	e5847018 	str	r7, [r4, #24]	; fField24
         21cf8:	e5847024 	str	r7, [r4, #36]	; fField36
         21cfc:	e5847028 	str	r7, [r4, #40]	; fField40
         21d00:	e5c47038 	strb	r7, [r4, #56]	; fField56
         21d04:	e5c4703b 	strb	r7, [r4, #59]	; fField59
         21d08:	e3a0000c 	mov	r0, #12	; 0xc
         21d0c:	e584002c 	str	r0, [r4, #44]	; fField44
         21d10:	e5847034 	str	r7, [r4, #52]	; fField52
         21d14:	e5c4703c 	strb	r7, [r4, #60]	; fField60
         21d18:	e3a00000 	mov	r0, #0	; 0x0
         21d1c:	e0841280 	add	r1, r4, r0, lsl #5
         21d20:	e5817074 	str	r7, [r1, #116]
         21d24:	e5c17090 	strb	r7, [r1, #144]
         21d28:	e2800001 	add	r0, r0, #1	; 0x1
         21d2c:	e3500008 	cmp	r0, #8	; 0x8
         21d30:	bafffff9 	blt	21d1c <TADC::Init(void)+0x1ac>
         21d34:	e59f0034 	ldr	r0, [pc, #34]	; 21d70 <TADC::Init(void)+0x200>
         21d38:	e5d00000 	ldrb	r0, [r0]
         21d3c:	e3300000 	teq	r0, #0	; 0x0
         21d40:	0a00000b 	beq	21d74 <TADC::Init(void)+0x204>
         21d44:	e1a00004 	mov	r0, r4
         21d48:	e3a01000 	mov	r1, #0	; 0x0
         21d4c:	eb6919c5 	bl	1a68468 <TADC::$UsePolling(unsigned char)>
         21d50:	ea000009 	b	21d7c <TADC::Init(void)+0x20c>
         21d54:	01a68474 	moveq	r8, r4, ror r4
         21d58:	0c100f74 	ldceq	15, cr0, [r0], -#464
         21d5c:	01a68478 	moveq	r8, r8, ror r4
         21d60:	0c100e98 	ldceq	14, cr0, [r0], -#608
         21d64:	0c1061c4 	ldfeqs	f6, [r0], -#784
         21d68:	47303044 	ldrmi	r3, [r0, -r4, asr #32]!	; fField32
         21d6c:	b8cfcfbb 	stmltia	pc, {r0, r1, r3, r4, r5, r7, r8, r9, sl, fp, lr, pc}^
         21d70:	0c100e80 	ldceq	14, cr0, [r0], -#512
         21d74:	e3a00007 	mov	r0, #7	; 0x7
         21d78:	e5a40044 	str	r0, [r4, #68]!	; fField68
         21d7c:	e1a00007 	mov	r0, r7
         21d80:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)
 * Address: 00021d84
 */
TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *) {
    /*
         21d84:	e1a0c00d 	mov	ip, sp
         21d88:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         21d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         21d90:	e1a04000 	mov	r4, r0
         21d94:	e1a07001 	mov	r7, r1
         21d98:	e1a06002 	mov	r6, r2
         21d9c:	e1a05003 	mov	r5, r3
         21da0:	e3a08000 	mov	r8, #0	; 0x0
         21da4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
         21da8:	eb0dc344 	bl	392ac0 <EnterAtomic>
         21dac:	e5941028 	ldr	r1, [r4, #40]	; fField40
         21db0:	e0840281 	add	r0, r4, r1, lsl #5
         21db4:	e5902074 	ldr	r2, [r0, #116]
         21db8:	e3320000 	teq	r2, #0	; 0x0
         21dbc:	1a000028 	bne	21e64 <TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)+0xe0>
         21dc0:	e3a02001 	mov	r2, #1	; 0x1
         21dc4:	e5802074 	str	r2, [r0, #116]
         21dc8:	e5d4303c 	ldrb	r3, [r4, #60]	; fField60
         21dcc:	e3330000 	teq	r3, #0	; 0x0
         21dd0:	15c02091 	strneb	r2, [r0, #145]
         21dd4:	05d43039 	ldreqb	r3, [r4, #57]	; fField57
         21dd8:	05c03091 	streqb	r3, [r0, #145]
         21ddc:	e5943044 	ldr	r3, [r4, #68]	; fField68
         21de0:	e5803084 	str	r3, [r0, #132]
         21de4:	e594302c 	ldr	r3, [r4, #44]	; fField44
         21de8:	e2800088 	add	r0, r0, #136	; 0x88
         21dec:	e8800088 	stmia	r0, {r3, r7}
         21df0:	e2400008 	sub	r0, r0, #8	; 0x8
         21df4:	e8200220 	stmda	r0!, {r5, r9}
         21df8:	e4006078 	str	r6, [r0], -#120
         21dfc:	e5c02090 	strb	r2, [r0, #144]
         21e00:	e2910001 	adds	r0, r1, #1	; 0x1
         21e04:	42600000 	rsbmi	r0, r0, #0	; 0x0
         21e08:	e2000007 	and	r0, r0, #7	; 0x7
         21e0c:	42600000 	rsbmi	r0, r0, #0	; 0x0
         21e10:	e5840028 	str	r0, [r4, #40]	; fField40
         21e14:	e5940018 	ldr	r0, [r4, #24]	; fField24
         21e18:	e3300000 	teq	r0, #0	; 0x0
         21e1c:	1a000011 	bne	21e68 <TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)+0xe4>
         21e20:	e1a05002 	mov	r5, r2
         21e24:	e5842018 	str	r2, [r4, #24]	; fField24
         21e28:	e5842030 	str	r2, [r4, #48]	; fField48
         21e2c:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
         21e30:	e3300000 	teq	r0, #0	; 0x0
         21e34:	05d40039 	ldreqb	r0, [r4, #57]	; fField57
         21e38:	03300000 	teqeq	r0, #0	; 0x0
         21e3c:	05d4003a 	ldreqb	r0, [r4, #58]	; fField58
         21e40:	03300000 	teqeq	r0, #0	; 0x0
         21e44:	1a000003 	bne	21e58 <TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)+0xd4>
         21e48:	eb6921b3 	bl	1a6a51c <$GetDMAManagerObject(void)>
         21e4c:	e3a01004 	mov	r1, #4	; 0x4
         21e50:	eb691d94 	bl	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
         21e54:	e5c4503a 	strb	r5, [r4, #58]	; fField58
         21e58:	e1a00004 	mov	r0, r4
         21e5c:	eb69197f 	bl	1a68460 <TADC::$SampleMachine(void)>
         21e60:	ea000000 	b	21e68 <TADC::GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)+0xe4>
         21e64:	e3e08c2b 	mvn	r8, #11008	; 0x2b00
         21e68:	eb0dc32b 	bl	392b1c <ExitAtomic>
         21e6c:	e1a00008 	mov	r0, r8
         21e70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::SampleMachine(void)
 * Address: 00021e74
 */
TADC::SampleMachine(void) {
    /*
         21e74:	e1a0c00d 	mov	ip, sp
         21e78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         21e7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         21e80:	e1a04000 	mov	r4, r0
         21e84:	e5905024 	ldr	r5, [r0, #36]	; fField36
         21e88:	e3a00000 	mov	r0, #0	; 0x0
         21e8c:	e5c40038 	strb	r0, [r4, #56]	; fField56
         21e90:	e0841285 	add	r1, r4, r5, lsl #5
         21e94:	e3a0a0ad 	mov	sl, #173	; 0xad
         21e98:	e28aacab 	add	sl, sl, #43776	; 0xab00
         21e9c:	e3a09004 	mov	r9, #4	; 0x4
         21ea0:	e5b16088 	ldr	r6, [r1, #136]!
         21ea4:	e59f8000 	ldr	r8, [pc, #0]	; 21eac <TADC::SampleMachine(void)+0x38>
         21ea8:	ea000068 	b	22050 <TADC::SampleMachine(void)+0x1dc>
         21eac:	0c100e98 	ldceq	14, cr0, [r0], -#608
         21eb0:	e5940030 	ldr	r0, [r4, #48]	; fField48
         21eb4:	e3500005 	cmp	r0, #5	; 0x5
         21eb8:	908ff100 	addls	pc, pc, r0, lsl #2
         21ebc:	ea000060 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21ec0:	ea00005f 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21ec4:	ea000010 	b	21f0c <TADC::SampleMachine(void)+0x98>
         21ec8:	ea000019 	b	21f34 <TADC::SampleMachine(void)+0xc0>
         21ecc:	ea00005c 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21ed0:	ea00001e 	b	21f50 <TADC::SampleMachine(void)+0xdc>
         21ed4:	e0847285 	add	r7, r4, r5, lsl #5
         21ed8:	e597008c 	ldr	r0, [r7, #140]
         21edc:	e2400006 	sub	r0, r0, #6	; 0x6
         21ee0:	e3500005 	cmp	r0, #5	; 0x5
         21ee4:	908ff100 	addls	pc, pc, r0, lsl #2
         21ee8:	ea000032 	b	21fb8 <TADC::SampleMachine(void)+0x144>
         21eec:	ea00002d 	b	21fa8 <TADC::SampleMachine(void)+0x134>
         21ef0:	ea00002c 	b	21fa8 <TADC::SampleMachine(void)+0x134>
         21ef4:	ea000001 	b	21f00 <TADC::SampleMachine(void)+0x8c>
         21ef8:	ea00002a 	b	21fa8 <TADC::SampleMachine(void)+0x134>
         21efc:	eaffffff 	b	21f00 <TADC::SampleMachine(void)+0x8c>
         21f00:	e1a00008 	mov	r0, r8
         21f04:	e3a02901 	mov	r2, #16384	; 0x4000
         21f08:	ea000028 	b	21fb0 <TADC::SampleMachine(void)+0x13c>
         21f0c:	e3a00000 	mov	r0, #0	; 0x0
         21f10:	e584001c 	str	r0, [r4, #28]	; fField28
         21f14:	e584a040 	str	sl, [r4, #64]	; fField64
         21f18:	e0840285 	add	r0, r4, r5, lsl #5
         21f1c:	e5901084 	ldr	r1, [r0, #132]
         21f20:	e5841048 	str	r1, [r4, #72]	; fField72
         21f24:	e5b0108c 	ldr	r1, [r0, #140]!
         21f28:	e1a00004 	mov	r0, r4
         21f2c:	eb69194c 	bl	1a68464 <TADC::$SetADCMux(ADCMuxType)>
         21f30:	ea000043 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21f34:	e5849030 	str	r9, [r4, #48]	; fField48
         21f38:	e0840285 	add	r0, r4, r5, lsl #5
         21f3c:	e5d00091 	ldrb	r0, [r0, #145]
         21f40:	e3300000 	teq	r0, #0	; 0x0
         21f44:	01a00004 	moveq	r0, r4
         21f48:	0b691d53 	bleq	1a6949c <TADC::$SetADCXfer(void)>
         21f4c:	ea00003c 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21f50:	e1a00004 	mov	r0, r4
         21f54:	eb691d49 	bl	1a69480 <TADC::$ReadSamples(void)>
         21f58:	e3300000 	teq	r0, #0	; 0x0
         21f5c:	0a000006 	beq	21f7c <TADC::SampleMachine(void)+0x108>
         21f60:	e1a00004 	mov	r0, r4
         21f64:	eb691944 	bl	1a6847c <TADC::$FilterSamples(void)>
         21f68:	e3300000 	teq	r0, #0	; 0x0
         21f6c:	0a000002 	beq	21f7c <TADC::SampleMachine(void)+0x108>
         21f70:	e3a00005 	mov	r0, #5	; 0x5
         21f74:	e5840030 	str	r0, [r4, #48]	; fField48
         21f78:	ea000031 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21f7c:	e2466001 	sub	r6, r6, #1	; 0x1
         21f80:	e3560000 	cmp	r6, #0	; 0x0
         21f84:	d3a00cd5 	movle	r0, #54528	; 0xd500
         21f88:	d2400801 	suble	r0, r0, #65536	; 0x10000
         21f8c:	d584001c 	strle	r0, [r4, #28]	; fField28
         21f90:	dafffff6 	ble	21f70 <TADC::SampleMachine(void)+0xfc>
         21f94:	e3a00001 	mov	r0, #1	; 0x1
         21f98:	e5840030 	str	r0, [r4, #48]	; fField48
         21f9c:	e0840285 	add	r0, r4, r5, lsl #5
         21fa0:	e5a06088 	str	r6, [r0, #136]!
         21fa4:	ea000026 	b	22044 <TADC::SampleMachine(void)+0x1d0>
         21fa8:	e1a00008 	mov	r0, r8
         21fac:	e3a02a01 	mov	r2, #4096	; 0x1000
         21fb0:	e3a01001 	mov	r1, #1	; 0x1
         21fb4:	eb692dc5 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         21fb8:	e597307c 	ldr	r3, [r7, #124]
         21fbc:	e3330000 	teq	r3, #0	; 0x0
         21fc0:	0a000004 	beq	21fd8 <TADC::SampleMachine(void)+0x164>
         21fc4:	e594101c 	ldr	r1, [r4, #28]	; fField28
         21fc8:	e5942040 	ldr	r2, [r4, #64]	; fField64
         21fcc:	e5b70080 	ldr	r0, [r7, #128]!
         21fd0:	e1a0e00f 	mov	lr, pc
         21fd4:	e1a0f003 	mov	pc, r3
         21fd8:	e3a01000 	mov	r1, #0	; 0x0
         21fdc:	e5841034 	str	r1, [r4, #52]	; fField52
         21fe0:	e584101c 	str	r1, [r4, #28]	; fField28
         21fe4:	e5c41038 	strb	r1, [r4, #56]	; fField56
         21fe8:	e2955001 	adds	r5, r5, #1	; 0x1
         21fec:	42655000 	rsbmi	r5, r5, #0	; 0x0
         21ff0:	e2055007 	and	r5, r5, #7	; 0x7
         21ff4:	42655000 	rsbmi	r5, r5, #0	; 0x0
         21ff8:	e0840285 	add	r0, r4, r5, lsl #5
         21ffc:	e5d02090 	ldrb	r2, [r0, #144]
         22000:	e3320000 	teq	r2, #0	; 0x0
         22004:	15900074 	ldrne	r0, [r0, #116]
         22008:	13300000 	teqne	r0, #0	; 0x0
         2200c:	03a00000 	moveq	r0, #0	; 0x0
         22010:	13a00001 	movne	r0, #1	; 0x1
         22014:	e5840018 	str	r0, [r4, #24]	; fField24
         22018:	e3a00001 	mov	r0, #1	; 0x1
         2201c:	e5840030 	str	r0, [r4, #48]	; fField48
         22020:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22024:	e0840280 	add	r0, r4, r0, lsl #5
         22028:	e5c01090 	strb	r1, [r0, #144]
         2202c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22030:	e0840280 	add	r0, r4, r0, lsl #5
         22034:	e5a01074 	str	r1, [r0, #116]!
         22038:	e5845024 	str	r5, [r4, #36]	; fField36
         2203c:	e1a00004 	mov	r0, r4
         22040:	eb691d0f 	bl	1a69484 <TADC::$TestSetPenWait(void)>
         22044:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
         22048:	e3300000 	teq	r0, #0	; 0x0
         2204c:	1a000002 	bne	2205c <TADC::SampleMachine(void)+0x1e8>
         22050:	e5940018 	ldr	r0, [r4, #24]	; fField24
         22054:	e3300000 	teq	r0, #0	; 0x0
         22058:	1affff94 	bne	21eb0 <TADC::SampleMachine(void)+0x3c>
         2205c:	e3a00000 	mov	r0, #0	; 0x0
         22060:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::SetADCMux(ADCMuxType)
 * Address: 00022064
 */
TADC::SetADCMux(ADCMuxType) {
    /*
         22064:	e1a0c00d 	mov	ip, sp
         22068:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2206c:	e24cb004 	sub	fp, ip, #4	; 0x4
         22070:	e1a04000 	mov	r4, r0
         22074:	e3a00000 	mov	r0, #0	; 0x0
         22078:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         2207c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         22080:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         22084:	e1300001 	teq	r0, r1
         22088:	0a000071 	beq	22254 <TADC::SetADCMux(ADCMuxType)+0x1f0>
         2208c:	e3a08000 	mov	r8, #0	; 0x0
         22090:	e3a0a000 	mov	sl, #0	; 0x0
         22094:	e3a07000 	mov	r7, #0	; 0x0
         22098:	e3a05000 	mov	r5, #0	; 0x0
         2209c:	e59f004c 	ldr	r0, [pc, #4c]	; 220f0 <TADC::SetADCMux(ADCMuxType)+0x8c>	; fField4
         220a0:	e5906000 	ldr	r6, [r0]
         220a4:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         220a8:	e59f9044 	ldr	r9, [pc, #44]	; 220f4 <TADC::SetADCMux(ADCMuxType)+0x90>	; fField44
         220ac:	e351000b 	cmp	r1, #11	; 0xb
         220b0:	908ff101 	addls	pc, pc, r1, lsl #2
         220b4:	ea000055 	b	22210 <TADC::SetADCMux(ADCMuxType)+0x1ac>
         220b8:	ea000054 	b	22210 <TADC::SetADCMux(ADCMuxType)+0x1ac>
         220bc:	ea00000d 	b	220f8 <TADC::SetADCMux(ADCMuxType)+0x94>
         220c0:	ea000010 	b	22108 <TADC::SetADCMux(ADCMuxType)+0xa4>
         220c4:	ea000017 	b	22128 <TADC::SetADCMux(ADCMuxType)+0xc4>
         220c8:	ea000019 	b	22134 <TADC::SetADCMux(ADCMuxType)+0xd0>
         220cc:	ea00004f 	b	22210 <TADC::SetADCMux(ADCMuxType)+0x1ac>
         220d0:	ea000019 	b	2213c <TADC::SetADCMux(ADCMuxType)+0xd8>
         220d4:	ea00001b 	b	22148 <TADC::SetADCMux(ADCMuxType)+0xe4>
         220d8:	ea00001d 	b	22154 <TADC::SetADCMux(ADCMuxType)+0xf0>
         220dc:	ea000020 	b	22164 <TADC::SetADCMux(ADCMuxType)+0x100>
         220e0:	ea000022 	b	22170 <TADC::SetADCMux(ADCMuxType)+0x10c>
         220e4:	e3a0700e 	mov	r7, #14	; 0xe
         220e8:	e3a05004 	mov	r5, #4	; 0x4
         220ec:	ea000021 	b	22178 <TADC::SetADCMux(ADCMuxType)+0x114>
         220f0:	0c100800 	ldceq	8, cr0, [r0]
         220f4:	0c100e98 	ldceq	14, cr0, [r0], -#608
         220f8:	e3a08a03 	mov	r8, #12288	; 0x3000
         220fc:	e3a0adca 	mov	sl, #12928	; 0x3280
         22100:	e3a0500e 	mov	r5, #14	; 0xe
         22104:	ea000002 	b	22114 <TADC::SetADCMux(ADCMuxType)+0xb0>
         22108:	e3a08d12 	mov	r8, #1152	; 0x480
         2210c:	e3a0adb2 	mov	sl, #11392	; 0x2c80
         22110:	e3a0500f 	mov	r5, #15	; 0xf
         22114:	e1a0200a 	mov	r2, sl
         22118:	e1a00009 	mov	r0, r9
         2211c:	e3a01000 	mov	r1, #0	; 0x0
         22120:	eb692d6a 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         22124:	ea000021 	b	221b0 <TADC::SetADCMux(ADCMuxType)+0x14c>
         22128:	e3a080c0 	mov	r8, #192	; 0xc0
         2212c:	e3a05002 	mov	r5, #2	; 0x2
         22130:	ea000011 	b	2217c <TADC::SetADCMux(ADCMuxType)+0x118>
         22134:	e3a08e81 	mov	r8, #2064	; 0x810
         22138:	ea00000f 	b	2217c <TADC::SetADCMux(ADCMuxType)+0x118>
         2213c:	e3a0700c 	mov	r7, #12	; 0xc
         22140:	e3a05006 	mov	r5, #6	; 0x6
         22144:	ea000004 	b	2215c <TADC::SetADCMux(ADCMuxType)+0xf8>
         22148:	e3a0700c 	mov	r7, #12	; 0xc
         2214c:	e3a05005 	mov	r5, #5	; 0x5
         22150:	ea000009 	b	2217c <TADC::SetADCMux(ADCMuxType)+0x118>
         22154:	e3a0700e 	mov	r7, #14	; 0xe
         22158:	e3a05007 	mov	r5, #7	; 0x7
         2215c:	e3a06000 	mov	r6, #0	; 0x0
         22160:	ea000005 	b	2217c <TADC::SetADCMux(ADCMuxType)+0x118>
         22164:	e3a0700c 	mov	r7, #12	; 0xc
         22168:	e3a05009 	mov	r5, #9	; 0x9
         2216c:	ea000001 	b	22178 <TADC::SetADCMux(ADCMuxType)+0x114>
         22170:	e3a0700e 	mov	r7, #14	; 0xe
         22174:	e3a05008 	mov	r5, #8	; 0x8
         22178:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
         2217c:	e1a02008 	mov	r2, r8
         22180:	e1a00009 	mov	r0, r9
         22184:	e3a01000 	mov	r1, #0	; 0x0
         22188:	eb692d50 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         2218c:	e3370000 	teq	r7, #0	; 0x0
         22190:	0a000006 	beq	221b0 <TADC::SetADCMux(ADCMuxType)+0x14c>
         22194:	e3a00002 	mov	r0, #2	; 0x2
         22198:	e1a02710 	mov	r2, r0, lsl r7
         2219c:	e1a00009 	mov	r0, r9
         221a0:	e3a01001 	mov	r1, #1	; 0x1
         221a4:	eb692d49 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         221a8:	e3a0004a 	mov	r0, #74	; 0x4a
         221ac:	eb6f6f45 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         221b0:	e1a00285 	mov	r0, r5, lsl #5
         221b4:	e5941048 	ldr	r1, [r4, #72]	; fField72
         221b8:	e2411001 	sub	r1, r1, #1	; 0x1
         221bc:	e1802501 	orr	r2, r0, r1, lsl #10
         221c0:	e1a00009 	mov	r0, r9
         221c4:	e3a01002 	mov	r1, #2	; 0x2
         221c8:	eb692d40 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         221cc:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         221d0:	e3360000 	teq	r6, #0	; 0x0
         221d4:	e5841034 	str	r1, [r4, #52]	; fField52
         221d8:	0a000012 	beq	22228 <TADC::SetADCMux(ADCMuxType)+0x1c4>
         221dc:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
         221e0:	e3300000 	teq	r0, #0	; 0x0
         221e4:	1a00000c 	bne	2221c <TADC::SetADCMux(ADCMuxType)+0x1b8>
         221e8:	e1a02006 	mov	r2, r6
         221ec:	e5941000 	ldr	r1, [r4]
         221f0:	e59f0014 	ldr	r0, [pc, #14]	; 2220c <TADC::SetADCMux(ADCMuxType)+0x1a8>
         221f4:	e5900000 	ldr	r0, [r0]
         221f8:	e3a03000 	mov	r3, #0	; 0x0
         221fc:	eb6920cf 	bl	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
         22200:	e3a00001 	mov	r0, #1	; 0x1
         22204:	e5c40038 	strb	r0, [r4, #56]	; fField56
         22208:	ea000008 	b	22230 <TADC::SetADCMux(ADCMuxType)+0x1cc>
         2220c:	0c100f74 	ldceq	15, cr0, [r0], -#464
         22210:	e3e00000 	mvn	r0, #0	; 0x0
         22214:	e58d0000 	str	r0, [sp]
         22218:	ea00000f 	b	2225c <TADC::SetADCMux(ADCMuxType)+0x1f8>
         2221c:	e3360000 	teq	r6, #0	; 0x0
         22220:	11a00006 	movne	r0, r6
         22224:	1b6f6f27 	blne	1bfdec8 <$ShortTimerDelay(unsigned long)>
         22228:	e3a00002 	mov	r0, #2	; 0x2
         2222c:	e5a40030 	str	r0, [r4, #48]!	; fField48
         22230:	e33a0000 	teq	sl, #0	; 0x0
         22234:	0a000008 	beq	2225c <TADC::SetADCMux(ADCMuxType)+0x1f8>
         22238:	e3a0006f 	mov	r0, #111	; 0x6f
         2223c:	eb6f6f21 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         22240:	e1a02008 	mov	r2, r8
         22244:	e1a00009 	mov	r0, r9
         22248:	e3a01000 	mov	r1, #0	; 0x0
         2224c:	eb692d1f 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         22250:	ea000001 	b	2225c <TADC::SetADCMux(ADCMuxType)+0x1f8>
         22254:	e3a00002 	mov	r0, #2	; 0x2
         22258:	e5a40030 	str	r0, [r4, #48]!	; fField48
         2225c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         22260:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::UsePolling(unsigned char)
 * Address: 00022264
 */
TADC::UsePolling(unsigned char) {
    /*
         22264:	e1a0c00d 	mov	ip, sp
         22268:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2226c:	e24cb004 	sub	fp, ip, #4	; 0x4
         22270:	e1a04000 	mov	r4, r0
         22274:	e20150ff 	and	r5, r1, #255	; 0xff
         22278:	e5d00039 	ldrb	r0, [r0, #57]	; fField57
         2227c:	e3a06000 	mov	r6, #0	; 0x0
         22280:	e1300005 	teq	r0, r5
         22284:	0a00000f 	beq	222c8 <TADC::UsePolling(unsigned char)+0x64>
         22288:	eb0dc20c 	bl	392ac0 <EnterAtomic>
         2228c:	e2841024 	add	r1, r4, #36	; 0x24
         22290:	e8910003 	ldmia	r1, {r0, r1}
         22294:	e1300001 	teq	r0, r1
         22298:	05d40038 	ldreqb	r0, [r4, #56]	; fField56
         2229c:	03300000 	teqeq	r0, #0	; 0x0
         222a0:	1a000006 	bne	222c0 <TADC::UsePolling(unsigned char)+0x5c>
         222a4:	e5d4003a 	ldrb	r0, [r4, #58]	; fField58
         222a8:	e3300000 	teq	r0, #0	; 0x0
         222ac:	0a000003 	beq	222c0 <TADC::UsePolling(unsigned char)+0x5c>
         222b0:	eb692099 	bl	1a6a51c <$GetDMAManagerObject(void)>
         222b4:	e3a01004 	mov	r1, #4	; 0x4
         222b8:	eb691c7b 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
         222bc:	e5c4603a 	strb	r6, [r4, #58]	; fField58
         222c0:	e5c45039 	strb	r5, [r4, #57]	; fField57
         222c4:	eb0dc214 	bl	392b1c <ExitAtomic>
         222c8:	e1a00006 	mov	r0, r6
         222cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADC::SetSampleSize(int)
 * Address: 000222d0
 */
TADC::SetSampleSize(int) {
    /*
         222d0:	e3510008 	cmp	r1, #8	; 0x8
         222d4:	ca000003 	bgt	222e8 <TADC::SetSampleSize(int)+0x18>
         222d8:	e3510001 	cmp	r1, #1	; 0x1
         222dc:	a5a01044 	strge	r1, [r0, #68]!	; fField68
         222e0:	a3a00000 	movge	r0, #0	; 0x0
         222e4:	a1a0f00e 	movge	pc, lr
         222e8:	e3e00000 	mvn	r0, #0	; 0x0
         222ec:	e1a0f00e 	mov	pc, lr
    */
}

