#include "include/TStackPage.h"

/**
 * Symbol: TStackPage::__ct(void)
 * Address: 001f9464
 */
TStackPage::TStackPage(void) {
    /*
        1f9464:	e1a0c00d 	mov	ip, sp
        1f9468:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f946c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9470:	e1b04000 	movs	r4, r0
        1f9474:	1a000005 	bne	1f9490 <TStackPage::__ct(void)+0x2c>
        1f9478:	e3a00034 	mov	r0, #52	; 0x34
        1f947c:	eb6754ad 	bl	1bce738 <$__nw(unsigned int)>
        1f9480:	e1b04000 	movs	r4, r0
        1f9484:	1a000001 	bne	1f9490 <TStackPage::__ct(void)+0x2c>
        1f9488:	e1a00004 	mov	r0, r4
        1f948c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1f9490:	e2840004 	add	r0, r4, #4	; 0x4
        1f9494:	eb674c78 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        1f9498:	e3a00000 	mov	r0, #0	; 0x0
        1f949c:	e3a01000 	mov	r1, #0	; 0x0
        1f94a0:	e5840000 	str	r0, [r4]
        1f94a4:	e0842101 	add	r2, r4, r1, lsl #2
        1f94a8:	e5a20010 	str	r0, [r2, #16]!
        1f94ac:	e0842081 	add	r2, r4, r1, lsl #1
        1f94b0:	e5c20021 	strb	r0, [r2, #33]
        1f94b4:	e5c20020 	strb	r0, [r2, #32]
        1f94b8:	e0842001 	add	r2, r4, r1
        1f94bc:	e5c20028 	strb	r0, [r2, #40]
        1f94c0:	e5c2002c 	strb	r0, [r2, #44]
        1f94c4:	e2811001 	add	r1, r1, #1	; 0x1
        1f94c8:	e3510004 	cmp	r1, #4	; 0x4
        1f94cc:	3afffff4 	bcc	1f94a4 <TStackPage::__ct(void)+0x40>
        1f94d0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1f94d4:	e3c00301 	bic	r0, r0, #67108864	; 0x4000000
        1f94d8:	e380033e 	orr	r0, r0, #-134217728	; 0xf8000000
        1f94dc:	e5840030 	str	r0, [r4, #48]	; fField48
        1f94e0:	eaffffe8 	b	1f9488 <TStackPage::__ct(void)+0x24>
    */
}

/**
 * Symbol: TStackPage::__dt(void)
 * Address: 001f94e4
 */
TStackPage::~TStackPage(void) {
    /*
        1f94e4:	e1a0c00d 	mov	ip, sp
        1f94e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f94ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f94f0:	e1a04000 	mov	r4, r0
        1f94f4:	e1a05001 	mov	r5, r1
        1f94f8:	e5900000 	ldr	r0, [r0]
        1f94fc:	e3300000 	teq	r0, #0	; 0x0
        1f9500:	15941030 	ldrne	r1, [r4, #48]	; fField48
        1f9504:	12011301 	andne	r1, r1, #67108864	; 0x4000000
        1f9508:	13310000 	teqne	r1, #0	; 0x0
        1f950c:	1b6781e0 	blne	1bd9c94 <$Release__15TUDomainManagerSFUl>
        1f9510:	e3150001 	tst	r5, #1	; 0x1
        1f9514:	11a00004 	movne	r0, r4
        1f9518:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1f951c:	1a67506f 	bne	1bcd6e0 <$__dl(void *)>
        1f9520:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStackPage::Init(TUDomainManager *, unsigned long)
 * Address: 001f9524
 */
TStackPage::Init(TUDomainManager *, unsigned long) {
    /*
        1f9524:	e3320000 	teq	r2, #0	; 0x0
        1f9528:	0a000005 	beq	1f9544 <TStackPage::Init(TUDomainManager *, unsigned long)+0x20>
        1f952c:	e5802000 	str	r2, [r0]
        1f9530:	e5901030 	ldr	r1, [r0, #48]	; fField48
        1f9534:	e3c11301 	bic	r1, r1, #67108864	; 0x4000000
        1f9538:	e5a01030 	str	r1, [r0, #48]!	; fField48
        1f953c:	e3a00000 	mov	r0, #0	; 0x0
        1f9540:	e1a0f00e 	mov	pc, lr
        1f9544:	e5902030 	ldr	r2, [r0, #48]	; fField48
        1f9548:	e3822301 	orr	r2, r2, #67108864	; 0x4000000
        1f954c:	e5802030 	str	r2, [r0, #48]	; fField48
        1f9550:	e1a03000 	mov	r3, r0
        1f9554:	e1a00001 	mov	r0, r1
        1f9558:	e3a02002 	mov	r2, #2	; 0x2
        1f955c:	e1a01003 	mov	r1, r3
        1f9560:	ea676503 	b	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
    */
}

