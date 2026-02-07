#include "include/TCallbackCompressor.h"

/**
 * Symbol: New__19TCallbackCompressorSFPc
 * Address: 003895e4
 */
void TCallbackCompressor::New() {
    /*
        3895e4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3895e8:	e1a01000 	mov	r1, r0
        3895ec:	ebfffff5 	bl	3895c8 <TCompressor::EstimatedCompressedSize(void *, unsigned long)+0xc>
        3895f0:	eb61186b 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3895f4:	e1100000 	tst	r0, r0
        3895f8:	e28dd004 	add	sp, sp, #4	; 0x4
        3895fc:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389600:	01a0f00e 	moveq	pc, lr
        389604:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389608:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38960c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCallbackCompressor::Delete(void)
 * Address: 00389610
 */
TCallbackCompressor::Delete(void) {
    /*
        389610:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389614:	e92d4001 	stmdb	sp!, {r0, lr}
        389618:	e28fe004 	add	lr, pc, #4	; 0x4
        38961c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389620:	e28cf00c 	add	pc, ip, #12	; 0xc
        389624:	e8bd4001 	ldmia	sp!, {r0, lr}
        389628:	ea6124cb 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCallbackCompressor::Init(void *)
 * Address: 0038962c
 */
TCallbackCompressor::Init(void *) {
    /*
        38962c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389630:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389634:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCallbackCompressor::Reset(void)
 * Address: 00389638
 */
TCallbackCompressor::Reset(void) {
    /*
        389638:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38963c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389640:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TCallbackCompressor::WriteChunk(void *, long)
 * Address: 00389644
 */
TCallbackCompressor::WriteChunk(void *, long) {
    /*
        389644:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389648:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38964c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TCallbackCompressor::Flush(void)
 * Address: 00389650
 */
TCallbackCompressor::Flush(void) {
    /*
        389650:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389654:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389658:	e28cf01c 	add	pc, ip, #28	; 0x1c
        38965c:	e1a0000f 	mov	r0, pc
        389660:	e1a0f00e 	mov	pc, lr
        389664:	54446563 	strplb	r6, [r4], -#1379
        389668:	6f6d7072 	swivs	0x006d7072
        38966c:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389670:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

