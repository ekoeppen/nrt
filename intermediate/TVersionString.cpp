#include "include/TVersionString.h"

/**
 * Symbol: New__14TVersionStringSFPc
 * Address: 003857b4
 */
void TVersionString::New() {
    /*
        3857b4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3857b8:	e1a01000 	mov	r1, r0
        3857bc:	ebfffff6 	bl	38579c <ClassInfo__15PAppleTalkStackSFv+0x94>
        3857c0:	eb6127f7 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3857c4:	e1100000 	tst	r0, r0
        3857c8:	e28dd004 	add	sp, sp, #4	; 0x4
        3857cc:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        3857d0:	01a0f00e 	moveq	pc, lr
        3857d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3857d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3857dc:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TVersionString::Delete(void)
 * Address: 003857e0
 */
TVersionString::Delete(void) {
    /*
        3857e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3857e4:	e92d4001 	stmdb	sp!, {r0, lr}
        3857e8:	e28fe004 	add	lr, pc, #4	; 0x4
        3857ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3857f0:	e28cf00c 	add	pc, ip, #12	; 0xc
        3857f4:	e8bd4001 	ldmia	sp!, {r0, lr}
        3857f8:	ea613457 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TVersionString::VersionString(unsigned short *)
 * Address: 003857fc
 */
TVersionString::VersionString(unsigned short *) {
    /*
        3857fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385800:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385804:	e28cf010 	add	pc, ip, #16	; 0x10
        385808:	e1a0000f 	mov	r0, pc
        38580c:	e1a0f00e 	mov	pc, lr
        385810:	5453706c 	ldrplb	r7, [r3], -#108
        385814:	61736853 	cmnvs	r3, r3, asr r8
        385818:	63726565 	cmnvs	r2, #423624704	; 0x19400000
        38581c:	6e496e66 	cdpvs	14, 4, cr6, cr9, cr6, {3}
        385820:	6f000000 	swivs	0x00000000
    */
}

