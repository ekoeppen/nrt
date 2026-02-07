#include "include/TMessageQueue.h"

/**
 * Symbol: TMessageQueue::__ct(void)
 * Address: 00228b30
 */
TMessageQueue::TMessageQueue(void) {
    /*
        228b30:	e1a0c00d 	mov	ip, sp
        228b34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        228b38:	e24cb004 	sub	fp, ip, #4	; 0x4
        228b3c:	e1b04000 	movs	r4, r0
        228b40:	1a000003 	bne	228b54 <TMessageQueue::__ct(void)+0x24>
        228b44:	e3a00018 	mov	r0, #24	; 0x18
        228b48:	eb6696fa 	bl	1bce738 <$__nw(unsigned int)>
        228b4c:	e1b04000 	movs	r4, r0
        228b50:	0a000001 	beq	228b5c <TMessageQueue::__ct(void)+0x2c>
        228b54:	e1a00004 	mov	r0, r4
        228b58:	eb66edb3 	bl	1be422c <CList::$__ct(void)>
        228b5c:	e1a00004 	mov	r0, r4
        228b60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMessageQueue::EnqueueMessage(unsigned long, FourULongs *, char const *)
 * Address: 00228b64
 */
TMessageQueue::EnqueueMessage(unsigned long, FourULongs *, char const *) {
    /*
        228b64:	e1a0c00d 	mov	ip, sp
        228b68:	e92dd83f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, fp, ip, lr, pc}
        228b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        228b70:	e24dd014 	sub	sp, sp, #20	; 0x14
        228b74:	e51b0018 	ldr	r0, [fp, -#24]
        228b78:	eb6633cc 	bl	1bb5ab0 <$strlen>
        228b7c:	e2901001 	adds	r1, r0, #1	; 0x1
        228b80:	e58d1010 	str	r1, [sp, #16]
        228b84:	e1a00001 	mov	r0, r1
        228b88:	42611000 	rsbmi	r1, r1, #0	; 0x0
        228b8c:	e2011003 	and	r1, r1, #3	; 0x3
        228b90:	42611000 	rsbmi	r1, r1, #0	; 0x0
        228b94:	e3310000 	teq	r1, #0	; 0x0
        228b98:	0a000005 	beq	228bb4 <TMessageQueue::EnqueueMessage(unsigned long, FourULongs *, char const *)+0x50>
        228b9c:	e3500000 	cmp	r0, #0	; 0x0
        228ba0:	b2800003 	addlt	r0, r0, #3	; 0x3
        228ba4:	e1a00140 	mov	r0, r0, asr #2
        228ba8:	e3a01004 	mov	r1, #4	; 0x4
        228bac:	e0810100 	add	r0, r1, r0, lsl #2
        228bb0:	e58d0010 	str	r0, [sp, #16]
        228bb4:	e59d0010 	ldr	r0, [sp, #16]
        228bb8:	e2800018 	add	r0, r0, #24	; 0x18
        228bbc:	e58d0010 	str	r0, [sp, #16]
        228bc0:	eb66e559 	bl	1be212c <$NewHandle>
        228bc4:	e1b05000 	movs	r5, r0
        228bc8:	0a00001f 	beq	228c4c <TMessageQueue::EnqueueMessage(unsigned long, FourULongs *, char const *)+0xe8>
        228bcc:	e5951000 	ldr	r1, [r5]
        228bd0:	e1a04001 	mov	r4, r1
        228bd4:	e28d0010 	add	r0, sp, #16	; 0x10
        228bd8:	e3a02004 	mov	r2, #4	; 0x4
        228bdc:	eb66d8dc 	bl	1bdef54 <$BlockMove>
        228be0:	e2841004 	add	r1, r4, #4	; 0x4
        228be4:	e24b0020 	sub	r0, fp, #32	; 0x20
        228be8:	e3a02004 	mov	r2, #4	; 0x4
        228bec:	eb66d8d8 	bl	1bdef54 <$BlockMove>
        228bf0:	e51b001c 	ldr	r0, [fp, -#28]
        228bf4:	e3300000 	teq	r0, #0	; 0x0
        228bf8:	12841008 	addne	r1, r4, #8	; 0x8
        228bfc:	1a000006 	bne	228c1c <TMessageQueue::EnqueueMessage(unsigned long, FourULongs *, char const *)+0xb8>
        228c00:	e3a00000 	mov	r0, #0	; 0x0
        228c04:	e58d0000 	str	r0, [sp]
        228c08:	e58d0004 	str	r0, [sp, #4]
        228c0c:	e58d0008 	str	r0, [sp, #8]
        228c10:	e2841008 	add	r1, r4, #8	; 0x8
        228c14:	e58d000c 	str	r0, [sp, #12]
        228c18:	e1a0000d 	mov	r0, sp
        228c1c:	e3a02010 	mov	r2, #16	; 0x10
        228c20:	eb66d8cb 	bl	1bdef54 <$BlockMove>
        228c24:	e51b0018 	ldr	r0, [fp, -#24]
        228c28:	eb6633a0 	bl	1bb5ab0 <$strlen>
        228c2c:	e2802001 	add	r2, r0, #1	; 0x1
        228c30:	e2841018 	add	r1, r4, #24	; 0x18
        228c34:	e51b0018 	ldr	r0, [fp, -#24]
        228c38:	eb66d8c5 	bl	1bdef54 <$BlockMove>
        228c3c:	e1a02005 	mov	r2, r5
        228c40:	e3a01000 	mov	r1, #0	; 0x0
        228c44:	e51b0024 	ldr	r0, [fp, -#36]
        228c48:	eb670227 	bl	1be94ec <CList::$InsertAt(long, void *)>
        228c4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMessageQueue::DequeueMessage(long *, unsigned long *, FourULongs *, char *)
 * Address: 00228c5c
 */
TMessageQueue::DequeueMessage(long *, unsigned long *, FourULongs *, char *) {
    /*
        228c5c:	e1a0c00d 	mov	ip, sp
        228c60:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        228c64:	e24cb004 	sub	fp, ip, #4	; 0x4
        228c68:	e1a04000 	mov	r4, r0
        228c6c:	e1a07001 	mov	r7, r1
        228c70:	e1a06002 	mov	r6, r2
        228c74:	e1a05003 	mov	r5, r3
        228c78:	e59ba004 	ldr	sl, [fp, #4]
        228c7c:	e5900000 	ldr	r0, [r0]
        228c80:	e2401001 	sub	r1, r0, #1	; 0x1
        228c84:	e1a00004 	mov	r0, r4
        228c88:	eb66f5ad 	bl	1be6344 <CList::$At(long)>
        228c8c:	e1b09000 	movs	r9, r0
        228c90:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        228c94:	e1a01007 	mov	r1, r7
        228c98:	e5998000 	ldr	r8, [r9]
        228c9c:	e1a00008 	mov	r0, r8
        228ca0:	e3a02004 	mov	r2, #4	; 0x4
        228ca4:	eb66d8aa 	bl	1bdef54 <$BlockMove>
        228ca8:	e2880004 	add	r0, r8, #4	; 0x4
        228cac:	e1a01006 	mov	r1, r6
        228cb0:	e3a02004 	mov	r2, #4	; 0x4
        228cb4:	eb66d8a6 	bl	1bdef54 <$BlockMove>
        228cb8:	e2880008 	add	r0, r8, #8	; 0x8
        228cbc:	e1a01005 	mov	r1, r5
        228cc0:	e3a02010 	mov	r2, #16	; 0x10
        228cc4:	eb66d8a2 	bl	1bdef54 <$BlockMove>
        228cc8:	e2880018 	add	r0, r8, #24	; 0x18
        228ccc:	e1a05000 	mov	r5, r0
        228cd0:	eb663376 	bl	1bb5ab0 <$strlen>
        228cd4:	e2802001 	add	r2, r0, #1	; 0x1
        228cd8:	e1a00005 	mov	r0, r5
        228cdc:	e1a0100a 	mov	r1, sl
        228ce0:	eb66d89b 	bl	1bdef54 <$BlockMove>
        228ce4:	e1a00009 	mov	r0, r9
        228ce8:	eb66e0f0 	bl	1be10b0 <$DisposHandle>
        228cec:	e5940000 	ldr	r0, [r4]
        228cf0:	e2401001 	sub	r1, r0, #1	; 0x1
        228cf4:	e1a00004 	mov	r0, r4
        228cf8:	e3a02001 	mov	r2, #1	; 0x1
        228cfc:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        228d00:	ea670e4b 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: TMessageQueue::IsQueueEmpty(void)
 * Address: 00228d04
 */
TMessageQueue::IsQueueEmpty(void) {
    /*
        228d04:	e5900000 	ldr	r0, [r0]
        228d08:	e3300000 	teq	r0, #0	; 0x0
        228d0c:	13a00000 	movne	r0, #0	; 0x0
        228d10:	03a00001 	moveq	r0, #1	; 0x1
        228d14:	e20000ff 	and	r0, r0, #255	; 0xff
        228d18:	e1a0f00e 	mov	pc, lr
    */
}

