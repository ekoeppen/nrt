#include "DDKIncludes/OS600/LongTime.h"

/**
 * Symbol: RealTimeAlarm::Init(unsigned long, unsigned long, unsigned long, void *, long, unsigned long)
 * Address: 0019be2c
 */
RealTimeAlarm::Init(unsigned long, unsigned long, unsigned long, void *, long, unsigned long) {
    /*
        19be2c:	e92d4010 	stmdb	sp!, {r4, lr}
        19be30:	e28de008 	add	lr, sp, #8	; 0x8
        19be34:	e89e4010 	ldmia	lr, {r4, lr}
        19be38:	e59dc010 	ldr	ip, [sp, #16]	; fField16
        19be3c:	e980100e 	stmib	r0, {r1, r2, r3, ip}
        19be40:	e3a01000 	mov	r1, #0	; 0x0
        19be44:	e3a02001 	mov	r2, #1	; 0x1
        19be48:	e580101c 	str	r1, [r0, #28]	; fField28
        19be4c:	e5802024 	str	r2, [r0, #36]	; fField36
        19be50:	e2800014 	add	r0, r0, #20	; 0x14
        19be54:	e8804010 	stmia	r0, {r4, lr}
        19be58:	e5801014 	str	r1, [r0, #20]	; fField20
        19be5c:	e580101c 	str	r1, [r0, #28]	; fField28
        19be60:	e580200c 	str	r2, [r0, #12]	; fField12
        19be64:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: RealTimeAlarm::Init(unsigned long, long (*)(void *), void *, unsigned long, unsigned long, unsigned long *)
 * Address: 0019be68
 */
RealTimeAlarm::Init(unsigned long, long (*)(void *), void *, unsigned long, unsigned long, unsigned long *) {
    /*
        19be68:	e1a0c00d 	mov	ip, sp
        19be6c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19be70:	e24cb004 	sub	fp, ip, #4	; 0x4
        19be74:	e1a04000 	mov	r4, r0
        19be78:	e1a05001 	mov	r5, r1
        19be7c:	e28b7008 	add	r7, fp, #8	; 0x8
        19be80:	e8970081 	ldmia	r7, {r0, r7}
        19be84:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        19be88:	e3a08000 	mov	r8, #0	; 0x0
        19be8c:	e3a06001 	mov	r6, #1	; 0x1
        19be90:	e5840030 	str	r0, [r4, #48]	; fField48
        19be94:	e3300000 	teq	r0, #0	; 0x0
        19be98:	e2844024 	add	r4, r4, #36	; 0x24
        19be9c:	e8840042 	stmia	r4, {r1, r6}
        19bea0:	e5842008 	str	r2, [r4, #8]	; fField8
        19bea4:	e5243010 	str	r3, [r4, -#16]!	; fField16
        19bea8:	e5848008 	str	r8, [r4, #8]	; fField8
        19beac:	e2444014 	sub	r4, r4, #20	; 0x14
        19beb0:	05a45004 	streq	r5, [r4, #4]!	; fField4
        19beb4:	05a4601c 	streq	r6, [r4, #28]!	; fField28
        19beb8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        19bebc:	e1a00007 	mov	r0, r7
        19bec0:	e3a01001 	mov	r1, #1	; 0x1
        19bec4:	eb0848ce 	bl	3ae204 <Swap>
        19bec8:	e3300000 	teq	r0, #0	; 0x0
        19becc:	1afffffa 	bne	19bebc <RealTimeAlarm::Init(unsigned long, long (*)(void *), void *, unsigned long, unsigned long, unsigned long *)+0x54>
        19bed0:	eb68e2d2 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19bed4:	e0800005 	add	r0, r0, r5
        19bed8:	e5a40004 	str	r0, [r4, #4]!	; fField4
        19bedc:	e5a4601c 	str	r6, [r4, #28]!	; fField28
        19bee0:	e5878000 	str	r8, [r7]
        19bee4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: RealTimeAlarm::Fire(unsigned long)
 * Address: 0019c324
 */
RealTimeAlarm::Fire(unsigned long) {
    /*
        19c324:	e1a0c00d 	mov	ip, sp
        19c328:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19c32c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c330:	e1a04000 	mov	r4, r0
        19c334:	e5900004 	ldr	r0, [r0, #4]	; fField4
        19c338:	e1500001 	cmp	r0, r1
        19c33c:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        19c340:	e2840020 	add	r0, r4, #32	; 0x20
        19c344:	e3a01000 	mov	r1, #0	; 0x0
        19c348:	eb0847ad 	bl	3ae204 <Swap>
        19c34c:	e3300000 	teq	r0, #0	; 0x0
        19c350:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        19c354:	e5940028 	ldr	r0, [r4, #40]	; fField40
        19c358:	e3300000 	teq	r0, #0	; 0x0
        19c35c:	0a000003 	beq	19c370 <RealTimeAlarm::Fire(unsigned long)+0x4c>
        19c360:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19c364:	e1a0e00f 	mov	lr, pc
        19c368:	e594f02c 	ldr	pc, [r4, #44]	; fField44
        19c36c:	ea00000b 	b	19c3a0 <RealTimeAlarm::Fire(unsigned long)+0x7c>
        19c370:	e3a03000 	mov	r3, #0	; 0x0
        19c374:	e3a02000 	mov	r2, #0	; 0x0
        19c378:	e3a01000 	mov	r1, #0	; 0x0
        19c37c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        19c380:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        19c384:	e5943018 	ldr	r3, [r4, #24]	; fField24
        19c388:	e92d0008 	stmdb	sp!, {r3}
        19c38c:	e2841008 	add	r1, r4, #8	; 0x8
        19c390:	e8910003 	ldmia	r1, {r0, r1}
        19c394:	e5943014 	ldr	r3, [r4, #20]	; fField20
        19c398:	eb68fa69 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        19c39c:	e28dd014 	add	sp, sp, #20	; 0x14
        19c3a0:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        19c3a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

