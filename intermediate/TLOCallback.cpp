#include "include/TLOCallback.h"

/**
 * Symbol: TLOCallback::Callback(TLOCallbackInfo *)
 * Address: 00102ac8
 */
TLOCallback::Callback(TLOCallbackInfo *) {
    /*
        102ac8:	e1a0c00d 	mov	ip, sp
        102acc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        102ad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        102ad4:	e1a04001 	mov	r4, r1
        102ad8:	e2801008 	add	r1, r0, #8	; 0x8
        102adc:	e1a05001 	mov	r5, r1
        102ae0:	e5911000 	ldr	r1, [r1]
        102ae4:	e5911000 	ldr	r1, [r1]
        102ae8:	e3a06000 	mov	r6, #0	; 0x0
        102aec:	e3310002 	teq	r1, #2	; 0x2
        102af0:	1a00002d 	bne	102bac <TLOCallback::Callback(TLOCallbackInfo *)+0xe4>
        102af4:	e24dd008 	sub	sp, sp, #8	; 0x8
        102af8:	e1a06005 	mov	r6, r5
        102afc:	e59f0098 	ldr	r0, [pc, #98]	; 102b9c <TLOCallback::Callback(TLOCallbackInfo *)+0xd4>
        102b00:	eb6afd99 	bl	1bc216c <$Clone(RefVar const &)>
        102b04:	e5961000 	ldr	r1, [r6]
        102b08:	e1a06005 	mov	r6, r5
        102b0c:	e5810000 	str	r0, [r1]
        102b10:	e5940000 	ldr	r0, [r4]
        102b14:	e1a00100 	mov	r0, r0, lsl #2
        102b18:	eb6afd8b 	bl	1bc214c <$AllocateRefHandle(long)>
        102b1c:	e58d0000 	str	r0, [sp]
        102b20:	e1a0200d 	mov	r2, sp
        102b24:	e59f1074 	ldr	r1, [pc, #74]	; 102ba0 <TLOCallback::Callback(TLOCallbackInfo *)+0xd8>
        102b28:	e1a00006 	mov	r0, r6
        102b2c:	eb6b0e0d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        102b30:	e59d0000 	ldr	r0, [sp]
        102b34:	eb6b01a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102b38:	e1a06005 	mov	r6, r5
        102b3c:	e5940010 	ldr	r0, [r4, #16]
        102b40:	e1a00100 	mov	r0, r0, lsl #2
        102b44:	eb6afd80 	bl	1bc214c <$AllocateRefHandle(long)>
        102b48:	e58d0004 	str	r0, [sp, #4]
        102b4c:	e28d2004 	add	r2, sp, #4	; 0x4
        102b50:	e59f104c 	ldr	r1, [pc, #4c]	; 102ba4 <TLOCallback::Callback(TLOCallbackInfo *)+0xdc>
        102b54:	e1a00006 	mov	r0, r6
        102b58:	eb6b0e02 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        102b5c:	e59d0004 	ldr	r0, [sp, #4]
        102b60:	eb6b0195 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102b64:	e24dd004 	sub	sp, sp, #4	; 0x4
        102b68:	e5b40008 	ldr	r0, [r4, #8]!
        102b6c:	e3300000 	teq	r0, #0	; 0x0
        102b70:	0a000008 	beq	102b98 <TLOCallback::Callback(TLOCallbackInfo *)+0xd0>
        102b74:	eb6b09d6 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        102b78:	eb6afd73 	bl	1bc214c <$AllocateRefHandle(long)>
        102b7c:	e58d0000 	str	r0, [sp]
        102b80:	e1a0200d 	mov	r2, sp
        102b84:	e59f101c 	ldr	r1, [pc, #1c]	; 102ba8 <TLOCallback::Callback(TLOCallbackInfo *)+0xe0>
        102b88:	e1a00005 	mov	r0, r5
        102b8c:	eb6b0df5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        102b90:	e59d0000 	ldr	r0, [sp]
        102b94:	eb6b0188 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102b98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        102b9c:	00680130 	rsbeq	r0, r8, r0, lsr r1
        102ba0:	00683c40 	rsbeq	r3, r8, r0, asr #24
        102ba4:	00683ae0 	rsbeq	r3, r8, r0, ror #21
        102ba8:	00683c38 	rsbeq	r3, r8, r8, lsr ip
        102bac:	e2800004 	add	r0, r0, #4	; 0x4
        102bb0:	e1a07000 	mov	r7, r0
        102bb4:	e5900000 	ldr	r0, [r0]
        102bb8:	e5900000 	ldr	r0, [r0]
        102bbc:	e3300002 	teq	r0, #2	; 0x2
        102bc0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        102bc4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        102bc8:	e59f00a8 	ldr	r0, [pc, #a8]	; 102c78 <TLOCallback::Callback(TLOCallbackInfo *)+0x1b0>
        102bcc:	e3a01001 	mov	r1, #1	; 0x1
        102bd0:	eb6afd58 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        102bd4:	eb6afd5c 	bl	1bc214c <$AllocateRefHandle(long)>
        102bd8:	e1a08005 	mov	r8, r5
        102bdc:	e58d0008 	str	r0, [sp, #8]
        102be0:	e594000c 	ldr	r0, [r4, #12]
        102be4:	e1a00100 	mov	r0, r0, lsl #2
        102be8:	eb6afd57 	bl	1bc214c <$AllocateRefHandle(long)>
        102bec:	e58d0000 	str	r0, [sp]
        102bf0:	e1a0200d 	mov	r2, sp
        102bf4:	e59f1080 	ldr	r1, [pc, #80]	; 102c7c <TLOCallback::Callback(TLOCallbackInfo *)+0x1b4>
        102bf8:	e1a00008 	mov	r0, r8
        102bfc:	eb6b0dd9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        102c00:	e59d0000 	ldr	r0, [sp]
        102c04:	eb6b016c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102c08:	e1a08005 	mov	r8, r5
        102c0c:	e5b40004 	ldr	r0, [r4, #4]!
        102c10:	e1a00100 	mov	r0, r0, lsl #2
        102c14:	eb6afd4c 	bl	1bc214c <$AllocateRefHandle(long)>
        102c18:	e58d0004 	str	r0, [sp, #4]
        102c1c:	e28d2004 	add	r2, sp, #4	; 0x4
        102c20:	e59f1058 	ldr	r1, [pc, #58]	; 102c80 <TLOCallback::Callback(TLOCallbackInfo *)+0x1b8>
        102c24:	e1a00008 	mov	r0, r8
        102c28:	eb6b0dce 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        102c2c:	e59d0004 	ldr	r0, [sp, #4]
        102c30:	eb6b0161 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102c34:	e1a01006 	mov	r1, r6
        102c38:	e5950000 	ldr	r0, [r5]
        102c3c:	e5902000 	ldr	r2, [r0]
        102c40:	e59d0008 	ldr	r0, [sp, #8]
        102c44:	e5900000 	ldr	r0, [r0]
        102c48:	eb6b0dc2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        102c4c:	e52d606c 	str	r6, [sp, -#108]!
        102c50:	e28d0008 	add	r0, sp, #8	; 0x8
        102c54:	eb6abf46 	bl	1bb2974 <$setjmp>
        102c58:	e3300000 	teq	r0, #0	; 0x0
        102c5c:	1a000008 	bne	102c84 <TLOCallback::Callback(TLOCallbackInfo *)+0x1bc>
        102c60:	e1a0000d 	mov	r0, sp
        102c64:	eb6b7504 	bl	1be007c <$AddExceptionHandler>
        102c68:	e1a00007 	mov	r0, r7
        102c6c:	e28d1074 	add	r1, sp, #116	; 0x74
        102c70:	eb6b0156 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        102c74:	ea000008 	b	102c9c <TLOCallback::Callback(TLOCallbackInfo *)+0x1d4>
        102c78:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        102c7c:	00682758 	rsbeq	r2, r8, r8, asr r7
        102c80:	00681e70 	rsbeq	r1, r8, r0, ror lr
        102c84:	e59d0060 	ldr	r0, [sp, #96]
        102c88:	e28f1f09 	add	r1, pc, #36	; 0x24
        102c8c:	eb6b8140 	bl	1be3194 <$Subexception>
        102c90:	e3300000 	teq	r0, #0	; 0x0
        102c94:	01a0000d 	moveq	r0, sp
        102c98:	0b6b7d2d 	bleq	1be2154 <$NextHandler>
        102c9c:	e1a0000d 	mov	r0, sp
        102ca0:	eb6b7904 	bl	1be10b8 <$ExitHandler>
        102ca4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        102ca8:	e59d0008 	ldr	r0, [sp, #8]
        102cac:	eb6b0142 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        102cb0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        102cb4:	00000000 	andeq	r0, r0, r0
    */
}

