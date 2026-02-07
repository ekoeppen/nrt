#include "include/TEventRecognizer.h"

/**
 * Symbol: TEventRecognizer::ID(void)
 * Address: 00143b14
 */
TEventRecognizer::ID(void) {
    /*
        143b14:	e59f0000 	ldr	r0, [pc, #0]	; 143b1c <TEventRecognizer::ID(void)+0x8>
        143b18:	e1a0f00e 	mov	pc, lr
        143b1c:	43455654 	cmpmi	r5, #88080384	; 0x5400000
    */
}

/**
 * Symbol: TEventRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00143b20
 */
TEventRecognizer::HandleUnit(TUnitPublic *) {
    /*
        143b20:	e1a0c00d 	mov	ip, sp
        143b24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        143b28:	e24cb004 	sub	fp, ip, #4	; 0x4
        143b2c:	e3a04000 	mov	r4, #0	; 0x0
        143b30:	e5916000 	ldr	r6, [r1]
        143b34:	e59f5058 	ldr	r5, [pc, #58]	; 143b94 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x74>
        143b38:	e5950008 	ldr	r0, [r5, #8]
        143b3c:	e596102a 	ldr	r1, [r6, #42]
        143b40:	e1a01821 	mov	r1, r1, lsr #16
        143b44:	eb686d06 	bl	1b5ef64 <TController::$GetIndexedStroke(unsigned long)>
        143b48:	eb687568 	bl	1b610f0 <$OnlyStrokeWritten(TStrokeUnit *)>
        143b4c:	e3300000 	teq	r0, #0	; 0x0
        143b50:	0a000014 	beq	143ba8 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x88>
        143b54:	e1a00006 	mov	r0, r6
        143b58:	eb686ceb 	bl	1b5ef0c <TClickEventUnit::$Event(void)>
        143b5c:	e3300002 	teq	r0, #2	; 0x2
        143b60:	03a04031 	moveq	r4, #49	; 0x31
        143b64:	0a00000f 	beq	143ba8 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x88>
        143b68:	e3300003 	teq	r0, #3	; 0x3
        143b6c:	0a000009 	beq	143b98 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x78>
        143b70:	e3300004 	teq	r0, #4	; 0x4
        143b74:	03a04034 	moveq	r4, #52	; 0x34
        143b78:	0a00000a 	beq	143ba8 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x88>
        143b7c:	e3300005 	teq	r0, #5	; 0x5
        143b80:	02855028 	addeq	r5, r5, #40	; 0x28
        143b84:	09b50003 	ldmeqib	r5!, {r0, r1}
        143b88:	01300001 	teqeq	r0, r1
        143b8c:	03a04037 	moveq	r4, #55	; 0x37
        143b90:	ea000004 	b	143ba8 <TEventRecognizer::HandleUnit(TUnitPublic *)+0x88>
        143b94:	0c106e88 	ldceq	14, cr6, [r0], -#544
        143b98:	e2855028 	add	r5, r5, #40	; 0x28
        143b9c:	e9b50003 	ldmib	r5!, {r0, r1}
        143ba0:	e1300001 	teq	r0, r1
        143ba4:	03a04032 	moveq	r4, #50	; 0x32
        143ba8:	e1a00004 	mov	r0, r4
        143bac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

