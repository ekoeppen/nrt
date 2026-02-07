#include "include/TClickRecognizer.h"

/**
 * Symbol: TClickRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00143c38
 */
TClickRecognizer::HandleUnit(TUnitPublic *) {
    /*
        143c38:	e1a0c00d 	mov	ip, sp
        143c3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        143c40:	e24cb004 	sub	fp, ip, #4	; 0x4
        143c44:	e1a05000 	mov	r5, r0
        143c48:	e1a04001 	mov	r4, r1
        143c4c:	e5917000 	ldr	r7, [r1]
        143c50:	e5901000 	ldr	r1, [r0]
        143c54:	e1a0e00f 	mov	lr, pc
        143c58:	e281f010 	add	pc, r1, #16	; 0x10
        143c5c:	e1a06000 	mov	r6, r0
        143c60:	e1a00005 	mov	r0, r5
        143c64:	e5951000 	ldr	r1, [r5]
        143c68:	e1a0e00f 	mov	lr, pc
        143c6c:	e281f020 	add	pc, r1, #32	; 0x20
        143c70:	e1a01000 	mov	r1, r0
        143c74:	e1a00004 	mov	r0, r4
        143c78:	eb65b710 	bl	1ab18c0 <TUnitPublic::$FindView(unsigned long)>
        143c7c:	e1a01000 	mov	r1, r0
        143c80:	e1a05000 	mov	r5, r0
        143c84:	e59f004c 	ldr	r0, [pc, #4c]	; 143cd8 <TClickRecognizer::HandleUnit(TUnitPublic *)+0xa0>
        143c88:	e1a04000 	mov	r4, r0
        143c8c:	eb65d809 	bl	1ab9cb8 <TRecognitionManager::$SaveClickView(TView *)>
        143c90:	e1a00005 	mov	r0, r5
        143c94:	eb65646d 	bl	1a9ce50 <$OtherViewInUse(TView *)>
        143c98:	e3300000 	teq	r0, #0	; 0x0
        143c9c:	059f0034 	ldreq	r0, [pc, #34]	; 143cd8 <TClickRecognizer::HandleUnit(TUnitPublic *)+0xa0>
        143ca0:	05900018 	ldreq	r0, [r0, #24]
        143ca4:	03300000 	teqeq	r0, #0	; 0x0
        143ca8:	13a00001 	movne	r0, #1	; 0x1
        143cac:	03a00000 	moveq	r0, #0	; 0x0
        143cb0:	e31000ff 	tst	r0, #255	; 0xff
        143cb4:	0a000005 	beq	143cd0 <TClickRecognizer::HandleUnit(TUnitPublic *)+0x98>
        143cb8:	e3a06000 	mov	r6, #0	; 0x0
        143cbc:	e1a00007 	mov	r0, r7
        143cc0:	eb65266e 	bl	1a8d680 <$ClicksOnlyArea(TUnit *)>
        143cc4:	e3300000 	teq	r0, #0	; 0x0
        143cc8:	13a00001 	movne	r0, #1	; 0x1
        143ccc:	15c40038 	strneb	r0, [r4, #56]	; fField56
        143cd0:	e1a00006 	mov	r0, r6
        143cd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        143cd8:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

