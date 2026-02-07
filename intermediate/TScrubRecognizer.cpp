#include "include/TScrubRecognizer.h"

/**
 * Symbol: TScrubRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00143a00
 */
TScrubRecognizer::HandleUnit(TUnitPublic *) {
    /*
        143a00:	e1a0c00d 	mov	ip, sp
        143a04:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        143a08:	e24cb004 	sub	fp, ip, #4	; 0x4
        143a0c:	e1a04001 	mov	r4, r1
        143a10:	e3a05000 	mov	r5, #0	; 0x0
        143a14:	e5917000 	ldr	r7, [r1]
        143a18:	e1a00007 	mov	r0, r7
        143a1c:	e3a01000 	mov	r1, #0	; 0x0
        143a20:	e5972000 	ldr	r2, [r7]
        143a24:	e1a0e00f 	mov	lr, pc
        143a28:	e282f040 	add	pc, r2, #64	; 0x40
        143a2c:	e1a06000 	mov	r6, r0
        143a30:	e59f80c0 	ldr	r8, [pc, #c0]	; 143af8 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0xf8>
        143a34:	e5d8001c 	ldrb	r0, [r8, #28]
        143a38:	e3300000 	teq	r0, #0	; 0x0
        143a3c:	0a000004 	beq	143a54 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x54>
        143a40:	e5961040 	ldr	r1, [r6, #64]
        143a44:	e281101e 	add	r1, r1, #30	; 0x1e
        143a48:	e5960034 	ldr	r0, [r6, #52]
        143a4c:	e1500001 	cmp	r0, r1
        143a50:	9a00002d 	bls	143b0c <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x10c>
        143a54:	e24dd010 	sub	sp, sp, #16	; 0x10
        143a58:	e1a0900d 	mov	r9, sp
        143a5c:	e1a00007 	mov	r0, r7
        143a60:	e3a01000 	mov	r1, #0	; 0x0
        143a64:	e5972000 	ldr	r2, [r7]
        143a68:	e1a0e00f 	mov	lr, pc
        143a6c:	e282f068 	add	pc, r2, #104	; 0x68
        143a70:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        143a74:	e889500c 	stmia	r9, {r2, r3, ip, lr}
        143a78:	eb68a2e1 	bl	1b6c604 <$GetTicks(void)>
        143a7c:	e5b61038 	ldr	r1, [r6, #56]!
        143a80:	e0401001 	sub	r1, r0, r1
        143a84:	e2610014 	rsb	r0, r1, #20	; 0x14
        143a88:	e3500000 	cmp	r0, #0	; 0x0
        143a8c:	c0600200 	rsbgt	r0, r0, r0, lsl #4
        143a90:	c1a00600 	movgt	r0, r0, lsl #12
        143a94:	cb6a64e4 	blgt	1bdce2c <$Sleep(unsigned long)>
        143a98:	e5b80008 	ldr	r0, [r8, #8]!
        143a9c:	e597102a 	ldr	r1, [r7, #42]
        143aa0:	e1a01821 	mov	r1, r1, lsr #16
        143aa4:	eb686d2e 	bl	1b5ef64 <TController::$GetIndexedStroke(unsigned long)>
        143aa8:	eb687590 	bl	1b610f0 <$OnlyStrokeWritten(TStrokeUnit *)>
        143aac:	e3300000 	teq	r0, #0	; 0x0
        143ab0:	0a000014 	beq	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143ab4:	e1a00004 	mov	r0, r4
        143ab8:	eb65c800 	bl	1ab5ac0 <TUnitPublic::$IsTap(void)>
        143abc:	e3300000 	teq	r0, #0	; 0x0
        143ac0:	13a05031 	movne	r5, #49	; 0x31
        143ac4:	1a00000f 	bne	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143ac8:	e59d0000 	ldr	r0, [sp]
        143acc:	e3500006 	cmp	r0, #6	; 0x6
        143ad0:	908ff100 	addls	pc, pc, r0, lsl #2
        143ad4:	ea00000b 	b	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143ad8:	ea00000a 	b	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143adc:	ea000006 	b	143afc <TScrubRecognizer::HandleUnit(TUnitPublic *)+0xfc>
        143ae0:	ea000002 	b	143af0 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0xf0>
        143ae4:	ea000001 	b	143af0 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0xf0>
        143ae8:	ea000005 	b	143b04 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x104>
        143aec:	eaffffff 	b	143af0 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0xf0>
        143af0:	e3a0500f 	mov	r5, #15	; 0xf
        143af4:	ea000003 	b	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143af8:	0c106e88 	ldceq	14, cr6, [r0], -#544
        143afc:	e3a0500d 	mov	r5, #13	; 0xd
        143b00:	ea000000 	b	143b08 <TScrubRecognizer::HandleUnit(TUnitPublic *)+0x108>
        143b04:	e3a05010 	mov	r5, #16	; 0x10
        143b08:	e28dd010 	add	sp, sp, #16	; 0x10
        143b0c:	e1a00005 	mov	r0, r5
        143b10:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

