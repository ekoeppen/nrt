#include "include/TADSPBuffer.h"

/**
 * Symbol: TADSPBuffer::__ct(void)
 * Address: 002a966c
 */
TADSPBuffer::TADSPBuffer(void) {
    /*
        2a966c:	e1a0c00d 	mov	ip, sp
        2a9670:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9674:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9678:	e1b04000 	movs	r4, r0
        2a967c:	1a000003 	bne	2a9690 <TADSPBuffer::__ct(void)+0x24>
        2a9680:	e3a0004c 	mov	r0, #76	; 0x4c
        2a9684:	eb64942b 	bl	1bce738 <$__nw(unsigned int)>
        2a9688:	e1b04000 	movs	r4, r0
        2a968c:	0a00000a 	beq	2a96bc <TADSPBuffer::__ct(void)+0x50>
        2a9690:	e3a05000 	mov	r5, #0	; 0x0
        2a9694:	e5c45004 	strb	r5, [r4, #4]
        2a9698:	e5845000 	str	r5, [r4]
        2a969c:	e2841008 	add	r1, r4, #8	; 0x8
        2a96a0:	e1a00004 	mov	r0, r4
        2a96a4:	eb64acde 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        2a96a8:	e284000c 	add	r0, r4, #12	; 0xc
        2a96ac:	eb64e6c5 	bl	1be31c8 <CRingBuffer::$__ct(void)>
        2a96b0:	e2840030 	add	r0, r4, #48	; 0x30
        2a96b4:	eb64eadc 	bl	1be422c <CList::$__ct(void)>
        2a96b8:	e5c45048 	strb	r5, [r4, #72]	; fField72
        2a96bc:	e1a00004 	mov	r0, r4
        2a96c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPBuffer::__dt(void)
 * Address: 002a96c4
 */
TADSPBuffer::~TADSPBuffer(void) {
    /*
        2a96c4:	e1a0c00d 	mov	ip, sp
        2a96c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a96cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a96d0:	e1a04000 	mov	r4, r0
        2a96d4:	e1a05001 	mov	r5, r1
        2a96d8:	e2800030 	add	r0, r0, #48	; 0x30
        2a96dc:	e3a01000 	mov	r1, #0	; 0x0
        2a96e0:	eb64eee7 	bl	1be5284 <CList::$__dt(void)>
        2a96e4:	e284000c 	add	r0, r4, #12	; 0xc
        2a96e8:	e3a01000 	mov	r1, #0	; 0x0
        2a96ec:	eb64ead9 	bl	1be4258 <CRingBuffer::$__dt(void)>
        2a96f0:	e1a00004 	mov	r0, r4
        2a96f4:	e3a01000 	mov	r1, #0	; 0x0
        2a96f8:	eb649408 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        2a96fc:	e3150001 	tst	r5, #1	; 0x1
        2a9700:	11a00004 	movne	r0, r4
        2a9704:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2a9708:	1a648ff4 	bne	1bcd6e0 <$__dl(void *)>
        2a970c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPBuffer::Init(long)
 * Address: 002a9b4c
 */
TADSPBuffer::Init(long) {
    /*
        2a9b4c:	e1a0c00d 	mov	ip, sp
        2a9b50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a9b54:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9b58:	e1a04000 	mov	r4, r0
        2a9b5c:	e280000c 	add	r0, r0, #12	; 0xc
        2a9b60:	eb64fe4c 	bl	1be9498 <CRingBuffer::$Init(long)>
        2a9b64:	e3300000 	teq	r0, #0	; 0x0
        2a9b68:	05d41048 	ldreqb	r1, [r4, #72]	; fField72
        2a9b6c:	03310000 	teqeq	r1, #0	; 0x0
        2a9b70:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2a9b74:	e1a00004 	mov	r0, r4
        2a9b78:	eb64afce 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        2a9b7c:	e3300000 	teq	r0, #0	; 0x0
        2a9b80:	03a01001 	moveq	r1, #1	; 0x1
        2a9b84:	05c41048 	streqb	r1, [r4, #72]	; fField72
        2a9b88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)
 * Address: 002a9b8c
 */
TADSPBuffer::CheckEOM(unsigned long, long *, int *, int) {
    /*
        2a9b8c:	e1a0c00d 	mov	ip, sp
        2a9b90:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2a9b94:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a9b98:	e24cb014 	sub	fp, ip, #20	; 0x14
        2a9b9c:	e1a04001 	mov	r4, r1
        2a9ba0:	e3a08000 	mov	r8, #0	; 0x0
        2a9ba4:	e3a01000 	mov	r1, #0	; 0x0
        2a9ba8:	e28ba010 	add	sl, fp, #16	; 0x10
        2a9bac:	e89a0408 	ldmia	sl, {r3, sl}
        2a9bb0:	e2800030 	add	r0, r0, #48	; 0x30
        2a9bb4:	e1a06000 	mov	r6, r0
        2a9bb8:	e5831000 	str	r1, [r3]
        2a9bbc:	e5909000 	ldr	r9, [r0]
        2a9bc0:	e3590000 	cmp	r9, #0	; 0x0
        2a9bc4:	da000021 	ble	2a9c50 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0xc4>
        2a9bc8:	e3a05000 	mov	r5, #0	; 0x0
        2a9bcc:	e33a0000 	teq	sl, #0	; 0x0
        2a9bd0:	1a000020 	bne	2a9c58 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0xcc>
        2a9bd4:	e3a07000 	mov	r7, #0	; 0x0
        2a9bd8:	e3590000 	cmp	r9, #0	; 0x0
        2a9bdc:	da000009 	ble	2a9c08 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0x7c>
        2a9be0:	e1a00006 	mov	r0, r6
        2a9be4:	e1a01007 	mov	r1, r7
        2a9be8:	eb64f1d5 	bl	1be6344 <CList::$At(long)>
        2a9bec:	e1500004 	cmp	r0, r4
        2a9bf0:	9a000001 	bls	2a9bfc <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0x70>
        2a9bf4:	e1a05000 	mov	r5, r0
        2a9bf8:	ea000002 	b	2a9c08 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0x7c>
        2a9bfc:	e2877001 	add	r7, r7, #1	; 0x1
        2a9c00:	e1570009 	cmp	r7, r9
        2a9c04:	bafffff5 	blt	2a9be0 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0x54>
        2a9c08:	e59b200c 	ldr	r2, [fp, #12]
        2a9c0c:	e5920000 	ldr	r0, [r2]
        2a9c10:	e0840000 	add	r0, r4, r0
        2a9c14:	e1500005 	cmp	r0, r5
        2a9c18:	3a00000c 	bcc	2a9c50 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0xc4>
        2a9c1c:	e3a00001 	mov	r0, #1	; 0x1
        2a9c20:	e59b3010 	ldr	r3, [fp, #16]
        2a9c24:	e5830000 	str	r0, [r3]
        2a9c28:	e0450004 	sub	r0, r5, r4
        2a9c2c:	e59b200c 	ldr	r2, [fp, #12]
        2a9c30:	e33a0000 	teq	sl, #0	; 0x0
        2a9c34:	e5820000 	str	r0, [r2]
        2a9c38:	0a000004 	beq	2a9c50 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0xc4>
        2a9c3c:	e1a00006 	mov	r0, r6
        2a9c40:	e3a02001 	mov	r2, #1	; 0x1
        2a9c44:	e3a01000 	mov	r1, #0	; 0x0
        2a9c48:	eb650a79 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2a9c4c:	e1a08000 	mov	r8, r0
        2a9c50:	e1a00008 	mov	r0, r8
        2a9c54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2a9c58:	e1a00006 	mov	r0, r6
        2a9c5c:	e3a01000 	mov	r1, #0	; 0x0
        2a9c60:	eb64f1b7 	bl	1be6344 <CList::$At(long)>
        2a9c64:	eaffffe2 	b	2a9bf4 <TADSPBuffer::CheckEOM(unsigned long, long *, int *, int)+0x68>
    */
}

/**
 * Symbol: TADSPBuffer::CountEOM(unsigned long, int *, int)
 * Address: 002a9c68
 */
TADSPBuffer::CountEOM(unsigned long, int *, int) {
    /*
        2a9c68:	e1a0c00d 	mov	ip, sp
        2a9c6c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2a9c70:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9c74:	e1a06001 	mov	r6, r1
        2a9c78:	e1a04002 	mov	r4, r2
        2a9c7c:	e1a05003 	mov	r5, r3
        2a9c80:	e3a07000 	mov	r7, #0	; 0x0
        2a9c84:	e2800030 	add	r0, r0, #48	; 0x30
        2a9c88:	e1a08000 	mov	r8, r0
        2a9c8c:	e5827000 	str	r7, [r2]
        2a9c90:	e5900000 	ldr	r0, [r0]
        2a9c94:	e3500000 	cmp	r0, #0	; 0x0
        2a9c98:	da000025 	ble	2a9d34 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0xcc>
        2a9c9c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2a9ca0:	e1a01008 	mov	r1, r8
        2a9ca4:	e1a0000d 	mov	r0, sp
        2a9ca8:	eb64e54d 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        2a9cac:	e1a0000d 	mov	r0, sp
        2a9cb0:	eb64f5d0 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        2a9cb4:	e1a09000 	mov	r9, r0
        2a9cb8:	e1a0000d 	mov	r0, sp
        2a9cbc:	eb65022d 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9cc0:	e3300000 	teq	r0, #0	; 0x0
        2a9cc4:	0a000016 	beq	2a9d24 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0xbc>
        2a9cc8:	e1560009 	cmp	r6, r9
        2a9ccc:	9a000014 	bls	2a9d24 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0xbc>
        2a9cd0:	e5940000 	ldr	r0, [r4]
        2a9cd4:	e2800001 	add	r0, r0, #1	; 0x1
        2a9cd8:	e3350000 	teq	r5, #0	; 0x0
        2a9cdc:	e5840000 	str	r0, [r4]
        2a9ce0:	0a000008 	beq	2a9d08 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0xa0>
        2a9ce4:	e1a07008 	mov	r7, r8
        2a9ce8:	e1a0000d 	mov	r0, sp
        2a9cec:	eb64f5b2 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
        2a9cf0:	e1a01000 	mov	r1, r0
        2a9cf4:	e1a00007 	mov	r0, r7
        2a9cf8:	e3a02001 	mov	r2, #1	; 0x1
        2a9cfc:	eb650a4c 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2a9d00:	e1b07000 	movs	r7, r0
        2a9d04:	1a000006 	bne	2a9d24 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0xbc>
        2a9d08:	e1a0000d 	mov	r0, sp
        2a9d0c:	eb650623 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        2a9d10:	e1a09000 	mov	r9, r0
        2a9d14:	e1a0000d 	mov	r0, sp
        2a9d18:	eb650216 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9d1c:	e3300000 	teq	r0, #0	; 0x0
        2a9d20:	1affffe8 	bne	2a9cc8 <TADSPBuffer::CountEOM(unsigned long, int *, int)+0x60>
        2a9d24:	e1a0000d 	mov	r0, sp
        2a9d28:	e3a01000 	mov	r1, #0	; 0x0
        2a9d2c:	eb64e94d 	bl	1be4268 <CArrayIterator::$__dt(void)>
        2a9d30:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2a9d34:	e1a00007 	mov	r0, r7
        2a9d38:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

