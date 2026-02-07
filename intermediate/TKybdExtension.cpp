#include "include/TKybdExtension.h"

/**
 * Symbol: New__14TKybdExtensionSFPc
 * Address: 003840a8
 */
void TKybdExtension::New() {
    /*
        3840a8:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3840ac:	e1a01000 	mov	r1, r0
        3840b0:	ebfffff6 	bl	384090 <ClassInfo__18PCECallBackWrapperSFv+0x118>
        3840b4:	eb612dba 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3840b8:	e1100000 	tst	r0, r0
        3840bc:	e28dd004 	add	sp, sp, #4	; 0x4
        3840c0:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        3840c4:	01a0f00e 	moveq	pc, lr
        3840c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3840cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3840d0:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TKybdExtension::Delete(void)
 * Address: 003840d4
 */
TKybdExtension::Delete(void) {
    /*
        3840d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3840d8:	e92d4001 	stmdb	sp!, {r0, lr}
        3840dc:	e28fe004 	add	lr, pc, #4	; 0x4
        3840e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3840e4:	e28cf00c 	add	pc, ip, #12	; 0xc
        3840e8:	e8bd4001 	ldmia	sp!, {r0, lr}
        3840ec:	ea613a1a 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TKybdExtension::Init(void)
 * Address: 003840f0
 */
TKybdExtension::Init(void) {
    /*
        3840f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3840f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3840f8:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TKybdExtension::GetFeatures(void)
 * Address: 003840fc
 */
TKybdExtension::GetFeatures(void) {
    /*
        3840fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384100:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384104:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TKybdExtension::SetRepeatParams(unsigned long, unsigned long, unsigned long)
 * Address: 00384108
 */
TKybdExtension::SetRepeatParams(unsigned long, unsigned long, unsigned long) {
    /*
        384108:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38410c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384110:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TKybdExtension::SetKeyboardType(unsigned long)
 * Address: 00384114
 */
TKybdExtension::SetKeyboardType(unsigned long) {
    /*
        384114:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384118:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38411c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TKybdExtension::TranslateKey(unsigned char *, unsigned char *, unsigned char *, unsigned char *)
 * Address: 00384120
 */
TKybdExtension::TranslateKey(unsigned char *, unsigned char *, unsigned char *, unsigned char *) {
    /*
        384120:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384124:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384128:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TKybdExtension::IsRepeatable(unsigned char, unsigned long, unsigned char *, unsigned long *)
 * Address: 0038412c
 */
TKybdExtension::IsRepeatable(unsigned char, unsigned long, unsigned char *, unsigned long *) {
    /*
        38412c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384130:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384134:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TKybdExtension::DataInFilter(unsigned char)
 * Address: 00384138
 */
TKybdExtension::DataInFilter(unsigned char) {
    /*
        384138:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38413c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384140:	e28cf028 	add	pc, ip, #40	; 0x28
        384144:	00000000 	andeq	r0, r0, r0
        384148:	00000048 	andeq	r0, r0, r8, asr #32
        38414c:	00000052 	andeq	r0, r0, r2, asr r0
        384150:	00000055 	andeq	r0, r0, r5, asr r0
        384154:	00000054 	andeq	r0, r0, r4, asr r0
        384158:	00000108 	andeq	r0, r0, r8, lsl #2
        38415c:	ea5afc25 	b	1a431f8 <$Sizeof__13TPackageStoreSFv>
        384168:	ea5af3df 	b	1a410ec <TPackageStore::$New(void)>
        38416c:	ea5ae757 	b	1a3ded0 <TPackageStore::$Delete(void)>
        38417c:	ea000001 	b	384188 <ClassInfo__13TPackageStoreSFv+0x8>
    */
}

