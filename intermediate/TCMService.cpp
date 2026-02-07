#include "DDKIncludes/CommAPI/CMService.h"

/**
 * Symbol: New__10TCMServiceSFPc
 * Address: 00382998
 */
static	PMuxService*			TCMService::New(char*);		// allocate variables, initialize state, return this {
    /*
        382998:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        38299c:	e1a01000 	mov	r1, r0
        3829a0:	ebfffff7 	bl	382984 <memset+0xbc>
        3829a4:	eb61337e 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3829a8:	e1100000 	tst	r0, r0
        3829ac:	e28dd004 	add	sp, sp, #4	; 0x4
        3829b0:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        3829b4:	01a0f00e 	moveq	pc, lr
        3829b8:	e5900004 	ldr	r0, [r0, #4]	; TCMService
        3829bc:	e590c008 	ldr	ip, [r0, #8]	; TCMService
        3829c0:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCMService::Delete(void)
 * Address: 003829c4
 */
void							TCMService::Delete();		// clean up {
    /*
        3829c4:	e5900004 	ldr	r0, [r0, #4]	; TCMService
        3829c8:	e92d4001 	stmdb	sp!, {r0, lr}
        3829cc:	e28fe004 	add	lr, pc, #4	; 0x4
        3829d0:	e590c008 	ldr	ip, [r0, #8]	; TCMService
        3829d4:	e28cf00c 	add	pc, ip, #12	; 0xc
        3829d8:	e8bd4001 	ldmia	sp!, {r0, lr}
        3829dc:	ea613fde 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCMService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 003829e0
 */
TCMService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        3829e0:	e5900004 	ldr	r0, [r0, #4]	; TCMService
        3829e4:	e590c008 	ldr	ip, [r0, #8]	; TCMService
        3829e8:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCMService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 003829ec
 */
TCMService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        3829ec:	e5900004 	ldr	r0, [r0, #4]	; TCMService
        3829f0:	e590c008 	ldr	ip, [r0, #8]	; TCMService
        3829f4:	e28cf014 	add	pc, ip, #20	; 0x14
        3829f8:	e1a0000f 	mov	r0, pc
        3829fc:	e1a0f00e 	mov	pc, lr
        382a00:	54456e64 	strplb	r6, [r5], -#3684
        382a04:	706f696e 	rsbvc	r6, pc, lr, ror #18
        382a08:	74000000 	strvc	r0, [r0]
    */
}

