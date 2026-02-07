#include "include/TClickUnit.h"

/**
 * Symbol: TClickUnit::Dump(TMsg *)
 * Address: 0021f28c
 */
TClickUnit::Dump(TMsg *) {
    /*
        21f28c:	e1a0c00d 	mov	ip, sp
        21f290:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21f294:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f298:	e1a05000 	mov	r5, r0
        21f29c:	e1a04001 	mov	r4, r1
        21f2a0:	e24ddc01 	sub	sp, sp, #256	; 0x100
        21f2a4:	e1a00001 	mov	r0, r1
        21f2a8:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        21f2ac:	eb6538f4 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21f2b0:	e1a01004 	mov	r1, r4
        21f2b4:	e1a00005 	mov	r0, r5
        21f2b8:	eb64fb05 	bl	1b5ded4 <TUnit::$Dump(TMsg *)>
        21f2bc:	e3a00000 	mov	r0, #0	; 0x0
        21f2c0:	e5cd0000 	strb	r0, [sp]
        21f2c4:	e1a0100d 	mov	r1, sp
        21f2c8:	e1a00004 	mov	r0, r4
        21f2cc:	eb6538ec 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21f2d0:	e1a00004 	mov	r0, r4
        21f2d4:	eb6534e7 	bl	1b6c678 <TMsg::$MsgLF(void)>
        21f2d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21f2dc:	436c6963 	cmnmi	ip, #1622016	; 0x18c000
        21f2e0:	6b3a2000 	blvs	10a72e8 <ROM$$Size+0x98769c>
    */
}

/**
 * Symbol: TClickUnit::CountStrokes(void)
 * Address: 0021f2e4
 */
TClickUnit::CountStrokes(void) {
    /*
        21f2e4:	e3a00001 	mov	r0, #1	; 0x1
        21f2e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClickUnit::GetStroke(unsigned long)
 * Address: 0021f2ec
 */
TClickUnit::GetStroke(unsigned long) {
    /*
        21f2ec:	e5900030 	ldr	r0, [r0, #48]	; fField48
        21f2f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClickUnit::OwnsStroke(void)
 * Address: 0021f2f4
 */
TClickUnit::OwnsStroke(void) {
    /*
        21f2f4:	e3a00001 	mov	r0, #1	; 0x1
        21f2f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray
 * Address: 0021f518
 */
void TClickUnit::Make() {
    /*
        21f518:	e1a0c00d 	mov	ip, sp
        21f51c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21f520:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f524:	e1a07000 	mov	r7, r0
        21f528:	e1a06001 	mov	r6, r1
        21f52c:	e1a05002 	mov	r5, r2
        21f530:	e1a04003 	mov	r4, r3
        21f534:	e3a00034 	mov	r0, #52	; 0x34
        21f538:	eb66bc7e 	bl	1bce738 <$__nw(unsigned int)>
        21f53c:	e1b08000 	movs	r8, r0
        21f540:	0a000003 	beq	21f554 <Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray+0x3c>
        21f544:	e1a00008 	mov	r0, r8
        21f548:	eb0035d8 	bl	22ccb0 <TUnit::__ct(void)>
        21f54c:	e59f0048 	ldr	r0, [pc, #48]	; 21f59c <Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray+0x84>	; fField48
        21f550:	e5880000 	str	r0, [r8]
        21f554:	e3380000 	teq	r8, #0	; 0x0
        21f558:	0a00000d 	beq	21f594 <Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray+0x7c>
        21f55c:	e1a03004 	mov	r3, r4
        21f560:	e92d0008 	stmdb	sp!, {r3}
        21f564:	e1a03005 	mov	r3, r5
        21f568:	e1a02006 	mov	r2, r6
        21f56c:	e1a01007 	mov	r1, r7
        21f570:	e1a00008 	mov	r0, r8
        21f574:	eb650293 	bl	1b5ffc8 <TClickUnit::$IClickUnit(TDomain *, unsigned long, TStroke *, TArray *)>
        21f578:	e28dd004 	add	sp, sp, #4	; 0x4
        21f57c:	e3300000 	teq	r0, #0	; 0x0
        21f580:	0a000003 	beq	21f594 <Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray+0x7c>
        21f584:	e1a00008 	mov	r0, r8
        21f588:	e1a0e00f 	mov	lr, pc
        21f58c:	e598f000 	ldr	pc, [r8]
        21f590:	e3a08000 	mov	r8, #0	; 0x0
        21f594:	e1a00008 	mov	r0, r8
        21f598:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        21f59c:	0001a6c0 	andeq	sl, r1, r0, asr #13
    */
}

/**
 * Symbol: TClickUnit::IClickUnit(TDomain *, unsigned long, TStroke *, TArray *)
 * Address: 0021f5a0
 */
TClickUnit::IClickUnit(TDomain *, unsigned long, TStroke *, TArray *) {
    /*
        21f5a0:	e1a0c00d 	mov	ip, sp
        21f5a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21f5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f5ac:	e1a04000 	mov	r4, r0
        21f5b0:	e1a05003 	mov	r5, r3
        21f5b4:	e59b3004 	ldr	r3, [fp, #4]
        21f5b8:	e92d0008 	stmdb	sp!, {r3}
        21f5bc:	e1a03002 	mov	r3, r2
        21f5c0:	e59f203c 	ldr	r2, [pc, #3c]	; 21f604 <TClickUnit::IClickUnit(TDomain *, unsigned long, TStroke *, TArray *)+0x64>
        21f5c4:	eb6502a4 	bl	1b6005c <TUnit::$IUnit(TDomain *, unsigned long, unsigned long, TArray *)>
        21f5c8:	e28dd004 	add	sp, sp, #4	; 0x4
        21f5cc:	e1a06000 	mov	r6, r0
        21f5d0:	e5845030 	str	r5, [r4, #48]	; fField48
        21f5d4:	e2851020 	add	r1, r5, #32	; 0x20
        21f5d8:	e1a00004 	mov	r0, r4
        21f5dc:	eb651b4f 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        21f5e0:	e5950034 	ldr	r0, [r5, #52]
        21f5e4:	e584001c 	str	r0, [r4, #28]	; fField28
        21f5e8:	e5b51034 	ldr	r1, [r5, #52]!
        21f5ec:	e0410000 	sub	r0, r1, r0
        21f5f0:	e5c40021 	strb	r0, [r4, #33]	; fField33
        21f5f4:	e1a00420 	mov	r0, r0, lsr #8
        21f5f8:	e5c40020 	strb	r0, [r4, #32]	; fField32
        21f5fc:	e1a00006 	mov	r0, r6
        21f600:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21f604:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
    */
}

/**
 * Symbol: TClickUnit::MarkUnit(TUnitList *, unsigned long)
 * Address: 0021f608
 */
TClickUnit::MarkUnit(TUnitList *, unsigned long) {
    /*
        21f608:	e1a0c00d 	mov	ip, sp
        21f60c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21f610:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f614:	e1a04000 	mov	r4, r0
        21f618:	e1a05001 	mov	r5, r1
        21f61c:	e1a06002 	mov	r6, r2
        21f620:	e5900030 	ldr	r0, [r0, #48]	; fField48
        21f624:	e3a01201 	mov	r1, #268435456	; 0x10000000
        21f628:	eb6512f7 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        21f62c:	e1a02006 	mov	r2, r6
        21f630:	e1a01005 	mov	r1, r5
        21f634:	e1a00004 	mov	r0, r4
        21f638:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        21f63c:	ea65069e 	b	1b610bc <TUnit::$MarkUnit(TUnitList *, unsigned long)>
    */
}

/**
 * Symbol: TClickUnit::IDispose(void)
 * Address: 0021f640
 */
TClickUnit::IDispose(void) {
    /*
        21f640:	e1a0c00d 	mov	ip, sp
        21f644:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21f648:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f64c:	e1a04000 	mov	r4, r0
        21f650:	e5900030 	ldr	r0, [r0, #48]	; fField48
        21f654:	e3a01201 	mov	r1, #268435456	; 0x10000000
        21f658:	eb6512eb 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        21f65c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        21f660:	eb650ee4 	bl	1b631f8 <$UnbufferStroke(TStroke *)>
        21f664:	e5940030 	ldr	r0, [r4, #48]	; fField48
        21f668:	e1a0e00f 	mov	lr, pc
        21f66c:	e590f000 	ldr	pc, [r0]
        21f670:	e1a00004 	mov	r0, r4
        21f674:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        21f678:	ea650258 	b	1b5ffe0 <TUnit::$IDispose(void)>
    */
}

