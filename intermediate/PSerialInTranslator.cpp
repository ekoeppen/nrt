#include "include/PSerialInTranslator.h"

/**
 * Symbol: Sizeof__19PSerialInTranslatorSFv
 * Address: 001dd574
 */
void PSerialInTranslator::Sizeof() {
    /*
        1dd574:	e3a0001c 	mov	r0, #28	; 0x1c
        1dd578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialInTranslator::New(void)
 * Address: 001dd57c
 */
PSerialInTranslator::New(void) {
    /*
        1dd57c:	e3a01000 	mov	r1, #0	; 0x0
        1dd580:	e5801010 	str	r1, [r0, #16]	; fField16
        1dd584:	e5801014 	str	r1, [r0, #20]	; fField20
        1dd588:	e5801018 	str	r1, [r0, #24]	; fField24
        1dd58c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialInTranslator::Delete(void)
 * Address: 001dd590
 */
PSerialInTranslator::Delete(void) {
    /*
        1dd590:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1dd594:	e3300000 	teq	r0, #0	; 0x0
        1dd598:	1a67d4ee 	bne	1bd2958 <$free>
        1dd59c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialInTranslator::Init(void *)
 * Address: 001dd5a0
 */
PSerialInTranslator::Init(void *) {
    /*
        1dd5a0:	e1a0c00d 	mov	ip, sp
        1dd5a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dd5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd5ac:	e1a04000 	mov	r4, r0
        1dd5b0:	e3a05000 	mov	r5, #0	; 0x0
        1dd5b4:	e1b00001 	movs	r0, r1
        1dd5b8:	0a00000e 	beq	1dd5f8 <PSerialInTranslator::Init(void *)+0x58>
        1dd5bc:	e5901000 	ldr	r1, [r0]
        1dd5c0:	e5841010 	str	r1, [r4, #16]	; fField16
        1dd5c4:	e5900004 	ldr	r0, [r0, #4]
        1dd5c8:	e5840018 	str	r0, [r4, #24]	; fField24
        1dd5cc:	eb67e565 	bl	1bd6b68 <$malloc>
        1dd5d0:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1dd5d4:	e3300000 	teq	r0, #0	; 0x0
        1dd5d8:	0a000003 	beq	1dd5ec <PSerialInTranslator::Init(void *)+0x4c>
        1dd5dc:	e59f1004 	ldr	r1, [pc, #4]	; 1dd5e8 <PSerialInTranslator::Init(void *)+0x48>
        1dd5e0:	eb680a80 	bl	1bdffe8 <$SetPtrName>
        1dd5e4:	ea000004 	b	1dd5fc <PSerialInTranslator::Init(void *)+0x5c>
        1dd5e8:	72657062 	rsbvc	r7, r5, #98	; 0x62
        1dd5ec:	eb6812cb 	bl	1be2120 <$MemError>
        1dd5f0:	e1a05000 	mov	r5, r0
        1dd5f4:	ea000000 	b	1dd5fc <PSerialInTranslator::Init(void *)+0x5c>
        1dd5f8:	e3e05000 	mvn	r5, #0	; 0x0
        1dd5fc:	e1a00005 	mov	r0, r5
        1dd600:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PSerialInTranslator::Idle(void)
 * Address: 001dd604
 */
PSerialInTranslator::Idle(void) {
    /*
        1dd604:	e3a009e1 	mov	r0, #3686400	; 0x384000
        1dd608:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialInTranslator::FrameAvailable(void)
 * Address: 001dd60c
 */
PSerialInTranslator::FrameAvailable(void) {
    /*
        1dd60c:	e1a0c00d 	mov	ip, sp
        1dd610:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dd614:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd618:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1dd61c:	e5901000 	ldr	r1, [r0]
        1dd620:	e1a0e00f 	mov	lr, pc
        1dd624:	e281f040 	add	pc, r1, #64	; 0x40
        1dd628:	e3500000 	cmp	r0, #0	; 0x0
        1dd62c:	d3a00000 	movle	r0, #0	; 0x0
        1dd630:	c3a00001 	movgt	r0, #1	; 0x1
        1dd634:	e20000ff 	and	r0, r0, #255	; 0xff
        1dd638:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PSerialInTranslator::ProduceFrame(int)
 * Address: 001dd63c
 */
PSerialInTranslator::ProduceFrame(int) {
    /*
        1dd63c:	e1a0c00d 	mov	ip, sp
        1dd640:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1dd644:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd648:	e1a04000 	mov	r4, r0
        1dd64c:	e3a00002 	mov	r0, #2	; 0x2
        1dd650:	eb6792bd 	bl	1bc214c <$AllocateRefHandle(long)>
        1dd654:	e1a07000 	mov	r7, r0
        1dd658:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1dd65c:	e1a06000 	mov	r6, r0
        1dd660:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1dd664:	e0808001 	add	r8, r0, r1
        1dd668:	e24dd004 	sub	sp, sp, #4	; 0x4
        1dd66c:	e3a09000 	mov	r9, #0	; 0x0
        1dd670:	e1500008 	cmp	r0, r8
        1dd674:	2a000016 	bcs	1dd6d4 <PSerialInTranslator::ProduceFrame(int)+0x98>
        1dd678:	e59f5030 	ldr	r5, [pc, #30]	; 1dd6b0 <PSerialInTranslator::ProduceFrame(int)+0x74>
        1dd67c:	e3a02000 	mov	r2, #0	; 0x0
        1dd680:	e1a01005 	mov	r1, r5
        1dd684:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1dd688:	e5903000 	ldr	r3, [r0]
        1dd68c:	e1a0e00f 	mov	lr, pc
        1dd690:	e283f054 	add	pc, r3, #84	; 0x54
        1dd694:	e3300008 	teq	r0, #8	; 0x8
        1dd698:	1330007f 	teqne	r0, #127	; 0x7f
        1dd69c:	1a000004 	bne	1dd6b4 <PSerialInTranslator::ProduceFrame(int)+0x78>
        1dd6a0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1dd6a4:	e1500006 	cmp	r0, r6
        1dd6a8:	32466001 	subcc	r6, r6, #1	; 0x1
        1dd6ac:	ea000006 	b	1dd6cc <PSerialInTranslator::ProduceFrame(int)+0x90>
        1dd6b0:	000e0f9c 	muleq	lr, ip, pc
        1dd6b4:	e330000d 	teq	r0, #13	; 0xd
        1dd6b8:	1330000a 	teqne	r0, #10	; 0xa
        1dd6bc:	14c60001 	strneb	r0, [r6], #1
        1dd6c0:	1a000001 	bne	1dd6cc <PSerialInTranslator::ProduceFrame(int)+0x90>
        1dd6c4:	e5c69000 	strb	r9, [r6]
        1dd6c8:	ea000001 	b	1dd6d4 <PSerialInTranslator::ProduceFrame(int)+0x98>
        1dd6cc:	e1560008 	cmp	r6, r8
        1dd6d0:	3affffe9 	bcc	1dd67c <PSerialInTranslator::ProduceFrame(int)+0x40>
        1dd6d4:	e59f0040 	ldr	r0, [pc, #40]	; 1dd71c <PSerialInTranslator::ProduceFrame(int)+0xe0>
        1dd6d8:	e5900000 	ldr	r0, [r0]
        1dd6dc:	e3a0100d 	mov	r1, #13	; 0xd
        1dd6e0:	eb06b1f7 	bl	389ec4 <POutTranslator::Putc(int)>
        1dd6e4:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        1dd6e8:	eb679ef8 	bl	1bc52d0 <$MakeString(char const *)>
        1dd6ec:	eb679296 	bl	1bc214c <$AllocateRefHandle(long)>
        1dd6f0:	e58d0000 	str	r0, [sp]
        1dd6f4:	e1a0000d 	mov	r0, sp
        1dd6f8:	eb679eff 	bl	1bc52fc <$ParseString(RefVar const &)>
        1dd6fc:	e5870000 	str	r0, [r7]
        1dd700:	e59d0000 	ldr	r0, [sp]
        1dd704:	eb6796ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1dd708:	e5974000 	ldr	r4, [r7]
        1dd70c:	e1a00007 	mov	r0, r7
        1dd710:	eb6796a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1dd714:	e1a00004 	mov	r0, r4
        1dd718:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1dd71c:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: ClassInfo__19PSerialInTranslatorSFv
 * Address: 003859f8
 */
void PSerialInTranslator::ClassInfo() {
    /*
        3859f8:	e24f0044 	sub	r0, pc, #68	; 0x44
        3859fc:	e1a0f00e 	mov	pc, lr
        385a00:	e3a00000 	mov	r0, #0	; 0x0
        385a04:	e1a0f00e 	mov	pc, lr
        385a08:	50536572 	subpls	r6, r3, r2, ror r5
        385a0c:	69616c49 	stmvsdb	r1!, {r0, r3, r6, sl, fp, sp, lr}^
        385a10:	6e547261 	cdpvs	2, 5, cr7, cr4, cr1, {3}
        385a14:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        385a18:	746f7200 	strvcbt	r7, [pc], #200	; 385a20 <ClassInfo__19PSerialInTranslatorSFv+0x28>
        385a1c:	50496e54 	subpl	r6, r9, r4, asr lr
        385a20:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        385a24:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        385a28:	72000000 	andvc	r0, r0, #0	; 0x0
        385a2c:	00000000 	andeq	r0, r0, r0
        385a30:	eafffff0 	b	3859f8 <ClassInfo__19PSerialInTranslatorSFv>
        385a34:	ea5d0a7f 	b	1ac8438 <PSerialInTranslator::$New(void)>
        385a38:	ea5cfa0d 	b	1ac4274 <PSerialInTranslator::$Delete(void)>
        385a3c:	ea5d066a 	b	1ac73ec <PSerialInTranslator::$Init(void *)>
        385a40:	ea5d0660 	b	1ac73c8 <PSerialInTranslator::$Idle(void)>
        385a44:	ea5d0656 	b	1ac73a4 <PSerialInTranslator::$FrameAvailable(void)>
        385a48:	ea5d0a85 	b	1ac8464 <PSerialInTranslator::$ProduceFrame(int)>
        385a4c:	00000000 	andeq	r0, r0, r0
        385a50:	00000048 	andeq	r0, r0, r8, asr #32
        385a54:	00000059 	andeq	r0, r0, r9, asr r0
        385a58:	00000064 	andeq	r0, r0, r4, rrx
        385a5c:	00000064 	andeq	r0, r0, r4, rrx
        385a60:	0000009c 	muleq	r0, ip, r0
        385a64:	ea5d0ea3 	b	1ac94f8 <$Sizeof__20PSerialOutTranslatorSFv>
        385a70:	ea5d0a71 	b	1ac843c <PSerialOutTranslator::$New(void)>
        385a74:	ea5cf9ff 	b	1ac4278 <PSerialOutTranslator::$Delete(void)>
        385a84:	ea000001 	b	385a90 <ClassInfo__20PSerialOutTranslatorSFv+0x8>
    */
}

