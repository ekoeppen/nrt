#include "include/TTaskQueue.h"

/**
 * Symbol: TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)
 * Address: 00359a30
 */
TTaskQueue::FindAndRemove(unsigned long, KernelObjectState) {
    /*
        359a30:	e1a0c00d 	mov	ip, sp
        359a34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        359a38:	e24cb004 	sub	fp, ip, #4	; 0x4
        359a3c:	e5904000 	ldr	r4, [r0]
        359a40:	e3340000 	teq	r4, #0	; 0x0
        359a44:	0a000008 	beq	359a6c <TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)+0x3c>
        359a48:	e594309c 	ldr	r3, [r4, #156]
        359a4c:	e1330001 	teq	r3, r1
        359a50:	1a000002 	bne	359a60 <TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)+0x30>
        359a54:	e1a01004 	mov	r1, r4
        359a58:	eb5ea9ea 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        359a5c:	ea000002 	b	359a6c <TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)+0x3c>
        359a60:	e5944094 	ldr	r4, [r4, #148]
        359a64:	e3340000 	teq	r4, #0	; 0x0
        359a68:	1afffff6 	bne	359a48 <TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)+0x18>
        359a6c:	e1a00004 	mov	r0, r4
        359a70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskQueue::__ct(void)
 * Address: 00359a74
 */
TTaskQueue::TTaskQueue(void) {
    /*
        359a74:	e1a0c00d 	mov	ip, sp
        359a78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        359a7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        359a80:	e3300000 	teq	r0, #0	; 0x0
        359a84:	1a000003 	bne	359a98 <TTaskQueue::__ct(void)+0x24>
        359a88:	e3a00008 	mov	r0, #8	; 0x8
        359a8c:	eb61d329 	bl	1bce738 <$__nw(unsigned int)>
        359a90:	e3300000 	teq	r0, #0	; 0x0
        359a94:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        359a98:	e3a01000 	mov	r1, #0	; 0x0
        359a9c:	e5801000 	str	r1, [r0]
        359aa0:	e5801004 	str	r1, [r0, #4]	; fField4
        359aa4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTaskQueue::CheckBeforeAdd(TTask *)
 * Address: 00359aa8
 */
TTaskQueue::CheckBeforeAdd(TTask *) {
    /*
        359aa8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskQueue::Add(TTask *, KernelObjectState, TTaskContainer *)
 * Address: 00359aac
 */
TTaskQueue::Add(TTask *, KernelObjectState, TTaskContainer *) {
    /*
        359aac:	e1a0c00d 	mov	ip, sp
        359ab0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        359ab4:	e24cb004 	sub	fp, ip, #4	; 0x4
        359ab8:	e1a05000 	mov	r5, r0
        359abc:	e1a04001 	mov	r4, r1
        359ac0:	e1a07002 	mov	r7, r2
        359ac4:	e1a06003 	mov	r6, r3
        359ac8:	e3a00000 	mov	r0, #0	; 0x0
        359acc:	e5810094 	str	r0, [r1, #148]
        359ad0:	e1a00005 	mov	r0, r5
        359ad4:	eb5e6bd1 	bl	1af4a20 <TTaskQueue::$CheckBeforeAdd(TTask *)>
        359ad8:	e5950000 	ldr	r0, [r5]
        359adc:	e3300000 	teq	r0, #0	; 0x0
        359ae0:	05854000 	streq	r4, [r5]
        359ae4:	05845098 	streq	r5, [r4, #152]
        359ae8:	0a000003 	beq	359afc <TTaskQueue::Add(TTask *, KernelObjectState, TTaskContainer *)+0x50>
        359aec:	e5950004 	ldr	r0, [r5, #4]	; fField4
        359af0:	e5a04094 	str	r4, [r0, #148]!
        359af4:	e5950004 	ldr	r0, [r5, #4]	; fField4
        359af8:	e5840098 	str	r0, [r4, #152]
        359afc:	e5a54004 	str	r4, [r5, #4]!	; fField4
        359b00:	e594006c 	ldr	r0, [r4, #108]
        359b04:	e1800007 	orr	r0, r0, r7
        359b08:	e5a4006c 	str	r0, [r4, #108]!
        359b0c:	e5a46024 	str	r6, [r4, #36]!
        359b10:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskQueue::Remove(KernelObjectState)
 * Address: 00359b14
 */
TTaskQueue::Remove(KernelObjectState) {
    /*
        359b14:	e92d4000 	stmdb	sp!, {lr}
        359b18:	e5902000 	ldr	r2, [r0]
        359b1c:	e3320000 	teq	r2, #0	; 0x0
        359b20:	0a00000b 	beq	359b54 <TTaskQueue::Remove(KernelObjectState)+0x40>
        359b24:	e592c094 	ldr	ip, [r2, #148]
        359b28:	e3a03000 	mov	r3, #0	; 0x0
        359b2c:	e580c000 	str	ip, [r0]
        359b30:	e33c0000 	teq	ip, #0	; 0x0
        359b34:	15ac3098 	strne	r3, [ip, #152]!
        359b38:	05a03004 	streq	r3, [r0, #4]!	; fField4
        359b3c:	e5823098 	str	r3, [r2, #152]
        359b40:	e5823094 	str	r3, [r2, #148]
        359b44:	e592006c 	ldr	r0, [r2, #108]
        359b48:	e1c00001 	bic	r0, r0, r1
        359b4c:	e582006c 	str	r0, [r2, #108]
        359b50:	e5823090 	str	r3, [r2, #144]
        359b54:	e1a00002 	mov	r0, r2
        359b58:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TTaskQueue::RemoveFromQueue(TTask *, KernelObjectState)
 * Address: 00359b5c
 */
TTaskQueue::RemoveFromQueue(TTask *, KernelObjectState) {
    /*
        359b5c:	e92d4010 	stmdb	sp!, {r4, lr}
        359b60:	e3a0c000 	mov	ip, #0	; 0x0
        359b64:	e3310000 	teq	r1, #0	; 0x0
        359b68:	1591306c 	ldrne	r3, [r1, #108]
        359b6c:	10033002 	andne	r3, r3, r2
        359b70:	13330000 	teqne	r3, #0	; 0x0
        359b74:	01a0000c 	moveq	r0, ip
        359b78:	08bd8010 	ldmeqia	sp!, {r4, pc}
        359b7c:	e281e094 	add	lr, r1, #148	; 0x94
        359b80:	e89e4008 	ldmia	lr, {r3, lr}
        359b84:	e5904000 	ldr	r4, [r0]
        359b88:	e1340001 	teq	r4, r1
        359b8c:	1a000006 	bne	359bac <TTaskQueue::RemoveFromQueue(TTask *, KernelObjectState)+0x50>
        359b90:	e590e004 	ldr	lr, [r0, #4]	; fField4
        359b94:	e13e0004 	teq	lr, r4
        359b98:	15803000 	strne	r3, [r0]
        359b9c:	15a3c098 	strne	ip, [r3, #152]!
        359ba0:	0580c000 	streq	ip, [r0]
        359ba4:	05a0c004 	streq	ip, [r0, #4]!	; fField4
        359ba8:	ea000004 	b	359bc0 <TTaskQueue::RemoveFromQueue(TTask *, KernelObjectState)+0x64>
        359bac:	e58e3094 	str	r3, [lr, #148]
        359bb0:	e5904004 	ldr	r4, [r0, #4]	; fField4
        359bb4:	e1340001 	teq	r4, r1
        359bb8:	15a3e098 	strne	lr, [r3, #152]!
        359bbc:	05a0e004 	streq	lr, [r0, #4]!	; fField4
        359bc0:	e581c098 	str	ip, [r1, #152]
        359bc4:	e581c094 	str	ip, [r1, #148]
        359bc8:	e591006c 	ldr	r0, [r1, #108]
        359bcc:	e1c00002 	bic	r0, r0, r2
        359bd0:	e5a1006c 	str	r0, [r1, #108]!
        359bd4:	e5a1c024 	str	ip, [r1, #36]!
        359bd8:	e3a00001 	mov	r0, #1	; 0x1
        359bdc:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TTaskQueue::Peek(void)
 * Address: 00359be0
 */
TTaskQueue::Peek(void) {
    /*
        359be0:	e5900000 	ldr	r0, [r0]
        359be4:	e1a0f00e 	mov	pc, lr
    */
}

