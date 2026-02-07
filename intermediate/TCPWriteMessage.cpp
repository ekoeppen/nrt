#include "include/TCPWriteMessage.h"

/**
 * Symbol: TCPWriteMessage::__ct(TEndpointPipe *)
 * Address: 000499a4
 */
TCPWriteMessage::TCPWriteMessage(TEndpointPipe *) {
    /*
         499a4:	e1a0c00d 	mov	ip, sp
         499a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         499ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         499b0:	e1a04001 	mov	r4, r1
         499b4:	e3300000 	teq	r0, #0	; 0x0
         499b8:	1a000003 	bne	499cc <TCPWriteMessage::__ct(TEndpointPipe *)+0x28>
         499bc:	e3a00004 	mov	r0, #4	; 0x4
         499c0:	eb6e135c 	bl	1bce738 <$__nw(unsigned int)>
         499c4:	e3300000 	teq	r0, #0	; 0x0
         499c8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         499cc:	e5804000 	str	r4, [r0]
         499d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCPWriteMessage::AddTuple(TCPTuple *)
 * Address: 000499d4
 */
TCPWriteMessage::AddTuple(TCPTuple *) {
    /*
         499d4:	e1a0c00d 	mov	ip, sp
         499d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         499dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         499e0:	e1a05000 	mov	r5, r0
         499e4:	e1a04001 	mov	r4, r1
         499e8:	e5910004 	ldr	r0, [r1, #4]
         499ec:	e2807008 	add	r7, r0, #8	; 0x8
         499f0:	e3a06000 	mov	r6, #0	; 0x0
         499f4:	e3a00000 	mov	r0, #0	; 0x0
         499f8:	e52d006c 	str	r0, [sp, -#108]!
         499fc:	e28d0008 	add	r0, sp, #8	; 0x8
         49a00:	eb6da3db 	bl	1bb2974 <$setjmp>
         49a04:	e3300000 	teq	r0, #0	; 0x0
         49a08:	1a00000a 	bne	49a38 <TCPWriteMessage::AddTuple(TCPTuple *)+0x64>
         49a0c:	e1a0000d 	mov	r0, sp
         49a10:	eb6e5999 	bl	1be007c <$AddExceptionHandler>
         49a14:	e1a02007 	mov	r2, r7
         49a18:	e1a01004 	mov	r1, r4
         49a1c:	e595c000 	ldr	ip, [r5]
         49a20:	e1a0000c 	mov	r0, ip
         49a24:	e3a03000 	mov	r3, #0	; 0x0
         49a28:	e59cc000 	ldr	ip, [ip]
         49a2c:	e1a0e00f 	mov	lr, pc
         49a30:	e28cf018 	add	pc, ip, #24	; 0x18
         49a34:	ea000008 	b	49a5c <TCPWriteMessage::AddTuple(TCPTuple *)+0x88>
         49a38:	e59d0060 	ldr	r0, [sp, #96]
         49a3c:	e59f1028 	ldr	r1, [pc, #28]	; 49a6c <TCPWriteMessage::AddTuple(TCPTuple *)+0x98>
         49a40:	e5911000 	ldr	r1, [r1]
         49a44:	eb6e65d2 	bl	1be3194 <$Subexception>
         49a48:	e3300000 	teq	r0, #0	; 0x0
         49a4c:	159d6064 	ldrne	r6, [sp, #100]
         49a50:	1a000001 	bne	49a5c <TCPWriteMessage::AddTuple(TCPTuple *)+0x88>
         49a54:	e1a0000d 	mov	r0, sp
         49a58:	eb6e61bd 	bl	1be2154 <$NextHandler>
         49a5c:	e1a0000d 	mov	r0, sp
         49a60:	eb6e5d94 	bl	1be10b8 <$ExitHandler>
         49a64:	e1a00006 	mov	r0, r6
         49a68:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         49a6c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TCPWriteMessage::SendMessage(void)
 * Address: 00049a70
 */
TCPWriteMessage::SendMessage(void) {
    /*
         49a70:	e1a0c00d 	mov	ip, sp
         49a74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         49a78:	e24cb004 	sub	fp, ip, #4	; 0x4
         49a7c:	e1a04000 	mov	r4, r0
         49a80:	e24dd008 	sub	sp, sp, #8	; 0x8
         49a84:	e1a0000d 	mov	r0, sp
         49a88:	eb66ee00 	bl	1a05290 <TCPEOMTuple::$__ct(void)>
         49a8c:	e1a0100d 	mov	r1, sp
         49a90:	e1a00004 	mov	r0, r4
         49a94:	eb66ee18 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
         49a98:	e1b05000 	movs	r5, r0
         49a9c:	0a000001 	beq	49aa8 <TCPWriteMessage::SendMessage(void)+0x38>
         49aa0:	e1a00005 	mov	r0, r5
         49aa4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         49aa8:	e3a00000 	mov	r0, #0	; 0x0
         49aac:	e52d006c 	str	r0, [sp, -#108]!
         49ab0:	e28d0008 	add	r0, sp, #8	; 0x8
         49ab4:	eb6da3ae 	bl	1bb2974 <$setjmp>
         49ab8:	e3300000 	teq	r0, #0	; 0x0
         49abc:	1a000006 	bne	49adc <TCPWriteMessage::SendMessage(void)+0x6c>
         49ac0:	e1a0000d 	mov	r0, sp
         49ac4:	eb6e596c 	bl	1be007c <$AddExceptionHandler>
         49ac8:	e5940000 	ldr	r0, [r4]
         49acc:	e5901000 	ldr	r1, [r0]
         49ad0:	e1a0e00f 	mov	lr, pc
         49ad4:	e281f020 	add	pc, r1, #32	; 0x20
         49ad8:	ea000008 	b	49b00 <TCPWriteMessage::SendMessage(void)+0x90>
         49adc:	e59d0060 	ldr	r0, [sp, #96]
         49ae0:	e59f1028 	ldr	r1, [pc, #28]	; 49b10 <TCPWriteMessage::SendMessage(void)+0xa0>
         49ae4:	e5911000 	ldr	r1, [r1]
         49ae8:	eb6e65a9 	bl	1be3194 <$Subexception>
         49aec:	e3300000 	teq	r0, #0	; 0x0
         49af0:	159d5064 	ldrne	r5, [sp, #100]
         49af4:	1a000001 	bne	49b00 <TCPWriteMessage::SendMessage(void)+0x90>
         49af8:	e1a0000d 	mov	r0, sp
         49afc:	eb6e6194 	bl	1be2154 <$NextHandler>
         49b00:	e1a0000d 	mov	r0, sp
         49b04:	eb6e5d6b 	bl	1be10b8 <$ExitHandler>
         49b08:	e28dd06c 	add	sp, sp, #108	; 0x6c
         49b0c:	eaffffe3 	b	49aa0 <TCPWriteMessage::SendMessage(void)+0x30>
         49b10:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

