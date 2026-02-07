#include "include/TLoopState.h"

/**
 * Symbol: TLoopState::__ct(TFunctionState *, TLoopState *)
 * Address: 002bfbcc
 */
TLoopState::TLoopState(TFunctionState *, TLoopState *) {
    /*
        2bfbcc:	e1a0c00d 	mov	ip, sp
        2bfbd0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2bfbd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfbd8:	e1b04000 	movs	r4, r0
        2bfbdc:	e1a06001 	mov	r6, r1
        2bfbe0:	e1a05002 	mov	r5, r2
        2bfbe4:	1a000003 	bne	2bfbf8 <TLoopState::__ct(TFunctionState *, TLoopState *)+0x2c>
        2bfbe8:	e3a0000c 	mov	r0, #12	; 0xc
        2bfbec:	eb643ad1 	bl	1bce738 <$__nw(unsigned int)>
        2bfbf0:	e1b04000 	movs	r4, r0
        2bfbf4:	0a000008 	beq	2bfc1c <TLoopState::__ct(TFunctionState *, TLoopState *)+0x50>
        2bfbf8:	e5846000 	str	r6, [r4]
        2bfbfc:	e59f0020 	ldr	r0, [pc, #20]	; 2bfc24 <TLoopState::__ct(TFunctionState *, TLoopState *)+0x58>
        2bfc00:	e3a01000 	mov	r1, #0	; 0x0
        2bfc04:	eb64094b 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2bfc08:	eb64094f 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfc0c:	e3a01000 	mov	r1, #0	; 0x0
        2bfc10:	e5840004 	str	r0, [r4, #4]	; fField4
        2bfc14:	e5a01004 	str	r1, [r0, #4]!	; fField4
        2bfc18:	e5845008 	str	r5, [r4, #8]
        2bfc1c:	e1a00004 	mov	r0, r4
        2bfc20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2bfc24:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TLoopState::__dt(void)
 * Address: 002bfc28
 */
TLoopState::~TLoopState(void) {
    /*
        2bfc28:	e1a0c00d 	mov	ip, sp
        2bfc2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bfc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfc34:	e1a04000 	mov	r4, r0
        2bfc38:	e1a05001 	mov	r5, r1
        2bfc3c:	e5900008 	ldr	r0, [r0, #8]
        2bfc40:	e3300000 	teq	r0, #0	; 0x0
        2bfc44:	13a01001 	movne	r1, #1	; 0x1
        2bfc48:	1b5e681b 	blne	1a59cbc <TLoopState::$__dt(void)>
        2bfc4c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2bfc50:	eb640d59 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfc54:	e3150001 	tst	r5, #1	; 0x1
        2bfc58:	11a00004 	movne	r0, r4
        2bfc5c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2bfc60:	1a64369e 	bne	1bcd6e0 <$__dl(void *)>
        2bfc64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLoopState::AddExit(long)
 * Address: 002bfc68
 */
TLoopState::AddExit(long) {
    /*
        2bfc68:	e1a0c00d 	mov	ip, sp
        2bfc6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2bfc70:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfc74:	e1a04000 	mov	r4, r0
        2bfc78:	e24dd004 	sub	sp, sp, #4	; 0x4
        2bfc7c:	e1a00101 	mov	r0, r1, lsl #2
        2bfc80:	eb640931 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfc84:	e58d0000 	str	r0, [sp]
        2bfc88:	e1a0100d 	mov	r1, sp
        2bfc8c:	e2840004 	add	r0, r4, #4	; 0x4
        2bfc90:	eb640924 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2bfc94:	e59d0000 	ldr	r0, [sp]
        2bfc98:	eb640d47 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfc9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLoopState::PatchExits(long)
 * Address: 002bfca0
 */
TLoopState::PatchExits(long) {
    /*
        2bfca0:	e1a0c00d 	mov	ip, sp
        2bfca4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2bfca8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfcac:	e1a04000 	mov	r4, r0
        2bfcb0:	e1a05001 	mov	r5, r1
        2bfcb4:	e2800004 	add	r0, r0, #4	; 0x4
        2bfcb8:	e1a08000 	mov	r8, r0
        2bfcbc:	e5900000 	ldr	r0, [r0]
        2bfcc0:	e5900000 	ldr	r0, [r0]
        2bfcc4:	eb641578 	bl	1bc52ac <$Length(long)>
        2bfcc8:	e1a07000 	mov	r7, r0
        2bfccc:	e3a06000 	mov	r6, #0	; 0x0
        2bfcd0:	e3500000 	cmp	r0, #0	; 0x0
        2bfcd4:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2bfcd8:	e1a01006 	mov	r1, r6
        2bfcdc:	e5980000 	ldr	r0, [r8]
        2bfce0:	e5900000 	ldr	r0, [r0]
        2bfce4:	eb64115a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2bfce8:	e3100003 	tst	r0, #3	; 0x3
        2bfcec:	01a00140 	moveq	r0, r0, asr #2
        2bfcf0:	0a000000 	beq	2bfcf8 <TLoopState::PatchExits(long)+0x58>
        2bfcf4:	eb640908 	bl	1bc211c <$_RINTError(long)>
        2bfcf8:	e1a01000 	mov	r1, r0
        2bfcfc:	e1a03005 	mov	r3, r5
        2bfd00:	e3a0200b 	mov	r2, #11	; 0xb
        2bfd04:	e5940000 	ldr	r0, [r4]
        2bfd08:	eb5e46ee 	bl	1a518c8 <TFunctionState::$Backpatch(long, Opcode, long)>
        2bfd0c:	e2866001 	add	r6, r6, #1	; 0x1
        2bfd10:	e1560007 	cmp	r6, r7
        2bfd14:	baffffef 	blt	2bfcd8 <TLoopState::PatchExits(long)+0x38>
        2bfd18:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

