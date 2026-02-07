#include "include/TPacketBuffer.h"

/**
 * Symbol: TPacketBuffer::__ct(void)
 * Address: 001627b0
 */
TPacketBuffer::TPacketBuffer(void) {
    /*
        1627b0:	e1a0c00d 	mov	ip, sp
        1627b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1627b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1627bc:	e1b04000 	movs	r4, r0
        1627c0:	1a000003 	bne	1627d4 <TPacketBuffer::__ct(void)+0x24>
        1627c4:	e3a00044 	mov	r0, #68	; 0x44
        1627c8:	eb69afda 	bl	1bce738 <$__nw(unsigned int)>
        1627cc:	e1b04000 	movs	r4, r0
        1627d0:	0a00000c 	beq	162808 <TPacketBuffer::__ct(void)+0x58>
        1627d4:	e1a00004 	mov	r0, r4
        1627d8:	eb6a4475 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1627dc:	e3a00000 	mov	r0, #0	; 0x0
        1627e0:	e5840034 	str	r0, [r4, #52]
        1627e4:	e5840040 	str	r0, [r4, #64]
        1627e8:	e5840038 	str	r0, [r4, #56]
        1627ec:	e584003c 	str	r0, [r4, #60]
        1627f0:	e59f1018 	ldr	r1, [pc, #18]	; 162810 <TPacketBuffer::__ct(void)+0x60>
        1627f4:	e5841024 	str	r1, [r4, #36]
        1627f8:	e3a01001 	mov	r1, #1	; 0x1
        1627fc:	e5c41030 	strb	r1, [r4, #48]	; fField48
        162800:	e5c41031 	strb	r1, [r4, #49]	; fField49
        162804:	e5840028 	str	r0, [r4, #40]
        162808:	e1a00004 	mov	r0, r4
        16280c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        162810:	0001d044 	andeq	sp, r1, r4, asr #32
    */
}

/**
 * Symbol: TPacketBuffer::UnLock(void)
 * Address: 00162814
 */
TPacketBuffer::UnLock(void) {
    /*
        162814:	e3a01000 	mov	r1, #0	; 0x0
        162818:	e5c01030 	strb	r1, [r0, #48]	; fField48
        16281c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPacketBuffer::BeginDispatch(void)
 * Address: 00162820
 */
TPacketBuffer::BeginDispatch(void) {
    /*
        162820:	e3a01001 	mov	r1, #1	; 0x1
        162824:	e5c01030 	strb	r1, [r0, #48]	; fField48
        162828:	e5c01031 	strb	r1, [r0, #49]	; fField49
        16282c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPacketBuffer::DoneDispatch(void)
 * Address: 00162830
 */
TPacketBuffer::DoneDispatch(void) {
    /*
        162830:	e1a01000 	mov	r1, r0
        162834:	e5d00031 	ldrb	r0, [r0, #49]	; fField49
        162838:	e3300000 	teq	r0, #0	; 0x0
        16283c:	11a00001 	movne	r0, r1
        162840:	1591f024 	ldrne	pc, [r1, #36]
        162844:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPacketBuffer::SetMsgToken(TUMsgToken *)
 * Address: 00162848
 */
TPacketBuffer::SetMsgToken(TUMsgToken *) {
    /*
        162848:	e3310000 	teq	r1, #0	; 0x0
        16284c:	01a0f00e 	moveq	pc, lr
        162850:	e2800034 	add	r0, r0, #52	; 0x34
        162854:	e891100e 	ldmia	r1, {r1, r2, r3, ip}
        162858:	e880100e 	stmia	r0, {r1, r2, r3, ip}
        16285c:	e1a0f00e 	mov	pc, lr
    */
}

