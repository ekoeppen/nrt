#include "include/TZoneList.h"

/**
 * Symbol: TZoneList::__ct(TZoneNameComparer *)
 * Address: 002844dc
 */
TZoneList::TZoneList(TZoneNameComparer *) {
    /*
        2844dc:	e1a0c00d 	mov	ip, sp
        2844e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2844e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2844e8:	e1b04000 	movs	r4, r0
        2844ec:	e1a05001 	mov	r5, r1
        2844f0:	1a000003 	bne	284504 <TZoneList::__ct(TZoneNameComparer *)+0x28>
        2844f4:	e3a00020 	mov	r0, #32	; 0x20
        2844f8:	eb65288e 	bl	1bce738 <$__nw(unsigned int)>
        2844fc:	e1b04000 	movs	r4, r0
        284500:	0a000003 	beq	284514 <TZoneList::__ct(TZoneNameComparer *)+0x38>
        284504:	e1a01005 	mov	r1, r5
        284508:	e1a00004 	mov	r0, r4
        28450c:	eb657b2e 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
        284510:	e584501c 	str	r5, [r4, #28]	; fField28
        284514:	e1a00004 	mov	r0, r4
        284518:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TZoneList::__dt(void)
 * Address: 0028451c
 */
TZoneList::~TZoneList(void) {
    /*
        28451c:	e1a0c00d 	mov	ip, sp
        284520:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        284524:	e24cb004 	sub	fp, ip, #4	; 0x4
        284528:	e1a04000 	mov	r4, r0
        28452c:	e1a05001 	mov	r5, r1
        284530:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        284534:	e1a01000 	mov	r1, r0
        284538:	e1a0000d 	mov	r0, sp
        28453c:	eb657b28 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        284540:	e1a0000d 	mov	r0, sp
        284544:	eb658bab 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        284548:	e1a06000 	mov	r6, r0
        28454c:	e1a0000d 	mov	r0, sp
        284550:	eb659808 	bl	1bea578 <CArrayIterator::$More(void)>
        284554:	e3300000 	teq	r0, #0	; 0x0
        284558:	0a000008 	beq	284580 <TZoneList::__dt(void)+0x64>
        28455c:	e1a00006 	mov	r0, r6
        284560:	eb65245e 	bl	1bcd6e0 <$__dl(void *)>
        284564:	e1a0000d 	mov	r0, sp
        284568:	eb659c0c 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        28456c:	e1a06000 	mov	r6, r0
        284570:	e1a0000d 	mov	r0, sp
        284574:	eb6597ff 	bl	1bea578 <CArrayIterator::$More(void)>
        284578:	e3300000 	teq	r0, #0	; 0x0
        28457c:	1afffff6 	bne	28455c <TZoneList::__dt(void)+0x40>
        284580:	e594001c 	ldr	r0, [r4, #28]	; fField28
        284584:	eb652455 	bl	1bcd6e0 <$__dl(void *)>
        284588:	e1a0000d 	mov	r0, sp
        28458c:	e3a01000 	mov	r1, #0	; 0x0
        284590:	eb657f34 	bl	1be4268 <CArrayIterator::$__dt(void)>
        284594:	e28dd01c 	add	sp, sp, #28	; 0x1c
        284598:	e1a00004 	mov	r0, r4
        28459c:	e3a01000 	mov	r1, #0	; 0x0
        2845a0:	eb657f2d 	bl	1be425c <CSortedList::$__dt(void)>
        2845a4:	e3150001 	tst	r5, #1	; 0x1
        2845a8:	11a00004 	movne	r0, r4
        2845ac:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2845b0:	1a65244a 	bne	1bcd6e0 <$__dl(void *)>
        2845b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

