#include "include/TEventCollector.h"

/**
 * Symbol: TEventCollector::Register(void)
 * Address: 002dc360
 */
TEventCollector::Register(void) {
    /*
        2dc360:	e1a0c00d 	mov	ip, sp
        2dc364:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dc368:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc36c:	e1a04000 	mov	r4, r0
        2dc370:	eb02da06 	bl	392b90 <EnterFIQAtomic>
        2dc374:	e3a00000 	mov	r0, #0	; 0x0
        2dc378:	e59f1024 	ldr	r1, [pc, #24]	; 2dc3a4 <TEventCollector::Register(void)+0x44>	; fField24
        2dc37c:	e7912100 	ldr	r2, [r1, r0, lsl #2]
        2dc380:	e3320000 	teq	r2, #0	; 0x0
        2dc384:	02842010 	addeq	r2, r4, #16	; 0x10
        2dc388:	07812100 	streq	r2, [r1, r0, lsl #2]
        2dc38c:	0a000002 	beq	2dc39c <TEventCollector::Register(void)+0x3c>
        2dc390:	e2800001 	add	r0, r0, #1	; 0x1
        2dc394:	e3500020 	cmp	r0, #32	; 0x20
        2dc398:	bafffff7 	blt	2dc37c <TEventCollector::Register(void)+0x1c>
        2dc39c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2dc3a0:	ea02da02 	b	392bb0 <ExitFIQAtomic>
        2dc3a4:	0c105370 	ldceq	3, cr5, [r0], -#448
    */
}

/**
 * Symbol: TEventCollector::Deregister(void)
 * Address: 002dc3a8
 */
TEventCollector::Deregister(void) {
    /*
        2dc3a8:	e1a0c00d 	mov	ip, sp
        2dc3ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dc3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc3b4:	e1a04000 	mov	r4, r0
        2dc3b8:	eb02d9f4 	bl	392b90 <EnterFIQAtomic>
        2dc3bc:	e3a00000 	mov	r0, #0	; 0x0
        2dc3c0:	e59f1028 	ldr	r1, [pc, #28]	; 2dc3f0 <TEventCollector::Deregister(void)+0x48>
        2dc3c4:	e2842010 	add	r2, r4, #16	; 0x10
        2dc3c8:	e7913100 	ldr	r3, [r1, r0, lsl #2]
        2dc3cc:	e1330002 	teq	r3, r2
        2dc3d0:	03a02000 	moveq	r2, #0	; 0x0
        2dc3d4:	07812100 	streq	r2, [r1, r0, lsl #2]
        2dc3d8:	0a000002 	beq	2dc3e8 <TEventCollector::Deregister(void)+0x40>
        2dc3dc:	e2800001 	add	r0, r0, #1	; 0x1
        2dc3e0:	e3500020 	cmp	r0, #32	; 0x20
        2dc3e4:	bafffff7 	blt	2dc3c8 <TEventCollector::Deregister(void)+0x20>
        2dc3e8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2dc3ec:	ea02d9ef 	b	392bb0 <ExitFIQAtomic>
        2dc3f0:	0c105370 	ldceq	3, cr5, [r0], -#448
    */
}

/**
 * Symbol: TEventCollector::AddTime(void)
 * Address: 002dc3f4
 */
TEventCollector::AddTime(void) {
    /*
        2dc3f4:	e5901018 	ldr	r1, [r0, #24]	; fField24
        2dc3f8:	e59f200c 	ldr	r2, [pc, #c]	; 2dc40c <TEventCollector::AddTime(void)+0x18>
        2dc3fc:	e5922000 	ldr	r2, [r2]
        2dc400:	e4812004 	str	r2, [r1], #4	; fField4
        2dc404:	e5a01018 	str	r1, [r0, #24]!	; fField24
        2dc408:	e1a0f00e 	mov	pc, lr
        2dc40c:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: New__15TEventCollectorSFPc
 * Address: 00389c54
 */
void TEventCollector::New() {
    /*
        389c54:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389c58:	e1a01000 	mov	r1, r0
        389c5c:	ebfffff6 	bl	389c3c <ClassInfo__20TUnicodeDecompressorSFv+0x58>
        389c60:	eb6116cf 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389c64:	e1100000 	tst	r0, r0
        389c68:	e28dd004 	add	sp, sp, #4	; 0x4
        389c6c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389c70:	01a0f00e 	moveq	pc, lr
        389c74:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389c78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389c7c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TEventCollector::Delete(void)
 * Address: 00389c80
 */
TEventCollector::Delete(void) {
    /*
        389c80:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389c84:	e92d4001 	stmdb	sp!, {r0, lr}
        389c88:	e28fe004 	add	lr, pc, #4	; 0x4
        389c8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389c90:	e28cf00c 	add	pc, ip, #12	; 0xc
        389c94:	e8bd4001 	ldmia	sp!, {r0, lr}
        389c98:	ea61232f 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TEventCollector::Init(unsigned int, char *, char *, int, int)
 * Address: 00389c9c
 */
TEventCollector::Init(unsigned int, char *, char *, int, int) {
    /*
        389c9c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ca0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ca4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TEventCollector::AddDescriptions(EventTraceCauseDesc *, int)
 * Address: 00389ca8
 */
TEventCollector::AddDescriptions(EventTraceCauseDesc *, int) {
    /*
        389ca8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389cac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389cb0:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TEventCollector::Add(unsigned char)
 * Address: 00389cb4
 */
TEventCollector::Add(unsigned char) {
    /*
        389cb4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389cb8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389cbc:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TEventCollector::Add(unsigned long)
 * Address: 00389cc0
 */
TEventCollector::Add(unsigned long) {
    /*
        389cc0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389cc4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389cc8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TEventCollector::Add(void const *)
 * Address: 00389ccc
 */
TEventCollector::Add(void const *) {
    /*
        389ccc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389cd0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389cd4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TEventCollector::AddAddress(void)
 * Address: 00389cd8
 */
TEventCollector::AddAddress(void) {
    /*
        389cd8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389cdc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ce0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TEventCollector::CollectionControl(int)
 * Address: 00389ce4
 */
TEventCollector::CollectionControl(int) {
    /*
        389ce4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ce8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389cec:	e28cf028 	add	pc, ip, #40	; 0x28
        389cf0:	00000000 	andeq	r0, r0, r0
        389cf4:	00000048 	andeq	r0, r0, r8, asr #32
        389cf8:	00000056 	andeq	r0, r0, r6, asr r0
        389cfc:	00000062 	andeq	r0, r0, r2, rrx
        389d00:	00000060 	andeq	r0, r0, r0, rrx
        389d04:	00000088 	andeq	r0, r0, r8, lsl #1
        389d08:	ea60862d 	b	1bab5c4 <$Sizeof__17THistoryCollectorSFv>
        389d14:	ea608623 	b	1bab5a8 <THistoryCollector::$New(void)>
        389d18:	ea6081fc 	b	1baa510 <THistoryCollector::$Delete(void)>
        389d1c:	00020000 	andeq	r0, r2, r0
        389d28:	ea000001 	b	389d34 <ClassInfo__17THistoryCollectorSFv+0x8>
    */
}

