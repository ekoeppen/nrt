#include "include/TDecompressor.h"

/**
 * Symbol: New__13TDecompressorSFPc
 * Address: 00389674
 */
void TDecompressor::New() {
    /*
        389674:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389678:	e1a01000 	mov	r1, r0
        38967c:	ebfffff6 	bl	38965c <TCallbackCompressor::Flush(void)+0xc>
        389680:	eb611847 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389684:	e1100000 	tst	r0, r0
        389688:	e28dd004 	add	sp, sp, #4	; 0x4
        38968c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389690:	01a0f00e 	moveq	pc, lr
        389694:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389698:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38969c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TDecompressor::Delete(void)
 * Address: 003896a0
 */
TDecompressor::Delete(void) {
    /*
        3896a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3896a4:	e92d4001 	stmdb	sp!, {r0, lr}
        3896a8:	e28fe004 	add	lr, pc, #4	; 0x4
        3896ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3896b0:	e28cf00c 	add	pc, ip, #12	; 0xc
        3896b4:	e8bd4001 	ldmia	sp!, {r0, lr}
        3896b8:	ea6124a7 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TDecompressor::Init(void *)
 * Address: 003896bc
 */
TDecompressor::Init(void *) {
    /*
        3896bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3896c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3896c4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 003896c8
 */
TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        3896c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3896cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3896d0:	e28cf014 	add	pc, ip, #20	; 0x14
        3896d4:	e1a0000f 	mov	r0, pc
        3896d8:	e1a0f00e 	mov	pc, lr
        3896dc:	5443616c 	strplb	r6, [r3], -#364
        3896e0:	6c626163 	stfvse	f6, [r2], -#396
        3896e4:	6b446563 	blvs	14a2c78 <ROM$$Size+0xd8302c>
        3896e8:	6f6d7072 	swivs	0x006d7072
        3896ec:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3896f0:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

