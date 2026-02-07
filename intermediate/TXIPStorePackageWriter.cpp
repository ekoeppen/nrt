#include "include/TXIPStorePackageWriter.h"

/**
 * Symbol: TXIPStorePackageWriter::__ct(void)
 * Address: 00278480
 */
TXIPStorePackageWriter::TXIPStorePackageWriter(void) {
    /*
        278480:	e1a0c00d 	mov	ip, sp
        278484:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        278488:	e24cb004 	sub	fp, ip, #4	; 0x4
        27848c:	e3300000 	teq	r0, #0	; 0x0
        278490:	1a000003 	bne	2784a4 <TXIPStorePackageWriter::__ct(void)+0x24>
        278494:	e3a0003c 	mov	r0, #60	; 0x3c
        278498:	eb6558a6 	bl	1bce738 <$__nw(unsigned int)>
        27849c:	e3300000 	teq	r0, #0	; 0x0
        2784a0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2784a4:	e59f1014 	ldr	r1, [pc, #14]	; 2784c0 <TXIPStorePackageWriter::__ct(void)+0x40>
        2784a8:	e5801000 	str	r1, [r0]
        2784ac:	e3a01000 	mov	r1, #0	; 0x0
        2784b0:	e5801004 	str	r1, [r0, #4]	; fField4
        2784b4:	e5801038 	str	r1, [r0, #56]	; fField56
        2784b8:	e5801034 	str	r1, [r0, #52]	; fField52
        2784bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2784c0:	0001f218 	andeq	pc, r1, r8, lsl r2
    */
}

/**
 * Symbol: TXIPStorePackageWriter::__dt(void)
 * Address: 002784c4
 */
TXIPStorePackageWriter::~TXIPStorePackageWriter(void) {
    /*
        2784c4:	e1a0c00d 	mov	ip, sp
        2784c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2784cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2784d0:	e1a04000 	mov	r4, r0
        2784d4:	e1a05001 	mov	r5, r1
        2784d8:	e59f0034 	ldr	r0, [pc, #34]	; 278514 <TXIPStorePackageWriter::__dt(void)+0x50>
        2784dc:	e5840000 	str	r0, [r4]
        2784e0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2784e4:	eb65547d 	bl	1bcd6e0 <$__dl(void *)>
        2784e8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2784ec:	eb65547b 	bl	1bcd6e0 <$__dl(void *)>
        2784f0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2784f4:	e3300000 	teq	r0, #0	; 0x0
        2784f8:	13a01001 	movne	r1, #1	; 0x1
        2784fc:	1b626d24 	blne	1b13994 <TXIPCRelocationGenerator::$__dt(void)>
        278500:	e3150001 	tst	r5, #1	; 0x1
        278504:	11a00004 	movne	r0, r4
        278508:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        27850c:	1a655473 	bne	1bcd6e0 <$__dl(void *)>
        278510:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        278514:	0001f218 	andeq	pc, r1, r8, lsl r2
    */
}

/**
 * Symbol: TXIPStorePackageWriter::Init(TStore *, unsigned long *, XIPParameterBlock *, unsigned long, RelocationHeader *, RelocationEntry *, unsigned long *)
 * Address: 00278518
 */
TXIPStorePackageWriter::Init(TStore *, unsigned long *, XIPParameterBlock *, unsigned long, RelocationHeader *, RelocationEntry *, unsigned long *) {
    /*
        278518:	e1a0c00d 	mov	ip, sp
        27851c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        278520:	e24cb004 	sub	fp, ip, #4	; 0x4
        278524:	e1a04000 	mov	r4, r0
        278528:	e99b0081 	ldmib	fp, {r0, r7}
        27852c:	e59b5010 	ldr	r5, [fp, #16]	; fField16
        278530:	e59b600c 	ldr	r6, [fp, #12]	; fField12
        278534:	e284400c 	add	r4, r4, #12	; 0xc
        278538:	e8840006 	stmia	r4, {r1, r2}
        27853c:	e244400c 	sub	r4, r4, #12	; 0xc
        278540:	e3a01000 	mov	r1, #0	; 0x0
        278544:	e5841008 	str	r1, [r4, #8]	; fField8
        278548:	e2400001 	sub	r0, r0, #1	; 0x1
        27854c:	e2800b01 	add	r0, r0, #1024	; 0x400
        278550:	e1a00520 	mov	r0, r0, lsr #10
        278554:	e584001c 	str	r0, [r4, #28]	; fField28
        278558:	e5841018 	str	r1, [r4, #24]	; fField24
        27855c:	e5930004 	ldr	r0, [r3, #4]	; fField4
        278560:	e1a00520 	mov	r0, r0, lsr #10
        278564:	e5840020 	str	r0, [r4, #32]	; fField32
        278568:	e584102c 	str	r1, [r4, #44]	; fField44
        27856c:	e5930000 	ldr	r0, [r3]
        278570:	e5840014 	str	r0, [r4, #20]	; fField20
        278574:	e3a00b01 	mov	r0, #1024	; 0x400
        278578:	eb65586e 	bl	1bce738 <$__nw(unsigned int)>
        27857c:	e5840004 	str	r0, [r4, #4]	; fField4
        278580:	eb65a6e6 	bl	1be2120 <$MemError>
        278584:	e3300000 	teq	r0, #0	; 0x0
        278588:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        27858c:	e3a00000 	mov	r0, #0	; 0x0
        278590:	eb6268f8 	bl	1b12978 <TXIPCRelocationGenerator::$__ct(void)>
        278594:	e5840034 	str	r0, [r4, #52]	; fField52
        278598:	eb65a6e0 	bl	1be2120 <$MemError>
        27859c:	e3300000 	teq	r0, #0	; 0x0
        2785a0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2785a4:	e1a03005 	mov	r3, r5
        2785a8:	e5942020 	ldr	r2, [r4, #32]	; fField32
        2785ac:	e92d000c 	stmdb	sp!, {r2, r3}
        2785b0:	e1a03006 	mov	r3, r6
        2785b4:	e1a02007 	mov	r2, r7
        2785b8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2785bc:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2785c0:	eb626d09 	bl	1b139ec <TXIPCRelocationGenerator::$Init(TStore *, RelocationHeader *, RelocationEntry *, unsigned long, unsigned long *)>
        2785c4:	e28dd008 	add	sp, sp, #8	; 0x8
        2785c8:	e3300000 	teq	r0, #0	; 0x0
        2785cc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2785d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2785d4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2785d8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2785dc:	eb64e8d9 	bl	1bb2948 <$__rt_udiv>
        2785e0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2785e4:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        2785e8:	e1a0200d 	mov	r2, sp
        2785ec:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2785f0:	eb6209c2 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2785f4:	e3300000 	teq	r0, #0	; 0x0
        2785f8:	1a000013 	bne	27864c <TXIPStorePackageWriter::Init(TStore *, unsigned long *, XIPParameterBlock *, unsigned long, RelocationHeader *, RelocationEntry *, unsigned long *)+0x134>
        2785fc:	e59d0000 	ldr	r0, [sp]
        278600:	eb626cf6 	bl	1b139e0 <$HeaderSizeForXIPChunkOfSize(long)>
        278604:	e3a0300c 	mov	r3, #12	; 0xc
        278608:	e5840028 	str	r0, [r4, #40]	; fField40
        27860c:	e92d0008 	stmdb	sp!, {r3}
        278610:	e5940034 	ldr	r0, [r4, #52]	; fField52
        278614:	eb625c66 	bl	1b0f7b4 <TXIPCRelocationGenerator::$GetCRelocBlockHeader(void)>
        278618:	e1a05000 	mov	r5, r0
        27861c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278620:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278624:	eb64e8c7 	bl	1bb2948 <$__rt_udiv>
        278628:	e5941010 	ldr	r1, [r4, #16]	; fField16
        27862c:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278630:	e3a02000 	mov	r2, #0	; 0x0
        278634:	e1a03005 	mov	r3, r5
        278638:	e594000c 	ldr	r0, [r4, #12]	; fField12
        27863c:	eb6247af 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278640:	e28dd004 	add	sp, sp, #4	; 0x4
        278644:	e3300000 	teq	r0, #0	; 0x0
        278648:	0a000000 	beq	278650 <TXIPStorePackageWriter::Init(TStore *, unsigned long *, XIPParameterBlock *, unsigned long, RelocationHeader *, RelocationEntry *, unsigned long *)+0x138>
        27864c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        278650:	e3a0000c 	mov	r0, #12	; 0xc
        278654:	e5840030 	str	r0, [r4, #48]	; fField48
        278658:	e5941028 	ldr	r1, [r4, #40]	; fField40
        27865c:	e59d0000 	ldr	r0, [sp]
        278660:	e3500000 	cmp	r0, #0	; 0x0
        278664:	b2400001 	sublt	r0, r0, #1	; 0x1
        278668:	b2800b01 	addlt	r0, r0, #1024	; 0x400
        27866c:	e1a00540 	mov	r0, r0, asr #10
        278670:	e0410100 	sub	r0, r1, r0, lsl #2
        278674:	e5840024 	str	r0, [r4, #36]	; fField36
        278678:	e28dd004 	add	sp, sp, #4	; 0x4
        27867c:	e3a00000 	mov	r0, #0	; 0x0
        278680:	eb5f0dda 	bl	1a3bdf0 <TFrameRelocationGenerator::$__ct(void)>
        278684:	e5a40038 	str	r0, [r4, #56]!	; fField56
        278688:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        27868c:	ea65a6a3 	b	1be2120 <$MemError>
    */
}

/**
 * Symbol: TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)
 * Address: 00278690
 */
TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char) {
    /*
        278690:	e1a0c00d 	mov	ip, sp
        278694:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        278698:	e24cb004 	sub	fp, ip, #4	; 0x4
        27869c:	e1a04000 	mov	r4, r0
        2786a0:	e1a07001 	mov	r7, r1
        2786a4:	e1a05002 	mov	r5, r2
        2786a8:	e203a0ff 	and	sl, r3, #255	; 0xff
        2786ac:	e3a06000 	mov	r6, #0	; 0x0
        2786b0:	e1b08002 	movs	r8, r2
        2786b4:	0a0000b9 	beq	2789a0 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x310>
        2786b8:	e2841018 	add	r1, r4, #24	; 0x18
        2786bc:	e8910003 	ldmia	r1, {r0, r1}
        2786c0:	e1500001 	cmp	r0, r1
        2786c4:	23a0604a 	movcs	r6, #74	; 0x4a
        2786c8:	22466c37 	subcs	r6, r6, #14080	; 0x3700
        2786cc:	2a0000b3 	bcs	2789a0 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x310>
        2786d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2786d4:	e2601b01 	rsb	r1, r0, #1024	; 0x400
        2786d8:	e1510008 	cmp	r1, r8
        2786dc:	a1a01008 	movge	r1, r8
        2786e0:	e1a09001 	mov	r9, r1
        2786e4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2786e8:	e0811000 	add	r1, r1, r0
        2786ec:	e0450008 	sub	r0, r5, r8
        2786f0:	e0800007 	add	r0, r0, r7
        2786f4:	e1a02009 	mov	r2, r9
        2786f8:	eb659a15 	bl	1bdef54 <$BlockMove>
        2786fc:	e1a0300a 	mov	r3, sl
        278700:	e92d0008 	stmdb	sp!, {r3}
        278704:	e9940003 	ldmib	r4, {r0, r1}
        278708:	e0802001 	add	r2, r0, r1
        27870c:	e1a03009 	mov	r3, r9
        278710:	e5940038 	ldr	r0, [r4, #56]	; fField56
        278714:	eb5f2ed7 	bl	1a44278 <TFrameRelocationGenerator::$Update(long, char *, long, unsigned char)>
        278718:	e28dd004 	add	sp, sp, #4	; 0x4
        27871c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        278720:	e0800009 	add	r0, r0, r9
        278724:	e5840008 	str	r0, [r4, #8]	; fField8
        278728:	e3300b01 	teq	r0, #1024	; 0x400
        27872c:	1a000099 	bne	278998 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x308>
        278730:	e24ddf52 	sub	sp, sp, #328	; 0x148
        278734:	e28d0004 	add	r0, sp, #4	; 0x4
        278738:	eb626883 	bl	1b1294c <TXIPCRelocator::$__ct(void)>
        27873c:	e28d2d05 	add	r2, sp, #320	; 0x140
        278740:	e5940034 	ldr	r0, [r4, #52]	; fField52
        278744:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278748:	eb625c1f 	bl	1b0f7cc <TXIPCRelocationGenerator::$GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)>
        27874c:	e1a0300d 	mov	r3, sp
        278750:	e92d0008 	stmdb	sp!, {r3}
        278754:	e28d3f51 	add	r3, sp, #324	; 0x144
        278758:	e28d0008 	add	r0, sp, #8	; 0x8
        27875c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        278760:	e5942018 	ldr	r2, [r4, #24]	; fField24
        278764:	eb625c22 	bl	1b0f7f4 <TXIPCRelocator::$Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *)>
        278768:	e28dd004 	add	sp, sp, #4	; 0x4
        27876c:	e28d0004 	add	r0, sp, #4	; 0x4
        278770:	e5941014 	ldr	r1, [r4, #20]	; fField20
        278774:	e59d2000 	ldr	r2, [sp]
        278778:	e0412002 	sub	r2, r1, r2
        27877c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        278780:	e1a0e00f 	mov	lr, pc
        278784:	e59df004 	ldr	pc, [sp, #4]	; fField4
        278788:	e28d1f51 	add	r1, sp, #324	; 0x144
        27878c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        278790:	eb5f1e09 	bl	1a3ffbc <TFrameRelocationGenerator::$GetHeader(FrameRelocationHeader *)>
        278794:	e5941014 	ldr	r1, [r4, #20]	; fField20
        278798:	e59d0000 	ldr	r0, [sp]
        27879c:	e0412000 	sub	r2, r1, r0
        2787a0:	e28d3004 	add	r3, sp, #4	; 0x4
        2787a4:	e28d0f51 	add	r0, sp, #324	; 0x144
        2787a8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2787ac:	eb5f78ee 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        2787b0:	e3a03004 	mov	r3, #4	; 0x4
        2787b4:	e92d0008 	stmdb	sp!, {r3}
        2787b8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2787bc:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2787c0:	eb64e860 	bl	1bb2948 <$__rt_udiv>
        2787c4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2787c8:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        2787cc:	e28d3f51 	add	r3, sp, #324	; 0x144
        2787d0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2787d4:	e5942030 	ldr	r2, [r4, #48]	; fField48
        2787d8:	eb624748 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2787dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2787e0:	e1b06000 	movs	r6, r0
        2787e4:	1a00001d 	bne	278860 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1d0>
        2787e8:	e3a03004 	mov	r3, #4	; 0x4
        2787ec:	e92d0008 	stmdb	sp!, {r3}
        2787f0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2787f4:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2787f8:	eb64e852 	bl	1bb2948 <$__rt_udiv>
        2787fc:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278800:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278804:	e28d3f52 	add	r3, sp, #328	; 0x148
        278808:	e594000c 	ldr	r0, [r4, #12]	; fField12
        27880c:	e5942024 	ldr	r2, [r4, #36]	; fField36
        278810:	eb62473a 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278814:	e28dd004 	add	sp, sp, #4	; 0x4
        278818:	e1b06000 	movs	r6, r0
        27881c:	1a00000f 	bne	278860 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1d0>
        278820:	e5943008 	ldr	r3, [r4, #8]	; fField8
        278824:	e92d0008 	stmdb	sp!, {r3}
        278828:	e5940020 	ldr	r0, [r4, #32]	; fField32
        27882c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278830:	eb64e844 	bl	1bb2948 <$__rt_udiv>
        278834:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278838:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        27883c:	e2842028 	add	r2, r4, #40	; 0x28
        278840:	e8920005 	ldmia	r2, {r0, r2}
        278844:	e0822000 	add	r2, r2, r0
        278848:	e594000c 	ldr	r0, [r4, #12]	; fField12
        27884c:	e5943004 	ldr	r3, [r4, #4]	; fField4
        278850:	eb62472a 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278854:	e28dd004 	add	sp, sp, #4	; 0x4
        278858:	e1b06000 	movs	r6, r0
        27885c:	0a000006 	beq	27887c <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1ec>
        278860:	e28d0004 	add	r0, sp, #4	; 0x4
        278864:	e3a01000 	mov	r1, #0	; 0x0
        278868:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        27886c:	e1a0e00f 	mov	lr, pc
        278870:	e282f008 	add	pc, r2, #8	; 0x8
        278874:	e28ddf52 	add	sp, sp, #328	; 0x148
        278878:	ea000048 	b	2789a0 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x310>
        27887c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        278880:	e2801001 	add	r1, r0, #1	; 0x1
        278884:	e5841018 	str	r1, [r4, #24]	; fField24
        278888:	e5940030 	ldr	r0, [r4, #48]	; fField48
        27888c:	e2800004 	add	r0, r0, #4	; 0x4
        278890:	e5840030 	str	r0, [r4, #48]	; fField48
        278894:	e5940024 	ldr	r0, [r4, #36]	; fField36
        278898:	e2800004 	add	r0, r0, #4	; 0x4
        27889c:	e5840024 	str	r0, [r4, #36]	; fField36
        2788a0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2788a4:	e2800b01 	add	r0, r0, #1024	; 0x400
        2788a8:	e584002c 	str	r0, [r4, #44]	; fField44
        2788ac:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2788b0:	eb64e824 	bl	1bb2948 <$__rt_udiv>
        2788b4:	e3310000 	teq	r1, #0	; 0x0
        2788b8:	1a00002e 	bne	278978 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x2e8>
        2788bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2788c0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2788c4:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        2788c8:	e1a0200d 	mov	r2, sp
        2788cc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2788d0:	eb62090a 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2788d4:	e1b06000 	movs	r6, r0
        2788d8:	1a00001c 	bne	278950 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x2c0>
        2788dc:	e59d0000 	ldr	r0, [sp]
        2788e0:	eb626c3e 	bl	1b139e0 <$HeaderSizeForXIPChunkOfSize(long)>
        2788e4:	e3a0100c 	mov	r1, #12	; 0xc
        2788e8:	e5840028 	str	r0, [r4, #40]	; fField40
        2788ec:	e5841030 	str	r1, [r4, #48]	; fField48
        2788f0:	e59d1000 	ldr	r1, [sp]
        2788f4:	e3510000 	cmp	r1, #0	; 0x0
        2788f8:	b2411001 	sublt	r1, r1, #1	; 0x1
        2788fc:	b2811b01 	addlt	r1, r1, #1024	; 0x400
        278900:	e1a01541 	mov	r1, r1, asr #10
        278904:	e0400101 	sub	r0, r0, r1, lsl #2
        278908:	e3a0300c 	mov	r3, #12	; 0xc
        27890c:	e5840024 	str	r0, [r4, #36]	; fField36
        278910:	e92d0008 	stmdb	sp!, {r3}
        278914:	e5940034 	ldr	r0, [r4, #52]	; fField52
        278918:	eb625ba5 	bl	1b0f7b4 <TXIPCRelocationGenerator::$GetCRelocBlockHeader(void)>
        27891c:	e1a06000 	mov	r6, r0
        278920:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278924:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278928:	eb64e806 	bl	1bb2948 <$__rt_udiv>
        27892c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278930:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278934:	e3a02000 	mov	r2, #0	; 0x0
        278938:	e1a03006 	mov	r3, r6
        27893c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        278940:	eb6246ee 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278944:	e28dd004 	add	sp, sp, #4	; 0x4
        278948:	e1b06000 	movs	r6, r0
        27894c:	0a000006 	beq	27896c <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x2dc>
        278950:	e28d0008 	add	r0, sp, #8	; 0x8
        278954:	e3a01000 	mov	r1, #0	; 0x0
        278958:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        27895c:	e1a0e00f 	mov	lr, pc
        278960:	e282f008 	add	pc, r2, #8	; 0x8
        278964:	e28ddf53 	add	sp, sp, #332	; 0x14c
        278968:	ea00000c 	b	2789a0 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x310>
        27896c:	e3a00000 	mov	r0, #0	; 0x0
        278970:	e584002c 	str	r0, [r4, #44]	; fField44
        278974:	e28dd004 	add	sp, sp, #4	; 0x4
        278978:	e3a00000 	mov	r0, #0	; 0x0
        27897c:	e5840008 	str	r0, [r4, #8]	; fField8
        278980:	e28d0004 	add	r0, sp, #4	; 0x4
        278984:	e3a01000 	mov	r1, #0	; 0x0
        278988:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        27898c:	e1a0e00f 	mov	lr, pc
        278990:	e282f008 	add	pc, r2, #8	; 0x8
        278994:	e28ddf52 	add	sp, sp, #328	; 0x148
        278998:	e0588009 	subs	r8, r8, r9
        27899c:	1affff45 	bne	2786b8 <TXIPStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x28>
        2789a0:	e1a00006 	mov	r0, r6
        2789a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPStorePackageWriter::Flush(void)
 * Address: 002789a8
 */
TXIPStorePackageWriter::Flush(void) {
    /*
        2789a8:	e1a0c00d 	mov	ip, sp
        2789ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2789b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2789b4:	e1a04000 	mov	r4, r0
        2789b8:	e3a05000 	mov	r5, #0	; 0x0
        2789bc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2789c0:	e3300000 	teq	r0, #0	; 0x0
        2789c4:	0a000076 	beq	278ba4 <TXIPStorePackageWriter::Flush(void)+0x1fc>
        2789c8:	e24ddf55 	sub	sp, sp, #340	; 0x154
        2789cc:	e28d0010 	add	r0, sp, #16	; 0x10
        2789d0:	eb6267dd 	bl	1b1294c <TXIPCRelocator::$__ct(void)>
        2789d4:	e28d3008 	add	r3, sp, #8	; 0x8
        2789d8:	e92d0008 	stmdb	sp!, {r3}
        2789dc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2789e0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2789e4:	eb64e7d7 	bl	1bb2948 <$__rt_udiv>
        2789e8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2789ec:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        2789f0:	e28d3004 	add	r3, sp, #4	; 0x4
        2789f4:	e28d2008 	add	r2, sp, #8	; 0x8
        2789f8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2789fc:	eb04388e 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        278a00:	e28dd004 	add	sp, sp, #4	; 0x4
        278a04:	e1b05000 	movs	r5, r0
        278a08:	1a00005f 	bne	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278a0c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        278a10:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278a14:	e1510000 	cmp	r1, r0
        278a18:	23a0504a 	movcs	r5, #74	; 0x4a
        278a1c:	22455c37 	subcs	r5, r5, #14080	; 0x3700
        278a20:	2a000059 	bcs	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278a24:	e28d2f53 	add	r2, sp, #332	; 0x14c
        278a28:	e5940034 	ldr	r0, [r4, #52]	; fField52
        278a2c:	eb625b66 	bl	1b0f7cc <TXIPCRelocationGenerator::$GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)>
        278a30:	e28d300c 	add	r3, sp, #12	; 0xc
        278a34:	e92d0008 	stmdb	sp!, {r3}
        278a38:	e28d3e15 	add	r3, sp, #336	; 0x150
        278a3c:	e28d0014 	add	r0, sp, #20	; 0x14
        278a40:	e5941034 	ldr	r1, [r4, #52]	; fField52
        278a44:	e5942018 	ldr	r2, [r4, #24]	; fField24
        278a48:	eb625b69 	bl	1b0f7f4 <TXIPCRelocator::$Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *)>
        278a4c:	e28dd004 	add	sp, sp, #4	; 0x4
        278a50:	e28d0010 	add	r0, sp, #16	; 0x10
        278a54:	e5942014 	ldr	r2, [r4, #20]	; fField20
        278a58:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        278a5c:	e0422001 	sub	r2, r2, r1
        278a60:	e5941004 	ldr	r1, [r4, #4]	; fField4
        278a64:	e1a0e00f 	mov	lr, pc
        278a68:	e59df010 	ldr	pc, [sp, #16]	; fField16
        278a6c:	e28d1e15 	add	r1, sp, #336	; 0x150
        278a70:	e5940038 	ldr	r0, [r4, #56]	; fField56
        278a74:	eb5f1d50 	bl	1a3ffbc <TFrameRelocationGenerator::$GetHeader(FrameRelocationHeader *)>
        278a78:	e5941014 	ldr	r1, [r4, #20]	; fField20
        278a7c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        278a80:	e0412000 	sub	r2, r1, r0
        278a84:	e28d3010 	add	r3, sp, #16	; 0x10
        278a88:	e28d0e15 	add	r0, sp, #336	; 0x150
        278a8c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        278a90:	eb5f7835 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        278a94:	e3a03004 	mov	r3, #4	; 0x4
        278a98:	e92d0008 	stmdb	sp!, {r3}
        278a9c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278aa0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278aa4:	eb64e7a7 	bl	1bb2948 <$__rt_udiv>
        278aa8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278aac:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278ab0:	e28d3e15 	add	r3, sp, #336	; 0x150
        278ab4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        278ab8:	e5942030 	ldr	r2, [r4, #48]	; fField48
        278abc:	eb62468f 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278ac0:	e28dd004 	add	sp, sp, #4	; 0x4
        278ac4:	e1b05000 	movs	r5, r0
        278ac8:	1a00002f 	bne	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278acc:	e3a03004 	mov	r3, #4	; 0x4
        278ad0:	e92d0008 	stmdb	sp!, {r3}
        278ad4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278ad8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278adc:	eb64e799 	bl	1bb2948 <$__rt_udiv>
        278ae0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278ae4:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278ae8:	e28d3f55 	add	r3, sp, #340	; 0x154
        278aec:	e594000c 	ldr	r0, [r4, #12]	; fField12
        278af0:	e5942024 	ldr	r2, [r4, #36]	; fField36
        278af4:	eb624681 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278af8:	e28dd004 	add	sp, sp, #4	; 0x4
        278afc:	e1b05000 	movs	r5, r0
        278b00:	1a000021 	bne	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278b04:	e5943008 	ldr	r3, [r4, #8]	; fField8
        278b08:	e92d0008 	stmdb	sp!, {r3}
        278b0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278b10:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278b14:	eb64e78b 	bl	1bb2948 <$__rt_udiv>
        278b18:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278b1c:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278b20:	e594002c 	ldr	r0, [r4, #44]	; fField44
        278b24:	e5942028 	ldr	r2, [r4, #40]	; fField40
        278b28:	e0802002 	add	r2, r0, r2
        278b2c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        278b30:	e5943004 	ldr	r3, [r4, #4]	; fField4
        278b34:	eb624671 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278b38:	e28dd004 	add	sp, sp, #4	; 0x4
        278b3c:	e1b05000 	movs	r5, r0
        278b40:	1a000011 	bne	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278b44:	e28d3008 	add	r3, sp, #8	; 0x8
        278b48:	e92d0008 	stmdb	sp!, {r3}
        278b4c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        278b50:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278b54:	eb64e77b 	bl	1bb2948 <$__rt_udiv>
        278b58:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278b5c:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        278b60:	e28d3004 	add	r3, sp, #4	; 0x4
        278b64:	e28d2008 	add	r2, sp, #8	; 0x8
        278b68:	e594000c 	ldr	r0, [r4, #12]	; fField12
        278b6c:	eb043832 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        278b70:	e28dd004 	add	sp, sp, #4	; 0x4
        278b74:	e1b05000 	movs	r5, r0
        278b78:	1a000003 	bne	278b8c <TXIPStorePackageWriter::Flush(void)+0x1e4>
        278b7c:	e3a00000 	mov	r0, #0	; 0x0
        278b80:	e5840024 	str	r0, [r4, #36]	; fField36
        278b84:	e584002c 	str	r0, [r4, #44]	; fField44
        278b88:	e5a40008 	str	r0, [r4, #8]!	; fField8
        278b8c:	e28d0010 	add	r0, sp, #16	; 0x10
        278b90:	e3a01000 	mov	r1, #0	; 0x0
        278b94:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        278b98:	e1a0e00f 	mov	lr, pc
        278b9c:	e282f008 	add	pc, r2, #8	; 0x8
        278ba0:	e28ddf55 	add	sp, sp, #340	; 0x154
        278ba4:	e1a00005 	mov	r0, r5
        278ba8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

