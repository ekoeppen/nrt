#include "include/TIrStream.h"

/**
 * Symbol: TIrStream::__ct(void)
 * Address: 000f8bc4
 */
TIrStream::TIrStream(void) {
    /*
         f8bc4:	e1a0c00d 	mov	ip, sp
         f8bc8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f8bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8bd0:	e3300000 	teq	r0, #0	; 0x0
         f8bd4:	1a000003 	bne	f8be8 <TIrStream::__ct(void)+0x24>
         f8bd8:	e3a00014 	mov	r0, #20	; 0x14
         f8bdc:	eb6b56d5 	bl	1bce738 <$__nw(unsigned int)>
         f8be0:	e3300000 	teq	r0, #0	; 0x0
         f8be4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         f8be8:	e59f1018 	ldr	r1, [pc, #18]	; f8c08 <TIrStream::__ct(void)+0x44>
         f8bec:	e5801000 	str	r1, [r0]
         f8bf0:	e3a01000 	mov	r1, #0	; 0x0
         f8bf4:	e5801004 	str	r1, [r0, #4]	; fField4
         f8bf8:	e5801008 	str	r1, [r0, #8]	; fField8
         f8bfc:	e580100c 	str	r1, [r0, #12]	; fField12
         f8c00:	e5801010 	str	r1, [r0, #16]	; fField16
         f8c04:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f8c08:	00020d98 	muleq	r2, r8, sp
    */
}

/**
 * Symbol: TIrStream::__dt(void)
 * Address: 000f8c0c
 */
TIrStream::~TIrStream(void) {
    /*
         f8c0c:	e1a0c00d 	mov	ip, sp
         f8c10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8c14:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8c18:	e1a04000 	mov	r4, r0
         f8c1c:	e1a05001 	mov	r5, r1
         f8c20:	e59f0030 	ldr	r0, [pc, #30]	; f8c58 <TIrStream::__dt(void)+0x4c>
         f8c24:	e5840000 	str	r0, [r4]
         f8c28:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f8c2c:	e3300000 	teq	r0, #0	; 0x0
         f8c30:	0a000003 	beq	f8c44 <TIrStream::__dt(void)+0x38>
         f8c34:	e3a01001 	mov	r1, #1	; 0x1
         f8c38:	eb6bb191 	bl	1be5284 <CList::$__dt(void)>
         f8c3c:	e3a00000 	mov	r0, #0	; 0x0
         f8c40:	e5840010 	str	r0, [r4, #16]	; fField16
         f8c44:	e3150001 	tst	r5, #1	; 0x1
         f8c48:	11a00004 	movne	r0, r4
         f8c4c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f8c50:	1a6b52a2 	bne	1bcd6e0 <$__dl(void *)>
         f8c54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f8c58:	00020d98 	muleq	r2, r8, sp
    */
}

/**
 * Symbol: TIrStream::Init(TIrGlue *)
 * Address: 000f8c5c
 */
TIrStream::Init(TIrGlue *) {
    /*
         f8c5c:	e1a0c00d 	mov	ip, sp
         f8c60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8c64:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8c68:	e1a04000 	mov	r4, r0
         f8c6c:	e5801004 	str	r1, [r0, #4]	; fField4
         f8c70:	e3a00000 	mov	r0, #0	; 0x0
         f8c74:	eb6bad6c 	bl	1be422c <CList::$__ct(void)>
         f8c78:	e5a40010 	str	r0, [r4, #16]!	; fField16
         f8c7c:	e3300000 	teq	r0, #0	; 0x0
         f8c80:	13a00000 	movne	r0, #0	; 0x0
         f8c84:	03a000a8 	moveq	r0, #168	; 0xa8
         f8c88:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f8c8c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrStream::EnqueueEvent(TIrEvent *)
 * Address: 000f8c90
 */
TIrStream::EnqueueEvent(TIrEvent *) {
    /*
         f8c90:	e1a0c00d 	mov	ip, sp
         f8c94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8c98:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8c9c:	e1a04000 	mov	r4, r0
         f8ca0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f8ca4:	e3300000 	teq	r0, #0	; 0x0
         f8ca8:	05841008 	streq	r1, [r4, #8]	; fField8
         f8cac:	0a000003 	beq	f8cc0 <TIrStream::EnqueueEvent(TIrEvent *)+0x30>
         f8cb0:	e1a02001 	mov	r2, r1
         f8cb4:	e3a01000 	mov	r1, #0	; 0x0
         f8cb8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f8cbc:	eb6bc20a 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f8cc0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         f8cc4:	e1a01004 	mov	r1, r4
         f8cc8:	eb64e2f6 	bl	1a318a8 <TIrGlue::$NextStateMachine(TIrStream *)>
         f8ccc:	e3a00000 	mov	r0, #0	; 0x0
         f8cd0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrStream::DequeueEvent(void)
 * Address: 000f8cd4
 */
TIrStream::DequeueEvent(void) {
    /*
         f8cd4:	e1a0c00d 	mov	ip, sp
         f8cd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8ce0:	e1a04000 	mov	r4, r0
         f8ce4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f8ce8:	e584000c 	str	r0, [r4, #12]	; fField12
         f8cec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f8cf0:	e5901000 	ldr	r1, [r0]
         f8cf4:	e2411001 	sub	r1, r1, #1	; 0x1
         f8cf8:	eb6bb591 	bl	1be6344 <CList::$At(long)>
         f8cfc:	e5840008 	str	r0, [r4, #8]	; fField8
         f8d00:	e3300000 	teq	r0, #0	; 0x0
         f8d04:	0a000004 	beq	f8d1c <TIrStream::DequeueEvent(void)+0x48>
         f8d08:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         f8d0c:	e5901000 	ldr	r1, [r0]
         f8d10:	e2411001 	sub	r1, r1, #1	; 0x1
         f8d14:	e3a02001 	mov	r2, #1	; 0x1
         f8d18:	eb6bce45 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f8d1c:	e3a00000 	mov	r0, #0	; 0x0
         f8d20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrStream::ProcessNextEvent(void)
 * Address: 000f8d24
 */
TIrStream::ProcessNextEvent(void) {
    /*
         f8d24:	e1a0c00d 	mov	ip, sp
         f8d28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8d30:	e1a04000 	mov	r4, r0
         f8d34:	e1a00004 	mov	r0, r4
         f8d38:	eb64fbab 	bl	1a37bec <TIrStream::$DequeueEvent(void)>
         f8d3c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f8d40:	e3300000 	teq	r0, #0	; 0x0
         f8d44:	03a00000 	moveq	r0, #0	; 0x0
         f8d48:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f8d4c:	e5d01000 	ldrb	r1, [r0]
         f8d50:	e1a00004 	mov	r0, r4
         f8d54:	e5942000 	ldr	r2, [r4]
         f8d58:	e1a0e00f 	mov	lr, pc
         f8d5c:	e282f004 	add	pc, r2, #4	; 0x4
         f8d60:	eafffff3 	b	f8d34 <TIrStream::ProcessNextEvent(void)+0x10>
    */
}

