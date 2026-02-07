#include "include/TIrLAPPutBuffer.h"

/**
 * Symbol: TIrLAPPutBuffer::__ct(void)
 * Address: 000f54a4
 */
TIrLAPPutBuffer::TIrLAPPutBuffer(void) {
    /*
         f54a4:	e1a0c00d 	mov	ip, sp
         f54a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f54ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f54b0:	e1b04000 	movs	r4, r0
         f54b4:	1a000003 	bne	f54c8 <TIrLAPPutBuffer::__ct(void)+0x24>
         f54b8:	e3a00020 	mov	r0, #32	; 0x20
         f54bc:	eb6b649d 	bl	1bce738 <$__nw(unsigned int)>
         f54c0:	e1b04000 	movs	r4, r0
         f54c4:	0a000003 	beq	f54d8 <TIrLAPPutBuffer::__ct(void)+0x34>
         f54c8:	e59f0010 	ldr	r0, [pc, #10]	; f54e0 <TIrLAPPutBuffer::__ct(void)+0x3c>
         f54cc:	e5840000 	str	r0, [r4]
         f54d0:	e1a00004 	mov	r0, r4
         f54d4:	eb64fd61 	bl	1a34a60 <TIrLAPPutBuffer::$Init(void)>
         f54d8:	e1a00004 	mov	r0, r4
         f54dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f54e0:	0001e11c 	andeq	lr, r1, ip, lsl r1
    */
}

/**
 * Symbol: TIrLAPPutBuffer::__dt(void)
 * Address: 000f54e4
 */
TIrLAPPutBuffer::~TIrLAPPutBuffer(void) {
    /*
         f54e4:	e59f200c 	ldr	r2, [pc, #c]	; f54f8 <TIrLAPPutBuffer::__dt(void)+0x14>
         f54e8:	e3110001 	tst	r1, #1	; 0x1
         f54ec:	e5802000 	str	r2, [r0]
         f54f0:	1a6b607a 	bne	1bcd6e0 <$__dl(void *)>
         f54f4:	e1a0f00e 	mov	pc, lr
         f54f8:	0001e11c 	andeq	lr, r1, ip, lsl r1
    */
}

/**
 * Symbol: TIrLAPPutBuffer::Init(void)
 * Address: 000f54fc
 */
TIrLAPPutBuffer::Init(void) {
    /*
         f54fc:	e3a01000 	mov	r1, #0	; 0x0
         f5500:	e5801004 	str	r1, [r0, #4]	; fField4
         f5504:	e5801008 	str	r1, [r0, #8]	; fField8
         f5508:	e580100c 	str	r1, [r0, #12]	; fField12
         f550c:	e5801010 	str	r1, [r0, #16]	; fField16
         f5510:	e5801014 	str	r1, [r0, #20]	; fField20
         f5514:	e5801018 	str	r1, [r0, #24]	; fField24
         f5518:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         f551c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAPPutBuffer::SetControlBuffer(unsigned char *, unsigned long, unsigned char)
 * Address: 000f5520
 */
TIrLAPPutBuffer::SetControlBuffer(unsigned char *, unsigned long, unsigned char) {
    /*
         f5520:	e1a0c00d 	mov	ip, sp
         f5524:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f5528:	e24cb004 	sub	fp, ip, #4	; 0x4
         f552c:	e1a04000 	mov	r4, r0
         f5530:	e1a06001 	mov	r6, r1
         f5534:	e1a05002 	mov	r5, r2
         f5538:	e31300ff 	tst	r3, #255	; 0xff
         f553c:	11a00004 	movne	r0, r4
         f5540:	1b64fd46 	blne	1a34a60 <TIrLAPPutBuffer::$Init(void)>
         f5544:	e3a00000 	mov	r0, #0	; 0x0
         f5548:	e5a46004 	str	r6, [r4, #4]!	; fField4
         f554c:	e5845004 	str	r5, [r4, #4]	; fField4
         f5550:	e5840008 	str	r0, [r4, #8]	; fField8
         f5554:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPPutBuffer::SetDataBuffer(CBuffer *, unsigned long, unsigned long)
 * Address: 000f5558
 */
TIrLAPPutBuffer::SetDataBuffer(CBuffer *, unsigned long, unsigned long) {
    /*
         f5558:	e2800010 	add	r0, r0, #16	; 0x10
         f555c:	e880000e 	stmia	r0, {r1, r2, r3}
         f5560:	e2400010 	sub	r0, r0, #16	; 0x10
         f5564:	e3a01000 	mov	r1, #0	; 0x0
         f5568:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         f556c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAPPutBuffer::Get(void)
 * Address: 000f5570
 */
TIrLAPPutBuffer::Get(void) {
    /*
         f5570:	e1a0c00d 	mov	ip, sp
         f5574:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f5578:	e24cb004 	sub	fp, ip, #4	; 0x4
         f557c:	e1a04000 	mov	r4, r0
         f5580:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f5584:	e5941008 	ldr	r1, [r4, #8]	; fField8
         f5588:	e1500001 	cmp	r0, r1
         f558c:	2a000004 	bcs	f55a4 <TIrLAPPutBuffer::Get(void)+0x34>
         f5590:	e2801001 	add	r1, r0, #1	; 0x1
         f5594:	e584100c 	str	r1, [r4, #12]	; fField12
         f5598:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
         f559c:	e7d10000 	ldrb	r0, [r1, r0]
         f55a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f55a4:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f55a8:	e5941018 	ldr	r1, [r4, #24]	; fField24
         f55ac:	e1500001 	cmp	r0, r1
         f55b0:	23a000ff 	movcs	r0, #255	; 0xff
         f55b4:	291ba810 	ldmcsdb	fp, {r4, fp, sp, pc}
         f55b8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f55bc:	e5901000 	ldr	r1, [r0]
         f55c0:	e1a0e00f 	mov	lr, pc
         f55c4:	e281f010 	add	pc, r1, #16	; 0x10
         f55c8:	e20000ff 	and	r0, r0, #255	; 0xff
         f55cc:	e594101c 	ldr	r1, [r4, #28]	; fField28
         f55d0:	e2811001 	add	r1, r1, #1	; 0x1
         f55d4:	e5a4101c 	str	r1, [r4, #28]!	; fField28
         f55d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPPutBuffer::Seek(long, int)
 * Address: 000f55dc
 */
TIrLAPPutBuffer::Seek(long, int) {
    /*
         f55dc:	e1a0c00d 	mov	ip, sp
         f55e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f55e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f55e8:	e1a04000 	mov	r4, r0
         f55ec:	e3720001 	cmn	r2, #1	; 0x1
         f55f0:	1a00000c 	bne	f5628 <TIrLAPPutBuffer::Seek(long, int)+0x4c>
         f55f4:	e3a05000 	mov	r5, #0	; 0x0
         f55f8:	e584500c 	str	r5, [r4, #12]	; fField12
         f55fc:	e5943010 	ldr	r3, [r4, #16]	; fField16
         f5600:	e3330000 	teq	r3, #0	; 0x0
         f5604:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f5608:	e1a00003 	mov	r0, r3
         f560c:	e3e02000 	mvn	r2, #0	; 0x0
         f5610:	e5941014 	ldr	r1, [r4, #20]	; fField20
         f5614:	e5933000 	ldr	r3, [r3]
         f5618:	e1a0e00f 	mov	lr, pc
         f561c:	e283f038 	add	pc, r3, #56	; 0x38
         f5620:	e5a4501c 	str	r5, [r4, #28]!	; fField28
         f5624:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f5628:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f562c:	e3300000 	teq	r0, #0	; 0x0
         f5630:	0a000009 	beq	f565c <TIrLAPPutBuffer::Seek(long, int)+0x80>
         f5634:	e3a02000 	mov	r2, #0	; 0x0
         f5638:	e3e01000 	mvn	r1, #0	; 0x0
         f563c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f5640:	e5903000 	ldr	r3, [r0]
         f5644:	e1a0e00f 	mov	lr, pc
         f5648:	e283f038 	add	pc, r3, #56	; 0x38
         f564c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f5650:	e2400001 	sub	r0, r0, #1	; 0x1
         f5654:	e5a4001c 	str	r0, [r4, #28]!	; fField28
         f5658:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f565c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f5660:	e3300000 	teq	r0, #0	; 0x0
         f5664:	12400001 	subne	r0, r0, #1	; 0x1
         f5668:	15a4000c 	strne	r0, [r4, #12]!	; fField12
         f566c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAPPutBuffer::AtEOF( const(void))
 * Address: 000f5670
 */
TIrLAPPutBuffer::AtEOF( const(void)) {
    /*
         f5670:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f5674:	e5902008 	ldr	r2, [r0, #8]	; fField8
         f5678:	e1310002 	teq	r1, r2
         f567c:	02801018 	addeq	r1, r0, #24	; 0x18
         f5680:	08910003 	ldmeqia	r1, {r0, r1}
         f5684:	01310000 	teqeq	r1, r0
         f5688:	13a00000 	movne	r0, #0	; 0x0
         f568c:	03a00001 	moveq	r0, #1	; 0x1
         f5690:	e20000ff 	and	r0, r0, #255	; 0xff
         f5694:	e1a0f00e 	mov	pc, lr
    */
}

