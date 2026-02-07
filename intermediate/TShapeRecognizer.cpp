#include "include/TShapeRecognizer.h"

/**
 * Symbol: TShapeRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00144530
 */
TShapeRecognizer::HandleUnit(TUnitPublic *) {
    /*
        144530:	e1a0c00d 	mov	ip, sp
        144534:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        144538:	e24cb004 	sub	fp, ip, #4	; 0x4
        14453c:	e1a04001 	mov	r4, r1
        144540:	e5901000 	ldr	r1, [r0]
        144544:	e1a0e00f 	mov	lr, pc
        144548:	e281f010 	add	pc, r1, #16	; 0x10
        14454c:	e1a05000 	mov	r5, r0
        144550:	e1a00004 	mov	r0, r4
        144554:	eb657b0b 	bl	1aa3188 <TUnitPublic::$ShapeType(void)>
        144558:	e3300003 	teq	r0, #3	; 0x3
        14455c:	1330000f 	teqne	r0, #15	; 0xf
        144560:	03a05000 	moveq	r5, #0	; 0x0
        144564:	e1a00005 	mov	r0, r5
        144568:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

