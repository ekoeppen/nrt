#include "DDKIncludes/OS600/LongTime.h"

/**
 * Symbol: SetAlarm__15TURealTimeAlarmSFUl5TTimeN21PvlT1
 * Address: 0019c6b8
 */
static long	TURealTimeAlarm::SetAlarm(ULong name, TTime time, InterruptHandler DirectHandler, void* obj, ULong WakeUp=true, ULong IsRelative=false) {
    /*
        19c6b8:	e1a0c00d 	mov	ip, sp
        19c6bc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        19c6c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c6c4:	e1a05002 	mov	r5, r2
        19c6c8:	e1a04003 	mov	r4, r3
        19c6cc:	e59b700c 	ldr	r7, [fp, #12]
        19c6d0:	e59b8008 	ldr	r8, [fp, #8]
        19c6d4:	e59b9004 	ldr	r9, [fp, #4]
        19c6d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        19c6dc:	e8915000 	ldmia	r1, {ip, lr}
        19c6e0:	e88d5000 	stmia	sp, {ip, lr}
        19c6e4:	e59f1044 	ldr	r1, [pc, #44]	; 19c730 <SetAlarm__15TURealTimeAlarmSFUl5TTimeN21PvlT1+0x78>
        19c6e8:	e5911000 	ldr	r1, [r1]
        19c6ec:	e2416054 	sub	r6, r1, #84	; 0x54
        19c6f0:	e3a01000 	mov	r1, #0	; 0x0
        19c6f4:	e5860004 	str	r0, [r6, #4]
        19c6f8:	e5861000 	str	r1, [r6]
        19c6fc:	e2860008 	add	r0, r6, #8	; 0x8
        19c700:	e1a0100d 	mov	r1, sp
        19c704:	e3a02008 	mov	r2, #8	; 0x8
        19c708:	eb6860d0 	bl	1bb4a50 <$memcpy>
        19c70c:	e5a65010 	str	r5, [r6, #16]!
        19c710:	e9a60290 	stmib	r6!, {r4, r7, r9}
        19c714:	e5868004 	str	r8, [r6, #4]
        19c718:	eb07df3c 	bl	394410 <IsSuperMode>
        19c71c:	e3300000 	teq	r0, #0	; 0x0
        19c720:	1a000003 	bne	19c734 <SetAlarm__15TURealTimeAlarmSFUl5TTimeN21PvlT1+0x7c>
        19c724:	e3a0002b 	mov	r0, #43	; 0x2b
        19c728:	eb084691 	bl	3ae174 <GenericSWI>
        19c72c:	ea000001 	b	19c738 <SetAlarm__15TURealTimeAlarmSFUl5TTimeN21PvlT1+0x80>
        19c730:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19c734:	eb65968a 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19c738:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: SetAlarm__15TURealTimeAlarmSFUl5TTimePFPv_lPvN21
 * Address: 0019c73c
 */
static long	TURealTimeAlarm::SetAlarm(ULong name, TTime time, InterruptHandler DirectHandler, void* obj, ULong WakeUp=true, ULong IsRelative=false) {
    /*
        19c73c:	e1a0c00d 	mov	ip, sp
        19c740:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19c744:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c748:	e1a05002 	mov	r5, r2
        19c74c:	e1a04003 	mov	r4, r3
        19c750:	e59b7008 	ldr	r7, [fp, #8]
        19c754:	e59b8004 	ldr	r8, [fp, #4]
        19c758:	e24dd008 	sub	sp, sp, #8	; 0x8
        19c75c:	e8915000 	ldmia	r1, {ip, lr}
        19c760:	e88d5000 	stmia	sp, {ip, lr}
        19c764:	e59f1048 	ldr	r1, [pc, #48]	; 19c7b4 <SetAlarm__15TURealTimeAlarmSFUl5TTimePFPv_lPvN21+0x78>
        19c768:	e5911000 	ldr	r1, [r1]
        19c76c:	e2416054 	sub	r6, r1, #84	; 0x54
        19c770:	e3a01001 	mov	r1, #1	; 0x1
        19c774:	e5860004 	str	r0, [r6, #4]
        19c778:	e5861000 	str	r1, [r6]
        19c77c:	e2860008 	add	r0, r6, #8	; 0x8
        19c780:	e1a0100d 	mov	r1, sp
        19c784:	e3a02008 	mov	r2, #8	; 0x8
        19c788:	eb6860b0 	bl	1bb4a50 <$memcpy>
        19c78c:	e5a6401c 	str	r4, [r6, #28]!
        19c790:	e5a68008 	str	r8, [r6, #8]!
        19c794:	e2866008 	add	r6, r6, #8	; 0x8
        19c798:	e88600a0 	stmia	r6, {r5, r7}
        19c79c:	eb07df1b 	bl	394410 <IsSuperMode>
        19c7a0:	e3300000 	teq	r0, #0	; 0x0
        19c7a4:	1a000003 	bne	19c7b8 <SetAlarm__15TURealTimeAlarmSFUl5TTimePFPv_lPvN21+0x7c>
        19c7a8:	e3a0002b 	mov	r0, #43	; 0x2b
        19c7ac:	eb084670 	bl	3ae174 <GenericSWI>
        19c7b0:	ea000001 	b	19c7bc <SetAlarm__15TURealTimeAlarmSFUl5TTimePFPv_lPvN21+0x80>
        19c7b4:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19c7b8:	eb659669 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19c7bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ClearAlarm__15TURealTimeAlarmSFUl
 * Address: 0019c824
 */
static long	TURealTimeAlarm::ClearAlarm(ULong name) {
    /*
        19c824:	e1a0c00d 	mov	ip, sp
        19c828:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19c82c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c830:	e59f1028 	ldr	r1, [pc, #28]	; 19c860 <ClearAlarm__15TURealTimeAlarmSFUl+0x3c>
        19c834:	e5911000 	ldr	r1, [r1]
        19c838:	e3a02002 	mov	r2, #2	; 0x2
        19c83c:	e5210050 	str	r0, [r1, -#80]!
        19c840:	e5212004 	str	r2, [r1, -#4]!
        19c844:	eb07def1 	bl	394410 <IsSuperMode>
        19c848:	e3300000 	teq	r0, #0	; 0x0
        19c84c:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        19c850:	1a659643 	bne	1b02164 <$RealTimeClockDispatch(void)>
        19c854:	03a0002b 	moveq	r0, #43	; 0x2b
        19c858:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        19c85c:	0a084644 	beq	3ae174 <GenericSWI>
        19c860:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: AlarmStatus__15TURealTimeAlarmSFUlPUcP5TTimePl
 * Address: 0019c864
 */
static long	TURealTimeAlarm::AlarmStatus(ULong name, Boolean* active, TTime* alarmTime, long* error) {
    /*
        19c864:	e1a0c00d 	mov	ip, sp
        19c868:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19c86c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c870:	e1a04001 	mov	r4, r1
        19c874:	e1a06002 	mov	r6, r2
        19c878:	e1a05003 	mov	r5, r3
        19c87c:	e59f1028 	ldr	r1, [pc, #28]	; 19c8ac <AlarmStatus__15TURealTimeAlarmSFUlPUcP5TTimePl+0x48>
        19c880:	e5911000 	ldr	r1, [r1]
        19c884:	e2417054 	sub	r7, r1, #84	; 0x54
        19c888:	e3a01003 	mov	r1, #3	; 0x3
        19c88c:	e5870004 	str	r0, [r7, #4]
        19c890:	e5871000 	str	r1, [r7]
        19c894:	eb07dedd 	bl	394410 <IsSuperMode>
        19c898:	e3300000 	teq	r0, #0	; 0x0
        19c89c:	1a000003 	bne	19c8b0 <AlarmStatus__15TURealTimeAlarmSFUlPUcP5TTimePl+0x4c>
        19c8a0:	e3a0002b 	mov	r0, #43	; 0x2b
        19c8a4:	eb084632 	bl	3ae174 <GenericSWI>
        19c8a8:	ea000001 	b	19c8b4 <AlarmStatus__15TURealTimeAlarmSFUlPUcP5TTimePl+0x50>
        19c8ac:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19c8b0:	eb65962b 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19c8b4:	e1a08000 	mov	r8, r0
        19c8b8:	e5970008 	ldr	r0, [r7, #8]
        19c8bc:	e3300001 	teq	r0, #1	; 0x1
        19c8c0:	13a00000 	movne	r0, #0	; 0x0
        19c8c4:	03a00001 	moveq	r0, #1	; 0x1
        19c8c8:	e5c40000 	strb	r0, [r4]
        19c8cc:	e31000ff 	tst	r0, #255	; 0xff
        19c8d0:	0a000003 	beq	19c8e4 <AlarmStatus__15TURealTimeAlarmSFUlPUcP5TTimePl+0x80>
        19c8d4:	e287100c 	add	r1, r7, #12	; 0xc
        19c8d8:	e1a00006 	mov	r0, r6
        19c8dc:	e3a02008 	mov	r2, #8	; 0x8
        19c8e0:	eb68605a 	bl	1bb4a50 <$memcpy>
        19c8e4:	e5b70014 	ldr	r0, [r7, #20]!
        19c8e8:	e5850000 	str	r0, [r5]
        19c8ec:	e1a00008 	mov	r0, r8
        19c8f0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CheckIn__15TURealTimeAlarmSFUl
 * Address: 0019c8f4
 */
static long	TURealTimeAlarm::CheckIn(ULong name) {
    /*
        19c8f4:	e1a0c00d 	mov	ip, sp
        19c8f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19c8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c900:	e59f1028 	ldr	r1, [pc, #28]	; 19c930 <CheckIn__15TURealTimeAlarmSFUl+0x3c>
        19c904:	e5911000 	ldr	r1, [r1]
        19c908:	e3a02004 	mov	r2, #4	; 0x4
        19c90c:	e5210050 	str	r0, [r1, -#80]!
        19c910:	e5212004 	str	r2, [r1, -#4]!
        19c914:	eb07debd 	bl	394410 <IsSuperMode>
        19c918:	e3300000 	teq	r0, #0	; 0x0
        19c91c:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        19c920:	1a65960f 	bne	1b02164 <$RealTimeClockDispatch(void)>
        19c924:	03a0002b 	moveq	r0, #43	; 0x2b
        19c928:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        19c92c:	0a084610 	beq	3ae174 <GenericSWI>
        19c930:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: NewName__15TURealTimeAlarmSFPUl
 * Address: 0019c934
 */
static long	TURealTimeAlarm::NewName(ULong* name) {
    /*
        19c934:	e1a0c00d 	mov	ip, sp
        19c938:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19c93c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c940:	e1a04000 	mov	r4, r0
        19c944:	e59f0024 	ldr	r0, [pc, #24]	; 19c970 <NewName__15TURealTimeAlarmSFPUl+0x3c>
        19c948:	e5900000 	ldr	r0, [r0]
        19c94c:	e2405054 	sub	r5, r0, #84	; 0x54
        19c950:	e3a00005 	mov	r0, #5	; 0x5
        19c954:	e5850000 	str	r0, [r5]
        19c958:	eb07deac 	bl	394410 <IsSuperMode>
        19c95c:	e3300000 	teq	r0, #0	; 0x0
        19c960:	1a000003 	bne	19c974 <NewName__15TURealTimeAlarmSFPUl+0x40>
        19c964:	e3a0002b 	mov	r0, #43	; 0x2b
        19c968:	eb084601 	bl	3ae174 <GenericSWI>
        19c96c:	ea000001 	b	19c978 <NewName__15TURealTimeAlarmSFPUl+0x44>
        19c970:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19c974:	eb6595fa 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19c978:	e5b51004 	ldr	r1, [r5, #4]!
        19c97c:	e5841000 	str	r1, [r4]
        19c980:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CheckOut__15TURealTimeAlarmSFUl
 * Address: 0019c984
 */
static long	TURealTimeAlarm::CheckOut(ULong name) {
    /*
        19c984:	e1a0c00d 	mov	ip, sp
        19c988:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19c98c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c990:	e59f1028 	ldr	r1, [pc, #28]	; 19c9c0 <CheckOut__15TURealTimeAlarmSFUl+0x3c>
        19c994:	e5911000 	ldr	r1, [r1]
        19c998:	e3a02006 	mov	r2, #6	; 0x6
        19c99c:	e5210050 	str	r0, [r1, -#80]!
        19c9a0:	e5212004 	str	r2, [r1, -#4]!
        19c9a4:	eb07de99 	bl	394410 <IsSuperMode>
        19c9a8:	e3300000 	teq	r0, #0	; 0x0
        19c9ac:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        19c9b0:	1a6595eb 	bne	1b02164 <$RealTimeClockDispatch(void)>
        19c9b4:	03a0002b 	moveq	r0, #43	; 0x2b
        19c9b8:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        19c9bc:	0a0845ec 	beq	3ae174 <GenericSWI>
        19c9c0:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: Time__15TURealTimeAlarmSFv
 * Address: 0019c9c4
 */
static TTURealTimeAlarm::Time	Time() {
    /*
        19c9c4:	e1a0c00d 	mov	ip, sp
        19c9c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19c9cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        19c9d0:	e1a04000 	mov	r4, r0
        19c9d4:	e59f0024 	ldr	r0, [pc, #24]	; 19ca00 <Time__15TURealTimeAlarmSFv+0x3c>
        19c9d8:	e5900000 	ldr	r0, [r0]
        19c9dc:	e2405054 	sub	r5, r0, #84	; 0x54
        19c9e0:	e3a00007 	mov	r0, #7	; 0x7
        19c9e4:	e5850000 	str	r0, [r5]
        19c9e8:	eb07de88 	bl	394410 <IsSuperMode>
        19c9ec:	e3300000 	teq	r0, #0	; 0x0
        19c9f0:	1a000003 	bne	19ca04 <Time__15TURealTimeAlarmSFv+0x40>
        19c9f4:	e3a0002b 	mov	r0, #43	; 0x2b
        19c9f8:	eb0845dd 	bl	3ae174 <GenericSWI>
        19c9fc:	ea000001 	b	19ca08 <Time__15TURealTimeAlarmSFv+0x44>
        19ca00:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19ca04:	eb6595d6 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19ca08:	e1b00004 	movs	r0, r4
        19ca0c:	e2854008 	add	r4, r5, #8	; 0x8
        19ca10:	1a000003 	bne	19ca24 <Time__15TURealTimeAlarmSFv+0x60>
        19ca14:	e3a00008 	mov	r0, #8	; 0x8
        19ca18:	eb68c746 	bl	1bce738 <$__nw(unsigned int)>
        19ca1c:	e3300000 	teq	r0, #0	; 0x0
        19ca20:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        19ca24:	e8945000 	ldmia	r4, {ip, lr}
        19ca28:	e8805000 	stmia	r0, {ip, lr}
        19ca2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: SetTime__15TURealTimeAlarmSF5TTime
 * Address: 0019ca30
 */
static void		TURealTimeAlarm::SetTime(TTime time) {
    /*
        19ca30:	e1a0c00d 	mov	ip, sp
        19ca34:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19ca38:	e24cb004 	sub	fp, ip, #4	; 0x4
        19ca3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        19ca40:	e8905000 	ldmia	r0, {ip, lr}
        19ca44:	e88d5000 	stmia	sp, {ip, lr}
        19ca48:	e59f0030 	ldr	r0, [pc, #30]	; 19ca80 <SetTime__15TURealTimeAlarmSF5TTime+0x50>
        19ca4c:	e5900000 	ldr	r0, [r0]
        19ca50:	e3a01008 	mov	r1, #8	; 0x8
        19ca54:	e5201054 	str	r1, [r0, -#84]!	; fField84
        19ca58:	e0800001 	add	r0, r0, r1
        19ca5c:	e1a0100d 	mov	r1, sp
        19ca60:	e3a02008 	mov	r2, #8	; 0x8
        19ca64:	eb685ff9 	bl	1bb4a50 <$memcpy>
        19ca68:	eb07de68 	bl	394410 <IsSuperMode>
        19ca6c:	e3300000 	teq	r0, #0	; 0x0
        19ca70:	1a000003 	bne	19ca84 <SetTime__15TURealTimeAlarmSF5TTime+0x54>
        19ca74:	e3a0002b 	mov	r0, #43	; 0x2b
        19ca78:	eb0845bd 	bl	3ae174 <GenericSWI>
        19ca7c:	ea000001 	b	19ca88 <SetTime__15TURealTimeAlarmSF5TTime+0x58>
        19ca80:	0c10105c 	ldceq	0, cr1, [r0], -#368
        19ca84:	eb6595b6 	bl	1b02164 <$RealTimeClockDispatch(void)>
        19ca88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

