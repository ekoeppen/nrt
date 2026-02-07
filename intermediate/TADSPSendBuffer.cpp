#include "include/TADSPSendBuffer.h"

/**
 * Symbol: TADSPSendBuffer::__ct(void)
 * Address: 002a9710
 */
TADSPSendBuffer::TADSPSendBuffer(void) {
    /*
        2a9710:	e1a0c00d 	mov	ip, sp
        2a9714:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a9718:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a971c:	e1b04000 	movs	r4, r0
        2a9720:	1a000003 	bne	2a9734 <TADSPSendBuffer::__ct(void)+0x24>
        2a9724:	e3a00060 	mov	r0, #96	; 0x60
        2a9728:	eb649402 	bl	1bce738 <$__nw(unsigned int)>
        2a972c:	e1b04000 	movs	r4, r0
        2a9730:	0a000007 	beq	2a9754 <TADSPSendBuffer::__ct(void)+0x44>
        2a9734:	e1a00004 	mov	r0, r4
        2a9738:	eb5f2056 	bl	1a71898 <TADSPBuffer::$__ct(void)>
        2a973c:	e3a00000 	mov	r0, #0	; 0x0
        2a9740:	e584004c 	str	r0, [r4, #76]	; fField76
        2a9744:	e5840050 	str	r0, [r4, #80]	; fField80
        2a9748:	e5840054 	str	r0, [r4, #84]	; fField84
        2a974c:	e5840058 	str	r0, [r4, #88]	; fField88
        2a9750:	e584005c 	str	r0, [r4, #92]	; fField92
        2a9754:	e1a00004 	mov	r0, r4
        2a9758:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::__dt(void)
 * Address: 002a975c
 */
TADSPSendBuffer::~TADSPSendBuffer(void) {
    /*
        2a975c:	e1a0c00d 	mov	ip, sp
        2a9760:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9764:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9768:	e1a04000 	mov	r4, r0
        2a976c:	e1a05001 	mov	r5, r1
        2a9770:	e3a01000 	mov	r1, #0	; 0x0
        2a9774:	eb5f2882 	bl	1a73984 <TADSPBuffer::$__dt(void)>
        2a9778:	e3150001 	tst	r5, #1	; 0x1
        2a977c:	11a00004 	movne	r0, r4
        2a9780:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2a9784:	1a648fd5 	bne	1bcd6e0 <$__dl(void *)>
        2a9788:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::Ack(unsigned long, unsigned long)
 * Address: 002a978c
 */
TADSPSendBuffer::Ack(unsigned long, unsigned long) {
    /*
        2a978c:	e1a0c00d 	mov	ip, sp
        2a9790:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2a9794:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9798:	e1a04000 	mov	r4, r0
        2a979c:	e1a05001 	mov	r5, r1
        2a97a0:	e1a06002 	mov	r6, r2
        2a97a4:	e3a07000 	mov	r7, #0	; 0x0
        2a97a8:	e3a08000 	mov	r8, #0	; 0x0
        2a97ac:	e3a01000 	mov	r1, #0	; 0x0
        2a97b0:	eb6493e7 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a97b4:	e3300000 	teq	r0, #0	; 0x0
        2a97b8:	1a000022 	bne	2a9848 <TADSPSendBuffer::Ack(unsigned long, unsigned long)+0xbc>
        2a97bc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2a97c0:	e1500005 	cmp	r0, r5
        2a97c4:	8a00001d 	bhi	2a9840 <TADSPSendBuffer::Ack(unsigned long, unsigned long)+0xb4>
        2a97c8:	e594005c 	ldr	r0, [r4, #92]	; fField92
        2a97cc:	e1500005 	cmp	r0, r5
        2a97d0:	3a00001a 	bcc	2a9840 <TADSPSendBuffer::Ack(unsigned long, unsigned long)+0xb4>
        2a97d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2a97d8:	e1a0200d 	mov	r2, sp
        2a97dc:	e1a01005 	mov	r1, r5
        2a97e0:	e1a00004 	mov	r0, r4
        2a97e4:	e3a03001 	mov	r3, #1	; 0x1
        2a97e8:	eb5f6254 	bl	1a82140 <TADSPBuffer::$CountEOM(unsigned long, int *, int)>
        2a97ec:	e1a07000 	mov	r7, r0
        2a97f0:	e284200c 	add	r2, r4, #12	; 0xc
        2a97f4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2a97f8:	e0450000 	sub	r0, r5, r0
        2a97fc:	e59d1000 	ldr	r1, [sp]
        2a9800:	e0401001 	sub	r1, r0, r1
        2a9804:	e1a00002 	mov	r0, r2
        2a9808:	e5922000 	ldr	r2, [r2]
        2a980c:	e1a0e00f 	mov	lr, pc
        2a9810:	e282f048 	add	pc, r2, #72	; 0x48
        2a9814:	e584504c 	str	r5, [r4, #76]	; fField76
        2a9818:	e1a01005 	mov	r1, r5
        2a981c:	e5942050 	ldr	r2, [r4, #80]	; fField80
        2a9820:	e1520005 	cmp	r2, r5
        2a9824:	35841050 	strcc	r1, [r4, #80]	; fField80
        2a9828:	e0850006 	add	r0, r5, r6
        2a982c:	e5941058 	ldr	r1, [r4, #88]	; fField88
        2a9830:	e1500001 	cmp	r0, r1
        2a9834:	83a08001 	movhi	r8, #1	; 0x1
        2a9838:	85840058 	strhi	r0, [r4, #88]	; fField88
        2a983c:	e28dd004 	add	sp, sp, #4	; 0x4
        2a9840:	e1a00004 	mov	r0, r4
        2a9844:	eb64c113 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a9848:	e3300000 	teq	r0, #0	; 0x0
        2a984c:	11a07000 	movne	r7, r0
        2a9850:	e3370000 	teq	r7, #0	; 0x0
        2a9854:	1a000001 	bne	2a9860 <TADSPSendBuffer::Ack(unsigned long, unsigned long)+0xd4>
        2a9858:	e3380000 	teq	r8, #0	; 0x0
        2a985c:	13e07001 	mvnne	r7, #1	; 0x1
        2a9860:	e1a00007 	mov	r0, r7
        2a9864:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::Putn(void const *, long *, int)
 * Address: 002a9868
 */
TADSPSendBuffer::Putn(void const *, long *, int) {
    /*
        2a9868:	e1a0c00d 	mov	ip, sp
        2a986c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2a9870:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9874:	e1a04000 	mov	r4, r0
        2a9878:	e1a07001 	mov	r7, r1
        2a987c:	e1a05002 	mov	r5, r2
        2a9880:	e1a06003 	mov	r6, r3
        2a9884:	e3a08000 	mov	r8, #0	; 0x0
        2a9888:	e5920000 	ldr	r0, [r2]
        2a988c:	e3500000 	cmp	r0, #0	; 0x0
        2a9890:	d3a00000 	movle	r0, #0	; 0x0
        2a9894:	d5850000 	strle	r0, [r5]
        2a9898:	da000021 	ble	2a9924 <TADSPSendBuffer::Putn(void const *, long *, int)+0xbc>
        2a989c:	e1a00004 	mov	r0, r4
        2a98a0:	e3a01000 	mov	r1, #0	; 0x0
        2a98a4:	eb6493aa 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a98a8:	e3300000 	teq	r0, #0	; 0x0
        2a98ac:	1a00001a 	bne	2a991c <TADSPSendBuffer::Putn(void const *, long *, int)+0xb4>
        2a98b0:	e284300c 	add	r3, r4, #12	; 0xc
        2a98b4:	e1a01007 	mov	r1, r7
        2a98b8:	e1a00003 	mov	r0, r3
        2a98bc:	e5952000 	ldr	r2, [r5]
        2a98c0:	e5933000 	ldr	r3, [r3]
        2a98c4:	e1a0e00f 	mov	lr, pc
        2a98c8:	e283f020 	add	pc, r3, #32	; 0x20
        2a98cc:	e1a07000 	mov	r7, r0
        2a98d0:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2a98d4:	e0801007 	add	r1, r0, r7
        2a98d8:	e3360000 	teq	r6, #0	; 0x0
        2a98dc:	e5841054 	str	r1, [r4, #84]	; fField84
        2a98e0:	0a00000a 	beq	2a9910 <TADSPSendBuffer::Putn(void const *, long *, int)+0xa8>
        2a98e4:	e5950000 	ldr	r0, [r5]
        2a98e8:	e1370000 	teq	r7, r0
        2a98ec:	1a000007 	bne	2a9910 <TADSPSendBuffer::Putn(void const *, long *, int)+0xa8>
        2a98f0:	e2840030 	add	r0, r4, #48	; 0x30
        2a98f4:	e1a02001 	mov	r2, r1
        2a98f8:	e5901000 	ldr	r1, [r0]
        2a98fc:	eb64fefa 	bl	1be94ec <CList::$InsertAt(long, void *)>
        2a9900:	e1a08000 	mov	r8, r0
        2a9904:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2a9908:	e2800001 	add	r0, r0, #1	; 0x1
        2a990c:	e5840054 	str	r0, [r4, #84]	; fField84
        2a9910:	e1a00004 	mov	r0, r4
        2a9914:	e5857000 	str	r7, [r5]
        2a9918:	eb64c0de 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a991c:	e3300000 	teq	r0, #0	; 0x0
        2a9920:	11a08000 	movne	r8, r0
        2a9924:	e1a00008 	mov	r0, r8
        2a9928:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::Getn(void *, long *, unsigned long *)
 * Address: 002a992c
 */
TADSPSendBuffer::Getn(void *, long *, unsigned long *) {
    /*
        2a992c:	e1a0c00d 	mov	ip, sp
        2a9930:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a9934:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9938:	e1a04000 	mov	r4, r0
        2a993c:	e1a07001 	mov	r7, r1
        2a9940:	e1a05002 	mov	r5, r2
        2a9944:	e1a06003 	mov	r6, r3
        2a9948:	e3a08000 	mov	r8, #0	; 0x0
        2a994c:	e5920000 	ldr	r0, [r2]
        2a9950:	e3500000 	cmp	r0, #0	; 0x0
        2a9954:	d3a00000 	movle	r0, #0	; 0x0
        2a9958:	d5850000 	strle	r0, [r5]
        2a995c:	da000051 	ble	2a9aa8 <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x17c>
        2a9960:	e24dd008 	sub	sp, sp, #8	; 0x8
        2a9964:	e3a0a000 	mov	sl, #0	; 0x0
        2a9968:	e3a09000 	mov	r9, #0	; 0x0
        2a996c:	e3a00000 	mov	r0, #0	; 0x0
        2a9970:	e88d0201 	stmia	sp, {r0, r9}
        2a9974:	e1a00004 	mov	r0, r4
        2a9978:	e3a01000 	mov	r1, #0	; 0x0
        2a997c:	eb649374 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a9980:	e3300000 	teq	r0, #0	; 0x0
        2a9984:	1a000044 	bne	2a9a9c <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x170>
        2a9988:	e5950000 	ldr	r0, [r5]
        2a998c:	e3500f8f 	cmp	r0, #572	; 0x23c
        2a9990:	a3a00f8f 	movge	r0, #572	; 0x23c
        2a9994:	e3a03000 	mov	r3, #0	; 0x0
        2a9998:	e5850000 	str	r0, [r5]
        2a999c:	e92d0008 	stmdb	sp!, {r3}
        2a99a0:	e28d3008 	add	r3, sp, #8	; 0x8
        2a99a4:	e1a02005 	mov	r2, r5
        2a99a8:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a99ac:	e1a00004 	mov	r0, r4
        2a99b0:	eb5f61d5 	bl	1a8210c <TADSPBuffer::$CheckEOM(unsigned long, long *, int *, int)>
        2a99b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2a99b8:	e1b08000 	movs	r8, r0
        2a99bc:	1a00002d 	bne	2a9a78 <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x14c>
        2a99c0:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2a99c4:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a99c8:	e0401001 	sub	r1, r0, r1
        2a99cc:	e5950000 	ldr	r0, [r5]
        2a99d0:	e1510000 	cmp	r1, r0
        2a99d4:	91a00001 	movls	r0, r1
        2a99d8:	e5850000 	str	r0, [r5]
        2a99dc:	e5940050 	ldr	r0, [r4, #80]	; fField80
        2a99e0:	e5860000 	str	r0, [r6]
        2a99e4:	e1a0200d 	mov	r2, sp
        2a99e8:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a99ec:	e1a00004 	mov	r0, r4
        2a99f0:	e3a03000 	mov	r3, #0	; 0x0
        2a99f4:	eb5f61d1 	bl	1a82140 <TADSPBuffer::$CountEOM(unsigned long, int *, int)>
        2a99f8:	e1b08000 	movs	r8, r0
        2a99fc:	1a00001d 	bne	2a9a78 <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x14c>
        2a9a00:	e284c00c 	add	ip, r4, #12	; 0xc
        2a9a04:	e284104c 	add	r1, r4, #76	; 0x4c
        2a9a08:	e8910003 	ldmia	r1, {r0, r1}
        2a9a0c:	e0411000 	sub	r1, r1, r0
        2a9a10:	e59d0000 	ldr	r0, [sp]
        2a9a14:	e0411000 	sub	r1, r1, r0
        2a9a18:	e1a02007 	mov	r2, r7
        2a9a1c:	e1a0000c 	mov	r0, ip
        2a9a20:	e5953000 	ldr	r3, [r5]
        2a9a24:	e59cc000 	ldr	ip, [ip]
        2a9a28:	e1a0e00f 	mov	lr, pc
        2a9a2c:	e28cf058 	add	pc, ip, #88	; 0x58
        2a9a30:	e5850000 	str	r0, [r5]
        2a9a34:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a9a38:	e0810000 	add	r0, r1, r0
        2a9a3c:	e5840050 	str	r0, [r4, #80]	; fField80
        2a9a40:	e59d1004 	ldr	r1, [sp, #4]
        2a9a44:	e3310000 	teq	r1, #0	; 0x0
        2a9a48:	12800001 	addne	r0, r0, #1	; 0x1
        2a9a4c:	15840050 	strne	r0, [r4, #80]	; fField80
        2a9a50:	e5940050 	ldr	r0, [r4, #80]	; fField80
        2a9a54:	e594105c 	ldr	r1, [r4, #92]	; fField92
        2a9a58:	e1500001 	cmp	r0, r1
        2a9a5c:	8584005c 	strhi	r0, [r4, #92]	; fField92
        2a9a60:	e5941054 	ldr	r1, [r4, #84]	; fField84
        2a9a64:	e1300001 	teq	r0, r1
        2a9a68:	03a09001 	moveq	r9, #1	; 0x1
        2a9a6c:	e5941058 	ldr	r1, [r4, #88]	; fField88
        2a9a70:	e1300001 	teq	r0, r1
        2a9a74:	03a0a001 	moveq	sl, #1	; 0x1
        2a9a78:	e1a00004 	mov	r0, r4
        2a9a7c:	eb64c085 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a9a80:	e3380000 	teq	r8, #0	; 0x0
        2a9a84:	1a000004 	bne	2a9a9c <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x170>
        2a9a88:	e33a0000 	teq	sl, #0	; 0x0
        2a9a8c:	13e08002 	mvnne	r8, #2	; 0x2
        2a9a90:	1a000001 	bne	2a9a9c <TADSPSendBuffer::Getn(void *, long *, unsigned long *)+0x170>
        2a9a94:	e3390000 	teq	r9, #0	; 0x0
        2a9a98:	13e08003 	mvnne	r8, #3	; 0x3
        2a9a9c:	e28dd008 	add	sp, sp, #8	; 0x8
        2a9aa0:	e3300000 	teq	r0, #0	; 0x0
        2a9aa4:	11a08000 	movne	r8, r0
        2a9aa8:	e1a00008 	mov	r0, r8
        2a9aac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::DataCount(int *)
 * Address: 002a9ab0
 */
TADSPSendBuffer::DataCount(int *) {
    /*
        2a9ab0:	e1a0c00d 	mov	ip, sp
        2a9ab4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9abc:	e1a04000 	mov	r4, r0
        2a9ac0:	e1a05001 	mov	r5, r1
        2a9ac4:	e3a00000 	mov	r0, #0	; 0x0
        2a9ac8:	e5810000 	str	r0, [r1]
        2a9acc:	e52d0004 	str	r0, [sp, -#4]!
        2a9ad0:	e1a00004 	mov	r0, r4
        2a9ad4:	e3a01000 	mov	r1, #0	; 0x0
        2a9ad8:	eb64931d 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        2a9adc:	e3300000 	teq	r0, #0	; 0x0
        2a9ae0:	1a00000f 	bne	2a9b24 <TADSPSendBuffer::DataCount(int *)+0x74>
        2a9ae4:	e2841050 	add	r1, r4, #80	; 0x50
        2a9ae8:	e8910003 	ldmia	r1, {r0, r1}
        2a9aec:	e0410000 	sub	r0, r1, r0
        2a9af0:	e58d0000 	str	r0, [sp]
        2a9af4:	e3500000 	cmp	r0, #0	; 0x0
        2a9af8:	da000007 	ble	2a9b1c <TADSPSendBuffer::DataCount(int *)+0x6c>
        2a9afc:	e3a03000 	mov	r3, #0	; 0x0
        2a9b00:	e92d0008 	stmdb	sp!, {r3}
        2a9b04:	e1a03005 	mov	r3, r5
        2a9b08:	e28d2004 	add	r2, sp, #4	; 0x4
        2a9b0c:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2a9b10:	e1a00004 	mov	r0, r4
        2a9b14:	eb5f617c 	bl	1a8210c <TADSPBuffer::$CheckEOM(unsigned long, long *, int *, int)>
        2a9b18:	e28dd004 	add	sp, sp, #4	; 0x4
        2a9b1c:	e1a00004 	mov	r0, r4
        2a9b20:	eb64c05c 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        2a9b24:	e49d0004 	ldr	r0, [sp], #4
        2a9b28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPSendBuffer::Retransmit(void)
 * Address: 002a9b2c
 */
TADSPSendBuffer::Retransmit(void) {
    /*
        2a9b2c:	e5901050 	ldr	r1, [r0, #80]	; fField80
        2a9b30:	e5902058 	ldr	r2, [r0, #88]	; fField88
        2a9b34:	e0421001 	sub	r1, r2, r1
        2a9b38:	e590204c 	ldr	r2, [r0, #76]	; fField76
        2a9b3c:	e5802050 	str	r2, [r0, #80]	; fField80
        2a9b40:	e0821001 	add	r1, r2, r1
        2a9b44:	e5a01058 	str	r1, [r0, #88]!	; fField88
        2a9b48:	e1a0f00e 	mov	pc, lr
    */
}

