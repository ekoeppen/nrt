#include "include/TEnvironment.h"

/**
 * Symbol: TEnvironment::Init(void *)
 * Address: 000aeffc
 */
TEnvironment::Init(void *) {
    /*
         aeffc:	e1a0c00d 	mov	ip, sp
         af000:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         af004:	e24cb004 	sub	fp, ip, #4	; 0x4
         af008:	e3a04000 	mov	r4, #0	; 0x0
         af00c:	e2800014 	add	r0, r0, #20	; 0x14
         af010:	e8800012 	stmia	r0, {r1, r4}
         af014:	e5804008 	str	r4, [r0, #8]	; fField8
         af018:	e580400c 	str	r4, [r0, #12]	; fField12
         af01c:	e2400014 	sub	r0, r0, #20	; 0x14
         af020:	e5c04024 	strb	r4, [r0, #36]	; fField36
         af024:	e1a01000 	mov	r1, r0
         af028:	e59f000c 	ldr	r0, [pc, #c]	; af03c <TEnvironment::Init(void *)+0x40>
         af02c:	e5900000 	ldr	r0, [r0]
         af030:	eb690a31 	bl	1af18fc <TMemArchManager::$AddEnvironment(TEnvironment *)>
         af034:	e1a00004 	mov	r0, r4
         af038:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         af03c:	0c100d00 	ldceq	13, cr0, [r0]
    */
}

/**
 * Symbol: TEnvironment::__dt(void)
 * Address: 000af244
 */
TEnvironment::~TEnvironment(void) {
    /*
         af244:	e1a0c00d 	mov	ip, sp
         af248:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         af24c:	e24cb004 	sub	fp, ip, #4	; 0x4
         af250:	e1a04000 	mov	r4, r0
         af254:	e1a05001 	mov	r5, r1
         af258:	e1a01000 	mov	r1, r0
         af25c:	e59f0018 	ldr	r0, [pc, #18]	; af27c <TEnvironment::__dt(void)+0x38>
         af260:	e5900000 	ldr	r0, [r0]
         af264:	eb6953e5 	bl	1b04200 <TMemArchManager::$RemoveEnvironment(TEnvironment *)>
         af268:	e3150001 	tst	r5, #1	; 0x1
         af26c:	11a00004 	movne	r0, r4
         af270:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         af274:	1a6c7919 	bne	1bcd6e0 <$__dl(void *)>
         af278:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         af27c:	0c100d00 	ldceq	13, cr0, [r0]
    */
}

/**
 * Symbol: TEnvironment::Add(TKDomain *, unsigned char, unsigned char, unsigned char)
 * Address: 000af3fc
 */
TEnvironment::Add(TKDomain *, unsigned char, unsigned char, unsigned char) {
    /*
         af3fc:	e1a0c00d 	mov	ip, sp
         af400:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         af404:	e24cb004 	sub	fp, ip, #4	; 0x4
         af408:	e1a04000 	mov	r4, r0
         af40c:	e1a05001 	mov	r5, r1
         af410:	e20200ff 	and	r0, r2, #255	; 0xff
         af414:	e20360ff 	and	r6, r3, #255	; 0xff
         af418:	e59b1004 	ldr	r1, [fp, #4]
         af41c:	e20170ff 	and	r7, r1, #255	; 0xff
         af420:	e3300001 	teq	r0, #1	; 0x1
         af424:	e595101c 	ldr	r1, [r5, #28]	; fField28
         af428:	e5940010 	ldr	r0, [r4, #16]	; fField16
         af42c:	1a000001 	bne	af438 <TEnvironment::Add(TKDomain *, unsigned char, unsigned char, unsigned char)+0x3c>
         af430:	eb690d33 	bl	1af2904 <$AddManagerToDCR(unsigned long, long)>
         af434:	ea000000 	b	af43c <TEnvironment::Add(TKDomain *, unsigned char, unsigned char, unsigned char)+0x40>
         af438:	eb69092b 	bl	1af18ec <$AddClientToDCR(unsigned long, long)>
         af43c:	e3360000 	teq	r6, #0	; 0x0
         af440:	e5840010 	str	r0, [r4, #16]	; fField16
         af444:	15950000 	ldrne	r0, [r5]
         af448:	15840018 	strne	r0, [r4, #24]	; fField24
         af44c:	e3370000 	teq	r7, #0	; 0x0
         af450:	15950000 	ldrne	r0, [r5]
         af454:	15a4001c 	strne	r0, [r4, #28]!	; fField28
         af458:	e3a00000 	mov	r0, #0	; 0x0
         af45c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEnvironment::Remove(TKDomain *)
 * Address: 000af460
 */
TEnvironment::Remove(TKDomain *) {
    /*
         af460:	e1a0c00d 	mov	ip, sp
         af464:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         af468:	e24cb004 	sub	fp, ip, #4	; 0x4
         af46c:	e1a04000 	mov	r4, r0
         af470:	e591101c 	ldr	r1, [r1, #28]	; fField28
         af474:	e5900010 	ldr	r0, [r0, #16]	; fField16
         af478:	eb695361 	bl	1b04204 <$RemoveFromDCR(unsigned long, long)>
         af47c:	e5a40010 	str	r0, [r4, #16]!	; fField16
         af480:	e3a00000 	mov	r0, #0	; 0x0
         af484:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEnvironment::IncrRefCount(void)
 * Address: 000af488
 */
TEnvironment::IncrRefCount(void) {
    /*
         af488:	e5901020 	ldr	r1, [r0, #32]	; fField32
         af48c:	e2811001 	add	r1, r1, #1	; 0x1
         af490:	e5a01020 	str	r1, [r0, #32]!	; fField32
         af494:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEnvironment::DecrRefCount(void)
 * Address: 000af498
 */
TEnvironment::DecrRefCount(void) {
    /*
         af498:	e5901020 	ldr	r1, [r0, #32]	; fField32
         af49c:	e2412001 	sub	r2, r1, #1	; 0x1
         af4a0:	e5802020 	str	r2, [r0, #32]	; fField32
         af4a4:	e5d03024 	ldrb	r3, [r0, #36]	; fField36
         af4a8:	e3a01000 	mov	r1, #0	; 0x0
         af4ac:	e3330000 	teq	r3, #0	; 0x0
         af4b0:	0a000003 	beq	af4c4 <TEnvironment::DecrRefCount(void)+0x2c>
         af4b4:	e3320000 	teq	r2, #0	; 0x0
         af4b8:	05a01008 	streq	r1, [r0, #8]!	; fField8
         af4bc:	03a00001 	moveq	r0, #1	; 0x1
         af4c0:	01a0f00e 	moveq	pc, lr
         af4c4:	e1a00001 	mov	r0, r1
         af4c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEnvironment::HasDomain(TKDomain *, unsigned char *, unsigned char *)
 * Address: 000af4cc
 */
TEnvironment::HasDomain(TKDomain *, unsigned char *, unsigned char *) {
    /*
         af4cc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         af4d0:	e591101c 	ldr	r1, [r1, #28]	; fField28
         af4d4:	e1a01081 	mov	r1, r1, lsl #1
         af4d8:	e1a00130 	mov	r0, r0, lsr r1
         af4dc:	e210c003 	ands	ip, r0, #3	; 0x3
         af4e0:	e3a00000 	mov	r0, #0	; 0x0
         af4e4:	0a000009 	beq	af510 <TEnvironment::HasDomain(TKDomain *, unsigned char *, unsigned char *)+0x44>
         af4e8:	e3a01001 	mov	r1, #1	; 0x1
         af4ec:	e33c0001 	teq	ip, #1	; 0x1
         af4f0:	05c21000 	streqb	r1, [r2]
         af4f4:	0a000006 	beq	af514 <TEnvironment::HasDomain(TKDomain *, unsigned char *, unsigned char *)+0x48>
         af4f8:	e33c0002 	teq	ip, #2	; 0x2
         af4fc:	0a000003 	beq	af510 <TEnvironment::HasDomain(TKDomain *, unsigned char *, unsigned char *)+0x44>
         af500:	e33c0003 	teq	ip, #3	; 0x3
         af504:	05c21000 	streqb	r1, [r2]
         af508:	05c31000 	streqb	r1, [r3]
         af50c:	e1a0f00e 	mov	pc, lr
         af510:	e5c20000 	strb	r0, [r2]
         af514:	e5c30000 	strb	r0, [r3]
         af518:	e1a0f00e 	mov	pc, lr
    */
}

