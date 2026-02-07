#include "DDKIncludes/HAL/DelayTimer.h"

/**
 * Symbol: TDelayTimer::__ct(void)
 * Address: 0008e978
 */
TDelayTimer::TDelayTimer() {
    /*
         8e978:	e1a0c00d 	mov	ip, sp
         8e97c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         8e980:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e984:	e3300000 	teq	r0, #0	; 0x0
         8e988:	1a000003 	bne	8e99c <TDelayTimer::__ct(void)+0x24>
         8e98c:	e3a0000c 	mov	r0, #12	; 0xc
         8e990:	eb6cff68 	bl	1bce738 <$__nw(unsigned int)>
         8e994:	e3300000 	teq	r0, #0	; 0x0
         8e998:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         8e99c:	e59f1004 	ldr	r1, [pc, #4]	; 8e9a8 <TDelayTimer::__ct(void)+0x30>	; fTimeOutStart
         8e9a0:	e5801008 	str	r1, [r0, #8]	; fTimeOutDelay
         8e9a4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         8e9a8:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TDelayTimer::ConvertToHardwareTime(unsigned long)
 * Address: 0008e9ac
 */
THardwareTimeUnits 	TDelayTimer::ConvertToHardwareTime(TTimeout time) {
    /*
         8e9ac:	e2810001 	add	r0, r1, #1	; 0x1
         8e9b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::ConvertFromHardwareTime(unsigned long)
 * Address: 0008e9b4
 */
TTimeout 			TDelayTimer::ConvertFromHardwareTime(THardwareTimeUnits time) {
    /*
         8e9b4:	e1a00001 	mov	r0, r1
         8e9b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::GetHardwareTime(void)
 * Address: 0008e9bc
 */
THardwareTimeUnits 	TDelayTimer::GetHardwareTime() {
    /*
         8e9bc:	e5900008 	ldr	r0, [r0, #8]	; fTimeOutDelay
         8e9c0:	e5900000 	ldr	r0, [r0]
         8e9c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::ShortTimerDelay(unsigned long)
 * Address: 0008e9c8
 */
void 				TDelayTimer::ShortTimerDelay(THardwareTimeUnits delay); // delay in busy wait loop. Try to avoid this! {
    /*
         8e9c8:	e5900008 	ldr	r0, [r0, #8]	; fTimeOutDelay
         8e9cc:	e5902000 	ldr	r2, [r0]
         8e9d0:	e5903000 	ldr	r3, [r0]
         8e9d4:	e0433002 	sub	r3, r3, r2
         8e9d8:	e1530001 	cmp	r3, r1
         8e9dc:	21a0f00e 	movcs	pc, lr
         8e9e0:	e5903000 	ldr	r3, [r0]
         8e9e4:	e0433002 	sub	r3, r3, r2
         8e9e8:	e1530001 	cmp	r3, r1
         8e9ec:	3afffffb 	bcc	8e9e0 <TDelayTimer::ShortTimerDelay(unsigned long)+0x18>
         8e9f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::ResetTimeOut(unsigned long)
 * Address: 0008e9f4
 */
void 				TDelayTimer::ResetTimeOut(THardwareTimeUnits delay) {
    /*
         8e9f4:	e5902008 	ldr	r2, [r0, #8]	; fTimeOutDelay
         8e9f8:	e5922000 	ldr	r2, [r2]
         8e9fc:	e5801004 	str	r1, [r0, #4]	; fTimeOutStart
         8ea00:	e5802000 	str	r2, [r0]
         8ea04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::ShortTimerDelayUntil(unsigned long)
 * Address: 0008ea08
 */
void 				TDelayTimer::ShortTimerDelayUntil(THardwareTimeUnits delay) {
    /*
         8ea08:	e5902008 	ldr	r2, [r0, #8]	; fTimeOutDelay
         8ea0c:	e5900000 	ldr	r0, [r0]
         8ea10:	e5923000 	ldr	r3, [r2]
         8ea14:	e0433000 	sub	r3, r3, r0
         8ea18:	e1530001 	cmp	r3, r1
         8ea1c:	21a0f00e 	movcs	pc, lr
         8ea20:	e5923000 	ldr	r3, [r2]
         8ea24:	e0433000 	sub	r3, r3, r0
         8ea28:	e1530001 	cmp	r3, r1
         8ea2c:	3afffffb 	bcc	8ea20 <TDelayTimer::ShortTimerDelayUntil(unsigned long)+0x18>
         8ea30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::TimedOut(void)
 * Address: 0008ea34
 */
FastBoolean			TDelayTimer::TimedOut() {
    /*
         8ea34:	e5901008 	ldr	r1, [r0, #8]	; fTimeOutDelay
         8ea38:	e5911000 	ldr	r1, [r1]
         8ea3c:	e5902000 	ldr	r2, [r0]
         8ea40:	e0411002 	sub	r1, r1, r2
         8ea44:	e5900004 	ldr	r0, [r0, #4]	; fTimeOutStart
         8ea48:	e1510000 	cmp	r1, r0
         8ea4c:	33a00000 	movcc	r0, #0	; 0x0
         8ea50:	23a00001 	movcs	r0, #1	; 0x1
         8ea54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDelayTimer::TimedOut(unsigned long)
 * Address: 0008ea58
 */
FastBoolean			TDelayTimer::TimedOut() {
    /*
         8ea58:	e5902008 	ldr	r2, [r0, #8]	; fTimeOutDelay
         8ea5c:	e5922000 	ldr	r2, [r2]
         8ea60:	e5900000 	ldr	r0, [r0]
         8ea64:	e0420000 	sub	r0, r2, r0
         8ea68:	e1500001 	cmp	r0, r1
         8ea6c:	33a00000 	movcc	r0, #0	; 0x0
         8ea70:	23a00001 	movcs	r0, #1	; 0x1
         8ea74:	e1a0f00e 	mov	pc, lr
    */
}

