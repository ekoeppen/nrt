#include "include/TRealTimeClock.h"

/**
 * Symbol: InterruptEntry__14TRealTimeClockSFv
 * Address: 0019bee8
 */
void TRealTimeClock::InterruptEntry() {
    /*
        19bee8:	ea68ce27 	b	1bcf78c <$Alarm__14TRealTimeClockSFv>
    */
}

/**
 * Symbol: Cleanup__14TRealTimeClockSFv
 * Address: 0019beec
 */
void TRealTimeClock::Cleanup() {
    /*
        19beec:	ea68ce26 	b	1bcf78c <$Alarm__14TRealTimeClockSFv>
    */
}

/**
 * Symbol: Alarm__14TRealTimeClockSFv
 * Address: 0019bef0
 */
void TRealTimeClock::Alarm() {
    /*
        19bef0:	e1a0c00d 	mov	ip, sp
        19bef4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19bef8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19befc:	e24dd004 	sub	sp, sp, #4	; 0x4
        19bf00:	e3a05000 	mov	r5, #0	; 0x0
        19bf04:	e3a00001 	mov	r0, #1	; 0x1
        19bf08:	e59f4088 	ldr	r4, [pc, #88]	; 19bf98 <Alarm__14TRealTimeClockSFv+0xa8>
        19bf0c:	e5840014 	str	r0, [r4, #20]	; fField20
        19bf10:	e59f0084 	ldr	r0, [pc, #84]	; 19bf9c <Alarm__14TRealTimeClockSFv+0xac>
        19bf14:	e58d0000 	str	r0, [sp]
        19bf18:	e59f9080 	ldr	r9, [pc, #80]	; 19bfa0 <Alarm__14TRealTimeClockSFv+0xb0>
        19bf1c:	e3a01001 	mov	r1, #1	; 0x1
        19bf20:	e59d0000 	ldr	r0, [sp]
        19bf24:	eb0848b6 	bl	3ae204 <Swap>
        19bf28:	e3300000 	teq	r0, #0	; 0x0
        19bf2c:	1a00002f 	bne	19bff0 <Alarm__14TRealTimeClockSFv+0x100>
        19bf30:	eb6566d2 	bl	1af5a80 <$ClearRealTimeClockAlarm(void)>
        19bf34:	eb68e2b9 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19bf38:	e3a00000 	mov	r0, #0	; 0x0
        19bf3c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        19bf40:	e3a06000 	mov	r6, #0	; 0x0
        19bf44:	e3a07000 	mov	r7, #0	; 0x0
        19bf48:	e5846014 	str	r6, [r4, #20]	; fField20
        19bf4c:	eb68e2b3 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19bf50:	e1a01000 	mov	r1, r0
        19bf54:	e0870107 	add	r0, r7, r7, lsl #2
        19bf58:	e0800187 	add	r0, r0, r7, lsl #3
        19bf5c:	e0890100 	add	r0, r9, r0, lsl #2
        19bf60:	e1a08000 	mov	r8, r0
        19bf64:	e1a0a000 	mov	sl, r0
        19bf68:	eb68da67 	bl	1bd290c <RealTimeAlarm::$Fire(unsigned long)>
        19bf6c:	e5ba0020 	ldr	r0, [sl, #32]!	; fField32
        19bf70:	e31000ff 	tst	r0, #255	; 0xff
        19bf74:	0a00000c 	beq	19bfac <Alarm__14TRealTimeClockSFv+0xbc>
        19bf78:	e3360000 	teq	r6, #0	; 0x0
        19bf7c:	0a000008 	beq	19bfa4 <Alarm__14TRealTimeClockSFv+0xb4>
        19bf80:	e3300000 	teq	r0, #0	; 0x0
        19bf84:	0a000008 	beq	19bfac <Alarm__14TRealTimeClockSFv+0xbc>
        19bf88:	e5b80004 	ldr	r0, [r8, #4]!	; fField4
        19bf8c:	e1500005 	cmp	r0, r5
        19bf90:	91a05000 	movls	r5, r0
        19bf94:	ea000004 	b	19bfac <Alarm__14TRealTimeClockSFv+0xbc>
        19bf98:	0c101824 	ldceq	8, cr1, [r0], -#144
        19bf9c:	0c101834 	ldceq	8, cr1, [r0], -#208
        19bfa0:	0c106a44 	ldceq	10, cr6, [r0], -#272
        19bfa4:	e3a06001 	mov	r6, #1	; 0x1
        19bfa8:	e5b85004 	ldr	r5, [r8, #4]!	; fField4
        19bfac:	e2877001 	add	r7, r7, #1	; 0x1
        19bfb0:	e3570010 	cmp	r7, #16	; 0x10
        19bfb4:	baffffe4 	blt	19bf4c <Alarm__14TRealTimeClockSFv+0x5c>
        19bfb8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19bfbc:	e3300000 	teq	r0, #0	; 0x0
        19bfc0:	1affffde 	bne	19bf40 <Alarm__14TRealTimeClockSFv+0x50>
        19bfc4:	e3360000 	teq	r6, #0	; 0x0
        19bfc8:	0a000003 	beq	19bfdc <Alarm__14TRealTimeClockSFv+0xec>
        19bfcc:	e1a00005 	mov	r0, r5
        19bfd0:	eb68f30d 	bl	1bd8c0c <$PrimRawSetAlarm__14TRealTimeClockSFUl>
        19bfd4:	e3300000 	teq	r0, #0	; 0x0
        19bfd8:	0affffd8 	beq	19bf40 <Alarm__14TRealTimeClockSFv+0x50>
        19bfdc:	e3a00000 	mov	r0, #0	; 0x0
        19bfe0:	e5840010 	str	r0, [r4, #16]	; fField16
        19bfe4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19bfe8:	e3300000 	teq	r0, #0	; 0x0
        19bfec:	1affffca 	bne	19bf1c <Alarm__14TRealTimeClockSFv+0x2c>
        19bff0:	e3a00000 	mov	r0, #0	; 0x0
        19bff4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: SleepingCheckFire__14TRealTimeClockSFv
 * Address: 0019bff8
 */
void TRealTimeClock::SleepingCheckFire() {
    /*
        19bff8:	ea65de67 	b	1b1399c <$CheckAlarmsStaySleeping__14TRealTimeClockSFv>
    */
}

/**
 * Symbol: CheckAlarmsStaySleeping__14TRealTimeClockSFv
 * Address: 0019bffc
 */
void TRealTimeClock::CheckAlarmsStaySleeping() {
    /*
        19bffc:	e1a0c00d 	mov	ip, sp
        19c000:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19c004:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c008:	eb68e284 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c00c:	e1a08000 	mov	r8, r0
        19c010:	e59fa084 	ldr	sl, [pc, #84]	; 19c09c <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xa0>
        19c014:	e59f9084 	ldr	r9, [pc, #84]	; 19c0a0 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xa4>
        19c018:	e3a07000 	mov	r7, #0	; 0x0
        19c01c:	e3a05000 	mov	r5, #0	; 0x0
        19c020:	e3a06000 	mov	r6, #0	; 0x0
        19c024:	e0860106 	add	r0, r6, r6, lsl #2
        19c028:	e0800186 	add	r0, r0, r6, lsl #3
        19c02c:	e0890100 	add	r0, r9, r0, lsl #2
        19c030:	e1a04000 	mov	r4, r0
        19c034:	e5901020 	ldr	r1, [r0, #32]	; fField32
        19c038:	e3310000 	teq	r1, #0	; 0x0
        19c03c:	0a00000b 	beq	19c070 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0x74>
        19c040:	e5900004 	ldr	r0, [r0, #4]	; fField4
        19c044:	e1500008 	cmp	r0, r8
        19c048:	8a000008 	bhi	19c070 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0x74>
        19c04c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        19c050:	e31000ff 	tst	r0, #255	; 0xff
        19c054:	13a00000 	movne	r0, #0	; 0x0
        19c058:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        19c05c:	e1a00004 	mov	r0, r4
        19c060:	e1a01008 	mov	r1, r8
        19c064:	eb68da28 	bl	1bd290c <RealTimeAlarm::$Fire(unsigned long)>
        19c068:	e3a00000 	mov	r0, #0	; 0x0
        19c06c:	e5ca0004 	strb	r0, [sl, #4]	; fField4
        19c070:	e5940020 	ldr	r0, [r4, #32]	; fField32
        19c074:	e31000ff 	tst	r0, #255	; 0xff
        19c078:	0a00000b 	beq	19c0ac <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xb0>
        19c07c:	e3370000 	teq	r7, #0	; 0x0
        19c080:	0a000007 	beq	19c0a4 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xa8>
        19c084:	e3300000 	teq	r0, #0	; 0x0
        19c088:	0a000007 	beq	19c0ac <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xb0>
        19c08c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        19c090:	e1500005 	cmp	r0, r5
        19c094:	91a05000 	movls	r5, r0
        19c098:	ea000003 	b	19c0ac <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xb0>
        19c09c:	0c101824 	ldceq	8, cr1, [r0], -#144
        19c0a0:	0c106a44 	ldceq	10, cr6, [r0], -#272
        19c0a4:	e3a07001 	mov	r7, #1	; 0x1
        19c0a8:	e5b45004 	ldr	r5, [r4, #4]!	; fField4
        19c0ac:	e2866001 	add	r6, r6, #1	; 0x1
        19c0b0:	e3560010 	cmp	r6, #16	; 0x10
        19c0b4:	baffffda 	blt	19c024 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0x28>
        19c0b8:	eb656670 	bl	1af5a80 <$ClearRealTimeClockAlarm(void)>
        19c0bc:	e3370000 	teq	r7, #0	; 0x0
        19c0c0:	0a000003 	beq	19c0d4 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0xd8>
        19c0c4:	e1a00005 	mov	r0, r5
        19c0c8:	eb68f2cf 	bl	1bd8c0c <$PrimRawSetAlarm__14TRealTimeClockSFUl>
        19c0cc:	e3300000 	teq	r0, #0	; 0x0
        19c0d0:	0affffd0 	beq	19c018 <CheckAlarmsStaySleeping__14TRealTimeClockSFv+0x1c>
        19c0d4:	e3a00001 	mov	r0, #1	; 0x1
        19c0d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: SetAlarm__14TRealTimeClockSFUl5TTimeN21PvlT1
 * Address: 0019c0dc
 */
void TRealTimeClock::SetAlarm() {
    /*
        19c0dc:	e1a0c00d 	mov	ip, sp
        19c0e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        19c0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c0e8:	e1a05002 	mov	r5, r2
        19c0ec:	e1a04003 	mov	r4, r3
        19c0f0:	e59b700c 	ldr	r7, [fp, #12]	; fField12
        19c0f4:	e59b8008 	ldr	r8, [fp, #8]
        19c0f8:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        19c0fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        19c100:	e8915000 	ldmia	r1, {ip, lr}
        19c104:	e88d5000 	stmia	sp, {ip, lr}
        19c108:	eb68d9fe 	bl	1bd2908 <$FindSlot__14TRealTimeClockSFUl>
        19c10c:	e1a06000 	mov	r6, r0
        19c110:	e3700001 	cmn	r0, #1	; 0x1
        19c114:	03e00000 	mvneq	r0, #0	; 0x0
        19c118:	0a000016 	beq	19c178 <SetAlarm__14TRealTimeClockSFUl5TTimeN21PvlT1+0x9c>
        19c11c:	e1a0000d 	mov	r0, sp
        19c120:	e3a019e1 	mov	r1, #3686400	; 0x384000
        19c124:	eb68d1c2 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        19c128:	e1a0e000 	mov	lr, r0
        19c12c:	e1a03007 	mov	r3, r7
        19c130:	e1a02008 	mov	r2, r8
        19c134:	e1a01009 	mov	r1, r9
        19c138:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        19c13c:	e0860106 	add	r0, r6, r6, lsl #2
        19c140:	e0800186 	add	r0, r0, r6, lsl #3
        19c144:	e59f1030 	ldr	r1, [pc, #30]	; 19c17c <SetAlarm__14TRealTimeClockSFUl5TTimeN21PvlT1+0xa0>
        19c148:	e0810100 	add	r0, r1, r0, lsl #2
        19c14c:	e1a06000 	mov	r6, r0
        19c150:	e1a03004 	mov	r3, r4
        19c154:	e1a02005 	mov	r2, r5
        19c158:	e1a0100e 	mov	r1, lr
        19c15c:	eb68e648 	bl	1bd5a84 <RealTimeAlarm::$Init(unsigned long, unsigned long, unsigned long, void *, long, unsigned long)>
        19c160:	e28dd00c 	add	sp, sp, #12	; 0xc
        19c164:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        19c168:	eb68f2a8 	bl	1bd8c10 <$PrimSetAlarm__14TRealTimeClockSFUl>
        19c16c:	e3300000 	teq	r0, #0	; 0x0
        19c170:	0b68d1a3 	bleq	1bd0804 <$Cleanup__14TRealTimeClockSFv>
        19c174:	e3a00000 	mov	r0, #0	; 0x0
        19c178:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        19c17c:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: SetAlarm__14TRealTimeClockSFUlT1PFPv_lPvN21
 * Address: 0019c180
 */
void TRealTimeClock::SetAlarm() {
    /*
        19c180:	e1a0c00d 	mov	ip, sp
        19c184:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19c188:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c18c:	e1a06001 	mov	r6, r1
        19c190:	e1a05002 	mov	r5, r2
        19c194:	e1a04003 	mov	r4, r3
        19c198:	e59b7008 	ldr	r7, [fp, #8]
        19c19c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        19c1a0:	eb68d9d8 	bl	1bd2908 <$FindSlot__14TRealTimeClockSFUl>
        19c1a4:	e3700001 	cmn	r0, #1	; 0x1
        19c1a8:	03e00000 	mvneq	r0, #0	; 0x0
        19c1ac:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        19c1b0:	e59f3048 	ldr	r3, [pc, #48]	; 19c200 <SetAlarm__14TRealTimeClockSFUlT1PFPv_lPvN21+0x80>
        19c1b4:	e1a02007 	mov	r2, r7
        19c1b8:	e1a01008 	mov	r1, r8
        19c1bc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        19c1c0:	e080c100 	add	ip, r0, r0, lsl #2
        19c1c4:	e08c0180 	add	r0, ip, r0, lsl #3
        19c1c8:	e59f1034 	ldr	r1, [pc, #34]	; 19c204 <SetAlarm__14TRealTimeClockSFUlT1PFPv_lPvN21+0x84>
        19c1cc:	e0810100 	add	r0, r1, r0, lsl #2
        19c1d0:	e1a07000 	mov	r7, r0
        19c1d4:	e1a03004 	mov	r3, r4
        19c1d8:	e1a02005 	mov	r2, r5
        19c1dc:	e1a01006 	mov	r1, r6
        19c1e0:	eb65ddf4 	bl	1b139b8 <RealTimeAlarm::$Init(unsigned long, long (*)(void *), void *, unsigned long, unsigned long, unsigned long *)>
        19c1e4:	e28dd00c 	add	sp, sp, #12	; 0xc
        19c1e8:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        19c1ec:	eb68f287 	bl	1bd8c10 <$PrimSetAlarm__14TRealTimeClockSFUl>
        19c1f0:	e3300000 	teq	r0, #0	; 0x0
        19c1f4:	0b68d182 	bleq	1bd0804 <$Cleanup__14TRealTimeClockSFv>
        19c1f8:	e3a00000 	mov	r0, #0	; 0x0
        19c1fc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        19c200:	0c101830 	ldceq	8, cr1, [r0], -#192
        19c204:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: ClearAlarm__14TRealTimeClockSFUl
 * Address: 0019c208
 */
void TRealTimeClock::ClearAlarm() {
    /*
        19c208:	e1a0c00d 	mov	ip, sp
        19c20c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19c210:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c214:	eb68d9bb 	bl	1bd2908 <$FindSlot__14TRealTimeClockSFUl>
        19c218:	e3700001 	cmn	r0, #1	; 0x1
        19c21c:	03e00000 	mvneq	r0, #0	; 0x0
        19c220:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        19c224:	e080c100 	add	ip, r0, r0, lsl #2
        19c228:	e08c0180 	add	r0, ip, r0, lsl #3
        19c22c:	e59f1014 	ldr	r1, [pc, #14]	; 19c248 <ClearAlarm__14TRealTimeClockSFUl+0x40>
        19c230:	e0810100 	add	r0, r1, r0, lsl #2
        19c234:	e3a04000 	mov	r4, #0	; 0x0
        19c238:	e5a04020 	str	r4, [r0, #32]!	; fField32
        19c23c:	eb68d170 	bl	1bd0804 <$Cleanup__14TRealTimeClockSFv>
        19c240:	e1a00004 	mov	r0, r4
        19c244:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19c248:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: AlarmStatus__14TRealTimeClockSFUlPUlP5TTimePl
 * Address: 0019c24c
 */
void TRealTimeClock::AlarmStatus() {
    /*
        19c24c:	e1a0c00d 	mov	ip, sp
        19c250:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        19c254:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c258:	e1a06001 	mov	r6, r1
        19c25c:	e1a05002 	mov	r5, r2
        19c260:	e1a04003 	mov	r4, r3
        19c264:	eb68d9a7 	bl	1bd2908 <$FindSlot__14TRealTimeClockSFUl>
        19c268:	e3700001 	cmn	r0, #1	; 0x1
        19c26c:	03e00000 	mvneq	r0, #0	; 0x0
        19c270:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        19c274:	e080c100 	add	ip, r0, r0, lsl #2
        19c278:	e08c0180 	add	r0, ip, r0, lsl #3
        19c27c:	e59f103c 	ldr	r1, [pc, #3c]	; 19c2c0 <AlarmStatus__14TRealTimeClockSFUlPUlP5TTimePl+0x74>
        19c280:	e0817100 	add	r7, r1, r0, lsl #2
        19c284:	e5970020 	ldr	r0, [r7, #32]	; fField32
        19c288:	e5860000 	str	r0, [r6]
        19c28c:	e3300000 	teq	r0, #0	; 0x0
        19c290:	0a000006 	beq	19c2b0 <AlarmStatus__14TRealTimeClockSFUlPUlP5TTimePl+0x64>
        19c294:	e24dd008 	sub	sp, sp, #8	; 0x8
        19c298:	e1a0000d 	mov	r0, sp
        19c29c:	e3a029e1 	mov	r2, #3686400	; 0x384000
        19c2a0:	e5971004 	ldr	r1, [r7, #4]	; fField4
        19c2a4:	eb68c507 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        19c2a8:	e8bd5000 	ldmia	sp!, {ip, lr}
        19c2ac:	e8855000 	stmia	r5, {ip, lr}
        19c2b0:	e5b7001c 	ldr	r0, [r7, #28]!
        19c2b4:	e5840000 	str	r0, [r4]
        19c2b8:	e3a00000 	mov	r0, #0	; 0x0
        19c2bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        19c2c0:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: PrimRawSetAlarm__14TRealTimeClockSFUl
 * Address: 0019c2c4
 */
void TRealTimeClock::PrimRawSetAlarm() {
    /*
        19c2c4:	e1a0c00d 	mov	ip, sp
        19c2c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19c2cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c2d0:	e1a04000 	mov	r4, r0
        19c2d4:	e3a06001 	mov	r6, #1	; 0x1
        19c2d8:	e59f5040 	ldr	r5, [pc, #40]	; 19c320 <PrimRawSetAlarm__14TRealTimeClockSFUl+0x5c>
        19c2dc:	e5d50004 	ldrb	r0, [r5, #4]	; fField4
        19c2e0:	e3500000 	cmp	r0, #0	; 0x0
        19c2e4:	0a000003 	beq	19c2f8 <PrimRawSetAlarm__14TRealTimeClockSFUl+0x34>
        19c2e8:	0a00000a 	beq	19c318 <PrimRawSetAlarm__14TRealTimeClockSFUl+0x54>
        19c2ec:	e5950008 	ldr	r0, [r5, #8]
        19c2f0:	e1500004 	cmp	r0, r4
        19c2f4:	3a000007 	bcc	19c318 <PrimRawSetAlarm__14TRealTimeClockSFUl+0x54>
        19c2f8:	e1a00004 	mov	r0, r4
        19c2fc:	eb68feb8 	bl	1bdbde4 <$SetRealTimeClockAlarm(unsigned long)>
        19c300:	eb68e1c6 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c304:	e1500004 	cmp	r0, r4
        19c308:	33a00001 	movcc	r0, #1	; 0x1
        19c30c:	35854008 	strcc	r4, [r5, #8]
        19c310:	35c50004 	strccb	r0, [r5, #4]	; fField4
        19c314:	23a06000 	movcs	r6, #0	; 0x0
        19c318:	e1a00006 	mov	r0, r6
        19c31c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19c320:	0c101824 	ldceq	8, cr1, [r0], -#144
    */
}

/**
 * Symbol: PrimSetAlarm__14TRealTimeClockSFUl
 * Address: 0019c3a8
 */
void TRealTimeClock::PrimSetAlarm() {
    /*
        19c3a8:	e1a0c00d 	mov	ip, sp
        19c3ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19c3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c3b4:	e1a04000 	mov	r4, r0
        19c3b8:	eb68e198 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c3bc:	e3a05000 	mov	r5, #0	; 0x0
        19c3c0:	e1500004 	cmp	r0, r4
        19c3c4:	3a000001 	bcc	19c3d0 <PrimSetAlarm__14TRealTimeClockSFUl+0x28>
        19c3c8:	e1a00005 	mov	r0, r5
        19c3cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19c3d0:	e59f0028 	ldr	r0, [pc, #28]	; 19c400 <PrimSetAlarm__14TRealTimeClockSFUl+0x58>
        19c3d4:	e5d00004 	ldrb	r0, [r0, #4]	; fField4
        19c3d8:	e3300000 	teq	r0, #0	; 0x0
        19c3dc:	e1a00004 	mov	r0, r4
        19c3e0:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        19c3e4:	0a68f208 	beq	1bd8c0c <$PrimRawSetAlarm__14TRealTimeClockSFUl>
        19c3e8:	eb68f207 	bl	1bd8c0c <$PrimRawSetAlarm__14TRealTimeClockSFUl>
        19c3ec:	e3300000 	teq	r0, #0	; 0x0
        19c3f0:	13a00001 	movne	r0, #1	; 0x1
        19c3f4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        19c3f8:	eb68d101 	bl	1bd0804 <$Cleanup__14TRealTimeClockSFv>
        19c3fc:	eafffff1 	b	19c3c8 <PrimSetAlarm__14TRealTimeClockSFUl+0x20>
        19c400:	0c101824 	ldceq	8, cr1, [r0], -#144
    */
}

/**
 * Symbol: SetRealTimeClock__14TRealTimeClockSFUl
 * Address: 0019c404
 */
void TRealTimeClock::SetRealTimeClock() {
    /*
        19c404:	e1a0c00d 	mov	ip, sp
        19c408:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19c40c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c410:	e1a04000 	mov	r4, r0
        19c414:	e59f50a4 	ldr	r5, [pc, #a4]	; 19c4c0 <SetRealTimeClock__14TRealTimeClockSFUl+0xbc>
        19c418:	e1a00005 	mov	r0, r5
        19c41c:	e3a01001 	mov	r1, #1	; 0x1
        19c420:	eb084777 	bl	3ae204 <Swap>
        19c424:	e3300000 	teq	r0, #0	; 0x0
        19c428:	1afffffa 	bne	19c418 <SetRealTimeClock__14TRealTimeClockSFUl+0x14>
        19c42c:	eb656593 	bl	1af5a80 <$ClearRealTimeClockAlarm(void)>
        19c430:	e3a06000 	mov	r6, #0	; 0x0
        19c434:	e59f5088 	ldr	r5, [pc, #88]	; 19c4c4 <SetRealTimeClock__14TRealTimeClockSFUl+0xc0>
        19c438:	e5c56004 	strb	r6, [r5, #4]	; fField4
        19c43c:	eb68e177 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c440:	e1a07000 	mov	r7, r0
        19c444:	eb68e175 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c448:	e3a08a81 	mov	r8, #528384	; 0x81000
        19c44c:	e28886f1 	add	r8, r8, #252706816	; 0xf100000
        19c450:	e1300004 	teq	r0, r4
        19c454:	0a000003 	beq	19c468 <SetRealTimeClock__14TRealTimeClockSFUl+0x64>
        19c458:	e5884000 	str	r4, [r8]
        19c45c:	eb68e16f 	bl	1bd4a20 <$GetRealTimeClock(void)>
        19c460:	e1300004 	teq	r0, r4
        19c464:	1afffffb 	bne	19c458 <SetRealTimeClock__14TRealTimeClockSFUl+0x54>
        19c468:	e3a00000 	mov	r0, #0	; 0x0
        19c46c:	e59f1054 	ldr	r1, [pc, #54]	; 19c4c8 <SetRealTimeClock__14TRealTimeClockSFUl+0xc4>
        19c470:	e0802100 	add	r2, r0, r0, lsl #2
        19c474:	e0822180 	add	r2, r2, r0, lsl #3
        19c478:	e0812102 	add	r2, r1, r2, lsl #2
        19c47c:	e1a03002 	mov	r3, r2
        19c480:	e592c020 	ldr	ip, [r2, #32]	; fField32
        19c484:	e33c0000 	teq	ip, #0	; 0x0
        19c488:	15933030 	ldrne	r3, [r3, #48]
        19c48c:	13330000 	teqne	r3, #0	; 0x0
        19c490:	0a000004 	beq	19c4a8 <SetRealTimeClock__14TRealTimeClockSFUl+0xa4>
        19c494:	e1a03002 	mov	r3, r2
        19c498:	e5922004 	ldr	r2, [r2, #4]	; fField4
        19c49c:	e0422007 	sub	r2, r2, r7
        19c4a0:	e0822004 	add	r2, r2, r4
        19c4a4:	e5a32004 	str	r2, [r3, #4]!	; fField4
        19c4a8:	e2800001 	add	r0, r0, #1	; 0x1
        19c4ac:	e3500010 	cmp	r0, #16	; 0x10
        19c4b0:	baffffee 	blt	19c470 <SetRealTimeClock__14TRealTimeClockSFUl+0x6c>
        19c4b4:	e5a5600c 	str	r6, [r5, #12]!	; fField12
        19c4b8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        19c4bc:	ea68d0d0 	b	1bd0804 <$Cleanup__14TRealTimeClockSFv>
        19c4c0:	0c101830 	ldceq	8, cr1, [r0], -#192
        19c4c4:	0c101824 	ldceq	8, cr1, [r0], -#144
        19c4c8:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: Init__14TRealTimeClockSFv
 * Address: 0019c7c0
 */
void TRealTimeClock::Init() {
    /*
        19c7c0:	e3a00000 	mov	r0, #0	; 0x0
        19c7c4:	e3a02000 	mov	r2, #0	; 0x0
        19c7c8:	e59f1048 	ldr	r1, [pc, #48]	; 19c818 <Init__14TRealTimeClockSFv+0x58>
        19c7cc:	e0803100 	add	r3, r0, r0, lsl #2
        19c7d0:	e0833180 	add	r3, r3, r0, lsl #3
        19c7d4:	e0813103 	add	r3, r1, r3, lsl #2
        19c7d8:	e5832000 	str	r2, [r3]
        19c7dc:	e2800001 	add	r0, r0, #1	; 0x1
        19c7e0:	e3500010 	cmp	r0, #16	; 0x10
        19c7e4:	e5a32020 	str	r2, [r3, #32]!	; fField32
        19c7e8:	bafffff7 	blt	19c7cc <Init__14TRealTimeClockSFv+0xc>
        19c7ec:	e59f0028 	ldr	r0, [pc, #28]	; 19c81c <Init__14TRealTimeClockSFv+0x5c>
        19c7f0:	e5c02004 	strb	r2, [r0, #4]	; fField4
        19c7f4:	e580200c 	str	r2, [r0, #12]	; fField12
        19c7f8:	e5802010 	str	r2, [r0, #16]	; fField16
        19c7fc:	e5802014 	str	r2, [r0, #20]	; fField20
        19c800:	e3a01002 	mov	r1, #2	; 0x2
        19c804:	e5a02018 	str	r2, [r0, #24]!	; fField24
        19c808:	e5801004 	str	r1, [r0, #4]	; fField4
        19c80c:	e59f100c 	ldr	r1, [pc, #c]	; 19c820 <Init__14TRealTimeClockSFv+0x60>
        19c810:	e3a00000 	mov	r0, #0	; 0x0
        19c814:	ea68f118 	b	1bd8c7c <$RegisterRealTimeClockHandler(void *, long (*)(void *))>
        19c818:	0c106a44 	ldceq	10, cr6, [r0], -#272
        19c81c:	0c101824 	ldceq	8, cr1, [r0], -#144
        19c820:	01bd5af4 	ldreqsh	r5, [sp, r4]!
    */
}

/**
 * Symbol: NewName__14TRealTimeClockSFPUl
 * Address: 0019ca90
 */
void TRealTimeClock::NewName() {
    /*
        19ca90:	e1a0c00d 	mov	ip, sp
        19ca94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19ca98:	e24cb004 	sub	fp, ip, #4	; 0x4
        19ca9c:	e1a04000 	mov	r4, r0
        19caa0:	e59f5078 	ldr	r5, [pc, #78]	; 19cb20 <NewName__14TRealTimeClockSFPUl+0x90>
        19caa4:	e1a00005 	mov	r0, r5
        19caa8:	e3a01001 	mov	r1, #1	; 0x1
        19caac:	eb0845d4 	bl	3ae204 <Swap>
        19cab0:	e3300000 	teq	r0, #0	; 0x0
        19cab4:	0afffffa 	beq	19caa4 <NewName__14TRealTimeClockSFPUl+0x14>
        19cab8:	e59f5064 	ldr	r5, [pc, #64]	; 19cb24 <NewName__14TRealTimeClockSFPUl+0x94>
        19cabc:	e595001c 	ldr	r0, [r5, #28]
        19cac0:	e5840000 	str	r0, [r4]
        19cac4:	e595001c 	ldr	r0, [r5, #28]
        19cac8:	e2800001 	add	r0, r0, #1	; 0x1
        19cacc:	e585001c 	str	r0, [r5, #28]
        19cad0:	e3a00000 	mov	r0, #0	; 0x0
        19cad4:	e59f204c 	ldr	r2, [pc, #4c]	; 19cb28 <NewName__14TRealTimeClockSFPUl+0x98>	; fField4
        19cad8:	e3a06000 	mov	r6, #0	; 0x0
        19cadc:	e5941000 	ldr	r1, [r4]
        19cae0:	e0803100 	add	r3, r0, r0, lsl #2
        19cae4:	e0833180 	add	r3, r3, r0, lsl #3
        19cae8:	e082c103 	add	ip, r2, r3, lsl #2
        19caec:	e1a03001 	mov	r3, r1
        19caf0:	e59cc000 	ldr	ip, [ip]
        19caf4:	e2800001 	add	r0, r0, #1	; 0x1
        19caf8:	e3500010 	cmp	r0, #16	; 0x10
        19cafc:	bafffff7 	blt	19cae0 <NewName__14TRealTimeClockSFPUl+0x50>
        19cb00:	e1a00001 	mov	r0, r1
        19cb04:	eb65dba5 	bl	1b139a0 <$CheckIn__14TRealTimeClockSFUl>
        19cb08:	e3300000 	teq	r0, #0	; 0x0
        19cb0c:	15a56018 	strne	r6, [r5, #24]!	; fField24
        19cb10:	15846000 	strne	r6, [r4]
        19cb14:	01a00006 	moveq	r0, r6
        19cb18:	05a56018 	streq	r6, [r5, #24]!	; fField24
        19cb1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19cb20:	0c10183c 	ldceq	8, cr1, [r0], -#240
        19cb24:	0c101824 	ldceq	8, cr1, [r0], -#144
        19cb28:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: CheckIn__14TRealTimeClockSFUl
 * Address: 0019cb2c
 */
void TRealTimeClock::CheckIn() {
    /*
        19cb2c:	e92d4000 	stmdb	sp!, {lr}
        19cb30:	e3a01000 	mov	r1, #0	; 0x0
        19cb34:	e59f2030 	ldr	r2, [pc, #30]	; 19cb6c <CheckIn__14TRealTimeClockSFUl+0x40>
        19cb38:	e3a03000 	mov	r3, #0	; 0x0
        19cb3c:	e081e101 	add	lr, r1, r1, lsl #2
        19cb40:	e08ee181 	add	lr, lr, r1, lsl #3
        19cb44:	e082c10e 	add	ip, r2, lr, lsl #2
        19cb48:	e59cc000 	ldr	ip, [ip]
        19cb4c:	e33c0000 	teq	ip, #0	; 0x0
        19cb50:	1a000006 	bne	19cb70 <CheckIn__14TRealTimeClockSFUl+0x44>
        19cb54:	e081c101 	add	ip, r1, r1, lsl #2
        19cb58:	e08c1181 	add	r1, ip, r1, lsl #3
        19cb5c:	e0821101 	add	r1, r2, r1, lsl #2
        19cb60:	e5810000 	str	r0, [r1]
        19cb64:	e1a00003 	mov	r0, r3
        19cb68:	e8bd8000 	ldmia	sp!, {pc}
        19cb6c:	0c106a44 	ldceq	10, cr6, [r0], -#272
        19cb70:	e2811001 	add	r1, r1, #1	; 0x1
        19cb74:	e3510010 	cmp	r1, #16	; 0x10
        19cb78:	baffffef 	blt	19cb3c <CheckIn__14TRealTimeClockSFUl+0x10>
        19cb7c:	e3e00001 	mvn	r0, #1	; 0x1
        19cb80:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: CheckOut__14TRealTimeClockSFUl
 * Address: 0019cb84
 */
void TRealTimeClock::CheckOut() {
    /*
        19cb84:	e1a0c00d 	mov	ip, sp
        19cb88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19cb8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19cb90:	eb68d75c 	bl	1bd2908 <$FindSlot__14TRealTimeClockSFUl>
        19cb94:	e1b01000 	movs	r1, r0
        19cb98:	e3a00000 	mov	r0, #0	; 0x0
        19cb9c:	491ba800 	ldmmidb	fp, {fp, sp, pc}
        19cba0:	e081c101 	add	ip, r1, r1, lsl #2
        19cba4:	e08c1181 	add	r1, ip, r1, lsl #3
        19cba8:	e59f200c 	ldr	r2, [pc, #c]	; 19cbbc <CheckOut__14TRealTimeClockSFUl+0x38>
        19cbac:	e0821101 	add	r1, r2, r1, lsl #2
        19cbb0:	e5810000 	str	r0, [r1]
        19cbb4:	e5a10020 	str	r0, [r1, #32]!	; fField32
        19cbb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        19cbbc:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

/**
 * Symbol: Register__14TRealTimeClockSFUl
 * Address: 0019cbc0
 */
void TRealTimeClock::Register() {
    /*
        19cbc0:	ea68cb0a 	b	1bcf7f0 <$CheckIn__15TURealTimeAlarmSFUl>
    */
}

/**
 * Symbol: DeRegister__14TRealTimeClockSFUl
 * Address: 0019cbc4
 */
void TRealTimeClock::DeRegister() {
    /*
        19cbc4:	ea68cb0a 	b	1bcf7f4 <$CheckOut__15TURealTimeAlarmSFUl>
    */
}

/**
 * Symbol: FindSlot__14TRealTimeClockSFUl
 * Address: 0019cbc8
 */
void TRealTimeClock::FindSlot() {
    /*
        19cbc8:	e3a01000 	mov	r1, #0	; 0x0
        19cbcc:	e59f202c 	ldr	r2, [pc, #2c]	; 19cc00 <FindSlot__14TRealTimeClockSFUl+0x38>
        19cbd0:	e0813101 	add	r3, r1, r1, lsl #2
        19cbd4:	e0833181 	add	r3, r3, r1, lsl #3
        19cbd8:	e0823103 	add	r3, r2, r3, lsl #2
        19cbdc:	e5933000 	ldr	r3, [r3]
        19cbe0:	e1330000 	teq	r3, r0
        19cbe4:	01a00001 	moveq	r0, r1
        19cbe8:	01a0f00e 	moveq	pc, lr
        19cbec:	e2811001 	add	r1, r1, #1	; 0x1
        19cbf0:	e3510010 	cmp	r1, #16	; 0x10
        19cbf4:	bafffff5 	blt	19cbd0 <FindSlot__14TRealTimeClockSFUl+0x8>
        19cbf8:	e3e00000 	mvn	r0, #0	; 0x0
        19cbfc:	e1a0f00e 	mov	pc, lr
        19cc00:	0c106a44 	ldceq	10, cr6, [r0], -#272
    */
}

