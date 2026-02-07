#include "include/TIrLAPConn.h"

/**
 * Symbol: TIrLAPConn::__ct(void)
 * Address: 000f2474
 */
TIrLAPConn::TIrLAPConn(void) {
    /*
         f2474:	e1a0c00d 	mov	ip, sp
         f2478:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f247c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2480:	e1b04000 	movs	r4, r0
         f2484:	1a000003 	bne	f2498 <TIrLAPConn::__ct(void)+0x24>
         f2488:	e3a00030 	mov	r0, #48	; 0x30
         f248c:	eb6b70a9 	bl	1bce738 <$__nw(unsigned int)>
         f2490:	e1b04000 	movs	r4, r0
         f2494:	0a00000a 	beq	f24c4 <TIrLAPConn::__ct(void)+0x50>
         f2498:	e1a00004 	mov	r0, r4
         f249c:	eb6515ce 	bl	1a37bdc <TIrStream::$__ct(void)>
         f24a0:	e59f0024 	ldr	r0, [pc, #24]	; f24cc <TIrLAPConn::__ct(void)+0x58>	; fField24
         f24a4:	e5840000 	str	r0, [r4]
         f24a8:	e3a00000 	mov	r0, #0	; 0x0
         f24ac:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f24b0:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         f24b4:	e5840020 	str	r0, [r4, #32]	; fField32
         f24b8:	e5840024 	str	r0, [r4, #36]	; fField36
         f24bc:	e5840028 	str	r0, [r4, #40]	; fField40
         f24c0:	e584002c 	str	r0, [r4, #44]	; fField44
         f24c4:	e1a00004 	mov	r0, r4
         f24c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f24cc:	0001a9f4 	streqd	sl, [r1], -r4
    */
}

/**
 * Symbol: TIrLAPConn::__dt(void)
 * Address: 000f24d0
 */
TIrLAPConn::~TIrLAPConn(void) {
    /*
         f24d0:	e1a0c00d 	mov	ip, sp
         f24d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f24d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f24dc:	e1a04000 	mov	r4, r0
         f24e0:	e1a05001 	mov	r5, r1
         f24e4:	e59f0028 	ldr	r0, [pc, #28]	; f2514 <TIrLAPConn::__dt(void)+0x44>	; fField28
         f24e8:	e5840000 	str	r0, [r4]
         f24ec:	e1a00004 	mov	r0, r4
         f24f0:	eb650534 	bl	1a339c8 <TIrLAPConn::$DeInit(void)>
         f24f4:	e1a00004 	mov	r0, r4
         f24f8:	e3a01000 	mov	r1, #0	; 0x0
         f24fc:	eb6515b7 	bl	1a37be0 <TIrStream::$__dt(void)>
         f2500:	e3150001 	tst	r5, #1	; 0x1
         f2504:	11a00004 	movne	r0, r4
         f2508:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f250c:	1a6b6c73 	bne	1bcd6e0 <$__dl(void *)>
         f2510:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f2514:	0001a9f4 	streqd	sl, [r1], -r4
    */
}

/**
 * Symbol: TIrLAPConn::CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)
 * Address: 000f2518
 */
TIrLAPConn::CleanupPendingGetRequestsAndReplies(TLSAPConn *, long) {
    /*
         f2518:	e1a0c00d 	mov	ip, sp
         f251c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f2520:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2524:	e1a04000 	mov	r4, r0
         f2528:	e1a05001 	mov	r5, r1
         f252c:	eb65051c 	bl	1a339a4 <TIrLAPConn::$CancelPendingGetRequests(TLSAPConn *, long)>
         f2530:	e594102c 	ldr	r1, [r4, #44]	; fField44
         f2534:	e3310000 	teq	r1, #0	; 0x0
         f2538:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f253c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f2540:	e1a0000d 	mov	r0, sp
         f2544:	eb6bc326 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f2548:	e1a0000d 	mov	r0, sp
         f254c:	eb6bd3a9 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f2550:	e1a06000 	mov	r6, r0
         f2554:	e1a0000d 	mov	r0, sp
         f2558:	eb6be006 	bl	1bea578 <CArrayIterator::$More(void)>
         f255c:	e3300000 	teq	r0, #0	; 0x0
         f2560:	0a000019 	beq	f25cc <TIrLAPConn::CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)+0xb4>
         f2564:	e24dd00c 	sub	sp, sp, #12	; 0xc
         f2568:	e1a0300d 	mov	r3, sp
         f256c:	e28d2004 	add	r2, sp, #4	; 0x4
         f2570:	e1a01006 	mov	r1, r6
         f2574:	e1a00004 	mov	r0, r4
         f2578:	eb65050c 	bl	1a339b0 <TIrLAPConn::$ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)>
         f257c:	e28d1004 	add	r1, sp, #4	; 0x4
         f2580:	e1a00005 	mov	r0, r5
         f2584:	e3a02001 	mov	r2, #1	; 0x1
         f2588:	eb650d4d 	bl	1a35ac4 <TLSAPConn::$YourData(TLMPDUHeader &, unsigned char)>
         f258c:	e3300000 	teq	r0, #0	; 0x0
         f2590:	0a000005 	beq	f25ac <TIrLAPConn::CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)+0x94>
         f2594:	e1a01006 	mov	r1, r6
         f2598:	e594002c 	ldr	r0, [r4, #44]	; fField44
         f259c:	eb6be821 	bl	1bec628 <CList::$Remove(void *)>
         f25a0:	e1a01006 	mov	r1, r6
         f25a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f25a8:	eb650918 	bl	1a34a10 <TIrLAP::$ReleaseInputBuffer(CBufferSegment *)>
         f25ac:	e28dd00c 	add	sp, sp, #12	; 0xc
         f25b0:	e1a0000d 	mov	r0, sp
         f25b4:	eb6be3f9 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f25b8:	e1a06000 	mov	r6, r0
         f25bc:	e1a0000d 	mov	r0, sp
         f25c0:	eb6bdfec 	bl	1bea578 <CArrayIterator::$More(void)>
         f25c4:	e3300000 	teq	r0, #0	; 0x0
         f25c8:	1affffe5 	bne	f2564 <TIrLAPConn::CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)+0x4c>
         f25cc:	e1a0000d 	mov	r0, sp
         f25d0:	e3a01000 	mov	r1, #0	; 0x0
         f25d4:	eb6bc723 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f25d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long)
 * Address: 000f25dc
 */
TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long) {
    /*
         f25dc:	e1a0c00d 	mov	ip, sp
         f25e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f25e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f25e8:	e1a06000 	mov	r6, r0
         f25ec:	e1a05001 	mov	r5, r1
         f25f0:	e1a04002 	mov	r4, r2
         f25f4:	e5901028 	ldr	r1, [r0, #40]	; fField40
         f25f8:	e3310000 	teq	r1, #0	; 0x0
         f25fc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f2600:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f2604:	e1a0000d 	mov	r0, sp
         f2608:	eb6bc2f5 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f260c:	e1a0000d 	mov	r0, sp
         f2610:	eb6bd378 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f2614:	e1a07000 	mov	r7, r0
         f2618:	e1a0000d 	mov	r0, sp
         f261c:	eb6bdfd5 	bl	1bea578 <CArrayIterator::$More(void)>
         f2620:	e3300000 	teq	r0, #0	; 0x0
         f2624:	0a000016 	beq	f2684 <TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long)+0xa8>
         f2628:	e3a0900c 	mov	r9, #12	; 0xc
         f262c:	e59f8060 	ldr	r8, [pc, #60]	; f2694 <TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long)+0xb8>
         f2630:	e5970008 	ldr	r0, [r7, #8]
         f2634:	e1300005 	teq	r0, r5
         f2638:	1a00000a 	bne	f2668 <TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long)+0x8c>
         f263c:	e1a01007 	mov	r1, r7
         f2640:	e5960028 	ldr	r0, [r6, #40]	; fField40
         f2644:	eb6be7f7 	bl	1bec628 <CList::$Remove(void *)>
         f2648:	e5c79000 	strb	r9, [r7]
         f264c:	e3340000 	teq	r4, #0	; 0x0
         f2650:	01a00008 	moveq	r0, r8
         f2654:	11a00004 	movne	r0, r4
         f2658:	e5870004 	str	r0, [r7, #4]
         f265c:	e1a01007 	mov	r1, r7
         f2660:	e1a00005 	mov	r0, r5
         f2664:	eb65155f 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f2668:	e1a0000d 	mov	r0, sp
         f266c:	eb6be3cb 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f2670:	e1a07000 	mov	r7, r0
         f2674:	e1a0000d 	mov	r0, sp
         f2678:	eb6bdfbe 	bl	1bea578 <CArrayIterator::$More(void)>
         f267c:	e3300000 	teq	r0, #0	; 0x0
         f2680:	1affffea 	bne	f2630 <TIrLAPConn::CancelPendingGetRequests(TLSAPConn *, long)+0x54>
         f2684:	e1a0000d 	mov	r0, sp
         f2688:	e3a01000 	mov	r1, #0	; 0x0
         f268c:	eb6bc6f5 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f2690:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f2694:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TIrLAPConn::Demultiplexor(CBufferSegment *)
 * Address: 000f2698
 */
TIrLAPConn::Demultiplexor(CBufferSegment *) {
    /*
         f2698:	e1a0c00d 	mov	ip, sp
         f269c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f26a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f26a4:	e1a04000 	mov	r4, r0
         f26a8:	e1a05001 	mov	r5, r1
         f26ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
         f26b0:	e3a06000 	mov	r6, #0	; 0x0
         f26b4:	e1a0300d 	mov	r3, sp
         f26b8:	e28d2004 	add	r2, sp, #4	; 0x4
         f26bc:	eb6504bb 	bl	1a339b0 <TIrLAPConn::$ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)>
         f26c0:	e1b07000 	movs	r7, r0
         f26c4:	15dd0006 	ldrneb	r0, [sp, #6]
         f26c8:	13c00080 	bicne	r0, r0, #128	; 0x80
         f26cc:	13300003 	teqne	r0, #3	; 0x3
         f26d0:	1a00000f 	bne	f2714 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x7c>
         f26d4:	e1a01005 	mov	r1, r5
         f26d8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f26dc:	eb6508cb 	bl	1a34a10 <TIrLAP::$ReleaseInputBuffer(CBufferSegment *)>
         f26e0:	e3370000 	teq	r7, #0	; 0x0
         f26e4:	0a000064 	beq	f287c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1e4>
         f26e8:	e5dd0006 	ldrb	r0, [sp, #6]
         f26ec:	e3300003 	teq	r0, #3	; 0x3
         f26f0:	1a000061 	bne	f287c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1e4>
         f26f4:	e5dd0008 	ldrb	r0, [sp, #8]
         f26f8:	e3500001 	cmp	r0, #1	; 0x1
         f26fc:	ca00005e 	bgt	f287c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1e4>
         f2700:	e28d1004 	add	r1, sp, #4	; 0x4
         f2704:	e1a00004 	mov	r0, r4
         f2708:	e3a030ff 	mov	r3, #255	; 0xff
         f270c:	e3a02083 	mov	r2, #131	; 0x83
         f2710:	ea000058 	b	f2878 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1e0>
         f2714:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f2718:	e1a0000d 	mov	r0, sp
         f271c:	e5941028 	ldr	r1, [r4, #40]	; fField40
         f2720:	eb6bc2af 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f2724:	e1a0000d 	mov	r0, sp
         f2728:	eb6bd332 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f272c:	e1a07000 	mov	r7, r0
         f2730:	e1a0000d 	mov	r0, sp
         f2734:	eb6bdf8f 	bl	1bea578 <CArrayIterator::$More(void)>
         f2738:	e3300000 	teq	r0, #0	; 0x0
         f273c:	0a000015 	beq	f2798 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x100>
         f2740:	e1a03005 	mov	r3, r5
         f2744:	e92d0008 	stmdb	sp!, {r3}
         f2748:	e59d3020 	ldr	r3, [sp, #32]	; fField32
         f274c:	e28d2024 	add	r2, sp, #36	; 0x24
         f2750:	e1a01007 	mov	r1, r7
         f2754:	e1a00004 	mov	r0, r4
         f2758:	eb650495 	bl	1a339b4 <TIrLAPConn::$DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *)>
         f275c:	e28dd004 	add	sp, sp, #4	; 0x4
         f2760:	e3300000 	teq	r0, #0	; 0x0
         f2764:	0a000004 	beq	f277c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0xe4>
         f2768:	e1a01007 	mov	r1, r7
         f276c:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f2770:	eb6be7ac 	bl	1bec628 <CList::$Remove(void *)>
         f2774:	e3a06001 	mov	r6, #1	; 0x1
         f2778:	ea000006 	b	f2798 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x100>
         f277c:	e1a0000d 	mov	r0, sp
         f2780:	eb6be386 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f2784:	e1a07000 	mov	r7, r0
         f2788:	e1a0000d 	mov	r0, sp
         f278c:	eb6bdf79 	bl	1bea578 <CArrayIterator::$More(void)>
         f2790:	e3300000 	teq	r0, #0	; 0x0
         f2794:	1affffe9 	bne	f2740 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0xa8>
         f2798:	e1a0000d 	mov	r0, sp
         f279c:	e3a01000 	mov	r1, #0	; 0x0
         f27a0:	eb6bc6b0 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f27a4:	e28dd01c 	add	sp, sp, #28	; 0x1c
         f27a8:	e3360000 	teq	r6, #0	; 0x0
         f27ac:	1a000021 	bne	f2838 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1a0>
         f27b0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f27b4:	e1a0000d 	mov	r0, sp
         f27b8:	e5941024 	ldr	r1, [r4, #36]	; fField36
         f27bc:	eb6bc288 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f27c0:	e1a0000d 	mov	r0, sp
         f27c4:	eb6bd30b 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f27c8:	e1a07000 	mov	r7, r0
         f27cc:	e1a0000d 	mov	r0, sp
         f27d0:	eb6bdf68 	bl	1bea578 <CArrayIterator::$More(void)>
         f27d4:	e3300000 	teq	r0, #0	; 0x0
         f27d8:	0a000012 	beq	f2828 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x190>
         f27dc:	e28d1020 	add	r1, sp, #32	; 0x20
         f27e0:	e1a00007 	mov	r0, r7
         f27e4:	e3a02001 	mov	r2, #1	; 0x1
         f27e8:	eb650cb5 	bl	1a35ac4 <TLSAPConn::$YourData(TLMPDUHeader &, unsigned char)>
         f27ec:	e3300000 	teq	r0, #0	; 0x0
         f27f0:	0a000005 	beq	f280c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x174>
         f27f4:	e1a02005 	mov	r2, r5
         f27f8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         f27fc:	e5901000 	ldr	r1, [r0]
         f2800:	eb6bdb39 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f2804:	e3a06001 	mov	r6, #1	; 0x1
         f2808:	ea000006 	b	f2828 <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x190>
         f280c:	e1a0000d 	mov	r0, sp
         f2810:	eb6be362 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f2814:	e1a07000 	mov	r7, r0
         f2818:	e1a0000d 	mov	r0, sp
         f281c:	eb6bdf55 	bl	1bea578 <CArrayIterator::$More(void)>
         f2820:	e3300000 	teq	r0, #0	; 0x0
         f2824:	1affffec 	bne	f27dc <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x144>
         f2828:	e1a0000d 	mov	r0, sp
         f282c:	e3a01000 	mov	r1, #0	; 0x0
         f2830:	eb6bc68c 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f2834:	e28dd01c 	add	sp, sp, #28	; 0x1c
         f2838:	e3360000 	teq	r6, #0	; 0x0
         f283c:	1a00000e 	bne	f287c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1e4>
         f2840:	e1a01005 	mov	r1, r5
         f2844:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f2848:	eb650870 	bl	1a34a10 <TIrLAP::$ReleaseInputBuffer(CBufferSegment *)>
         f284c:	e5dd0006 	ldrb	r0, [sp, #6]
         f2850:	e3300000 	teq	r0, #0	; 0x0
         f2854:	03a03006 	moveq	r3, #6	; 0x6
         f2858:	0a000003 	beq	f286c <TIrLAPConn::Demultiplexor(CBufferSegment *)+0x1d4>
         f285c:	e5dd0006 	ldrb	r0, [sp, #6]
         f2860:	e3300001 	teq	r0, #1	; 0x1
         f2864:	13a03001 	movne	r3, #1	; 0x1
         f2868:	03a03008 	moveq	r3, #8	; 0x8
         f286c:	e28d1004 	add	r1, sp, #4	; 0x4
         f2870:	e1a00004 	mov	r0, r4
         f2874:	e3a02002 	mov	r2, #2	; 0x2
         f2878:	eb65044b 	bl	1a339ac <TIrLAPConn::$ReplyToInvalidFrame(TLMPDUHeader &, unsigned char, unsigned char)>
         f287c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::ReplyToInvalidFrame(TLMPDUHeader &, unsigned char, unsigned char)
 * Address: 000f2880
 */
TIrLAPConn::ReplyToInvalidFrame(TLMPDUHeader &, unsigned char, unsigned char) {
    /*
         f2880:	e1a0c00d 	mov	ip, sp
         f2884:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f2888:	e24cb004 	sub	fp, ip, #4	; 0x4
         f288c:	e1a05000 	mov	r5, r0
         f2890:	e1a04001 	mov	r4, r1
         f2894:	e20260ff 	and	r6, r2, #255	; 0xff
         f2898:	e20370ff 	and	r7, r3, #255	; 0xff
         f289c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f28a0:	e3a0201c 	mov	r2, #28	; 0x1c
         f28a4:	e3a0100d 	mov	r1, #13	; 0xd
         f28a8:	eb64fc02 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         f28ac:	e1b01000 	movs	r1, r0
         f28b0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f28b4:	e3a00000 	mov	r0, #0	; 0x0
         f28b8:	e5810008 	str	r0, [r1, #8]
         f28bc:	e581000c 	str	r0, [r1, #12]	; fField12
         f28c0:	e5810010 	str	r0, [r1, #16]
         f28c4:	e5810014 	str	r0, [r1, #20]	; fField20
         f28c8:	e5d40001 	ldrb	r0, [r4, #1]
         f28cc:	e3800080 	orr	r0, r0, #128	; 0x80
         f28d0:	e5c10018 	strb	r0, [r1, #24]	; fField24
         f28d4:	e5d40000 	ldrb	r0, [r4]
         f28d8:	e3c00080 	bic	r0, r0, #128	; 0x80
         f28dc:	e5c10019 	strb	r0, [r1, #25]
         f28e0:	e5c1601a 	strb	r6, [r1, #26]
         f28e4:	e5c1701b 	strb	r7, [r1, #27]
         f28e8:	e5b50018 	ldr	r0, [r5, #24]!	; fField24
         f28ec:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f28f0:	ea6514bc 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)
 * Address: 000f28f4
 */
TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &) {
    /*
         f28f4:	e1a0c00d 	mov	ip, sp
         f28f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f28fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2900:	e1a05001 	mov	r5, r1
         f2904:	e1a04002 	mov	r4, r2
         f2908:	e1a06003 	mov	r6, r3
         f290c:	e1a00001 	mov	r0, r1
         f2910:	e1a03001 	mov	r3, r1
         f2914:	e3e02000 	mvn	r2, #0	; 0x0
         f2918:	e3a01000 	mov	r1, #0	; 0x0
         f291c:	e5933000 	ldr	r3, [r3]
         f2920:	e1a0e00f 	mov	lr, pc
         f2924:	e283f038 	add	pc, r3, #56	; 0x38
         f2928:	e1a01004 	mov	r1, r4
         f292c:	e1a00005 	mov	r0, r5
         f2930:	e3a02008 	mov	r2, #8	; 0x8
         f2934:	e5953000 	ldr	r3, [r5]
         f2938:	e1a0e00f 	mov	lr, pc
         f293c:	e283f014 	add	pc, r3, #20	; 0x14
         f2940:	e1a01000 	mov	r1, r0
         f2944:	e3a00000 	mov	r0, #0	; 0x0
         f2948:	e3510002 	cmp	r1, #2	; 0x2
         f294c:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         f2950:	e5d43000 	ldrb	r3, [r4]
         f2954:	e3130080 	tst	r3, #128	; 0x80
         f2958:	0a000016 	beq	f29b8 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xc4>
         f295c:	e3c33080 	bic	r3, r3, #128	; 0x80
         f2960:	e5c43000 	strb	r3, [r4]
         f2964:	e3310002 	teq	r1, #2	; 0x2
         f2968:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f296c:	e3310003 	teq	r1, #3	; 0x3
         f2970:	05c40003 	streqb	r0, [r4, #3]	; fField3
         f2974:	e5d42002 	ldrb	r2, [r4, #2]	; fField2
         f2978:	e3520003 	cmp	r2, #3	; 0x3
         f297c:	0a000010 	beq	f29c4 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xd0>
         f2980:	ca000003 	bgt	f2994 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xa0>
         f2984:	e3320001 	teq	r2, #1	; 0x1
         f2988:	13320002 	teqne	r2, #2	; 0x2
         f298c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f2990:	ea000004 	b	f29a8 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xb4>
         f2994:	e3320081 	teq	r2, #129	; 0x81
         f2998:	0a000002 	beq	f29a8 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xb4>
         f299c:	e3320083 	teq	r2, #131	; 0x83
         f29a0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f29a4:	ea000006 	b	f29c4 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xd0>
         f29a8:	e3a02004 	mov	r2, #4	; 0x4
         f29ac:	e3510004 	cmp	r1, #4	; 0x4
         f29b0:	a1a01002 	movge	r1, r2
         f29b4:	ea000002 	b	f29c4 <TIrLAPConn::ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)+0xd0>
         f29b8:	e3a01002 	mov	r1, #2	; 0x2
         f29bc:	e5c40002 	strb	r0, [r4, #2]	; fField2
         f29c0:	e5c40003 	strb	r0, [r4, #3]	; fField3
         f29c4:	e5d42000 	ldrb	r2, [r4]
         f29c8:	e352006f 	cmp	r2, #111	; 0x6f
         f29cc:	d5d42001 	ldrleb	r2, [r4, #1]
         f29d0:	d352006f 	cmple	r2, #111	; 0x6f
         f29d4:	d3a00001 	movle	r0, #1	; 0x1
         f29d8:	d5861000 	strle	r1, [r6]
         f29dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *)
 * Address: 000f29e0
 */
TIrLAPConn::DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *) {
    /*
         f29e0:	e1a0c00d 	mov	ip, sp
         f29e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f29e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f29ec:	e1a07000 	mov	r7, r0
         f29f0:	e1a04001 	mov	r4, r1
         f29f4:	e1a05002 	mov	r5, r2
         f29f8:	e1a06003 	mov	r6, r3
         f29fc:	e59b8004 	ldr	r8, [fp, #4]
         f2a00:	e5910008 	ldr	r0, [r1, #8]
         f2a04:	e1a01002 	mov	r1, r2
         f2a08:	e3a02000 	mov	r2, #0	; 0x0
         f2a0c:	eb650c2c 	bl	1a35ac4 <TLSAPConn::$YourData(TLMPDUHeader &, unsigned char)>
         f2a10:	e3a0a000 	mov	sl, #0	; 0x0
         f2a14:	e3300000 	teq	r0, #0	; 0x0
         f2a18:	01a0000a 	moveq	r0, sl
         f2a1c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f2a20:	e3a00000 	mov	r0, #0	; 0x0
         f2a24:	e5981010 	ldr	r1, [r8, #16]
         f2a28:	e5982018 	ldr	r2, [r8, #24]	; fField24
         f2a2c:	e0421001 	sub	r1, r2, r1
         f2a30:	e0419006 	sub	r9, r1, r6
         f2a34:	e594300c 	ldr	r3, [r4, #12]	; fField12
         f2a38:	e3330000 	teq	r3, #0	; 0x0
         f2a3c:	0a00000f 	beq	f2a80 <TIrLAPConn::DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *)+0xa0>
         f2a40:	e3590000 	cmp	r9, #0	; 0x0
         f2a44:	da00000d 	ble	f2a80 <TIrLAPConn::DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *)+0xa0>
         f2a48:	e1a00003 	mov	r0, r3
         f2a4c:	e3e02000 	mvn	r2, #0	; 0x0
         f2a50:	e5941010 	ldr	r1, [r4, #16]
         f2a54:	e5933000 	ldr	r3, [r3]
         f2a58:	e1a0e00f 	mov	lr, pc
         f2a5c:	e283f038 	add	pc, r3, #56	; 0x38
         f2a60:	e594300c 	ldr	r3, [r4, #12]	; fField12
         f2a64:	e5980010 	ldr	r0, [r8, #16]
         f2a68:	e0801006 	add	r1, r0, r6
         f2a6c:	e1a02009 	mov	r2, r9
         f2a70:	e1a00003 	mov	r0, r3
         f2a74:	e5933000 	ldr	r3, [r3]
         f2a78:	e1a0e00f 	mov	lr, pc
         f2a7c:	e283f020 	add	pc, r3, #32	; 0x20
         f2a80:	e3a0100c 	mov	r1, #12	; 0xc
         f2a84:	e5c41000 	strb	r1, [r4]
         f2a88:	e5840014 	str	r0, [r4, #20]	; fField20
         f2a8c:	e584a004 	str	sl, [r4, #4]
         f2a90:	e5d50002 	ldrb	r0, [r5, #2]	; fField2
         f2a94:	e5c4001a 	strb	r0, [r4, #26]
         f2a98:	e5d50003 	ldrb	r0, [r5, #3]	; fField3
         f2a9c:	e5c4001b 	strb	r0, [r4, #27]
         f2aa0:	e5940008 	ldr	r0, [r4, #8]
         f2aa4:	e1a01004 	mov	r1, r4
         f2aa8:	eb65144e 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f2aac:	e1a01008 	mov	r1, r8
         f2ab0:	e5b70018 	ldr	r0, [r7, #24]!	; fField24
         f2ab4:	eb6507d5 	bl	1a34a10 <TIrLAP::$ReleaseInputBuffer(CBufferSegment *)>
         f2ab8:	e3a00001 	mov	r0, #1	; 0x1
         f2abc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *)
 * Address: 000f2ac0
 */
TIrLAPConn::FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *) {
    /*
         f2ac0:	e1a00002 	mov	r0, r2
         f2ac4:	e5d13018 	ldrb	r3, [r1, #24]	; fField24
         f2ac8:	e5c23000 	strb	r3, [r2]
         f2acc:	e5d13019 	ldrb	r3, [r1, #25]
         f2ad0:	e5c23001 	strb	r3, [r2, #1]
         f2ad4:	e5d1301a 	ldrb	r3, [r1, #26]
         f2ad8:	e3330000 	teq	r3, #0	; 0x0
         f2adc:	03a00002 	moveq	r0, #2	; 0x2
         f2ae0:	01a0f00e 	moveq	pc, lr
         f2ae4:	e5d03000 	ldrb	r3, [r0]
         f2ae8:	e3833080 	orr	r3, r3, #128	; 0x80
         f2aec:	e5c03000 	strb	r3, [r0]
         f2af0:	e5d1301a 	ldrb	r3, [r1, #26]
         f2af4:	e5c03002 	strb	r3, [r0, #2]	; fField2
         f2af8:	e5d1301b 	ldrb	r3, [r1, #27]
         f2afc:	e5c03003 	strb	r3, [r0, #3]	; fField3
         f2b00:	e5d1001a 	ldrb	r0, [r1, #26]
         f2b04:	e3300083 	teq	r0, #131	; 0x83
         f2b08:	03a00000 	moveq	r0, #0	; 0x0
         f2b0c:	05c20004 	streqb	r0, [r2, #4]
         f2b10:	03a00005 	moveq	r0, #5	; 0x5
         f2b14:	13a00004 	movne	r0, #4	; 0x4
         f2b18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAPConn::TimerComplete(unsigned long)
 * Address: 000f2b1c
 */
TIrLAPConn::TimerComplete(unsigned long) {
    /*
         f2b1c:	e1a0c00d 	mov	ip, sp
         f2b20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f2b24:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2b28:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f2b2c:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
         f2b30:	e1a0000d 	mov	r0, sp
         f2b34:	eb6bc1aa 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f2b38:	e1a0000d 	mov	r0, sp
         f2b3c:	eb6bd22d 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f2b40:	e1a04000 	mov	r4, r0
         f2b44:	e1a0000d 	mov	r0, sp
         f2b48:	eb6bde8a 	bl	1bea578 <CArrayIterator::$More(void)>
         f2b4c:	e3300000 	teq	r0, #0	; 0x0
         f2b50:	0a000008 	beq	f2b78 <TIrLAPConn::TimerComplete(unsigned long)+0x5c>
         f2b54:	e1a00004 	mov	r0, r4
         f2b58:	eb650bdc 	bl	1a35ad0 <TLSAPConn::$OneSecTickerComplete(void)>
         f2b5c:	e1a0000d 	mov	r0, sp
         f2b60:	eb6be28e 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f2b64:	e1a04000 	mov	r4, r0
         f2b68:	e1a0000d 	mov	r0, sp
         f2b6c:	eb6bde81 	bl	1bea578 <CArrayIterator::$More(void)>
         f2b70:	e3300000 	teq	r0, #0	; 0x0
         f2b74:	1afffff6 	bne	f2b54 <TIrLAPConn::TimerComplete(unsigned long)+0x38>
         f2b78:	e1a0000d 	mov	r0, sp
         f2b7c:	e3a01000 	mov	r1, #0	; 0x0
         f2b80:	eb6bc5b8 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f2b84:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::Init(TIrGlue *, TIrLAP *)
 * Address: 000f2b88
 */
TIrLAPConn::Init(TIrGlue *, TIrLAP *) {
    /*
         f2b88:	e1a0c00d 	mov	ip, sp
         f2b8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f2b90:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2b94:	e1a04000 	mov	r4, r0
         f2b98:	e2800014 	add	r0, r0, #20	; 0x14
         f2b9c:	e8800006 	stmia	r0, {r1, r2}
         f2ba0:	e2400014 	sub	r0, r0, #20	; 0x14
         f2ba4:	eb65140e 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f2ba8:	e1b05000 	movs	r5, r0
         f2bac:	1a000011 	bne	f2bf8 <TIrLAPConn::Init(TIrGlue *, TIrLAP *)+0x70>
         f2bb0:	e3a050a8 	mov	r5, #168	; 0xa8
         f2bb4:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         f2bb8:	e3a00000 	mov	r0, #0	; 0x0
         f2bbc:	eb6bc59a 	bl	1be422c <CList::$__ct(void)>
         f2bc0:	e5840024 	str	r0, [r4, #36]	; fField36
         f2bc4:	e3300000 	teq	r0, #0	; 0x0
         f2bc8:	0a00000a 	beq	f2bf8 <TIrLAPConn::Init(TIrGlue *, TIrLAP *)+0x70>
         f2bcc:	e3a00000 	mov	r0, #0	; 0x0
         f2bd0:	eb6bc595 	bl	1be422c <CList::$__ct(void)>
         f2bd4:	e5840028 	str	r0, [r4, #40]	; fField40
         f2bd8:	e3300000 	teq	r0, #0	; 0x0
         f2bdc:	0a000005 	beq	f2bf8 <TIrLAPConn::Init(TIrGlue *, TIrLAP *)+0x70>
         f2be0:	e3a00000 	mov	r0, #0	; 0x0
         f2be4:	eb6bc590 	bl	1be422c <CList::$__ct(void)>
         f2be8:	e584002c 	str	r0, [r4, #44]	; fField44
         f2bec:	e3300000 	teq	r0, #0	; 0x0
         f2bf0:	13a00000 	movne	r0, #0	; 0x0
         f2bf4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f2bf8:	e1a00004 	mov	r0, r4
         f2bfc:	eb650371 	bl	1a339c8 <TIrLAPConn::$DeInit(void)>
         f2c00:	e1a00005 	mov	r0, r5
         f2c04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::Reset(void)
 * Address: 000f2c08
 */
TIrLAPConn::Reset(void) {
    /*
         f2c08:	e3a01000 	mov	r1, #0	; 0x0
         f2c0c:	e5c0101c 	strb	r1, [r0, #28]	; fField28
         f2c10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAPConn::DeInit(void)
 * Address: 000f2c14
 */
TIrLAPConn::DeInit(void) {
    /*
         f2c14:	e1a0c00d 	mov	ip, sp
         f2c18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f2c1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2c20:	e1a04000 	mov	r4, r0
         f2c24:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f2c28:	e3a05000 	mov	r5, #0	; 0x0
         f2c2c:	e3300000 	teq	r0, #0	; 0x0
         f2c30:	0a000002 	beq	f2c40 <TIrLAPConn::DeInit(void)+0x2c>
         f2c34:	e3a01001 	mov	r1, #1	; 0x1
         f2c38:	eb6bc991 	bl	1be5284 <CList::$__dt(void)>
         f2c3c:	e5845024 	str	r5, [r4, #36]	; fField36
         f2c40:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f2c44:	e3300000 	teq	r0, #0	; 0x0
         f2c48:	0a000002 	beq	f2c58 <TIrLAPConn::DeInit(void)+0x44>
         f2c4c:	e3a01001 	mov	r1, #1	; 0x1
         f2c50:	eb6bc98b 	bl	1be5284 <CList::$__dt(void)>
         f2c54:	e5845028 	str	r5, [r4, #40]	; fField40
         f2c58:	e594002c 	ldr	r0, [r4, #44]	; fField44
         f2c5c:	e3300000 	teq	r0, #0	; 0x0
         f2c60:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f2c64:	e3a01001 	mov	r1, #1	; 0x1
         f2c68:	eb6bc985 	bl	1be5284 <CList::$__dt(void)>
         f2c6c:	e5a4502c 	str	r5, [r4, #44]!	; fField44
         f2c70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPConn::NextState(unsigned long)
 * Address: 000f2c74
 */
TIrLAPConn::NextState(unsigned long) {
    /*
         f2c74:	e5d0201c 	ldrb	r2, [r0, #28]	; fField28
         f2c78:	e3320000 	teq	r2, #0	; 0x0
         f2c7c:	0a000004 	beq	f2c94 <TIrLAPConn::HandleStandbyStateEvent(unsigned long)>
         f2c80:	e3320001 	teq	r2, #1	; 0x1
         f2c84:	0a000021 	beq	f2d10 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)>
         f2c88:	e3320002 	teq	r2, #2	; 0x2
         f2c8c:	0a0000a2 	beq	f2f1c <TIrLAPConn::HandleActiveStateEvent(unsigned long)>
         f2c90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAPConn::HandleStandbyStateEvent(unsigned long)
 * Address: 000f2c94
 */
TIrLAPConn::HandleStandbyStateEvent(unsigned long) {
    /*
         f2c94:	e1a0c00d 	mov	ip, sp
         f2c98:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f2c9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2ca0:	e1a04000 	mov	r4, r0
         f2ca4:	e1a05001 	mov	r5, r1
         f2ca8:	e3310005 	teq	r1, #5	; 0x5
         f2cac:	13350007 	teqne	r5, #7	; 0x7
         f2cb0:	0a000008 	beq	f2cd8 <TIrLAPConn::HandleStandbyStateEvent(unsigned long)+0x44>
         f2cb4:	e3350017 	teq	r5, #23	; 0x17
         f2cb8:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f2cbc:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f2cc0:	0a000010 	beq	f2d08 <TIrLAPConn::HandleStandbyStateEvent(unsigned long)+0x74>
         f2cc4:	e3350018 	teq	r5, #24	; 0x18
         f2cc8:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f2ccc:	05910008 	ldreq	r0, [r1, #8]
         f2cd0:	0a00000c 	beq	f2d08 <TIrLAPConn::HandleStandbyStateEvent(unsigned long)+0x74>
         f2cd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f2cd8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2cdc:	e594600c 	ldr	r6, [r4, #12]	; fField12
         f2ce0:	e5962008 	ldr	r2, [r6, #8]
         f2ce4:	e5901000 	ldr	r1, [r0]
         f2ce8:	eb6bd9ff 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f2cec:	e3350005 	teq	r5, #5	; 0x5
         f2cf0:	0596000c 	ldreq	r0, [r6, #12]	; fField12
         f2cf4:	05840020 	streq	r0, [r4, #32]	; fField32
         f2cf8:	e3a00001 	mov	r0, #1	; 0x1
         f2cfc:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f2d00:	e1a01006 	mov	r1, r6
         f2d04:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         f2d08:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f2d0c:	ea6513b5 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)
 * Address: 000f2d10
 */
TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long) {
    /*
         f2d10:	e1a0c00d 	mov	ip, sp
         f2d14:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f2d18:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2d1c:	e1a04000 	mov	r4, r0
         f2d20:	e3a07000 	mov	r7, #0	; 0x0
         f2d24:	e3a09001 	mov	r9, #1	; 0x1
         f2d28:	e3510008 	cmp	r1, #8	; 0x8
         f2d2c:	0a000016 	beq	f2d8c <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x7c>
         f2d30:	ca00000b 	bgt	f2d64 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x54>
         f2d34:	e3310005 	teq	r1, #5	; 0x5
         f2d38:	0a000003 	beq	f2d4c <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x3c>
         f2d3c:	e3310006 	teq	r1, #6	; 0x6
         f2d40:	0a000011 	beq	f2d8c <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x7c>
         f2d44:	e3310007 	teq	r1, #7	; 0x7
         f2d48:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f2d4c:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
         f2d50:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f2d54:	e5b12008 	ldr	r2, [r1, #8]!
         f2d58:	e5901000 	ldr	r1, [r0]
         f2d5c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f2d60:	ea6bd9e1 	b	1be94ec <CList::$InsertAt(long, void *)>
         f2d64:	e3310017 	teq	r1, #23	; 0x17
         f2d68:	0a000052 	beq	f2eb8 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x1a8>
         f2d6c:	e3310018 	teq	r1, #24	; 0x18
         f2d70:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f2d74:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f2d78:	e5847020 	str	r7, [r4, #32]	; fField32
         f2d7c:	e5c4701d 	strb	r7, [r4, #29]	; fField29
         f2d80:	e5c4701c 	strb	r7, [r4, #28]	; fField28
         f2d84:	e5910008 	ldr	r0, [r1, #8]
         f2d88:	ea000061 	b	f2f14 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x204>
         f2d8c:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f2d90:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f2d94:	e1a0000d 	mov	r0, sp
         f2d98:	e5941024 	ldr	r1, [r4, #36]	; fField36
         f2d9c:	eb6bc110 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f2da0:	e1a0000d 	mov	r0, sp
         f2da4:	eb6bd193 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f2da8:	e1a06000 	mov	r6, r0
         f2dac:	e1a0000d 	mov	r0, sp
         f2db0:	eb6bddf0 	bl	1bea578 <CArrayIterator::$More(void)>
         f2db4:	e3300000 	teq	r0, #0	; 0x0
         f2db8:	0a00001d 	beq	f2e34 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x124>
         f2dbc:	e3a0a006 	mov	sl, #6	; 0x6
         f2dc0:	e3a08008 	mov	r8, #8	; 0x8
         f2dc4:	e1a00006 	mov	r0, r6
         f2dc8:	eb000e97 	bl	f682c <TLSAPConn::GetPendConnLstn(void)>
         f2dcc:	e1a01000 	mov	r1, r0
         f2dd0:	e5d00000 	ldrb	r0, [r0]
         f2dd4:	e3300005 	teq	r0, #5	; 0x5
         f2dd8:	05c1a000 	streqb	sl, [r1]
         f2ddc:	0a000001 	beq	f2de8 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0xd8>
         f2de0:	e3300007 	teq	r0, #7	; 0x7
         f2de4:	05c18000 	streqb	r8, [r1]
         f2de8:	e5950004 	ldr	r0, [r5, #4]
         f2dec:	e5810004 	str	r0, [r1, #4]
         f2df0:	e595000c 	ldr	r0, [r5, #12]	; fField12
         f2df4:	e581000c 	str	r0, [r1, #12]	; fField12
         f2df8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f2dfc:	e5d00094 	ldrb	r0, [r0, #148]
         f2e00:	e3300000 	teq	r0, #0	; 0x0
         f2e04:	13a00000 	movne	r0, #0	; 0x0
         f2e08:	03a00001 	moveq	r0, #1	; 0x1
         f2e0c:	e5c10011 	strb	r0, [r1, #17]
         f2e10:	e1a00006 	mov	r0, r6
         f2e14:	eb651373 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f2e18:	e1a0000d 	mov	r0, sp
         f2e1c:	eb6be1df 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f2e20:	e1a06000 	mov	r6, r0
         f2e24:	e1a0000d 	mov	r0, sp
         f2e28:	eb6bddd2 	bl	1bea578 <CArrayIterator::$More(void)>
         f2e2c:	e3300000 	teq	r0, #0	; 0x0
         f2e30:	1affffe3 	bne	f2dc4 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0xb4>
         f2e34:	e1a0000d 	mov	r0, sp
         f2e38:	e3a01000 	mov	r1, #0	; 0x0
         f2e3c:	eb6bc509 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f2e40:	e28dd01c 	add	sp, sp, #28	; 0x1c
         f2e44:	e5950004 	ldr	r0, [r5, #4]
         f2e48:	e3300000 	teq	r0, #0	; 0x0
         f2e4c:	1a000005 	bne	f2e68 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x158>
         f2e50:	e5b5000c 	ldr	r0, [r5, #12]!	; fField12
         f2e54:	e5840020 	str	r0, [r4, #32]	; fField32
         f2e58:	e5c4901d 	strb	r9, [r4, #29]	; fField29
         f2e5c:	e3a00002 	mov	r0, #2	; 0x2
         f2e60:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f2e64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f2e68:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2e6c:	e5900000 	ldr	r0, [r0]
         f2e70:	e2506001 	subs	r6, r0, #1	; 0x1
         f2e74:	4a00000c 	bmi	f2eac <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x19c>
         f2e78:	e1a01006 	mov	r1, r6
         f2e7c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2e80:	eb6bcd2f 	bl	1be6344 <CList::$At(long)>
         f2e84:	e1a08000 	mov	r8, r0
         f2e88:	e1a01008 	mov	r1, r8
         f2e8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2e90:	eb6be5e4 	bl	1bec628 <CList::$Remove(void *)>
         f2e94:	e1a01008 	mov	r1, r8
         f2e98:	e1a00004 	mov	r0, r4
         f2e9c:	e5952004 	ldr	r2, [r5, #4]
         f2ea0:	eb6502be 	bl	1a339a0 <TIrLAPConn::$CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)>
         f2ea4:	e2566001 	subs	r6, r6, #1	; 0x1
         f2ea8:	5afffff2 	bpl	f2e78 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x168>
         f2eac:	e5847020 	str	r7, [r4, #32]	; fField32
         f2eb0:	e5c4701c 	strb	r7, [r4, #28]	; fField28
         f2eb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f2eb8:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f2ebc:	e5951008 	ldr	r1, [r5, #8]
         f2ec0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2ec4:	eb6be5d7 	bl	1bec628 <CList::$Remove(void *)>
         f2ec8:	e1a06000 	mov	r6, r0
         f2ecc:	e1a00004 	mov	r0, r4
         f2ed0:	e5951008 	ldr	r1, [r5, #8]
         f2ed4:	e5952004 	ldr	r2, [r5, #4]
         f2ed8:	eb6502b0 	bl	1a339a0 <TIrLAPConn::$CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)>
         f2edc:	e3360000 	teq	r6, #0	; 0x0
         f2ee0:	05940024 	ldreq	r0, [r4, #36]	; fField36
         f2ee4:	05900000 	ldreq	r0, [r0]
         f2ee8:	03300000 	teqeq	r0, #0	; 0x0
         f2eec:	1a000004 	bne	f2f04 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x1f4>
         f2ef0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f2ef4:	e5d00035 	ldrb	r0, [r0, #53]
         f2ef8:	e3300000 	teq	r0, #0	; 0x0
         f2efc:	15b40018 	ldrne	r0, [r4, #24]!	; fField24
         f2f00:	1a000002 	bne	f2f10 <TIrLAPConn::HandleConnectOrListenStateEvent(unsigned long)+0x200>
         f2f04:	e3a00018 	mov	r0, #24	; 0x18
         f2f08:	e5c50000 	strb	r0, [r5]
         f2f0c:	e5950008 	ldr	r0, [r5, #8]
         f2f10:	e1a01005 	mov	r1, r5
         f2f14:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f2f18:	ea651332 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAPConn::HandleActiveStateEvent(unsigned long)
 * Address: 000f2f1c
 */
TIrLAPConn::HandleActiveStateEvent(unsigned long) {
    /*
         f2f1c:	e1a0c00d 	mov	ip, sp
         f2f20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f2f24:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2f28:	e1a04000 	mov	r4, r0
         f2f2c:	e1a05001 	mov	r5, r1
         f2f30:	e3a06000 	mov	r6, #0	; 0x0
         f2f34:	e3510011 	cmp	r1, #17	; 0x11
         f2f38:	0a000026 	beq	f2fd8 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0xbc>
         f2f3c:	ca000007 	bgt	f2f60 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x44>
         f2f40:	e3350005 	teq	r5, #5	; 0x5
         f2f44:	13350007 	teqne	r5, #7	; 0x7
         f2f48:	0a00000e 	beq	f2f88 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x6c>
         f2f4c:	e335000b 	teq	r5, #11	; 0xb
         f2f50:	01a00004 	moveq	r0, r4
         f2f54:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f2f58:	0a65028f 	beq	1a3399c <TIrLAPConn::$HandleGetDataRequest(void)>
         f2f5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f2f60:	e3350017 	teq	r5, #23	; 0x17
         f2f64:	0a000025 	beq	f3000 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0xe4>
         f2f68:	e3350018 	teq	r5, #24	; 0x18
         f2f6c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f2f70:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f2f74:	e5846020 	str	r6, [r4, #32]	; fField32
         f2f78:	e5c4601d 	strb	r6, [r4, #29]	; fField29
         f2f7c:	e5c4601c 	strb	r6, [r4, #28]	; fField28
         f2f80:	e5910008 	ldr	r0, [r1, #8]
         f2f84:	ea000034 	b	f305c <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x140>
         f2f88:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f2f8c:	e594600c 	ldr	r6, [r4, #12]	; fField12
         f2f90:	e5962008 	ldr	r2, [r6, #8]
         f2f94:	e5901000 	ldr	r1, [r0]
         f2f98:	eb6bd953 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f2f9c:	e3350005 	teq	r5, #5	; 0x5
         f2fa0:	13a00008 	movne	r0, #8	; 0x8
         f2fa4:	03a00006 	moveq	r0, #6	; 0x6
         f2fa8:	e5c60000 	strb	r0, [r6]
         f2fac:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f2fb0:	e586000c 	str	r0, [r6, #12]	; fField12
         f2fb4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         f2fb8:	e5d00094 	ldrb	r0, [r0, #148]
         f2fbc:	e3300000 	teq	r0, #0	; 0x0
         f2fc0:	13a00000 	movne	r0, #0	; 0x0
         f2fc4:	03a00001 	moveq	r0, #1	; 0x1
         f2fc8:	e5c60011 	strb	r0, [r6, #17]
         f2fcc:	e5960008 	ldr	r0, [r6, #8]
         f2fd0:	e1a01006 	mov	r1, r6
         f2fd4:	ea000020 	b	f305c <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x140>
         f2fd8:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f2fdc:	e1a00004 	mov	r0, r4
         f2fe0:	e5951008 	ldr	r1, [r5, #8]
         f2fe4:	e59f2010 	ldr	r2, [pc, #10]	; f2ffc <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0xe0>
         f2fe8:	eb65026d 	bl	1a339a4 <TIrLAPConn::$CancelPendingGetRequests(TLSAPConn *, long)>
         f2fec:	e3a00012 	mov	r0, #18	; 0x12
         f2ff0:	e5c50000 	strb	r0, [r5]
         f2ff4:	e5856004 	str	r6, [r5, #4]
         f2ff8:	ea000015 	b	f3054 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x138>
         f2ffc:	ffffc17b 	swinv	0x00ffc17b
         f3000:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f3004:	e5951008 	ldr	r1, [r5, #8]
         f3008:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f300c:	eb6be585 	bl	1bec628 <CList::$Remove(void *)>
         f3010:	e1a06000 	mov	r6, r0
         f3014:	e1a00004 	mov	r0, r4
         f3018:	e5951008 	ldr	r1, [r5, #8]
         f301c:	e5952004 	ldr	r2, [r5, #4]
         f3020:	eb65025e 	bl	1a339a0 <TIrLAPConn::$CleanupPendingGetRequestsAndReplies(TLSAPConn *, long)>
         f3024:	e3360000 	teq	r6, #0	; 0x0
         f3028:	05940024 	ldreq	r0, [r4, #36]	; fField36
         f302c:	05900000 	ldreq	r0, [r0]
         f3030:	03300000 	teqeq	r0, #0	; 0x0
         f3034:	1a000004 	bne	f304c <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x130>
         f3038:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f303c:	e5d00035 	ldrb	r0, [r0, #53]
         f3040:	e3300000 	teq	r0, #0	; 0x0
         f3044:	15b40018 	ldrne	r0, [r4, #24]!	; fField24
         f3048:	1a000002 	bne	f3058 <TIrLAPConn::HandleActiveStateEvent(unsigned long)+0x13c>
         f304c:	e3a00018 	mov	r0, #24	; 0x18
         f3050:	e5c50000 	strb	r0, [r5]
         f3054:	e5950008 	ldr	r0, [r5, #8]
         f3058:	e1a01005 	mov	r1, r5
         f305c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f3060:	ea6512e0 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAPConn::HandleGetDataRequest(void)
 * Address: 000f3064
 */
TIrLAPConn::HandleGetDataRequest(void) {
    /*
         f3064:	e1a0c00d 	mov	ip, sp
         f3068:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f306c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3070:	e1a04000 	mov	r4, r0
         f3074:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f3078:	e3a07000 	mov	r7, #0	; 0x0
         f307c:	e590102c 	ldr	r1, [r0, #44]	; fField44
         f3080:	e590600c 	ldr	r6, [r0, #12]	; fField12
         f3084:	e1a0000d 	mov	r0, sp
         f3088:	eb6bc055 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f308c:	e1a0000d 	mov	r0, sp
         f3090:	eb6bd0d8 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f3094:	e1a05000 	mov	r5, r0
         f3098:	e1a0000d 	mov	r0, sp
         f309c:	eb6bdd35 	bl	1bea578 <CArrayIterator::$More(void)>
         f30a0:	e3300000 	teq	r0, #0	; 0x0
         f30a4:	0a00001e 	beq	f3124 <TIrLAPConn::HandleGetDataRequest(void)+0xc0>
         f30a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         f30ac:	e1a0300d 	mov	r3, sp
         f30b0:	e28d2004 	add	r2, sp, #4	; 0x4
         f30b4:	e1a01005 	mov	r1, r5
         f30b8:	e1a00004 	mov	r0, r4
         f30bc:	eb65023b 	bl	1a339b0 <TIrLAPConn::$ExtractHeader(CBufferSegment *, TLMPDUHeader &, unsigned long &)>
         f30c0:	e1a03005 	mov	r3, r5
         f30c4:	e92d0008 	stmdb	sp!, {r3}
         f30c8:	e59d3004 	ldr	r3, [sp, #4]
         f30cc:	e28d2008 	add	r2, sp, #8	; 0x8
         f30d0:	e1a01006 	mov	r1, r6
         f30d4:	e1a00004 	mov	r0, r4
         f30d8:	eb650235 	bl	1a339b4 <TIrLAPConn::$DataDelivered(TIrDataXferEvent *, TLMPDUHeader &, unsigned long, CBufferSegment *)>
         f30dc:	e28dd004 	add	sp, sp, #4	; 0x4
         f30e0:	e3300000 	teq	r0, #0	; 0x0
         f30e4:	0a000004 	beq	f30fc <TIrLAPConn::HandleGetDataRequest(void)+0x98>
         f30e8:	e1a01005 	mov	r1, r5
         f30ec:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
         f30f0:	eb6be54c 	bl	1bec628 <CList::$Remove(void *)>
         f30f4:	e28dd00c 	add	sp, sp, #12	; 0xc
         f30f8:	ea00000d 	b	f3134 <TIrLAPConn::HandleGetDataRequest(void)+0xd0>
         f30fc:	e28dd00c 	add	sp, sp, #12	; 0xc
         f3100:	e1a0000d 	mov	r0, sp
         f3104:	eb6be125 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f3108:	e1a05000 	mov	r5, r0
         f310c:	e1a0000d 	mov	r0, sp
         f3110:	eb6bdd18 	bl	1bea578 <CArrayIterator::$More(void)>
         f3114:	e3300000 	teq	r0, #0	; 0x0
         f3118:	1affffe2 	bne	f30a8 <TIrLAPConn::HandleGetDataRequest(void)+0x44>
         f311c:	e3370000 	teq	r7, #0	; 0x0
         f3120:	1a000003 	bne	f3134 <TIrLAPConn::HandleGetDataRequest(void)+0xd0>
         f3124:	e1a02006 	mov	r2, r6
         f3128:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         f312c:	e5901000 	ldr	r1, [r0]
         f3130:	eb6bd8ed 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f3134:	e1a0000d 	mov	r0, sp
         f3138:	e3a01000 	mov	r1, #0	; 0x0
         f313c:	eb6bc449 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f3140:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

