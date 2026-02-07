#include "include/TSoundCodec.h"

/**
 * Symbol: New__11TSoundCodecSFPc
 * Address: 00388da8
 */
void TSoundCodec::New() {
    /*
        388da8:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        388dac:	e1a01000 	mov	r1, r0
        388db0:	ebfffff7 	bl	388d94 <ClassInfo__14TRosRecognizerSFv+0x80>
        388db4:	eb611a7a 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        388db8:	e1100000 	tst	r0, r0
        388dbc:	e28dd004 	add	sp, sp, #4	; 0x4
        388dc0:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        388dc4:	01a0f00e 	moveq	pc, lr
        388dc8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388dcc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388dd0:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TSoundCodec::Delete(void)
 * Address: 00388dd4
 */
TSoundCodec::Delete(void) {
    /*
        388dd4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388dd8:	e92d4001 	stmdb	sp!, {r0, lr}
        388ddc:	e28fe004 	add	lr, pc, #4	; 0x4
        388de0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388de4:	e28cf00c 	add	pc, ip, #12	; 0xc
        388de8:	e8bd4001 	ldmia	sp!, {r0, lr}
        388dec:	ea6126da 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TSoundCodec::Init(CodecBlock *)
 * Address: 00388df0
 */
TSoundCodec::Init(CodecBlock *) {
    /*
        388df0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388df4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388df8:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TSoundCodec::Reset(CodecBlock *)
 * Address: 00388dfc
 */
TSoundCodec::Reset(CodecBlock *) {
    /*
        388dfc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e00:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e04:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TSoundCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)
 * Address: 00388e08
 */
TSoundCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *) {
    /*
        388e08:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e0c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e10:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TSoundCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)
 * Address: 00388e14
 */
TSoundCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *) {
    /*
        388e14:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e18:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e1c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TSoundCodec::Start(void)
 * Address: 00388e20
 */
TSoundCodec::Start(void) {
    /*
        388e20:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e24:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e28:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TSoundCodec::Stop(int)
 * Address: 00388e2c
 */
TSoundCodec::Stop(int) {
    /*
        388e2c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e34:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TSoundCodec::BufferCompleted(void)
 * Address: 00388e38
 */
TSoundCodec::BufferCompleted(void) {
    /*
        388e38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388e3c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388e40:	e28cf028 	add	pc, ip, #40	; 0x28
        388e44:	00000000 	andeq	r0, r0, r0
        388e48:	00000048 	andeq	r0, r0, r8, asr #32
        388e4c:	00000050 	andeq	r0, r0, r0, asr r0
        388e50:	00000058 	andeq	r0, r0, r8, asr r0
        388e54:	00000058 	andeq	r0, r0, r8, asr r0
        388e58:	00000080 	andeq	r0, r0, r0, lsl #1
        388e5c:	ea5fcffb 	b	1b7ce50 <$Sizeof__11TMuLawCodecSFv>
        388e68:	ea5fcff9 	b	1b7ce54 <TMuLawCodec::$New(void)>
        388e6c:	ea5fcff9 	b	1b7ce58 <TMuLawCodec::$Delete(void)>
        388e7c:	ea000001 	b	388e88 <ClassInfo__11TMuLawCodecSFv+0x8>
    */
}

