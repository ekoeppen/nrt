#include "DDKIncludes/UtilityClasses/BufferList.h"

/**
 * Symbol: CListIterator::__ct(void)
 * Address: 0010ed34
 */
CListIterator::CListIterator(CDynamicArray* itsList, Boolean itsForward) {
    /*
        10ed34:	e1a0c00d 	mov	ip, sp
        10ed38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10ed3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ed40:	e1b04000 	movs	r4, r0
        10ed44:	1a000003 	bne	10ed58 <CListIterator::__ct(void)+0x24>
        10ed48:	e3a0001c 	mov	r0, #28	; 0x1c
        10ed4c:	eb6afe79 	bl	1bce738 <$__nw(unsigned int)>
        10ed50:	e1b04000 	movs	r4, r0
        10ed54:	0a000001 	beq	10ed60 <CListIterator::__ct(void)+0x2c>
        10ed58:	e1a00004 	mov	r0, r4
        10ed5c:	eb6b5527 	bl	1be4200 <CArrayIterator::$__ct(void)>
        10ed60:	e1a00004 	mov	r0, r4
        10ed64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *)
 * Address: 0010ed68
 */
CListIterator::CListIterator(CDynamicArray* itsList, Boolean itsForward) {
    /*
        10ed68:	e1a0c00d 	mov	ip, sp
        10ed6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10ed70:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ed74:	e1b04000 	movs	r4, r0
        10ed78:	e1a05001 	mov	r5, r1
        10ed7c:	1a000003 	bne	10ed90 <CListIterator::__ct(CDynamicArray *)+0x28>
        10ed80:	e3a0001c 	mov	r0, #28	; 0x1c
        10ed84:	eb6afe6b 	bl	1bce738 <$__nw(unsigned int)>
        10ed88:	e1b04000 	movs	r4, r0
        10ed8c:	0a000002 	beq	10ed9c <CListIterator::__ct(CDynamicArray *)+0x34>
        10ed90:	e1a01005 	mov	r1, r5
        10ed94:	e1a00004 	mov	r0, r4
        10ed98:	eb6b5115 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        10ed9c:	e1a00004 	mov	r0, r4
        10eda0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *, unsigned char)
 * Address: 0010eda4
 */
CListIterator::CListIterator(CDynamicArray* itsList, Boolean itsForward) {
    /*
        10eda4:	e1a0c00d 	mov	ip, sp
        10eda8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10edac:	e24cb004 	sub	fp, ip, #4	; 0x4
        10edb0:	e1b04000 	movs	r4, r0
        10edb4:	e1a05001 	mov	r5, r1
        10edb8:	e20260ff 	and	r6, r2, #255	; 0xff
        10edbc:	1a000003 	bne	10edd0 <CListIterator::__ct(CDynamicArray *, unsigned char)+0x2c>
        10edc0:	e3a0001c 	mov	r0, #28	; 0x1c
        10edc4:	eb6afe5b 	bl	1bce738 <$__nw(unsigned int)>
        10edc8:	e1b04000 	movs	r4, r0
        10edcc:	0a000003 	beq	10ede0 <CListIterator::__ct(CDynamicArray *, unsigned char)+0x3c>
        10edd0:	e1a02006 	mov	r2, r6
        10edd4:	e1a01005 	mov	r1, r5
        10edd8:	e1a00004 	mov	r0, r4
        10eddc:	eb6b5106 	bl	1be31fc <CArrayIterator::$__ct(CDynamicArray *, unsigned char)>
        10ede0:	e1a00004 	mov	r0, r4
        10ede4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *, long, long, unsigned char)
 * Address: 0010ede8
 */
CListIterator::CListIterator(CDynamicArray* itsList, Boolean itsForward) {
    /*
        10ede8:	e1a0c00d 	mov	ip, sp
        10edec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        10edf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        10edf4:	e1b04000 	movs	r4, r0
        10edf8:	e1a07001 	mov	r7, r1
        10edfc:	e1a06002 	mov	r6, r2
        10ee00:	e1a05003 	mov	r5, r3
        10ee04:	e59b0004 	ldr	r0, [fp, #4]	; CListIterator
        10ee08:	e20080ff 	and	r8, r0, #255	; 0xff
        10ee0c:	1a000003 	bne	10ee20 <CListIterator::__ct(CDynamicArray *, long, long, unsigned char)+0x38>
        10ee10:	e3a0001c 	mov	r0, #28	; 0x1c
        10ee14:	eb6afe47 	bl	1bce738 <$__nw(unsigned int)>
        10ee18:	e1b04000 	movs	r4, r0
        10ee1c:	0a000007 	beq	10ee40 <CListIterator::__ct(CDynamicArray *, long, long, unsigned char)+0x58>
        10ee20:	e1a03008 	mov	r3, r8
        10ee24:	e92d0008 	stmdb	sp!, {r3}
        10ee28:	e1a03005 	mov	r3, r5
        10ee2c:	e1a02006 	mov	r2, r6
        10ee30:	e1a01007 	mov	r1, r7
        10ee34:	e1a00004 	mov	r0, r4
        10ee38:	eb6b50ee 	bl	1be31f8 <CArrayIterator::$__ct(CDynamicArray *, long, long, unsigned char)>
        10ee3c:	e28dd004 	add	sp, sp, #4	; 0x4
        10ee40:	e1a00004 	mov	r0, r4
        10ee44:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CListIterator::CurrentItem(void)
 * Address: 0010ee48
 */
void*		CListIterator::CurrentItem(void) {
    /*
        10ee48:	e5902000 	ldr	r2, [r0]
        10ee4c:	e3320000 	teq	r2, #0	; 0x0
        10ee50:	03a00000 	moveq	r0, #0	; 0x0
        10ee54:	15b01004 	ldrne	r1, [r0, #4]!	; CListIterator
        10ee58:	11a00002 	movne	r0, r2
        10ee5c:	1a6b5d38 	bne	1be6344 <CList::$At(long)>
        10ee60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CListIterator::FirstItem(void)
 * Address: 0010ee64
 */
void*		CListIterator::FirstItem(void) {
    /*
        10ee64:	e1a0c00d 	mov	ip, sp
        10ee68:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10ee6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ee70:	e1a04000 	mov	r4, r0
        10ee74:	eb6b75fb 	bl	1bec668 <CArrayIterator::$Reset(void)>
        10ee78:	e1a00004 	mov	r0, r4
        10ee7c:	eb6b6dbd 	bl	1bea578 <CArrayIterator::$More(void)>
        10ee80:	e3300000 	teq	r0, #0	; 0x0
        10ee84:	18940003 	ldmneia	r4, {r0, r1}
        10ee88:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        10ee8c:	1a6b5d2c 	bne	1be6344 <CList::$At(long)>
        10ee90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CListIterator::NextItem(void)
 * Address: 0010ee94
 */
void*		CListIterator::NextItem(void) {
    /*
        10ee94:	e1a0c00d 	mov	ip, sp
        10ee98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10ee9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10eea0:	e1a04000 	mov	r4, r0
        10eea4:	eb6b590a 	bl	1be52d4 <CArrayIterator::$Advance(void)>
        10eea8:	e1a00004 	mov	r0, r4
        10eeac:	eb6b6db1 	bl	1bea578 <CArrayIterator::$More(void)>
        10eeb0:	e3300000 	teq	r0, #0	; 0x0
        10eeb4:	18940003 	ldmneia	r4, {r0, r1}
        10eeb8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        10eebc:	1a6b5d20 	bne	1be6344 <CList::$At(long)>
        10eec0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

