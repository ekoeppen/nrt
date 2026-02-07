#include "include/TStoreDecompressor.h"

/**
 * Symbol: New__18TStoreDecompressorSFPc
 * Address: 003872e4
 */
void TStoreDecompressor::New() {
    /*
        3872e4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3872e8:	e1a01000 	mov	r1, r0
        3872ec:	ebfffff5 	bl	3872c8 <ClassInfo__11TFlashStoreSFv+0xf4>
        3872f0:	eb61212b 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3872f4:	e1100000 	tst	r0, r0
        3872f8:	e28dd004 	add	sp, sp, #4	; 0x4
        3872fc:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        387300:	01a0f00e 	moveq	pc, lr
        387304:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387308:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38730c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TStoreDecompressor::Delete(void)
 * Address: 00387310
 */
TStoreDecompressor::Delete(void) {
    /*
        387310:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387314:	e92d4001 	stmdb	sp!, {r0, lr}
        387318:	e28fe004 	add	lr, pc, #4	; 0x4
        38731c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387320:	e28cf00c 	add	pc, ip, #12	; 0xc
        387324:	e8bd4001 	ldmia	sp!, {r0, lr}
        387328:	ea612d8b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 0038732c
 */
TStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        38732c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387330:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387334:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 00387338
 */
TStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        387338:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38733c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387340:	e28cf014 	add	pc, ip, #20	; 0x14
        387344:	e1a0000f 	mov	r0, pc
        387348:	e1a0f00e 	mov	pc, lr
        38734c:	5453746f 	ldrplb	r7, [r3], -#1135
        387350:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        387354:	6d70616e 	ldfvse	f6, [r0, -#440]!
        387358:	64657200 	strvsbt	r7, [r5], -#512
    */
}

