#include "include/TGCSafeList.h"

/**
 * Symbol: TGCSafeList::__ct(void)
 * Address: 000d7074
 */
TGCSafeList::TGCSafeList(void) {
    /*
         d7074:	e1a0c00d 	mov	ip, sp
         d7078:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d707c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7080:	e1b04000 	movs	r4, r0
         d7084:	1a000003 	bne	d7098 <TGCSafeList::__ct(void)+0x24>
         d7088:	e3a00018 	mov	r0, #24	; 0x18
         d708c:	eb6bdda9 	bl	1bce738 <$__nw(unsigned int)>
         d7090:	e1b04000 	movs	r4, r0
         d7094:	0a000005 	beq	d70b0 <TGCSafeList::__ct(void)+0x3c>
         d7098:	e1a00004 	mov	r0, r4
         d709c:	eb6c3462 	bl	1be422c <CList::$__ct(void)>
         d70a0:	e59f2010 	ldr	r2, [pc, #10]	; d70b8 <TGCSafeList::__ct(void)+0x44>
         d70a4:	e59f1010 	ldr	r1, [pc, #10]	; d70bc <TGCSafeList::__ct(void)+0x48>
         d70a8:	e1a00004 	mov	r0, r4
         d70ac:	eb6bb044 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
         d70b0:	e1a00004 	mov	r0, r4
         d70b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         d70b8:	01ba31dc 	ldreqsb	r3, [sl, ip]!
         d70bc:	01ba31cc 	moveqs	r3, ip, asr #3
    */
}

/**
 * Symbol: TGCSafeList::__dt(void)
 * Address: 000d70c0
 */
TGCSafeList::~TGCSafeList(void) {
    /*
         d70c0:	e1a0c00d 	mov	ip, sp
         d70c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d70c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d70cc:	e1a04000 	mov	r4, r0
         d70d0:	e1a05001 	mov	r5, r1
         d70d4:	eb6bb03b 	bl	1bc31c8 <$DIYGCUnregister(void *)>
         d70d8:	e1a00004 	mov	r0, r4
         d70dc:	e3a01000 	mov	r1, #0	; 0x0
         d70e0:	eb6c3867 	bl	1be5284 <CList::$__dt(void)>
         d70e4:	e3150001 	tst	r5, #1	; 0x1
         d70e8:	11a00004 	movne	r0, r4
         d70ec:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         d70f0:	1a6bd97a 	bne	1bcd6e0 <$__dl(void *)>
         d70f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GCMarkRefs__11TGCSafeListSFPv
 * Address: 000d71f0
 */
void TGCSafeList::GCMarkRefs() {
    /*
         d71f0:	ea6b2ff3 	b	1ba31c4 <TGCSafeList::$GCMarkItems(void)>
    */
}

/**
 * Symbol: GCUpdateRefs__11TGCSafeListSFPv
 * Address: 000d71f4
 */
void TGCSafeList::GCUpdateRefs() {
    /*
         d71f4:	ea6b2ff6 	b	1ba31d4 <TGCSafeList::$GCUpdateItems(void)>
    */
}

/**
 * Symbol: TGCSafeList::GCMarkItems(void)
 * Address: 000d71f8
 */
TGCSafeList::GCMarkItems(void) {
    /*
         d71f8:	e1a0c00d 	mov	ip, sp
         d71fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d7200:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7204:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         d7208:	e1a01000 	mov	r1, r0
         d720c:	e1a0000d 	mov	r0, sp
         d7210:	eb6c2ff3 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         d7214:	e1a0000d 	mov	r0, sp
         d7218:	eb6c4076 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         d721c:	e1a04000 	mov	r4, r0
         d7220:	e1a0000d 	mov	r0, sp
         d7224:	eb6c4cd3 	bl	1bea578 <CArrayIterator::$More(void)>
         d7228:	e3300000 	teq	r0, #0	; 0x0
         d722c:	0a000008 	beq	d7254 <TGCSafeList::GCMarkItems(void)+0x5c>
         d7230:	e1a00004 	mov	r0, r4
         d7234:	eb6bafe1 	bl	1bc31c0 <$DIYGCMark(long)>
         d7238:	e1a0000d 	mov	r0, sp
         d723c:	eb6c50d7 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         d7240:	e1a04000 	mov	r4, r0
         d7244:	e1a0000d 	mov	r0, sp
         d7248:	eb6c4cca 	bl	1bea578 <CArrayIterator::$More(void)>
         d724c:	e3300000 	teq	r0, #0	; 0x0
         d7250:	1afffff6 	bne	d7230 <TGCSafeList::GCMarkItems(void)+0x38>
         d7254:	e1a0000d 	mov	r0, sp
         d7258:	e3a01000 	mov	r1, #0	; 0x0
         d725c:	eb6c3401 	bl	1be4268 <CArrayIterator::$__dt(void)>
         d7260:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGCSafeList::GCUpdateItems(void)
 * Address: 000d7264
 */
TGCSafeList::GCUpdateItems(void) {
    /*
         d7264:	e1a0c00d 	mov	ip, sp
         d7268:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d726c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7270:	e1a04000 	mov	r4, r0
         d7274:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         d7278:	e1a01000 	mov	r1, r0
         d727c:	e1a0000d 	mov	r0, sp
         d7280:	eb6c2fd7 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         d7284:	e1a0000d 	mov	r0, sp
         d7288:	eb6c405a 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         d728c:	e1a05000 	mov	r5, r0
         d7290:	e1a0000d 	mov	r0, sp
         d7294:	eb6c4cb7 	bl	1bea578 <CArrayIterator::$More(void)>
         d7298:	e3300000 	teq	r0, #0	; 0x0
         d729c:	0a00000f 	beq	d72e0 <TGCSafeList::GCUpdateItems(void)+0x7c>
         d72a0:	e1a00005 	mov	r0, r5
         d72a4:	eb6bafc8 	bl	1bc31cc <$DIYGCUpdate(long)>
         d72a8:	e1a05000 	mov	r5, r0
         d72ac:	e1a0000d 	mov	r0, sp
         d72b0:	eb6c4041 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
         d72b4:	e5941010 	ldr	r1, [r4, #16]
         d72b8:	e5942004 	ldr	r2, [r4, #4]
         d72bc:	e0201092 	mla	r0, r2, r0, r1
         d72c0:	e5805000 	str	r5, [r0]
         d72c4:	e1a0000d 	mov	r0, sp
         d72c8:	eb6c50b4 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         d72cc:	e1a05000 	mov	r5, r0
         d72d0:	e1a0000d 	mov	r0, sp
         d72d4:	eb6c4ca7 	bl	1bea578 <CArrayIterator::$More(void)>
         d72d8:	e3300000 	teq	r0, #0	; 0x0
         d72dc:	1affffef 	bne	d72a0 <TGCSafeList::GCUpdateItems(void)+0x3c>
         d72e0:	e1a0000d 	mov	r0, sp
         d72e4:	e3a01000 	mov	r1, #0	; 0x0
         d72e8:	eb6c33de 	bl	1be4268 <CArrayIterator::$__dt(void)>
         d72ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

