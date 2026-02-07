#include "include/TClickEventUnit.h"

/**
 * Symbol: Make__15TClickEventUnitSFP7TDomainUlP6TArray
 * Address: 0021f2fc
 */
void TClickEventUnit::Make() {
    /*
        21f2fc:	e1a0c00d 	mov	ip, sp
        21f300:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21f304:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f308:	e1a06000 	mov	r6, r0
        21f30c:	e1a05001 	mov	r5, r1
        21f310:	e1a04002 	mov	r4, r2
        21f314:	e3a00040 	mov	r0, #64	; 0x40
        21f318:	eb66bd06 	bl	1bce738 <$__nw(unsigned int)>
        21f31c:	e1b07000 	movs	r7, r0
        21f320:	0a000003 	beq	21f334 <Make__15TClickEventUnitSFP7TDomainUlP6TArray+0x38>
        21f324:	e1a00007 	mov	r0, r7
        21f328:	eb64ee87 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        21f32c:	e59f003c 	ldr	r0, [pc, #3c]	; 21f370 <Make__15TClickEventUnitSFP7TDomainUlP6TArray+0x74>
        21f330:	e5870000 	str	r0, [r7]
        21f334:	e3370000 	teq	r7, #0	; 0x0
        21f338:	0a00000a 	beq	21f368 <Make__15TClickEventUnitSFP7TDomainUlP6TArray+0x6c>
        21f33c:	e1a03004 	mov	r3, r4
        21f340:	e1a02005 	mov	r2, r5
        21f344:	e1a01006 	mov	r1, r6
        21f348:	e1a00007 	mov	r0, r7
        21f34c:	eb65031c 	bl	1b5ffc4 <TClickEventUnit::$IClickEventUnit(TDomain *, unsigned long, TArray *)>
        21f350:	e3300000 	teq	r0, #0	; 0x0
        21f354:	0a000003 	beq	21f368 <Make__15TClickEventUnitSFP7TDomainUlP6TArray+0x6c>
        21f358:	e1a00007 	mov	r0, r7
        21f35c:	e1a0e00f 	mov	lr, pc
        21f360:	e597f000 	ldr	pc, [r7]
        21f364:	e3a07000 	mov	r7, #0	; 0x0
        21f368:	e1a00007 	mov	r0, r7
        21f36c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21f370:	0001dfa0 	andeq	sp, r1, r0, lsr #31
    */
}

/**
 * Symbol: TClickEventUnit::IClickEventUnit(TDomain *, unsigned long, TArray *)
 * Address: 0021f374
 */
TClickEventUnit::IClickEventUnit(TDomain *, unsigned long, TArray *) {
    /*
        21f374:	e1a0c00d 	mov	ip, sp
        21f378:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21f37c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f380:	e1a04000 	mov	r4, r0
        21f384:	e1a00002 	mov	r0, r2
        21f388:	e1a02003 	mov	r2, r3
        21f38c:	e3a03000 	mov	r3, #0	; 0x0
        21f390:	e92d000c 	stmdb	sp!, {r2, r3}
        21f394:	e1a03000 	mov	r3, r0
        21f398:	e1a00004 	mov	r0, r4
        21f39c:	e59f200c 	ldr	r2, [pc, #c]	; 21f3b0 <TClickEventUnit::IClickEventUnit(TDomain *, unsigned long, TArray *)+0x3c>
        21f3a0:	eb650329 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        21f3a4:	e3e01000 	mvn	r1, #0	; 0x0
        21f3a8:	e5a4103c 	str	r1, [r4, #60]!	; fField60
        21f3ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21f3b0:	43455654 	cmpmi	r5, #88080384	; 0x5400000
    */
}

/**
 * Symbol: TClickEventUnit::Event(void)
 * Address: 0021f3b4
 */
TClickEventUnit::Event(void) {
    /*
        21f3b4:	e1a0c00d 	mov	ip, sp
        21f3b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21f3bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f3c0:	e1a04000 	mov	r4, r0
        21f3c4:	e590003c 	ldr	r0, [r0, #60]	; fField60
        21f3c8:	e3700001 	cmn	r0, #1	; 0x1
        21f3cc:	1a000007 	bne	21f3f0 <TClickEventUnit::Event(void)+0x3c>
        21f3d0:	e1a00004 	mov	r0, r4
        21f3d4:	e3a01000 	mov	r1, #0	; 0x0
        21f3d8:	e5942000 	ldr	r2, [r4]
        21f3dc:	e1a0e00f 	mov	lr, pc
        21f3e0:	e282f058 	add	pc, r2, #88	; 0x58
        21f3e4:	e5900030 	ldr	r0, [r0, #48]
        21f3e8:	e5900048 	ldr	r0, [r0, #72]
        21f3ec:	e584003c 	str	r0, [r4, #60]	; fField60
        21f3f0:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
        21f3f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClickEventUnit::ClearEvent(void)
 * Address: 0021f3f8
 */
TClickEventUnit::ClearEvent(void) {
    /*
        21f3f8:	e1a0c00d 	mov	ip, sp
        21f3fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21f400:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f404:	e1a04000 	mov	r4, r0
        21f408:	eb64febf 	bl	1b5ef0c <TClickEventUnit::$Event(void)>
        21f40c:	e584003c 	str	r0, [r4, #60]	; fField60
        21f410:	e1a00004 	mov	r0, r4
        21f414:	e3a01000 	mov	r1, #0	; 0x0
        21f418:	e5942000 	ldr	r2, [r4]
        21f41c:	e1a0e00f 	mov	lr, pc
        21f420:	e282f058 	add	pc, r2, #88	; 0x58
        21f424:	e3a01001 	mov	r1, #1	; 0x1
        21f428:	e5900030 	ldr	r0, [r0, #48]
        21f42c:	e5a01048 	str	r1, [r0, #72]!
        21f430:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClickEventUnit::Dump(TMsg *)
 * Address: 0021f434
 */
TClickEventUnit::Dump(TMsg *) {
    /*
        21f434:	e1a0c00d 	mov	ip, sp
        21f438:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21f43c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f440:	e1a05000 	mov	r5, r0
        21f444:	e1a04001 	mov	r4, r1
        21f448:	e1a00001 	mov	r0, r1
        21f44c:	e28f1f19 	add	r1, pc, #100	; 0x64
        21f450:	eb65388b 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21f454:	e1a01004 	mov	r1, r4
        21f458:	e1a00005 	mov	r0, r5
        21f45c:	eb64fa9f 	bl	1b5dee0 <TSIUnit::$Dump(TMsg *)>
        21f460:	e1a00005 	mov	r0, r5
        21f464:	eb64fea8 	bl	1b5ef0c <TClickEventUnit::$Event(void)>
        21f468:	e3300001 	teq	r0, #1	; 0x1
        21f46c:	01a00004 	moveq	r0, r4
        21f470:	028f1f14 	addeq	r1, pc, #80	; 0x50
        21f474:	0a00000b 	beq	21f4a8 <TClickEventUnit::Dump(TMsg *)+0x74>
        21f478:	e3300002 	teq	r0, #2	; 0x2
        21f47c:	01a00004 	moveq	r0, r4
        21f480:	028f1f14 	addeq	r1, pc, #80	; 0x50
        21f484:	0a000007 	beq	21f4a8 <TClickEventUnit::Dump(TMsg *)+0x74>
        21f488:	e3300003 	teq	r0, #3	; 0x3
        21f48c:	01a00004 	moveq	r0, r4
        21f490:	028f1f13 	addeq	r1, pc, #76	; 0x4c
        21f494:	0a000003 	beq	21f4a8 <TClickEventUnit::Dump(TMsg *)+0x74>
        21f498:	e3300004 	teq	r0, #4	; 0x4
        21f49c:	e1a00004 	mov	r0, r4
        21f4a0:	028f1f13 	addeq	r1, pc, #76	; 0x4c
        21f4a4:	128f1f16 	addne	r1, pc, #88	; 0x58
        21f4a8:	eb653875 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21f4ac:	e1a00004 	mov	r0, r4
        21f4b0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21f4b4:	ea65346f 	b	1b6c678 <TMsg::$MsgLF(void)>
        21f4b8:	436c6963 	cmnmi	ip, #1622016	; 0x18c000
        21f4bc:	6b457665 	blvs	137ce58 <ROM$$Size+0xc5d20c>
        21f4c0:	6e743a20 	cdpvs	10, 7, cr3, cr4, cr0, {1}
        21f4c4:	00000000 	andeq	r0, r0, r0
        21f4c8:	6b50726f 	blvs	163be8c <ROM$$Size+0xf1c240>
        21f4cc:	63657373 	cmnvs	r5, #-872415231	; 0xcc000001
        21f4d0:	6564436c 	strvsb	r4, [r4, -#876]!
        21f4d4:	69636b00 	stmvsdb	r3!, {r8, r9, fp, sp, lr}^
        21f4d8:	6b546170 	blvs	1737aa0 <ROM$$Size+0x1017e54>
        21f4dc:	436c6963 	cmnmi	ip, #1622016	; 0x18c000
        21f4e0:	6b000000 	blvs	21f4e8 <TClickEventUnit::Dump(TMsg *)+0xb4>
        21f4e4:	6b446f75 	blvs	133b2c0 <ROM$$Size+0xc1b674>
        21f4e8:	626c6554 	rsbvs	r6, ip, #352321536	; 0x15000000
        21f4ec:	6170436c 	cmnvs	r0, ip, ror #6
        21f4f0:	69636b00 	stmvsdb	r3!, {r8, r9, fp, sp, lr}^
        21f4f4:	6b48696c 	blvs	1439aac <ROM$$Size+0xd19e60>
        21f4f8:	69746543 	ldmvsdb	r4!, {r0, r1, r6, r8, sl, sp, lr}^
        21f4fc:	6c69636b 	stcvsl	3, cr6, [r9], -#428
        21f500:	00000000 	andeq	r0, r0, r0
        21f504:	556e6b6e 	strplb	r6, [lr, -#2926]!
        21f508:	6f776e20 	swivs	0x00776e20
        21f50c:	6576656e 	ldrvsb	r6, [r6, -#1390]!
        21f510:	74207479 	strvct	r7, [r0], -#1145
        21f514:	70650000 	rsbvc	r0, r5, r0
    */
}

