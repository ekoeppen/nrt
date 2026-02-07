#include "include/TCallbackDecompressor.h"

/**
 * Symbol: New__21TCallbackDecompressorSFPc
 * Address: 003896f4
 */
void TCallbackDecompressor::New() {
    /*
        3896f4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3896f8:	e1a01000 	mov	r1, r0
        3896fc:	ebfffff4 	bl	3896d4 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)+0xc>
        389700:	eb611827 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389704:	e1100000 	tst	r0, r0
        389708:	e28dd004 	add	sp, sp, #4	; 0x4
        38970c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389710:	01a0f00e 	moveq	pc, lr
        389714:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389718:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38971c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCallbackDecompressor::Delete(void)
 * Address: 00389720
 */
TCallbackDecompressor::Delete(void) {
    /*
        389720:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389724:	e92d4001 	stmdb	sp!, {r0, lr}
        389728:	e28fe004 	add	lr, pc, #4	; 0x4
        38972c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389730:	e28cf00c 	add	pc, ip, #12	; 0xc
        389734:	e8bd4001 	ldmia	sp!, {r0, lr}
        389738:	ea612487 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCallbackDecompressor::Init(void *)
 * Address: 0038973c
 */
TCallbackDecompressor::Init(void *) {
    /*
        38973c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389740:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389744:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCallbackDecompressor::Reset(void)
 * Address: 00389748
 */
TCallbackDecompressor::Reset(void) {
    /*
        389748:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38974c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389750:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TCallbackDecompressor::ReadChunk(void *, long *, unsigned char *)
 * Address: 00389754
 */
TCallbackDecompressor::ReadChunk(void *, long *, unsigned char *) {
    /*
        389754:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389758:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38975c:	e28cf018 	add	pc, ip, #24	; 0x18
        389760:	00000000 	andeq	r0, r0, r0
        389764:	00000048 	andeq	r0, r0, r8, asr #32
        389768:	00000052 	andeq	r0, r0, r2, asr r0
        38976c:	0000005a 	andeq	r0, r0, sl, asr r0
        389770:	00000058 	andeq	r0, r0, r8, asr r0
        389774:	00000070 	andeq	r0, r0, r0, ror r0
        389778:	ea606ece 	b	1ba52b8 <$Sizeof__13TLZCompressorSFv>
        389784:	ea606aae 	b	1ba4244 <TLZCompressor::$New(void)>
        389788:	ea60626e 	b	1ba2148 <TLZCompressor::$Delete(void)>
        389798:	ea000001 	b	3897a4 <ClassInfo__13TLZCompressorSFv+0x8>
    */
}

