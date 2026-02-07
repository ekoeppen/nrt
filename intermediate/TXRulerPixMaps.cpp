#include "include/TXRulerPixMaps.h"

/**
 * Symbol: Get__14TXRulerPixMapsFPPA17_8PixelMap
 * Address: 0024dd1c
 */
void TXRulerPixMaps::Get() {
    /*
        24dd1c:	e1a0c00d 	mov	ip, sp
        24dd20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        24dd24:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dd28:	e1a04000 	mov	r4, r0
        24dd2c:	e1a05001 	mov	r5, r1
        24dd30:	e5900000 	ldr	r0, [r0]
        24dd34:	e2801001 	add	r1, r0, #1	; 0x1
        24dd38:	e3a08000 	mov	r8, #0	; 0x0
        24dd3c:	e3300000 	teq	r0, #0	; 0x0
        24dd40:	e5841000 	str	r1, [r4]
        24dd44:	1a00003e 	bne	24de44 <Get__14TXRulerPixMapsFPPA17_8PixelMap+0x128>
        24dd48:	e3a00f77 	mov	r0, #476	; 0x1dc
        24dd4c:	eb6650fb 	bl	1be2140 <$NewPtr>
        24dd50:	e5840004 	str	r0, [r4, #4]	; fField4
        24dd54:	e3300000 	teq	r0, #0	; 0x0
        24dd58:	03a000e9 	moveq	r0, #233	; 0xe9
        24dd5c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        24dd60:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        24dd64:	e59f00e8 	ldr	r0, [pc, #e8]	; 24de54 <Get__14TXRulerPixMapsFPPA17_8PixelMap+0x138>
        24dd68:	e5900000 	ldr	r0, [r0]
        24dd6c:	e5900000 	ldr	r0, [r0]
        24dd70:	eb65d0f5 	bl	1bc214c <$AllocateRefHandle(long)>
        24dd74:	e1a07000 	mov	r7, r0
        24dd78:	e24dd034 	sub	sp, sp, #52	; 0x34
        24dd7c:	e1a0000d 	mov	r0, sp
        24dd80:	eb624893 	bl	1adffd4 <TPixelObj::$__ct(void)>
        24dd84:	e52d806c 	str	r8, [sp, -#108]!
        24dd88:	e28d0008 	add	r0, sp, #8	; 0x8
        24dd8c:	eb6592f8 	bl	1bb2974 <$setjmp>
        24dd90:	e3300000 	teq	r0, #0	; 0x0
        24dd94:	1a00002f 	bne	24de58 <Get__14TXRulerPixMapsFPPA17_8PixelMap+0x13c>
        24dd98:	e1a0000d 	mov	r0, sp
        24dd9c:	eb6648b6 	bl	1be007c <$AddExceptionHandler>
        24dda0:	e3a06010 	mov	r6, #16	; 0x10
        24dda4:	e24dd004 	sub	sp, sp, #4	; 0x4
        24dda8:	e1a01006 	mov	r1, r6
        24ddac:	e5970000 	ldr	r0, [r7]
        24ddb0:	eb65d927 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        24ddb4:	eb65d0e4 	bl	1bc214c <$AllocateRefHandle(long)>
        24ddb8:	e58d0000 	str	r0, [sp]
        24ddbc:	e1a0100d 	mov	r1, sp
        24ddc0:	e28d0070 	add	r0, sp, #112	; 0x70
        24ddc4:	eb624884 	bl	1adffdc <TPixelObj::$Init(RefVar const &)>
        24ddc8:	e59d0000 	ldr	r0, [sp]
        24ddcc:	eb65d4fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24ddd0:	e0660186 	rsb	r0, r6, r6, lsl #3
        24ddd4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        24ddd8:	e0810100 	add	r0, r1, r0, lsl #2
        24dddc:	e1a0e000 	mov	lr, r0
        24dde0:	e59d9090 	ldr	r9, [sp, #144]
        24dde4:	e8b9100e 	ldmia	r9!, {r1, r2, r3, ip}
        24dde8:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        24ddec:	e899100c 	ldmia	r9, {r2, r3, ip}
        24ddf0:	e88e100c 	stmia	lr, {r2, r3, ip}
        24ddf4:	e5901008 	ldr	r1, [r0, #8]
        24ddf8:	e1a01841 	mov	r1, r1, asr #16
        24ddfc:	e2612000 	rsb	r2, r1, #0	; 0x0
        24de00:	e590100a 	ldr	r1, [r0, #10]
        24de04:	e1a01841 	mov	r1, r1, asr #16
        24de08:	e2611000 	rsb	r1, r1, #0	; 0x0
        24de0c:	e2800008 	add	r0, r0, #8	; 0x8
        24de10:	eb640eb4 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        24de14:	e28dd004 	add	sp, sp, #4	; 0x4
        24de18:	e2566001 	subs	r6, r6, #1	; 0x1
        24de1c:	5affffe0 	bpl	24dda4 <Get__14TXRulerPixMapsFPPA17_8PixelMap+0x88>
        24de20:	e1a0000d 	mov	r0, sp
        24de24:	eb664ca3 	bl	1be10b8 <$ExitHandler>
        24de28:	e28dd06c 	add	sp, sp, #108	; 0x6c
        24de2c:	e1a0000d 	mov	r0, sp
        24de30:	e3a01000 	mov	r1, #0	; 0x0
        24de34:	eb624867 	bl	1adffd8 <TPixelObj::$__dt(void)>
        24de38:	e28dd034 	add	sp, sp, #52	; 0x34
        24de3c:	e1a00007 	mov	r0, r7
        24de40:	eb65d4dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24de44:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        24de48:	e5850000 	str	r0, [r5]
        24de4c:	e1a00008 	mov	r0, r8
        24de50:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        24de54:	00681178 	rsbeq	r1, r8, r8, ror r1
        24de58:	e28d006c 	add	r0, sp, #108	; 0x6c
        24de5c:	e3a01000 	mov	r1, #0	; 0x0
        24de60:	eb62485c 	bl	1adffd8 <TPixelObj::$__dt(void)>
        24de64:	e1a0000d 	mov	r0, sp
        24de68:	eb6650b9 	bl	1be2154 <$NextHandler>
        24de6c:	eafffff9 	b	24de58 <Get__14TXRulerPixMapsFPPA17_8PixelMap+0x13c>
    */
}

/**
 * Symbol: TXRulerPixMaps::Release(void)
 * Address: 0024de70
 */
TXRulerPixMaps::Release(void) {
    /*
        24de70:	e1a0c00d 	mov	ip, sp
        24de74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24de78:	e24cb004 	sub	fp, ip, #4	; 0x4
        24de7c:	e1a04000 	mov	r4, r0
        24de80:	e5900000 	ldr	r0, [r0]
        24de84:	e2500001 	subs	r0, r0, #1	; 0x1
        24de88:	e5840000 	str	r0, [r4]
        24de8c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        24de90:	e5940004 	ldr	r0, [r4, #4]	; fField4
        24de94:	eb664c86 	bl	1be10b4 <$DisposPtr>
        24de98:	e3a00000 	mov	r0, #0	; 0x0
        24de9c:	e5a40004 	str	r0, [r4, #4]!	; fField4
        24dea0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

