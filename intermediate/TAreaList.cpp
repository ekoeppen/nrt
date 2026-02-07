#include "include/TAreaList.h"

/**
 * Symbol: Make__9TAreaListSFv
 * Address: 0021c498
 */
void TAreaList::Make() {
    /*
        21c498:	e1a0c00d 	mov	ip, sp
        21c49c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21c4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c4a4:	e3a00020 	mov	r0, #32	; 0x20
        21c4a8:	eb66c8a2 	bl	1bce738 <$__nw(unsigned int)>
        21c4ac:	e1b04000 	movs	r4, r0
        21c4b0:	0a000003 	beq	21c4c4 <Make__9TAreaListSFv+0x2c>
        21c4b4:	e1a00004 	mov	r0, r4
        21c4b8:	ebffc0a9 	bl	20c764 <TDArray::__ct(void)>
        21c4bc:	e59f0038 	ldr	r0, [pc, #38]	; 21c4fc <Make__9TAreaListSFv+0x64>
        21c4c0:	e5840000 	str	r0, [r4]
        21c4c4:	e3a00000 	mov	r0, #0	; 0x0
        21c4c8:	e3340000 	teq	r4, #0	; 0x0
        21c4cc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        21c4d0:	e584001c 	str	r0, [r4, #28]
        21c4d4:	e1a00004 	mov	r0, r4
        21c4d8:	eb650eb7 	bl	1b5ffbc <TAreaList::$IAreaList(void)>
        21c4dc:	e3300000 	teq	r0, #0	; 0x0
        21c4e0:	0a000003 	beq	21c4f4 <Make__9TAreaListSFv+0x5c>
        21c4e4:	e1a00004 	mov	r0, r4
        21c4e8:	e1a0e00f 	mov	lr, pc
        21c4ec:	e594f000 	ldr	pc, [r4]
        21c4f0:	e3a04000 	mov	r4, #0	; 0x0
        21c4f4:	e1a00004 	mov	r0, r4
        21c4f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21c4fc:	00020784 	andeq	r0, r2, r4, lsl #15
    */
}

/**
 * Symbol: TAreaList::IAreaList(void)
 * Address: 0021c500
 */
TAreaList::IAreaList(void) {
    /*
        21c500:	e3a02000 	mov	r2, #0	; 0x0
        21c504:	e3a01004 	mov	r1, #4	; 0x4
        21c508:	ea650eb0 	b	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TAreaList::Dispose(void)
 * Address: 0021c50c
 */
TAreaList::Dispose(void) {
    /*
        21c50c:	e1a0c00d 	mov	ip, sp
        21c510:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c514:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c518:	e1a04000 	mov	r4, r0
        21c51c:	e3a05000 	mov	r5, #0	; 0x0
        21c520:	e590600c 	ldr	r6, [r0, #12]	; fField12
        21c524:	e3560000 	cmp	r6, #0	; 0x0
        21c528:	9a000007 	bls	21c54c <TAreaList::Dispose(void)+0x40>
        21c52c:	e1a01005 	mov	r1, r5
        21c530:	e1a00004 	mov	r0, r4
        21c534:	eb650a7f 	bl	1b5ef38 <TAreaList::$GetArea(unsigned long)>
        21c538:	e1a0e00f 	mov	lr, pc
        21c53c:	e590f000 	ldr	pc, [r0]
        21c540:	e2855001 	add	r5, r5, #1	; 0x1
        21c544:	e1550006 	cmp	r5, r6
        21c548:	3afffff7 	bcc	21c52c <TAreaList::Dispose(void)+0x20>
        21c54c:	e1a00004 	mov	r0, r4
        21c550:	eb6516f7 	bl	1b62134 <TArray::$Release(void)>
        21c554:	e3300000 	teq	r0, #0	; 0x0
        21c558:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        21c55c:	e1a00004 	mov	r0, r4
        21c560:	e5941000 	ldr	r1, [r4]
        21c564:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        21c568:	e281f010 	add	pc, r1, #16	; 0x10
    */
}

/**
 * Symbol: TAreaList::IDispose(void)
 * Address: 0021c56c
 */
TAreaList::IDispose(void) {
    /*
        21c56c:	ea650e9c 	b	1b5ffe4 <TArray::$IDispose(void)>
    */
}

/**
 * Symbol: TAreaList::Clone(void)
 * Address: 0021c570
 */
TAreaList::Clone(void) {
    /*
        21c570:	e1a0c00d 	mov	ip, sp
        21c574:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c578:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c57c:	e1a04000 	mov	r4, r0
        21c580:	e3a05000 	mov	r5, #0	; 0x0
        21c584:	e590600c 	ldr	r6, [r0, #12]	; fField12
        21c588:	e3560000 	cmp	r6, #0	; 0x0
        21c58c:	9a000006 	bls	21c5ac <TAreaList::Clone(void)+0x3c>
        21c590:	e1a01005 	mov	r1, r5
        21c594:	e1a00004 	mov	r0, r4
        21c598:	eb650a66 	bl	1b5ef38 <TAreaList::$GetArea(unsigned long)>
        21c59c:	eb650221 	bl	1b5ce28 <TRecArea::$Clone(void)>
        21c5a0:	e2855001 	add	r5, r5, #1	; 0x1
        21c5a4:	e1550006 	cmp	r5, r6
        21c5a8:	3afffff8 	bcc	21c590 <TAreaList::Clone(void)+0x20>
        21c5ac:	e1a00004 	mov	r0, r4
        21c5b0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        21c5b4:	ea65021a 	b	1b5ce24 <TArray::$Clone(void)>
    */
}

/**
 * Symbol: TAreaList::GetArea(unsigned long)
 * Address: 0021c5b8
 */
TAreaList::GetArea(unsigned long) {
    /*
        21c5b8:	e1a0c00d 	mov	ip, sp
        21c5bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21c5c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c5c4:	e5902000 	ldr	r2, [r0]
        21c5c8:	e1a0e00f 	mov	lr, pc
        21c5cc:	e282f01c 	add	pc, r2, #28	; 0x1c
        21c5d0:	e5900000 	ldr	r0, [r0]
        21c5d4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TAreaList::AddArea(TRecArea *)
 * Address: 0021c5d8
 */
TAreaList::AddArea(TRecArea *) {
    /*
        21c5d8:	e1a0c00d 	mov	ip, sp
        21c5dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c5e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c5e4:	e1a05000 	mov	r5, r0
        21c5e8:	e1a04001 	mov	r4, r1
        21c5ec:	e5901000 	ldr	r1, [r0]
        21c5f0:	e1a0e00f 	mov	lr, pc
        21c5f4:	e281f018 	add	pc, r1, #24	; 0x18
        21c5f8:	e1b06000 	movs	r6, r0
        21c5fc:	03a00001 	moveq	r0, #1	; 0x1
        21c600:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        21c604:	e1a00005 	mov	r0, r5
        21c608:	e5951000 	ldr	r1, [r5]
        21c60c:	e1a0e00f 	mov	lr, pc
        21c610:	e281f024 	add	pc, r1, #36	; 0x24
        21c614:	e1a00004 	mov	r0, r4
        21c618:	eb650202 	bl	1b5ce28 <TRecArea::$Clone(void)>
        21c61c:	e3a00000 	mov	r0, #0	; 0x0
        21c620:	e5864000 	str	r4, [r6]
        21c624:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAreaList::FindMatchingView(unsigned long)
 * Address: 0021c628
 */
TAreaList::FindMatchingView(unsigned long) {
    /*
        21c628:	e1a0c00d 	mov	ip, sp
        21c62c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21c630:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c634:	e1a04000 	mov	r4, r0
        21c638:	e1a05001 	mov	r5, r1
        21c63c:	e3a06000 	mov	r6, #0	; 0x0
        21c640:	e590700c 	ldr	r7, [r0, #12]	; fField12
        21c644:	e3570000 	cmp	r7, #0	; 0x0
        21c648:	9a000009 	bls	21c674 <TAreaList::FindMatchingView(unsigned long)+0x4c>
        21c64c:	e1a01006 	mov	r1, r6
        21c650:	e1a00004 	mov	r0, r4
        21c654:	eb650a37 	bl	1b5ef38 <TAreaList::$GetArea(unsigned long)>
        21c658:	e590002c 	ldr	r0, [r0, #44]
        21c65c:	e1300005 	teq	r0, r5
        21c660:	03a00001 	moveq	r0, #1	; 0x1
        21c664:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21c668:	e2866001 	add	r6, r6, #1	; 0x1
        21c66c:	e1560007 	cmp	r6, r7
        21c670:	3afffff5 	bcc	21c64c <TAreaList::FindMatchingView(unsigned long)+0x24>
        21c674:	e3a00000 	mov	r0, #0	; 0x0
        21c678:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAreaList::GetMergedArea(void)
 * Address: 0021c6dc
 */
TAreaList::GetMergedArea(void) {
    /*
        21c6dc:	e590100c 	ldr	r1, [r0, #12]	; fField12
        21c6e0:	e2411001 	sub	r1, r1, #1	; 0x1
        21c6e4:	ea650a13 	b	1b5ef38 <TAreaList::$GetArea(unsigned long)>
    */
}

