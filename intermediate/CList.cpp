#include "DDKIncludes/UtilityClasses/ArrayIterator.h"

/**
 * Symbol: Make__5CListSFl
 * Address: 0010ed2c
 */
static CList* CList::Make(ArrayIndex size) {
    /*
        10ed2c:	e3a00000 	mov	r0, #0	; 0x0
        10ed30:	ea6b553d 	b	1be422c <CList::$__ct(void)>
    */
}

/**
 * Symbol: Make__5CListSFv
 * Address: 00112f9c
 */
static CList* CList::Make(ArrayIndex size) {
    /*
        112f9c:	e3a00000 	mov	r0, #0	; 0x0
        112fa0:	ea6b44a1 	b	1be422c <CList::$__ct(void)>
    */
}

/**
 * Symbol: CList::GetIdentityIndex(void *)
 * Address: 00112fd0
 */
{ return CList::GetIdentityIndex(item); } {
    /*
        112fd0:	e1a0c00d 	mov	ip, sp
        112fd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        112fd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        112fdc:	e1a04000 	mov	r4, r0
        112fe0:	e24dd010 	sub	sp, sp, #16	; 0x10
        112fe4:	e1a0000d 	mov	r0, sp
        112fe8:	e3a02000 	mov	r2, #0	; 0x0
        112fec:	eb6b407a 	bl	1be31dc <CItemComparer::$__ct(void const *, void const *)>
        112ff0:	e28d200c 	add	r2, sp, #12	; 0xc
        112ff4:	e1a0100d 	mov	r1, sp
        112ff8:	e1a00004 	mov	r0, r4
        112ffc:	eb6b69a6 	bl	1bed69c <CList::$Search(CItemTester *, long &)>
        113000:	e59d000c 	ldr	r0, [sp, #12]
        113004:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CList::Search(CItemTester *, long &)
 * Address: 00113008
 */
void*		CList::Search(CItemTester* test, ArrayIndex& index) {
    /*
        113008:	e1a0c00d 	mov	ip, sp
        11300c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        113010:	e24cb004 	sub	fp, ip, #4	; 0x4
        113014:	e1a05001 	mov	r5, r1
        113018:	e1a04002 	mov	r4, r2
        11301c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        113020:	e1a01000 	mov	r1, r0
        113024:	e1a0000d 	mov	r0, sp
        113028:	eb6b406d 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        11302c:	e3e00000 	mvn	r0, #0	; 0x0
        113030:	e3a07000 	mov	r7, #0	; 0x0
        113034:	e5840000 	str	r0, [r4]
        113038:	e1a0000d 	mov	r0, sp
        11303c:	eb6b50ed 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        113040:	e1a06000 	mov	r6, r0
        113044:	e1a0000d 	mov	r0, sp
        113048:	eb6b5d4a 	bl	1bea578 <CArrayIterator::$More(void)>
        11304c:	e3300000 	teq	r0, #0	; 0x0
        113050:	0a00000f 	beq	113094 <CList::Search(CItemTester *, long &)+0x8c>
        113054:	e1a01006 	mov	r1, r6
        113058:	e1a00005 	mov	r0, r5
        11305c:	e1a0e00f 	mov	lr, pc
        113060:	e595f000 	ldr	pc, [r5]
        113064:	e3300000 	teq	r0, #0	; 0x0
        113068:	01a07006 	moveq	r7, r6
        11306c:	059d0004 	ldreq	r0, [sp, #4]	; CList
        113070:	05840000 	streq	r0, [r4]
        113074:	0a000006 	beq	113094 <CList::Search(CItemTester *, long &)+0x8c>
        113078:	e1a0000d 	mov	r0, sp
        11307c:	eb6b6147 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        113080:	e1a06000 	mov	r6, r0
        113084:	e1a0000d 	mov	r0, sp
        113088:	eb6b5d3a 	bl	1bea578 <CArrayIterator::$More(void)>
        11308c:	e3300000 	teq	r0, #0	; 0x0
        113090:	1affffef 	bne	113054 <CList::Search(CItemTester *, long &)+0x4c>
        113094:	e1a0000d 	mov	r0, sp
        113098:	e3a01000 	mov	r1, #0	; 0x0
        11309c:	eb6b4471 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1130a0:	e1a00007 	mov	r0, r7
        1130a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CList::__ct(void)
 * Address: 00113238
 */
CList::CList() {
    /*
        113238:	e1a0c00d 	mov	ip, sp
        11323c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        113240:	e24cb004 	sub	fp, ip, #4	; 0x4
        113244:	e1b04000 	movs	r4, r0
        113248:	1a000003 	bne	11325c <CList::__ct(void)+0x24>
        11324c:	e3a00018 	mov	r0, #24	; 0x18
        113250:	eb6aed38 	bl	1bce738 <$__nw(unsigned int)>
        113254:	e1b04000 	movs	r4, r0
        113258:	0a000003 	beq	11326c <CList::__ct(void)+0x34>
        11325c:	e1a00004 	mov	r0, r4
        113260:	e3a02004 	mov	r2, #4	; 0x4
        113264:	e3a01004 	mov	r1, #4	; 0x4
        113268:	eb6b3fd9 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        11326c:	e1a00004 	mov	r0, r4
        113270:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CList::__dt(void)
 * Address: 0011332c
 */
CList::~CList() {
    /*
        11332c:	e1a0c00d 	mov	ip, sp
        113330:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113334:	e24cb004 	sub	fp, ip, #4	; 0x4
        113338:	e1a04000 	mov	r4, r0
        11333c:	e1a05001 	mov	r5, r1
        113340:	e3a01000 	mov	r1, #0	; 0x0
        113344:	eb6b43c6 	bl	1be4264 <CDynamicArray::$__dt(void)>
        113348:	e3150001 	tst	r5, #1	; 0x1
        11334c:	11a00004 	movne	r0, r4
        113350:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        113354:	1a6ae8e1 	bne	1bcd6e0 <$__dl(void *)>
        113358:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CList::At(long)
 * Address: 0011341c
 */
{ return CList::At(fSize - 1); } {
    /*
        11341c:	e1a0c00d 	mov	ip, sp
        113420:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        113424:	e24cb004 	sub	fp, ip, #4	; 0x4
        113428:	eb6b6899 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        11342c:	e3300000 	teq	r0, #0	; 0x0
        113430:	15900000 	ldrne	r0, [r0]
        113434:	03a00000 	moveq	r0, #0	; 0x0
        113438:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CList::InsertAt(long, void *)
 * Address: 001134a8
 */
{ return CList::InsertAt(fSize, item); } {
    /*
        1134a8:	e1a0c00d 	mov	ip, sp
        1134ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1134b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1134b4:	e52d2004 	str	r2, [sp, -#4]!	; CList
        1134b8:	e1a0200d 	mov	r2, sp
        1134bc:	e3a03001 	mov	r3, #1	; 0x1
        1134c0:	eb6b580c 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1134c4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CList::Remove(void *)
 * Address: 001134ec
 */
NewtonErr	CList::Remove(void* item) {
    /*
        1134ec:	e1a0c00d 	mov	ip, sp
        1134f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1134f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1134f8:	e1a04000 	mov	r4, r0
        1134fc:	eb6b53cc 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        113500:	e3700001 	cmn	r0, #1	; 0x1
        113504:	03a00f52 	moveq	r0, #328	; 0x148
        113508:	02400b0e 	subeq	r0, r0, #14336	; 0x3800
        11350c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        113510:	e1a01000 	mov	r1, r0
        113514:	e1a00004 	mov	r0, r4
        113518:	e3a02001 	mov	r2, #1	; 0x1
        11351c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        113520:	ea6b6443 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: CList::InsertUnique(void *)
 * Address: 00113640
 */
Boolean		CList::InsertUnique(void* item) {
    /*
        113640:	e1a0c00d 	mov	ip, sp
        113644:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        113648:	e24cb004 	sub	fp, ip, #4	; 0x4
        11364c:	e1a04000 	mov	r4, r0
        113650:	e1a05001 	mov	r5, r1
        113654:	eb6b5376 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        113658:	e3700001 	cmn	r0, #1	; 0x1
        11365c:	03a00001 	moveq	r0, #1	; 0x1
        113660:	13a00000 	movne	r0, #0	; 0x0
        113664:	e21060ff 	ands	r6, r0, #255	; 0xff
        113668:	0a000003 	beq	11367c <CList::InsertUnique(void *)+0x3c>
        11366c:	e1a02005 	mov	r2, r5
        113670:	e5941000 	ldr	r1, [r4]
        113674:	e1a00004 	mov	r0, r4
        113678:	eb6b579b 	bl	1be94ec <CList::$InsertAt(long, void *)>
        11367c:	e1a00006 	mov	r0, r6
        113680:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CList::Replace(void *, void *)
 * Address: 00113684
 */
NewtonErr	CList::Replace(void* oldItem, void* newItem) {
    /*
        113684:	e1a0c00d 	mov	ip, sp
        113688:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11368c:	e24cb004 	sub	fp, ip, #4	; 0x4
        113690:	e1a04000 	mov	r4, r0
        113694:	e1a05002 	mov	r5, r2
        113698:	eb6b5365 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        11369c:	e1a01000 	mov	r1, r0
        1136a0:	e3700001 	cmn	r0, #1	; 0x1
        1136a4:	03a00f52 	moveq	r0, #328	; 0x148
        1136a8:	02400b0e 	subeq	r0, r0, #14336	; 0x3800
        1136ac:	11a02005 	movne	r2, r5
        1136b0:	11a00004 	movne	r0, r4
        1136b4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1136b8:	1a6b63e2 	bne	1bec648 <CList::$ReplaceAt(long, void *)>
        1136bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CList::ReplaceAt(long, void *)
 * Address: 00113820
 */
{ return CList::ReplaceAt(fSize - 1, newItem); } {
    /*
        113820:	e1a0c00d 	mov	ip, sp
        113824:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        113828:	e24cb004 	sub	fp, ip, #4	; 0x4
        11382c:	e52d2004 	str	r2, [sp, -#4]!	; CList
        113830:	e1a0200d 	mov	r2, sp
        113834:	e3a03001 	mov	r3, #1	; 0x1
        113838:	eb6b6383 	bl	1bec64c <CDynamicArray::$ReplaceElementsAt(long, void *, long)>
        11383c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

