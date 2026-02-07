#include "include/PMuxService.h"

/**
 * Symbol: New__11PMuxServiceSFPc
 * Address: 00383abc
 */
void PMuxService::New() {
    /*
        383abc:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383ac0:	e1a01000 	mov	r1, r0
        383ac4:	ebfffff7 	bl	383aa8 <ClassInfo__19PMuxCallBackWrapperSFv+0x68>
        383ac8:	eb612f35 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        383acc:	e1100000 	tst	r0, r0
        383ad0:	e28dd004 	add	sp, sp, #4	; 0x4
        383ad4:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        383ad8:	01a0f00e 	moveq	pc, lr
        383adc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383ae0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ae4:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PMuxService::Delete(void)
 * Address: 00383ae8
 */
PMuxService::Delete(void) {
    /*
        383ae8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383aec:	e92d4001 	stmdb	sp!, {r0, lr}
        383af0:	e28fe004 	add	lr, pc, #4	; 0x4
        383af4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383af8:	e28cf00c 	add	pc, ip, #12	; 0xc
        383afc:	e8bd4001 	ldmia	sp!, {r0, lr}
        383b00:	ea613b95 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PMuxService::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)
 * Address: 00383b04
 */
PMuxService::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long) {
    /*
        383b04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383b08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383b0c:	e28cf010 	add	pc, ip, #16	; 0x10
        383b10:	00000000 	andeq	r0, r0, r0
        383b14:	00000048 	andeq	r0, r0, r8, asr #32
        383b18:	00000057 	andeq	r0, r0, r7, asr r0
        383b1c:	0000005f 	andeq	r0, r0, pc, asr r0
        383b20:	0000005c 	andeq	r0, r0, ip, asr r0
        383b24:	0000006c 	andeq	r0, r0, ip, rrx
        383b28:	eaf7429b 	b	15459c <Sizeof__18PMuxServiceStarterSFv>
        383b34:	eaf7429a 	b	1545a4 <PMuxServiceStarter::New(void)>
        383b38:	eaf7429c 	b	1545b0 <PMuxServiceStarter::Delete(void)>
        383b48:	ea000001 	b	383b54 <ClassInfo__18PMuxServiceStarterSFv+0x8>
    */
}

