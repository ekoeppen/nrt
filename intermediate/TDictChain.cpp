#include "include/TDictChain.h"

/**
 * Symbol: TDictChain::__ct(void)
 * Address: 0020cab0
 */
TDictChain::TDictChain(void) {
    /*
        20cab0:	e1a0c00d 	mov	ip, sp
        20cab4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20cab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cabc:	e1b04000 	movs	r4, r0
        20cac0:	1a000003 	bne	20cad4 <TDictChain::__ct(void)+0x24>
        20cac4:	e3a00024 	mov	r0, #36	; 0x24
        20cac8:	eb67071a 	bl	1bce738 <$__nw(unsigned int)>
        20cacc:	e1b04000 	movs	r4, r0
        20cad0:	0a000003 	beq	20cae4 <TDictChain::__ct(void)+0x34>
        20cad4:	e1a00004 	mov	r0, r4
        20cad8:	ebffff21 	bl	20c764 <TDArray::__ct(void)>
        20cadc:	e59f0008 	ldr	r0, [pc, #8]	; 20caec <TDictChain::__ct(void)+0x3c>
        20cae0:	e5840000 	str	r0, [r4]
        20cae4:	e1a00004 	mov	r0, r4
        20cae8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20caec:	0001a830 	andeq	sl, r1, r0, lsr r8
    */
}

/**
 * Symbol: Make__10TDictChainSFUlT1
 * Address: 0020caf0
 */
void TDictChain::Make() {
    /*
        20caf0:	e1a0c00d 	mov	ip, sp
        20caf4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20caf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cafc:	e1a05000 	mov	r5, r0
        20cb00:	e1a04001 	mov	r4, r1
        20cb04:	e3a00000 	mov	r0, #0	; 0x0
        20cb08:	eb656617 	bl	1b6636c <TDictChain::$__ct(void)>
        20cb0c:	e1b06000 	movs	r6, r0
        20cb10:	0a000009 	beq	20cb3c <Make__10TDictChainSFUlT1+0x4c>
        20cb14:	e1a02004 	mov	r2, r4
        20cb18:	e1a01005 	mov	r1, r5
        20cb1c:	e1a00006 	mov	r0, r6
        20cb20:	eb6561e2 	bl	1b652b0 <TDictChain::$IDictChain(unsigned long, unsigned long)>
        20cb24:	e3300000 	teq	r0, #0	; 0x0
        20cb28:	0a000003 	beq	20cb3c <Make__10TDictChainSFUlT1+0x4c>
        20cb2c:	e1a00006 	mov	r0, r6
        20cb30:	e1a0e00f 	mov	lr, pc
        20cb34:	e596f000 	ldr	pc, [r6]
        20cb38:	e3a06000 	mov	r6, #0	; 0x0
        20cb3c:	e1a00006 	mov	r0, r6
        20cb40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::IDictChain(unsigned long, unsigned long)
 * Address: 0020cb44
 */
TDictChain::IDictChain(unsigned long, unsigned long) {
    /*
        20cb44:	e1a0c00d 	mov	ip, sp
        20cb48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20cb4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cb50:	e1a04000 	mov	r4, r0
        20cb54:	e1a05002 	mov	r5, r2
        20cb58:	e3a00000 	mov	r0, #0	; 0x0
        20cb5c:	e1a02001 	mov	r2, r1
        20cb60:	e584001c 	str	r0, [r4, #28]	; fField28
        20cb64:	e1a00004 	mov	r0, r4
        20cb68:	e3a01004 	mov	r1, #4	; 0x4
        20cb6c:	eb654d17 	bl	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
        20cb70:	e3300000 	teq	r0, #0	; 0x0
        20cb74:	05a45020 	streq	r5, [r4, #32]!	; fField32
        20cb78:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::RemoveDictFromChain(AirusAParmBlock **)
 * Address: 0020cb7c
 */
TDictChain::RemoveDictFromChain(AirusAParmBlock **) {
    /*
        20cb7c:	e1a0c00d 	mov	ip, sp
        20cb80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20cb84:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cb88:	e1a04000 	mov	r4, r0
        20cb8c:	eb6561c6 	bl	1b652ac <TDictChain::$HandleToPosition(AirusAParmBlock **)>
        20cb90:	e1a05000 	mov	r5, r0
        20cb94:	e1a01000 	mov	r1, r0
        20cb98:	e1a00004 	mov	r0, r4
        20cb9c:	e5942000 	ldr	r2, [r4]
        20cba0:	e1a0e00f 	mov	lr, pc
        20cba4:	e282f040 	add	pc, r2, #64	; 0x40
        20cba8:	e3300000 	teq	r0, #0	; 0x0
        20cbac:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        20cbb0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        20cbb4:	e1300005 	teq	r0, r5
        20cbb8:	03e00000 	mvneq	r0, #0	; 0x0
        20cbbc:	05a40020 	streq	r0, [r4, #32]!	; fField32
        20cbc0:	e3a00000 	mov	r0, #0	; 0x0
        20cbc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::AddDictToChain(AirusAParmBlock **)
 * Address: 0020cbc8
 */
TDictChain::AddDictToChain(AirusAParmBlock **) {
    /*
        20cbc8:	e1a0c00d 	mov	ip, sp
        20cbcc:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        20cbd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cbd4:	e51b0014 	ldr	r0, [fp, -#20]
        20cbd8:	e24b2010 	sub	r2, fp, #16	; 0x10
        20cbdc:	e590100c 	ldr	r1, [r0, #12]	; fField12
        20cbe0:	e5903000 	ldr	r3, [r0]
        20cbe4:	e1a0e00f 	mov	lr, pc
        20cbe8:	e283f04c 	add	pc, r3, #76	; 0x4c
        20cbec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::PositionToHandle(unsigned long)
 * Address: 0020cbf0
 */
TDictChain::PositionToHandle(unsigned long) {
    /*
        20cbf0:	e1a0c00d 	mov	ip, sp
        20cbf4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        20cbf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cbfc:	e5902000 	ldr	r2, [r0]
        20cc00:	e1a0e00f 	mov	lr, pc
        20cc04:	e282f01c 	add	pc, r2, #28	; 0x1c
        20cc08:	e3300000 	teq	r0, #0	; 0x0
        20cc0c:	15900000 	ldrne	r0, [r0]
        20cc10:	03a00000 	moveq	r0, #0	; 0x0
        20cc14:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::HandleToPosition(AirusAParmBlock **)
 * Address: 0020cc18
 */
TDictChain::HandleToPosition(AirusAParmBlock **) {
    /*
        20cc18:	e1a0c00d 	mov	ip, sp
        20cc1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20cc20:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cc24:	e1a04000 	mov	r4, r0
        20cc28:	e1a05001 	mov	r5, r1
        20cc2c:	eb654d0e 	bl	1b6006c <TArray::$Lock(void)>
        20cc30:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20cc34:	e3a06000 	mov	r6, #0	; 0x0
        20cc38:	e5901000 	ldr	r1, [r0]
        20cc3c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20cc40:	e3500000 	cmp	r0, #0	; 0x0
        20cc44:	9a000005 	bls	20cc60 <TDictChain::HandleToPosition(AirusAParmBlock **)+0x48>
        20cc48:	e7912106 	ldr	r2, [r1, r6, lsl #2]
        20cc4c:	e1320005 	teq	r2, r5
        20cc50:	0a000002 	beq	20cc60 <TDictChain::HandleToPosition(AirusAParmBlock **)+0x48>
        20cc54:	e2866001 	add	r6, r6, #1	; 0x1
        20cc58:	e1500006 	cmp	r0, r6
        20cc5c:	8afffff9 	bhi	20cc48 <TDictChain::HandleToPosition(AirusAParmBlock **)+0x30>
        20cc60:	e1a00004 	mov	r0, r4
        20cc64:	eb655d66 	bl	1b64204 <TArray::$Unlock(void)>
        20cc68:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        20cc6c:	e1300006 	teq	r0, r6
        20cc70:	03e06000 	mvneq	r6, #0	; 0x0
        20cc74:	e1a00006 	mov	r0, r6
        20cc78:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDictChain::LockChain(void)
 * Address: 0020cc7c
 */
TDictChain::LockChain(void) {
    /*
        20cc7c:	e1a0c00d 	mov	ip, sp
        20cc80:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20cc84:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cc88:	e1a04000 	mov	r4, r0
        20cc8c:	eb654cf6 	bl	1b6006c <TArray::$Lock(void)>
        20cc90:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20cc94:	e3a05000 	mov	r5, #0	; 0x0
        20cc98:	e5906000 	ldr	r6, [r0]
        20cc9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20cca0:	e3500000 	cmp	r0, #0	; 0x0
        20cca4:	9a000007 	bls	20ccc8 <TDictChain::LockChain(void)+0x4c>
        20cca8:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        20ccac:	eb67551c 	bl	1be2124 <$MoveHHi>
        20ccb0:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        20ccb4:	eb675514 	bl	1be210c <$HLock>
        20ccb8:	e2855001 	add	r5, r5, #1	; 0x1
        20ccbc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ccc0:	e1500005 	cmp	r0, r5
        20ccc4:	8afffff7 	bhi	20cca8 <TDictChain::LockChain(void)+0x2c>
        20ccc8:	e1a00004 	mov	r0, r4
        20cccc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        20ccd0:	ea655d4b 	b	1b64204 <TArray::$Unlock(void)>
    */
}

/**
 * Symbol: TDictChain::UnlockChain(void)
 * Address: 0020ccd4
 */
TDictChain::UnlockChain(void) {
    /*
        20ccd4:	e1a0c00d 	mov	ip, sp
        20ccd8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20ccdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cce0:	e1a04000 	mov	r4, r0
        20cce4:	eb654ce0 	bl	1b6006c <TArray::$Lock(void)>
        20cce8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20ccec:	e3a05000 	mov	r5, #0	; 0x0
        20ccf0:	e5906000 	ldr	r6, [r0]
        20ccf4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ccf8:	e3500000 	cmp	r0, #0	; 0x0
        20ccfc:	9a000005 	bls	20cd18 <TDictChain::UnlockChain(void)+0x44>
        20cd00:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        20cd04:	eb675502 	bl	1be2114 <$HUnlock>
        20cd08:	e2855001 	add	r5, r5, #1	; 0x1
        20cd0c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20cd10:	e1500005 	cmp	r0, r5
        20cd14:	8afffff9 	bhi	20cd00 <TDictChain::UnlockChain(void)+0x2c>
        20cd18:	e1a00004 	mov	r0, r4
        20cd1c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        20cd20:	ea655d37 	b	1b64204 <TArray::$Unlock(void)>
    */
}

