#include "include/TReservedContiguousMemory.h"

/**
 * Symbol: New__25TReservedContiguousMemorySFPc
 * Address: 00382324
 */
void TReservedContiguousMemory::New() {
    /*
        382324:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        382328:	e1a01000 	mov	r1, r0
        38232c:	ebfffff3 	bl	382300 <wideMaster+0xc50>
        382330:	eb61351b 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        382334:	e1100000 	tst	r0, r0
        382338:	e28dd004 	add	sp, sp, #4	; 0x4
        38233c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        382340:	01a0f00e 	moveq	pc, lr
        382344:	e5900004 	ldr	r0, [r0, #4]	; fField4
        382348:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38234c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TReservedContiguousMemory::Delete(void)
 * Address: 00382350
 */
TReservedContiguousMemory::Delete(void) {
    /*
        382350:	e5900004 	ldr	r0, [r0, #4]	; fField4
        382354:	e92d4001 	stmdb	sp!, {r0, lr}
        382358:	e28fe004 	add	lr, pc, #4	; 0x4
        38235c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382360:	e28cf00c 	add	pc, ip, #12	; 0xc
        382364:	e8bd4001 	ldmia	sp!, {r0, lr}
        382368:	ea61417b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TReservedContiguousMemory::GetRequest(unsigned long &, unsigned long &, int &, unsigned long &)
 * Address: 0038236c
 */
TReservedContiguousMemory::GetRequest(unsigned long &, unsigned long &, int &, unsigned long &) {
    /*
        38236c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        382370:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382374:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TReservedContiguousMemory::GetPhys(TUPhys *)
 * Address: 00382378
 */
TReservedContiguousMemory::GetPhys(TUPhys *) {
    /*
        382378:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38237c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382380:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

