#include "include/TADSPRecvBuffer.h"

/**
 * Symbol: TADSPRecvBuffer::__ct(void)
 * Address: 002a9d3c
 */
TADSPRecvBuffer::TADSPRecvBuffer(void) {
    /*
        2a9d3c:	e1a0c00d 	mov	ip, sp
        2a9d40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a9d44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9d48:	e1b04000 	movs	r4, r0
        2a9d4c:	1a000003 	bne	2a9d60 <TADSPRecvBuffer::__ct(void)+0x24>
        2a9d50:	e3a00054 	mov	r0, #84	; 0x54
        2a9d54:	eb649277 	bl	1bce738 <$__nw(unsigned int)>
        2a9d58:	e1b04000 	movs	r4, r0
        2a9d5c:	0a000004 	beq	2a9d74 <TADSPRecvBuffer::__ct(void)+0x38>
        2a9d60:	e1a00004 	mov	r0, r4
        2a9d64:	eb5f1ecb 	bl	1a71898 <TADSPBuffer::$__ct(void)>
        2a9d68:	e3a00000 	mov	r0, #0	; 0x0
        2a9d6c:	e584004c 	str	r0, [r4, #76]	; fField76
        2a9d70:	e5840050 	str	r0, [r4, #80]	; fField80
        2a9d74:	e1a00004 	mov	r0, r4
        2a9d78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPRecvBuffer::__dt(void)
 * Address: 002a9d7c
 */
TADSPRecvBuffer::~TADSPRecvBuffer(void) {
    /*
        2a9d7c:	e1a0c00d 	mov	ip, sp
        2a9d80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9d84:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9d88:	e1a04000 	mov	r4, r0
        2a9d8c:	e1a05001 	mov	r5, r1
        2a9d90:	e3a01000 	mov	r1, #0	; 0x0
        2a9d94:	eb5f26fa 	bl	1a73984 <TADSPBuffer::$__dt(void)>
        2a9d98:	e3150001 	tst	r5, #1	; 0x1
        2a9d9c:	11a00004 	movne	r0, r4
        2a9da0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2a9da4:	1a648e4d 	bne	1bcd6e0 <$__dl(void *)>
        2a9da8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPRecvBuffer::Getn(void *, long *, int *)
 * Address: 002a9dac
 */
TADSPRecvBuffer::Getn(void *, long *, int *) {
    /*
        2a9dac:	e1a0c00d 	mov	ip, sp
        2a9db0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2a9db4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9db8:	e1a04000 	mov	r4, r0
        2a9dbc:	e1a07001 	mov	r7, r1
        2a9dc0:	e1a05002 	mov	r5, r2
        2a9dc4:	e1a06003 	mov	r6, r3
        2a9dc8:	e3a00000 	mov	r0, #0	; 0x0
        2a9dcc:	e5921000 	ldr	r1, [r2]
        2a9dd0:	e3510000 	cmp	r1, #0	; 0x0
        2a9dd4:	d3a01000 	movle	r1, #0	; 0x0
        2a9dd8:	d5851000 	strle	r1, [r5]
        2a9ddc:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2a9de0:	e1a00004 	mov	r0, r4
        2a9de4:	e3a01000 	mov	r1, #0	; 0x0
        2a9de8:	eb649259 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a9dec:	e3300000 	teq	r0, #0	; 0x0
        2a9df0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2a9df4:	e3a03001 	mov	r3, #1	; 0x1
        2a9df8:	e92d0008 	stmdb	sp!, {r3}
        2a9dfc:	e1a03006 	mov	r3, r6
        2a9e00:	e1a02005 	mov	r2, r5
        2a9e04:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a9e08:	e1a00004 	mov	r0, r4
        2a9e0c:	eb5f60be 	bl	1a8210c <TADSPBuffer::$CheckEOM(unsigned long, long *, int *, int)>
        2a9e10:	e28dd004 	add	sp, sp, #4	; 0x4
        2a9e14:	e284300c 	add	r3, r4, #12	; 0xc
        2a9e18:	e1a01007 	mov	r1, r7
        2a9e1c:	e1a00003 	mov	r0, r3
        2a9e20:	e5952000 	ldr	r2, [r5]
        2a9e24:	e5933000 	ldr	r3, [r3]
        2a9e28:	e1a0e00f 	mov	lr, pc
        2a9e2c:	e283f014 	add	pc, r3, #20	; 0x14
        2a9e30:	e5850000 	str	r0, [r5]
        2a9e34:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a9e38:	e0810000 	add	r0, r1, r0
        2a9e3c:	e5840050 	str	r0, [r4, #80]	; fField80
        2a9e40:	e5961000 	ldr	r1, [r6]
        2a9e44:	e3310000 	teq	r1, #0	; 0x0
        2a9e48:	12800001 	addne	r0, r0, #1	; 0x1
        2a9e4c:	15840050 	strne	r0, [r4, #80]	; fField80
        2a9e50:	e1a00004 	mov	r0, r4
        2a9e54:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2a9e58:	ea64bf8e 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
    */
}

/**
 * Symbol: TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)
 * Address: 002a9e5c
 */
TADSPRecvBuffer::Putn(void const *, long, unsigned long, int) {
    /*
        2a9e5c:	e1a0c00d 	mov	ip, sp
        2a9e60:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2a9e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9e68:	e1a04000 	mov	r4, r0
        2a9e6c:	e1a07001 	mov	r7, r1
        2a9e70:	e1a06002 	mov	r6, r2
        2a9e74:	e1a05003 	mov	r5, r3
        2a9e78:	e3a08000 	mov	r8, #0	; 0x0
        2a9e7c:	e3520000 	cmp	r2, #0	; 0x0
        2a9e80:	e59b9004 	ldr	r9, [fp, #4]
        2a9e84:	da000028 	ble	2a9f2c <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xd0>
        2a9e88:	e1a00004 	mov	r0, r4
        2a9e8c:	e3a01000 	mov	r1, #0	; 0x0
        2a9e90:	eb64922f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a9e94:	e3300000 	teq	r0, #0	; 0x0
        2a9e98:	1a000021 	bne	2a9f24 <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xc8>
        2a9e9c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2a9ea0:	e1500005 	cmp	r0, r5
        2a9ea4:	3a00001b 	bcc	2a9f18 <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xbc>
        2a9ea8:	e0851006 	add	r1, r5, r6
        2a9eac:	e1510000 	cmp	r1, r0
        2a9eb0:	9a000018 	bls	2a9f18 <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xbc>
        2a9eb4:	e0400005 	sub	r0, r0, r5
        2a9eb8:	e0871000 	add	r1, r7, r0
        2a9ebc:	e0462000 	sub	r2, r6, r0
        2a9ec0:	e1a05002 	mov	r5, r2
        2a9ec4:	e284300c 	add	r3, r4, #12	; 0xc
        2a9ec8:	e1a00003 	mov	r0, r3
        2a9ecc:	e5933000 	ldr	r3, [r3]
        2a9ed0:	e1a0e00f 	mov	lr, pc
        2a9ed4:	e283f020 	add	pc, r3, #32	; 0x20
        2a9ed8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2a9edc:	e0811000 	add	r1, r1, r0
        2a9ee0:	e3390000 	teq	r9, #0	; 0x0
        2a9ee4:	e584104c 	str	r1, [r4, #76]	; fField76
        2a9ee8:	0a00000b 	beq	2a9f1c <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xc0>
        2a9eec:	e1350000 	teq	r5, r0
        2a9ef0:	1a000009 	bne	2a9f1c <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xc0>
        2a9ef4:	e2840030 	add	r0, r4, #48	; 0x30
        2a9ef8:	e1a02001 	mov	r2, r1
        2a9efc:	e5901000 	ldr	r1, [r0]
        2a9f00:	eb64fd79 	bl	1be94ec <CList::$InsertAt(long, void *)>
        2a9f04:	e1a08000 	mov	r8, r0
        2a9f08:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2a9f0c:	e2800001 	add	r0, r0, #1	; 0x1
        2a9f10:	e584004c 	str	r0, [r4, #76]	; fField76
        2a9f14:	ea000000 	b	2a9f1c <TADSPRecvBuffer::Putn(void const *, long, unsigned long, int)+0xc0>
        2a9f18:	e3e08000 	mvn	r8, #0	; 0x0
        2a9f1c:	e1a00004 	mov	r0, r4
        2a9f20:	eb64bf5c 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a9f24:	e3300000 	teq	r0, #0	; 0x0
        2a9f28:	11a08000 	movne	r8, r0
        2a9f2c:	e1a00008 	mov	r0, r8
        2a9f30:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPRecvBuffer::RecvWdw(void)
 * Address: 002a9f34
 */
TADSPRecvBuffer::RecvWdw(void) {
    /*
        2a9f34:	e1a0c00d 	mov	ip, sp
        2a9f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9f40:	e1a04000 	mov	r4, r0
        2a9f44:	e3a05000 	mov	r5, #0	; 0x0
        2a9f48:	e3a01000 	mov	r1, #0	; 0x0
        2a9f4c:	eb649200 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a9f50:	e3300000 	teq	r0, #0	; 0x0
        2a9f54:	1a000006 	bne	2a9f74 <TADSPRecvBuffer::RecvWdw(void)+0x40>
        2a9f58:	e284000c 	add	r0, r4, #12	; 0xc
        2a9f5c:	e5901000 	ldr	r1, [r0]
        2a9f60:	e1a0e00f 	mov	lr, pc
        2a9f64:	e281f03c 	add	pc, r1, #60	; 0x3c
        2a9f68:	e1a05000 	mov	r5, r0
        2a9f6c:	e1a00004 	mov	r0, r4
        2a9f70:	eb64bf48 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a9f74:	e1a00005 	mov	r0, r5
        2a9f78:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

