#include "include/TSerialDebugLink.h"

/**
 * Symbol: New__16TSerialDebugLinkSFPc
 * Address: 00385064
 */
void TSerialDebugLink::New() {
    /*
        385064:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385068:	e1a01000 	mov	r1, r0
        38506c:	ebfffff5 	bl	385048 <ClassInfo__17TGeoPortDebugLinkSFv+0x68>
        385070:	eb6129cb 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385074:	e1100000 	tst	r0, r0
        385078:	e28dd004 	add	sp, sp, #4	; 0x4
        38507c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385080:	01a0f00e 	moveq	pc, lr
        385084:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385088:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38508c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TSerialDebugLink::Delete(void)
 * Address: 00385090
 */
TSerialDebugLink::Delete(void) {
    /*
        385090:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385094:	e92d4001 	stmdb	sp!, {r0, lr}
        385098:	e28fe004 	add	lr, pc, #4	; 0x4
        38509c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850a0:	e28cf00c 	add	pc, ip, #12	; 0xc
        3850a4:	e8bd4001 	ldmia	sp!, {r0, lr}
        3850a8:	ea61362b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TSerialDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))
 * Address: 003850ac
 */
TSerialDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *)) {
    /*
        3850ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850b0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850b4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TSerialDebugLink::Remove(void)
 * Address: 003850b8
 */
TSerialDebugLink::Remove(void) {
    /*
        3850b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850bc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850c0:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TSerialDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)
 * Address: 003850c4
 */
TSerialDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long) {
    /*
        3850c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850cc:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TSerialDebugLink::WriteDebugFrame(unsigned char *, long)
 * Address: 003850d0
 */
TSerialDebugLink::WriteDebugFrame(unsigned char *, long) {
    /*
        3850d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850d4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850d8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TSerialDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)
 * Address: 003850dc
 */
TSerialDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long) {
    /*
        3850dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850e4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TSerialDebugLink::PollByte(void)
 * Address: 003850e8
 */
TSerialDebugLink::PollByte(void) {
    /*
        3850e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850f0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TSerialDebugLink::EnbIntOnNextRxC(void)
 * Address: 003850f4
 */
TSerialDebugLink::EnbIntOnNextRxC(void) {
    /*
        3850f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3850f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3850fc:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TSerialDebugLink::GetSerialChipPtr(void)
 * Address: 00385100
 */
TSerialDebugLink::GetSerialChipPtr(void) {
    /*
        385100:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385104:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385108:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TSerialDebugLink::PowerCycle(unsigned char)
 * Address: 0038510c
 */
TSerialDebugLink::PowerCycle(unsigned char) {
    /*
        38510c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385110:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385114:	e28cf030 	add	pc, ip, #48	; 0x30
        385118:	00000000 	andeq	r0, r0, r0
        38511c:	00000048 	andeq	r0, r0, r8, asr #32
        385120:	00000059 	andeq	r0, r0, r9, asr r0
        385124:	00000066 	andeq	r0, r0, r6, rrx
        385128:	00000064 	andeq	r0, r0, r4, rrx
        38512c:	00000144 	andeq	r0, r0, r4, asr #2
        385130:	eafb9d01 	b	26c53c <Sizeof__20TVoyagerMiscIntfImplSFv>
        38513c:	eafb9d19 	b	26c5a8 <TVoyagerMiscIntfImpl::New(void)>
        385140:	eafb9d4f 	b	26c684 <TVoyagerMiscIntfImpl::Delete(void)>
        385150:	ea000001 	b	38515c <ClassInfo__20TVoyagerMiscIntfImplSFv+0x8>
    */
}

