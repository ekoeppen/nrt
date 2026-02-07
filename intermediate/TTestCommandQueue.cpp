#include "include/TTestCommandQueue.h"

/**
 * Symbol: TTestCommandQueue::__ct(TStore *)
 * Address: 0022aa04
 */
TTestCommandQueue::TTestCommandQueue(TStore *) {
    /*
        22aa04:	e1a0c00d 	mov	ip, sp
        22aa08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22aa0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22aa10:	e1b04000 	movs	r4, r0
        22aa14:	e1a05001 	mov	r5, r1
        22aa18:	1a000003 	bne	22aa2c <TTestCommandQueue::__ct(TStore *)+0x28>
        22aa1c:	e3a0001c 	mov	r0, #28	; 0x1c
        22aa20:	eb668f44 	bl	1bce738 <$__nw(unsigned int)>
        22aa24:	e1b04000 	movs	r4, r0
        22aa28:	0a000002 	beq	22aa38 <TTestCommandQueue::__ct(TStore *)+0x34>
        22aa2c:	e1a00004 	mov	r0, r4
        22aa30:	eb66e5fd 	bl	1be422c <CList::$__ct(void)>
        22aa34:	e5845018 	str	r5, [r4, #24]	; fField24
        22aa38:	e1a00004 	mov	r0, r4
        22aa3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *)
 * Address: 0022aad0
 */
TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *) {
    /*
        22aad0:	e1a0c00d 	mov	ip, sp
        22aad4:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
        22aad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22aadc:	e24dd004 	sub	sp, sp, #4	; 0x4
        22aae0:	e3a04000 	mov	r4, #0	; 0x0
        22aae4:	e51b0020 	ldr	r0, [fp, -#32]
        22aae8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22aaec:	e1a0200d 	mov	r2, sp
        22aaf0:	e3a010e4 	mov	r1, #228	; 0xe4
        22aaf4:	eb635545 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        22aaf8:	e3300000 	teq	r0, #0	; 0x0
        22aafc:	1a000025 	bne	22ab98 <TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *)+0xc8>
        22ab00:	e3a03004 	mov	r3, #4	; 0x4
        22ab04:	e92d0008 	stmdb	sp!, {r3}
        22ab08:	e51b0020 	ldr	r0, [fp, -#32]
        22ab0c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ab10:	e24b301c 	sub	r3, fp, #28	; 0x1c
        22ab14:	e1a02004 	mov	r2, r4
        22ab18:	e59d1004 	ldr	r1, [sp, #4]
        22ab1c:	eb637e77 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ab20:	e28dd004 	add	sp, sp, #4	; 0x4
        22ab24:	e3300000 	teq	r0, #0	; 0x0
        22ab28:	1a00001a 	bne	22ab98 <TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *)+0xc8>
        22ab2c:	e3a02004 	mov	r2, #4	; 0x4
        22ab30:	e3a03060 	mov	r3, #96	; 0x60
        22ab34:	e92d0008 	stmdb	sp!, {r3}
        22ab38:	e51b0020 	ldr	r0, [fp, -#32]
        22ab3c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ab40:	e51b3018 	ldr	r3, [fp, -#24]	; fField24
        22ab44:	e59d1004 	ldr	r1, [sp, #4]
        22ab48:	eb637e6c 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ab4c:	e28dd004 	add	sp, sp, #4	; 0x4
        22ab50:	e3300000 	teq	r0, #0	; 0x0
        22ab54:	1a00000f 	bne	22ab98 <TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *)+0xc8>
        22ab58:	e3a02064 	mov	r2, #100	; 0x64
        22ab5c:	e3a03080 	mov	r3, #128	; 0x80
        22ab60:	e92d0008 	stmdb	sp!, {r3}
        22ab64:	e51b0020 	ldr	r0, [fp, -#32]
        22ab68:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ab6c:	e51b3014 	ldr	r3, [fp, -#20]
        22ab70:	e59d1004 	ldr	r1, [sp, #4]
        22ab74:	eb637e61 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ab78:	e28dd004 	add	sp, sp, #4	; 0x4
        22ab7c:	e3300000 	teq	r0, #0	; 0x0
        22ab80:	1a000004 	bne	22ab98 <TTestCommandQueue::EnqueueTestCommand(unsigned long, char *, char *)+0xc8>
        22ab84:	e51b0020 	ldr	r0, [fp, -#32]
        22ab88:	e3a01000 	mov	r1, #0	; 0x0
        22ab8c:	e59d2000 	ldr	r2, [sp]
        22ab90:	eb66fa55 	bl	1be94ec <CList::$InsertAt(long, void *)>
        22ab94:	e3a00000 	mov	r0, #0	; 0x0
        22ab98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTestCommandQueue::DequeueTestCommand(unsigned long *, char *, char *)
 * Address: 0022ab9c
 */
TTestCommandQueue::DequeueTestCommand(unsigned long *, char *, char *) {
    /*
        22ab9c:	e1a0c00d 	mov	ip, sp
        22aba0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        22aba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22aba8:	e1a04000 	mov	r4, r0
        22abac:	e1a07001 	mov	r7, r1
        22abb0:	e1a06002 	mov	r6, r2
        22abb4:	e1a05003 	mov	r5, r3
        22abb8:	e3a09000 	mov	r9, #0	; 0x0
        22abbc:	e5900000 	ldr	r0, [r0]
        22abc0:	e2401001 	sub	r1, r0, #1	; 0x1
        22abc4:	e1a00004 	mov	r0, r4
        22abc8:	eb66eddd 	bl	1be6344 <CList::$At(long)>
        22abcc:	e1a08000 	mov	r8, r0
        22abd0:	e3a03004 	mov	r3, #4	; 0x4
        22abd4:	e92d0008 	stmdb	sp!, {r3}
        22abd8:	e1a03007 	mov	r3, r7
        22abdc:	e1a02009 	mov	r2, r9
        22abe0:	e1a01008 	mov	r1, r8
        22abe4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22abe8:	eb635d54 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22abec:	e28dd004 	add	sp, sp, #4	; 0x4
        22abf0:	e3300000 	teq	r0, #0	; 0x0
        22abf4:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22abf8:	e3a02004 	mov	r2, #4	; 0x4
        22abfc:	e3a03060 	mov	r3, #96	; 0x60
        22ac00:	e92d0008 	stmdb	sp!, {r3}
        22ac04:	e1a03006 	mov	r3, r6
        22ac08:	e1a01008 	mov	r1, r8
        22ac0c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22ac10:	eb635d4a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22ac14:	e28dd004 	add	sp, sp, #4	; 0x4
        22ac18:	e3300000 	teq	r0, #0	; 0x0
        22ac1c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22ac20:	e3a02064 	mov	r2, #100	; 0x64
        22ac24:	e3a03080 	mov	r3, #128	; 0x80
        22ac28:	e92d0008 	stmdb	sp!, {r3}
        22ac2c:	e1a03005 	mov	r3, r5
        22ac30:	e1a01008 	mov	r1, r8
        22ac34:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22ac38:	eb635d40 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22ac3c:	e28dd004 	add	sp, sp, #4	; 0x4
        22ac40:	e3300000 	teq	r0, #0	; 0x0
        22ac44:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22ac48:	e5940000 	ldr	r0, [r4]
        22ac4c:	e2401001 	sub	r1, r0, #1	; 0x1
        22ac50:	e1a00004 	mov	r0, r4
        22ac54:	e3a02001 	mov	r2, #1	; 0x1
        22ac58:	eb670675 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        22ac5c:	e1a01008 	mov	r1, r8
        22ac60:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        22ac64:	eb632fb3 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        22ac68:	e3a00000 	mov	r0, #0	; 0x0
        22ac6c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

