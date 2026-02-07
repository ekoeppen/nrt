#include "include/TCommPartHandler.h"

/**
 * Symbol: TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 0013a5d8
 */
TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
        13a5d8:	e1a0c00d 	mov	ip, sp
        13a5dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13a5e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13a5e4:	e24cb014 	sub	fp, ip, #20	; 0x14
        13a5e8:	e1a06000 	mov	r6, r0
        13a5ec:	e1a04001 	mov	r4, r1
        13a5f0:	e1a05002 	mov	r5, r2
        13a5f4:	e3a00000 	mov	r0, #0	; 0x0
        13a5f8:	e59b9018 	ldr	r9, [fp, #24]
        13a5fc:	e52d0004 	str	r0, [sp, -#4]!
        13a600:	e59f00bc 	ldr	r0, [pc, #bc]	; 13a6c4 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0xec>
        13a604:	e5900000 	ldr	r0, [r0]
        13a608:	e5901000 	ldr	r1, [r0]
        13a60c:	e5940000 	ldr	r0, [r4]
        13a610:	e5900000 	ldr	r0, [r0]
        13a614:	eb6a2711 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        13a618:	eb6a1ecb 	bl	1bc214c <$AllocateRefHandle(long)>
        13a61c:	e1a07000 	mov	r7, r0
        13a620:	e5900000 	ldr	r0, [r0]
        13a624:	e3a08000 	mov	r8, #0	; 0x0
        13a628:	e3300002 	teq	r0, #2	; 0x2
        13a62c:	0a000039 	beq	13a718 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x140>
        13a630:	e24dd004 	sub	sp, sp, #4	; 0x4
        13a634:	e3a00001 	mov	r0, #1	; 0x1
        13a638:	eb6585d7 	bl	1a9bd9c <$MakeArray(long)>
        13a63c:	eb6a1ec2 	bl	1bc214c <$AllocateRefHandle(long)>
        13a640:	e58d0000 	str	r0, [sp]
        13a644:	e1a01008 	mov	r1, r8
        13a648:	e5972000 	ldr	r2, [r7]
        13a64c:	e5900000 	ldr	r0, [r0]
        13a650:	eb6a2f40 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        13a654:	e52d806c 	str	r8, [sp, -#108]!
        13a658:	e28d0008 	add	r0, sp, #8	; 0x8
        13a65c:	eb69e0c4 	bl	1bb2974 <$setjmp>
        13a660:	e3300000 	teq	r0, #0	; 0x0
        13a664:	1a000019 	bne	13a6d0 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0xf8>
        13a668:	e1a0000d 	mov	r0, sp
        13a66c:	eb6a9682 	bl	1be007c <$AddExceptionHandler>
        13a670:	e24dd004 	sub	sp, sp, #4	; 0x4
        13a674:	e59f004c 	ldr	r0, [pc, #4c]	; 13a6c8 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0xf0>
        13a678:	e5900000 	ldr	r0, [r0]
        13a67c:	eb6a1eb2 	bl	1bc214c <$AllocateRefHandle(long)>
        13a680:	e1a08000 	mov	r8, r0
        13a684:	e59f0040 	ldr	r0, [pc, #40]	; 13a6cc <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0xf4>
        13a688:	e5900000 	ldr	r0, [r0]
        13a68c:	e5901000 	ldr	r1, [r0]
        13a690:	e5980000 	ldr	r0, [r8]
        13a694:	eb6a26f1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        13a698:	eb6a1eab 	bl	1bc214c <$AllocateRefHandle(long)>
        13a69c:	e58d0000 	str	r0, [sp]
        13a6a0:	e1a0000d 	mov	r0, sp
        13a6a4:	e28d1070 	add	r1, sp, #112	; 0x70
        13a6a8:	eb6a22c8 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        13a6ac:	e59d0000 	ldr	r0, [sp]
        13a6b0:	eb6a22c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a6b4:	e1a00008 	mov	r0, r8
        13a6b8:	eb6a22bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a6bc:	e28dd004 	add	sp, sp, #4	; 0x4
        13a6c0:	ea00000f 	b	13a704 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x12c>
        13a6c4:	00682578 	rsbeq	r2, r8, r8, ror r5
        13a6c8:	0c10544c 	ldceq	4, cr5, [r0], -#304
        13a6cc:	00684220 	rsbeq	r4, r8, r0, lsr #4
        13a6d0:	e59d0060 	ldr	r0, [sp, #96]
        13a6d4:	e59f1020 	ldr	r1, [pc, #20]	; 13a6fc <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x124>
        13a6d8:	e5911000 	ldr	r1, [r1]
        13a6dc:	eb6aa2ac 	bl	1be3194 <$Subexception>
        13a6e0:	e3300000 	teq	r0, #0	; 0x0
        13a6e4:	e1a0000d 	mov	r0, sp
        13a6e8:	0a000004 	beq	13a700 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x128>
        13a6ec:	e2800060 	add	r0, r0, #96	; 0x60
        13a6f0:	eb66a6d6 	bl	1ae4250 <$FramesException(Exception *)>
        13a6f4:	e58d0070 	str	r0, [sp, #112]
        13a6f8:	ea000001 	b	13a704 <TCommPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x12c>
        13a6fc:	00371308 	eoreqs	r1, r7, r8, lsl #6
        13a700:	eb6a9e93 	bl	1be2154 <$NextHandler>
        13a704:	e1a0000d 	mov	r0, sp
        13a708:	eb6a9a6a 	bl	1be10b8 <$ExitHandler>
        13a70c:	e5bd006c 	ldr	r0, [sp, #108]!
        13a710:	eb6a22a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a714:	e28dd004 	add	sp, sp, #4	; 0x4
        13a718:	e1a03009 	mov	r3, r9
        13a71c:	e92d0008 	stmdb	sp!, {r3}
        13a720:	e24dd008 	sub	sp, sp, #8	; 0x8
        13a724:	e28b1010 	add	r1, fp, #16	; 0x10
        13a728:	e8915000 	ldmia	r1, {ip, lr}
        13a72c:	e88d5000 	stmia	sp, {ip, lr}
        13a730:	e1a02005 	mov	r2, r5
        13a734:	e1a01004 	mov	r1, r4
        13a738:	e1a00006 	mov	r0, r6
        13a73c:	e49d3004 	ldr	r3, [sp], #4
        13a740:	eb658174 	bl	1a9ad18 <TAutoScriptPartHandler::$InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)>
        13a744:	e28dd004 	add	sp, sp, #4	; 0x4
        13a748:	e59d0004 	ldr	r0, [sp, #4]
        13a74c:	e58d0000 	str	r0, [sp]
        13a750:	e1a00007 	mov	r0, r7
        13a754:	eb6a2298 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a758:	e59d0000 	ldr	r0, [sp]
        13a75c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 0013a760
 */
TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
        13a760:	e1a0c00d 	mov	ip, sp
        13a764:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13a768:	e24cb004 	sub	fp, ip, #4	; 0x4
        13a76c:	e1a07000 	mov	r7, r0
        13a770:	e1a04001 	mov	r4, r1
        13a774:	e1a06002 	mov	r6, r2
        13a778:	e1a05003 	mov	r5, r3
        13a77c:	e3a00000 	mov	r0, #0	; 0x0
        13a780:	e52d0004 	str	r0, [sp, -#4]!
        13a784:	e59f00bc 	ldr	r0, [pc, #bc]	; 13a848 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xe8>
        13a788:	e5900000 	ldr	r0, [r0]
        13a78c:	e5901000 	ldr	r1, [r0]
        13a790:	e5940000 	ldr	r0, [r4]
        13a794:	e5900000 	ldr	r0, [r0]
        13a798:	eb6a26b0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        13a79c:	eb6a1e6a 	bl	1bc214c <$AllocateRefHandle(long)>
        13a7a0:	e1a08000 	mov	r8, r0
        13a7a4:	e5900000 	ldr	r0, [r0]
        13a7a8:	e3a09000 	mov	r9, #0	; 0x0
        13a7ac:	e3300002 	teq	r0, #2	; 0x2
        13a7b0:	0a000039 	beq	13a89c <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x13c>
        13a7b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        13a7b8:	e3a00001 	mov	r0, #1	; 0x1
        13a7bc:	eb658576 	bl	1a9bd9c <$MakeArray(long)>
        13a7c0:	eb6a1e61 	bl	1bc214c <$AllocateRefHandle(long)>
        13a7c4:	e58d0000 	str	r0, [sp]
        13a7c8:	e1a01009 	mov	r1, r9
        13a7cc:	e5982000 	ldr	r2, [r8]
        13a7d0:	e5900000 	ldr	r0, [r0]
        13a7d4:	eb6a2edf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        13a7d8:	e52d906c 	str	r9, [sp, -#108]!
        13a7dc:	e28d0008 	add	r0, sp, #8	; 0x8
        13a7e0:	eb69e063 	bl	1bb2974 <$setjmp>
        13a7e4:	e3300000 	teq	r0, #0	; 0x0
        13a7e8:	1a000019 	bne	13a854 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xf4>
        13a7ec:	e1a0000d 	mov	r0, sp
        13a7f0:	eb6a9621 	bl	1be007c <$AddExceptionHandler>
        13a7f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        13a7f8:	e59f004c 	ldr	r0, [pc, #4c]	; 13a84c <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xec>
        13a7fc:	e5900000 	ldr	r0, [r0]
        13a800:	eb6a1e51 	bl	1bc214c <$AllocateRefHandle(long)>
        13a804:	e1a09000 	mov	r9, r0
        13a808:	e59f0040 	ldr	r0, [pc, #40]	; 13a850 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xf0>
        13a80c:	e5900000 	ldr	r0, [r0]
        13a810:	e5901000 	ldr	r1, [r0]
        13a814:	e5990000 	ldr	r0, [r9]
        13a818:	eb6a2690 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        13a81c:	eb6a1e4a 	bl	1bc214c <$AllocateRefHandle(long)>
        13a820:	e58d0000 	str	r0, [sp]
        13a824:	e1a0000d 	mov	r0, sp
        13a828:	e28d1070 	add	r1, sp, #112	; 0x70
        13a82c:	eb6a2267 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        13a830:	e59d0000 	ldr	r0, [sp]
        13a834:	eb6a2260 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a838:	e1a00009 	mov	r0, r9
        13a83c:	eb6a225e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a840:	e28dd004 	add	sp, sp, #4	; 0x4
        13a844:	ea00000f 	b	13a888 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x128>
        13a848:	00682578 	rsbeq	r2, r8, r8, ror r5
        13a84c:	0c10544c 	ldceq	4, cr5, [r0], -#304
        13a850:	00684d30 	rsbeq	r4, r8, r0, lsr sp
        13a854:	e59d0060 	ldr	r0, [sp, #96]
        13a858:	e59f1020 	ldr	r1, [pc, #20]	; 13a880 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x120>
        13a85c:	e5911000 	ldr	r1, [r1]
        13a860:	eb6aa24b 	bl	1be3194 <$Subexception>
        13a864:	e3300000 	teq	r0, #0	; 0x0
        13a868:	e1a0000d 	mov	r0, sp
        13a86c:	0a000004 	beq	13a884 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x124>
        13a870:	e2800060 	add	r0, r0, #96	; 0x60
        13a874:	eb66a675 	bl	1ae4250 <$FramesException(Exception *)>
        13a878:	e58d0070 	str	r0, [sp, #112]
        13a87c:	ea000001 	b	13a888 <TCommPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x128>
        13a880:	00371308 	eoreqs	r1, r7, r8, lsl #6
        13a884:	eb6a9e32 	bl	1be2154 <$NextHandler>
        13a888:	e1a0000d 	mov	r0, sp
        13a88c:	eb6a9a09 	bl	1be10b8 <$ExitHandler>
        13a890:	e5bd006c 	ldr	r0, [sp, #108]!
        13a894:	eb6a2248 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a898:	e28dd004 	add	sp, sp, #4	; 0x4
        13a89c:	e1a03005 	mov	r3, r5
        13a8a0:	e1a02006 	mov	r2, r6
        13a8a4:	e1a01004 	mov	r1, r4
        13a8a8:	e1a00007 	mov	r0, r7
        13a8ac:	eb6595d6 	bl	1aa000c <TAutoScriptPartHandler::$RemoveFrame(RefVar const &, PartId const &, unsigned long)>
        13a8b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        13a8b4:	e59d0004 	ldr	r0, [sp, #4]
        13a8b8:	e58d0000 	str	r0, [sp]
        13a8bc:	e1a00008 	mov	r0, r8
        13a8c0:	eb6a223d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13a8c4:	e59d0000 	ldr	r0, [sp]
        13a8c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

