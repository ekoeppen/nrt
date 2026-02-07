#include "include/TGCSafeSortedList.h"

/**
 * Symbol: TGCSafeSortedList::GCMarkItems(void)
 * Address: 000d70f8
 */
TGCSafeSortedList::GCMarkItems(void) {
    /*
         d70f8:	e1a0c00d 	mov	ip, sp
         d70fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d7100:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7104:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         d7108:	e1a01000 	mov	r1, r0
         d710c:	e1a0000d 	mov	r0, sp
         d7110:	eb6c3033 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         d7114:	e1a0000d 	mov	r0, sp
         d7118:	eb6c40b6 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         d711c:	e1a04000 	mov	r4, r0
         d7120:	e1a0000d 	mov	r0, sp
         d7124:	eb6c4d13 	bl	1bea578 <CArrayIterator::$More(void)>
         d7128:	e3300000 	teq	r0, #0	; 0x0
         d712c:	0a000008 	beq	d7154 <TGCSafeSortedList::GCMarkItems(void)+0x5c>
         d7130:	e1a00004 	mov	r0, r4
         d7134:	eb6bb021 	bl	1bc31c0 <$DIYGCMark(long)>
         d7138:	e1a0000d 	mov	r0, sp
         d713c:	eb6c5117 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         d7140:	e1a04000 	mov	r4, r0
         d7144:	e1a0000d 	mov	r0, sp
         d7148:	eb6c4d0a 	bl	1bea578 <CArrayIterator::$More(void)>
         d714c:	e3300000 	teq	r0, #0	; 0x0
         d7150:	1afffff6 	bne	d7130 <TGCSafeSortedList::GCMarkItems(void)+0x38>
         d7154:	e1a0000d 	mov	r0, sp
         d7158:	e3a01000 	mov	r1, #0	; 0x0
         d715c:	eb6c3441 	bl	1be4268 <CArrayIterator::$__dt(void)>
         d7160:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGCSafeSortedList::GCUpdateItems(void)
 * Address: 000d7164
 */
TGCSafeSortedList::GCUpdateItems(void) {
    /*
         d7164:	e1a0c00d 	mov	ip, sp
         d7168:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d716c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7170:	e1a04000 	mov	r4, r0
         d7174:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         d7178:	e1a01000 	mov	r1, r0
         d717c:	e1a0000d 	mov	r0, sp
         d7180:	eb6c3017 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         d7184:	e1a0000d 	mov	r0, sp
         d7188:	eb6c409a 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         d718c:	e1a05000 	mov	r5, r0
         d7190:	e1a0000d 	mov	r0, sp
         d7194:	eb6c4cf7 	bl	1bea578 <CArrayIterator::$More(void)>
         d7198:	e3300000 	teq	r0, #0	; 0x0
         d719c:	0a00000f 	beq	d71e0 <TGCSafeSortedList::GCUpdateItems(void)+0x7c>
         d71a0:	e1a00005 	mov	r0, r5
         d71a4:	eb6bb008 	bl	1bc31cc <$DIYGCUpdate(long)>
         d71a8:	e1a05000 	mov	r5, r0
         d71ac:	e1a0000d 	mov	r0, sp
         d71b0:	eb6c4081 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
         d71b4:	e5941010 	ldr	r1, [r4, #16]
         d71b8:	e5942004 	ldr	r2, [r4, #4]
         d71bc:	e0201092 	mla	r0, r2, r0, r1
         d71c0:	e5805000 	str	r5, [r0]
         d71c4:	e1a0000d 	mov	r0, sp
         d71c8:	eb6c50f4 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         d71cc:	e1a05000 	mov	r5, r0
         d71d0:	e1a0000d 	mov	r0, sp
         d71d4:	eb6c4ce7 	bl	1bea578 <CArrayIterator::$More(void)>
         d71d8:	e3300000 	teq	r0, #0	; 0x0
         d71dc:	1affffef 	bne	d71a0 <TGCSafeSortedList::GCUpdateItems(void)+0x3c>
         d71e0:	e1a0000d 	mov	r0, sp
         d71e4:	e3a01000 	mov	r1, #0	; 0x0
         d71e8:	eb6c341e 	bl	1be4268 <CArrayIterator::$__dt(void)>
         d71ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGCSafeSortedList::__ct(CItemComparer *)
 * Address: 000d72f0
 */
TGCSafeSortedList::TGCSafeSortedList(CItemComparer *) {
    /*
         d72f0:	e1a0c00d 	mov	ip, sp
         d72f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d72f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d72fc:	e1b04000 	movs	r4, r0
         d7300:	e1a05001 	mov	r5, r1
         d7304:	1a000003 	bne	d7318 <TGCSafeSortedList::__ct(CItemComparer *)+0x28>
         d7308:	e3a0001c 	mov	r0, #28	; 0x1c
         d730c:	eb6bdd09 	bl	1bce738 <$__nw(unsigned int)>
         d7310:	e1b04000 	movs	r4, r0
         d7314:	0a000006 	beq	d7334 <TGCSafeSortedList::__ct(CItemComparer *)+0x44>
         d7318:	e1a01005 	mov	r1, r5
         d731c:	e1a00004 	mov	r0, r4
         d7320:	eb6c2fa9 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
         d7324:	e59f2010 	ldr	r2, [pc, #10]	; d733c <TGCSafeSortedList::__ct(CItemComparer *)+0x4c>
         d7328:	e59f1010 	ldr	r1, [pc, #10]	; d7340 <TGCSafeSortedList::__ct(CItemComparer *)+0x50>
         d732c:	e1a00004 	mov	r0, r4
         d7330:	eb6bafa3 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
         d7334:	e1a00004 	mov	r0, r4
         d7338:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d733c:	01ba31e0 	moveqs	r3, r0, ror #3
         d7340:	01ba31d0 	ldreqsb	r3, [sl, r0]!
    */
}

/**
 * Symbol: TGCSafeSortedList::__dt(void)
 * Address: 000d7344
 */
TGCSafeSortedList::~TGCSafeSortedList(void) {
    /*
         d7344:	e1a0c00d 	mov	ip, sp
         d7348:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d734c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d7350:	e1a04000 	mov	r4, r0
         d7354:	e1a05001 	mov	r5, r1
         d7358:	eb6baf9a 	bl	1bc31c8 <$DIYGCUnregister(void *)>
         d735c:	e1a00004 	mov	r0, r4
         d7360:	e3a01000 	mov	r1, #0	; 0x0
         d7364:	eb6c33bc 	bl	1be425c <CSortedList::$__dt(void)>
         d7368:	e3150001 	tst	r5, #1	; 0x1
         d736c:	11a00004 	movne	r0, r4
         d7370:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         d7374:	1a6bd8d9 	bne	1bcd6e0 <$__dl(void *)>
         d7378:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GCMarkRefs__17TGCSafeSortedListSFPv
 * Address: 000d737c
 */
void TGCSafeSortedList::GCMarkRefs() {
    /*
         d737c:	ea6b2f91 	b	1ba31c8 <TGCSafeSortedList::$GCMarkItems(void)>
    */
}

/**
 * Symbol: GCUpdateRefs__17TGCSafeSortedListSFPv
 * Address: 000d7380
 */
void TGCSafeSortedList::GCUpdateRefs() {
    /*
         d7380:	ea6b2f94 	b	1ba31d8 <TGCSafeSortedList::$GCUpdateItems(void)>
    */
}

