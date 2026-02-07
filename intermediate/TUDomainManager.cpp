#include "include/TUDomainManager.h"

/**
 * Symbol: StaticInit__15TUDomainManagerSFUlT1
 * Address: 00258948
 */
void TUDomainManager::StaticInit() {
    /*
        258948:	e1a0c00d 	mov	ip, sp
        25894c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258950:	e24cb004 	sub	fp, ip, #4	; 0x4
        258954:	e1a04001 	mov	r4, r1
        258958:	e1a01000 	mov	r1, r0
        25895c:	e59f0014 	ldr	r0, [pc, #14]	; 258978 <StaticInit__15TUDomainManagerSFUlT1+0x30>
        258960:	eb65dfba 	bl	1bd0850 <TUMonitor::$CopyObject(unsigned long)>
        258964:	e1a01004 	mov	r1, r4
        258968:	e59f000c 	ldr	r0, [pc, #c]	; 25897c <StaticInit__15TUDomainManagerSFUlT1+0x34>
        25896c:	eb65dfb7 	bl	1bd0850 <TUMonitor::$CopyObject(unsigned long)>
        258970:	e3a00000 	mov	r0, #0	; 0x0
        258974:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258978:	0c104eec 	ldceq	14, cr4, [r0], -#944
        25897c:	0c104ef4 	ldceq	14, cr4, [r0], -#976
    */
}

/**
 * Symbol: TUDomainManager::__ct(void)
 * Address: 00258980
 */
TUDomainManager::TUDomainManager(void) {
    /*
        258980:	e1a0c00d 	mov	ip, sp
        258984:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258988:	e24cb004 	sub	fp, ip, #4	; 0x4
        25898c:	e1b04000 	movs	r4, r0
        258990:	1a000003 	bne	2589a4 <TUDomainManager::__ct(void)+0x24>
        258994:	e3a00040 	mov	r0, #64	; 0x40
        258998:	eb65d766 	bl	1bce738 <$__nw(unsigned int)>
        25899c:	e1b04000 	movs	r4, r0
        2589a0:	0a00000f 	beq	2589e4 <TUDomainManager::__ct(void)+0x64>
        2589a4:	e2840004 	add	r0, r4, #4	; 0x4
        2589a8:	e3a01000 	mov	r1, #0	; 0x0
        2589ac:	e5c01004 	strb	r1, [r0, #4]	; fField4
        2589b0:	e5801000 	str	r1, [r0]
        2589b4:	e2801008 	add	r1, r0, #8	; 0x8
        2589b8:	eb65f019 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        2589bc:	e2840010 	add	r0, r4, #16	; 0x10
        2589c0:	e3a01000 	mov	r1, #0	; 0x0
        2589c4:	eb65d344 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        2589c8:	e2840018 	add	r0, r4, #24	; 0x18
        2589cc:	e3a01000 	mov	r1, #0	; 0x0
        2589d0:	eb65d341 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        2589d4:	e2840028 	add	r0, r4, #40	; 0x28
        2589d8:	eb662e13 	bl	1be422c <CList::$__ct(void)>
        2589dc:	e59f0008 	ldr	r0, [pc, #8]	; 2589ec <TUDomainManager::__ct(void)+0x6c>
        2589e0:	e5840000 	str	r0, [r4]
        2589e4:	e1a00004 	mov	r0, r4
        2589e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2589ec:	0001e1bc 	streqh	lr, [r1], -ip
    */
}

/**
 * Symbol: TUDomainManager::RememberPhysMapRange(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 002589f0
 */
TUDomainManager::RememberPhysMapRange(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
        2589f0:	e1a0c00d 	mov	ip, sp
        2589f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2589f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2589fc:	e99b1010 	ldmib	fp, {r4, ip}
        258a00:	e20ce0ff 	and	lr, ip, #255	; 0xff
        258a04:	e59fc048 	ldr	ip, [pc, #48]	; 258a54 <TUDomainManager::RememberPhysMapRange(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char)+0x64>
        258a08:	e59cc000 	ldr	ip, [ip]
        258a0c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        258a10:	e24cc040 	sub	ip, ip, #64	; 0x40
        258a14:	e92c001f 	stmdb	ip!, {r0, r1, r2, r3, r4}
        258a18:	e5cce014 	strb	lr, [ip, #20]
        258a1c:	e3a0003d 	mov	r0, #61	; 0x3d
        258a20:	eb0555d3 	bl	3ae174 <GenericSWI>
        258a24:	e3a040ed 	mov	r4, #237	; 0xed
        258a28:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        258a2c:	e1300004 	teq	r0, r4
        258a30:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258a34:	eb65db59 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258a38:	e3300000 	teq	r0, #0	; 0x0
        258a3c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258a40:	e3a0003d 	mov	r0, #61	; 0x3d
        258a44:	eb0555ca 	bl	3ae174 <GenericSWI>
        258a48:	e1300004 	teq	r0, r4
        258a4c:	0afffff8 	beq	258a34 <TUDomainManager::RememberPhysMapRange(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char)+0x44>
        258a50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258a54:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: RememberPhysMapRange__15TUDomainManagerSFUlN41Uc
 * Address: 00258a58
 */
void TUDomainManager::RememberPhysMapRange() {
    /*
        258a58:	e1a0c00d 	mov	ip, sp
        258a5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258a60:	e24cb004 	sub	fp, ip, #4	; 0x4
        258a64:	e99b1010 	ldmib	fp, {r4, ip}
        258a68:	e20ce0ff 	and	lr, ip, #255	; 0xff
        258a6c:	e59fc044 	ldr	ip, [pc, #44]	; 258ab8 <RememberPhysMapRange__15TUDomainManagerSFUlN41Uc+0x60>
        258a70:	e59cc000 	ldr	ip, [ip]
        258a74:	e24cc040 	sub	ip, ip, #64	; 0x40
        258a78:	e92c001f 	stmdb	ip!, {r0, r1, r2, r3, r4}
        258a7c:	e5cce014 	strb	lr, [ip, #20]
        258a80:	e3a0003d 	mov	r0, #61	; 0x3d
        258a84:	eb0555ba 	bl	3ae174 <GenericSWI>
        258a88:	e3a040ed 	mov	r4, #237	; 0xed
        258a8c:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        258a90:	e1300004 	teq	r0, r4
        258a94:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258a98:	eb65db40 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258a9c:	e3300000 	teq	r0, #0	; 0x0
        258aa0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258aa4:	e3a0003d 	mov	r0, #61	; 0x3d
        258aa8:	eb0555b1 	bl	3ae174 <GenericSWI>
        258aac:	e1300004 	teq	r0, r4
        258ab0:	0afffff8 	beq	258a98 <RememberPhysMapRange__15TUDomainManagerSFUlN41Uc+0x40>
        258ab4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258ab8:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: TUDomainManager::ForgetPhysMap(unsigned long, unsigned long)
 * Address: 00258abc
 */
TUDomainManager::ForgetPhysMap(unsigned long, unsigned long) {
    /*
        258abc:	e1a0c001 	mov	ip, r1
        258ac0:	e1a03002 	mov	r3, r2
        258ac4:	e1a0200c 	mov	r2, ip
        258ac8:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
        258acc:	e3a00007 	mov	r0, #7	; 0x7
        258ad0:	ea0555a7 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: ForgetPhysMap__15TUDomainManagerSFUlN21
 * Address: 00258ad4
 */
void TUDomainManager::ForgetPhysMap() {
    /*
        258ad4:	e1a03002 	mov	r3, r2
        258ad8:	e1a02001 	mov	r2, r1
        258adc:	e1a01000 	mov	r1, r0
        258ae0:	e3a00007 	mov	r0, #7	; 0x7
        258ae4:	ea0555a2 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TUDomainManager::ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)
 * Address: 00258ae8
 */
TUDomainManager::ForgetPhysMapRange(unsigned long, unsigned long, unsigned long) {
    /*
        258ae8:	e1a0c00d 	mov	ip, sp
        258aec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258af0:	e24cb004 	sub	fp, ip, #4	; 0x4
        258af4:	e59fc048 	ldr	ip, [pc, #48]	; 258b44 <TUDomainManager::ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)+0x5c>
        258af8:	e59cc000 	ldr	ip, [ip]
        258afc:	e5900024 	ldr	r0, [r0, #36]	; fField36
        258b00:	e52c3044 	str	r3, [ip, -#68]!
        258b04:	e24cc004 	sub	ip, ip, #4	; 0x4
        258b08:	e92c0007 	stmdb	ip!, {r0, r1, r2}
        258b0c:	e3a0003c 	mov	r0, #60	; 0x3c
        258b10:	eb055597 	bl	3ae174 <GenericSWI>
        258b14:	e3a040ed 	mov	r4, #237	; 0xed
        258b18:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        258b1c:	e1300004 	teq	r0, r4
        258b20:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258b24:	eb65db1d 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258b28:	e3300000 	teq	r0, #0	; 0x0
        258b2c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258b30:	e3a0003c 	mov	r0, #60	; 0x3c
        258b34:	eb05558e 	bl	3ae174 <GenericSWI>
        258b38:	e1300004 	teq	r0, r4
        258b3c:	0afffff8 	beq	258b24 <TUDomainManager::ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)+0x3c>
        258b40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258b44:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: ForgetPhysMapRange__15TUDomainManagerSFUlN31
 * Address: 00258b48
 */
void TUDomainManager::ForgetPhysMapRange() {
    /*
        258b48:	e1a0c00d 	mov	ip, sp
        258b4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258b50:	e24cb004 	sub	fp, ip, #4	; 0x4
        258b54:	e59fc044 	ldr	ip, [pc, #44]	; 258ba0 <ForgetPhysMapRange__15TUDomainManagerSFUlN31+0x58>
        258b58:	e59cc000 	ldr	ip, [ip]
        258b5c:	e52c3044 	str	r3, [ip, -#68]!
        258b60:	e24cc004 	sub	ip, ip, #4	; 0x4
        258b64:	e92c0007 	stmdb	ip!, {r0, r1, r2}
        258b68:	e3a0003c 	mov	r0, #60	; 0x3c
        258b6c:	eb055580 	bl	3ae174 <GenericSWI>
        258b70:	e3a040ed 	mov	r4, #237	; 0xed
        258b74:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        258b78:	e1300004 	teq	r0, r4
        258b7c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258b80:	eb65db06 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258b84:	e3300000 	teq	r0, #0	; 0x0
        258b88:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        258b8c:	e3a0003c 	mov	r0, #60	; 0x3c
        258b90:	eb055577 	bl	3ae174 <GenericSWI>
        258b94:	e1300004 	teq	r0, r4
        258b98:	0afffff8 	beq	258b80 <ForgetPhysMapRange__15TUDomainManagerSFUlN31+0x38>
        258b9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258ba0:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: TUDomainManager::RememberPermMap(unsigned long, unsigned long, Perm)
 * Address: 00258ba4
 */
TUDomainManager::RememberPermMap(unsigned long, unsigned long, Perm) {
    /*
        258ba4:	e1a0c00d 	mov	ip, sp
        258ba8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        258bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        258bb0:	e1a05000 	mov	r5, r0
        258bb4:	e1a04002 	mov	r4, r2
        258bb8:	e1a00621 	mov	r0, r1, lsr #12
        258bbc:	e1832600 	orr	r2, r3, r0, lsl #12
        258bc0:	e1a06002 	mov	r6, r2
        258bc4:	e1a03004 	mov	r3, r4
        258bc8:	e3a0000b 	mov	r0, #11	; 0xb
        258bcc:	e5951024 	ldr	r1, [r5, #36]	; fField36
        258bd0:	eb055567 	bl	3ae174 <GenericSWI>
        258bd4:	e3a070ed 	mov	r7, #237	; 0xed
        258bd8:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        258bdc:	e1300007 	teq	r0, r7
        258be0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        258be4:	eb65daed 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258be8:	e3300000 	teq	r0, #0	; 0x0
        258bec:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        258bf0:	e1a02006 	mov	r2, r6
        258bf4:	e1a03004 	mov	r3, r4
        258bf8:	e3a0000b 	mov	r0, #11	; 0xb
        258bfc:	e5951024 	ldr	r1, [r5, #36]	; fField36
        258c00:	eb05555b 	bl	3ae174 <GenericSWI>
        258c04:	e1300007 	teq	r0, r7
        258c08:	0afffff5 	beq	258be4 <TUDomainManager::RememberPermMap(unsigned long, unsigned long, Perm)+0x40>
        258c0c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: RememberPermMap__15TUDomainManagerSFUlN214Perm
 * Address: 00258c10
 */
void TUDomainManager::RememberPermMap() {
    /*
        258c10:	e1a0c00d 	mov	ip, sp
        258c14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        258c18:	e24cb004 	sub	fp, ip, #4	; 0x4
        258c1c:	e1a05000 	mov	r5, r0
        258c20:	e1a04002 	mov	r4, r2
        258c24:	e1a00621 	mov	r0, r1, lsr #12
        258c28:	e1832600 	orr	r2, r3, r0, lsl #12
        258c2c:	e1a06002 	mov	r6, r2
        258c30:	e1a03004 	mov	r3, r4
        258c34:	e1a01005 	mov	r1, r5
        258c38:	e3a0000b 	mov	r0, #11	; 0xb
        258c3c:	eb05554c 	bl	3ae174 <GenericSWI>
        258c40:	e3a070ed 	mov	r7, #237	; 0xed
        258c44:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        258c48:	e1300007 	teq	r0, r7
        258c4c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        258c50:	eb65dad2 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258c54:	e3300000 	teq	r0, #0	; 0x0
        258c58:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        258c5c:	e1a02006 	mov	r2, r6
        258c60:	e1a03004 	mov	r3, r4
        258c64:	e1a01005 	mov	r1, r5
        258c68:	e3a0000b 	mov	r0, #11	; 0xb
        258c6c:	eb055540 	bl	3ae174 <GenericSWI>
        258c70:	e1300007 	teq	r0, r7
        258c74:	0afffff5 	beq	258c50 <RememberPermMap__15TUDomainManagerSFUlN214Perm+0x40>
        258c78:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUDomainManager::ForgetPermMap(unsigned long, unsigned long)
 * Address: 00258c7c
 */
TUDomainManager::ForgetPermMap(unsigned long, unsigned long) {
    /*
        258c7c:	e1a0c001 	mov	ip, r1
        258c80:	e1a03002 	mov	r3, r2
        258c84:	e1a0200c 	mov	r2, ip
        258c88:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
        258c8c:	e3a00008 	mov	r0, #8	; 0x8
        258c90:	ea055537 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: ForgetPermMap__15TUDomainManagerSFUlN21
 * Address: 00258c94
 */
void TUDomainManager::ForgetPermMap() {
    /*
        258c94:	e1a03002 	mov	r3, r2
        258c98:	e1a02001 	mov	r2, r1
        258c9c:	e1a01000 	mov	r1, r0
        258ca0:	e3a00008 	mov	r0, #8	; 0x8
        258ca4:	ea055532 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TUDomainManager::__dt(void)
 * Address: 00258ca8
 */
TUDomainManager::~TUDomainManager(void) {
    /*
        258ca8:	e1a0c00d 	mov	ip, sp
        258cac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        258cb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        258cb4:	e1a04000 	mov	r4, r0
        258cb8:	e1a05001 	mov	r5, r1
        258cbc:	e59f00bc 	ldr	r0, [pc, #bc]	; 258d80 <TUDomainManager::__dt(void)+0xd8>
        258cc0:	e5840000 	str	r0, [r4]
        258cc4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        258cc8:	e2841028 	add	r1, r4, #40	; 0x28
        258ccc:	e1a07001 	mov	r7, r1
        258cd0:	e1a0000d 	mov	r0, sp
        258cd4:	eb662942 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        258cd8:	e1a0000d 	mov	r0, sp
        258cdc:	eb6639c5 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        258ce0:	e1a06000 	mov	r6, r0
        258ce4:	e1a0000d 	mov	r0, sp
        258ce8:	eb664622 	bl	1bea578 <CArrayIterator::$More(void)>
        258cec:	e3300000 	teq	r0, #0	; 0x0
        258cf0:	0a00000d 	beq	258d2c <TUDomainManager::__dt(void)+0x84>
        258cf4:	e3360000 	teq	r6, #0	; 0x0
        258cf8:	0a000004 	beq	258d10 <TUDomainManager::__dt(void)+0x68>
        258cfc:	e1a00006 	mov	r0, r6
        258d00:	e3a01000 	mov	r1, #0	; 0x0
        258d04:	eb65d686 	bl	1bce724 <TUObject::$__dt(void)>
        258d08:	e1a00006 	mov	r0, r6
        258d0c:	eb65d273 	bl	1bcd6e0 <$__dl(void *)>
        258d10:	e1a0000d 	mov	r0, sp
        258d14:	eb664a21 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        258d18:	e1a06000 	mov	r6, r0
        258d1c:	e1a0000d 	mov	r0, sp
        258d20:	eb664614 	bl	1bea578 <CArrayIterator::$More(void)>
        258d24:	e3300000 	teq	r0, #0	; 0x0
        258d28:	1afffff1 	bne	258cf4 <TUDomainManager::__dt(void)+0x4c>
        258d2c:	e1a0000d 	mov	r0, sp
        258d30:	e3a01000 	mov	r1, #0	; 0x0
        258d34:	eb662d4b 	bl	1be4268 <CArrayIterator::$__dt(void)>
        258d38:	e28dd01c 	add	sp, sp, #28	; 0x1c
        258d3c:	e1a00007 	mov	r0, r7
        258d40:	e3a01000 	mov	r1, #0	; 0x0
        258d44:	eb66314e 	bl	1be5284 <CList::$__dt(void)>
        258d48:	e2840018 	add	r0, r4, #24	; 0x18
        258d4c:	e3a01000 	mov	r1, #0	; 0x0
        258d50:	eb65d676 	bl	1bce730 <TUMonitor::$__dt(void)>
        258d54:	e2840010 	add	r0, r4, #16	; 0x10
        258d58:	e3a01000 	mov	r1, #0	; 0x0
        258d5c:	eb65d673 	bl	1bce730 <TUMonitor::$__dt(void)>
        258d60:	e2840004 	add	r0, r4, #4	; 0x4
        258d64:	e3a01000 	mov	r1, #0	; 0x0
        258d68:	eb65d66c 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        258d6c:	e3150001 	tst	r5, #1	; 0x1
        258d70:	11a00004 	movne	r0, r4
        258d74:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        258d78:	1a65d258 	bne	1bcd6e0 <$__dl(void *)>
        258d7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        258d80:	0001e1bc 	streqh	lr, [r1], -ip
    */
}

/**
 * Symbol: TUDomainManager::Remember(unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 00258d84
 */
TUDomainManager::Remember(unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
        258d84:	e1a0c00d 	mov	ip, sp
        258d88:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        258d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        258d90:	e1a05000 	mov	r5, r0
        258d94:	e1a04003 	mov	r4, r3
        258d98:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        258d9c:	e21060ff 	ands	r6, r0, #255	; 0xff
        258da0:	e1a00621 	mov	r0, r1, lsr #12
        258da4:	e20210ff 	and	r1, r2, #255	; 0xff
        258da8:	e1817600 	orr	r7, r1, r0, lsl #12
        258dac:	03a00000 	moveq	r0, #0	; 0x0
        258db0:	13a00c01 	movne	r0, #256	; 0x100
        258db4:	e1872000 	orr	r2, r7, r0
        258db8:	e1a03004 	mov	r3, r4
        258dbc:	e3a0000c 	mov	r0, #12	; 0xc
        258dc0:	e5951024 	ldr	r1, [r5, #36]	; fField36
        258dc4:	eb0554ea 	bl	3ae174 <GenericSWI>
        258dc8:	e3a080ed 	mov	r8, #237	; 0xed
        258dcc:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        258dd0:	e1300008 	teq	r0, r8
        258dd4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        258dd8:	eb65da70 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258ddc:	e3300000 	teq	r0, #0	; 0x0
        258de0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        258de4:	e1b00006 	movs	r0, r6
        258de8:	13a00c01 	movne	r0, #256	; 0x100
        258dec:	e1872000 	orr	r2, r7, r0
        258df0:	e1a03004 	mov	r3, r4
        258df4:	e3a0000c 	mov	r0, #12	; 0xc
        258df8:	e5951024 	ldr	r1, [r5, #36]	; fField36
        258dfc:	eb0554dc 	bl	3ae174 <GenericSWI>
        258e00:	e1300008 	teq	r0, r8
        258e04:	0afffff3 	beq	258dd8 <TUDomainManager::Remember(unsigned long, unsigned long, unsigned long, unsigned char)+0x54>
        258e08:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: Remember__15TUDomainManagerSFUlN31Uc
 * Address: 00258e0c
 */
void TUDomainManager::Remember() {
    /*
        258e0c:	e1a0c00d 	mov	ip, sp
        258e10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        258e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        258e18:	e1a05000 	mov	r5, r0
        258e1c:	e1a04003 	mov	r4, r3
        258e20:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        258e24:	e21060ff 	ands	r6, r0, #255	; 0xff
        258e28:	e1a00621 	mov	r0, r1, lsr #12
        258e2c:	e20210ff 	and	r1, r2, #255	; 0xff
        258e30:	e1817600 	orr	r7, r1, r0, lsl #12
        258e34:	03a00000 	moveq	r0, #0	; 0x0
        258e38:	13a00c01 	movne	r0, #256	; 0x100
        258e3c:	e1872000 	orr	r2, r7, r0
        258e40:	e1a03004 	mov	r3, r4
        258e44:	e1a01005 	mov	r1, r5
        258e48:	e3a0000c 	mov	r0, #12	; 0xc
        258e4c:	eb0554c8 	bl	3ae174 <GenericSWI>
        258e50:	e3a080ed 	mov	r8, #237	; 0xed
        258e54:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        258e58:	e1300008 	teq	r0, r8
        258e5c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        258e60:	eb65da4e 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        258e64:	e3300000 	teq	r0, #0	; 0x0
        258e68:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        258e6c:	e1b00006 	movs	r0, r6
        258e70:	13a00c01 	movne	r0, #256	; 0x100
        258e74:	e1872000 	orr	r2, r7, r0
        258e78:	e1a03004 	mov	r3, r4
        258e7c:	e1a01005 	mov	r1, r5
        258e80:	e3a0000c 	mov	r0, #12	; 0xc
        258e84:	eb0554ba 	bl	3ae174 <GenericSWI>
        258e88:	e1300008 	teq	r0, r8
        258e8c:	0afffff3 	beq	258e60 <Remember__15TUDomainManagerSFUlN31Uc+0x54>
        258e90:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUDomainManager::Forget(unsigned long, unsigned long)
 * Address: 00258e94
 */
TUDomainManager::Forget(unsigned long, unsigned long) {
    /*
        258e94:	e1a0c001 	mov	ip, r1
        258e98:	e1a03002 	mov	r3, r2
        258e9c:	e1a0200c 	mov	r2, ip
        258ea0:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
        258ea4:	e3a00009 	mov	r0, #9	; 0x9
        258ea8:	ea0554b1 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: Forget__15TUDomainManagerSFUlN21
 * Address: 00258eac
 */
void TUDomainManager::Forget() {
    /*
        258eac:	e1a03002 	mov	r3, r2
        258eb0:	e1a02001 	mov	r2, r1
        258eb4:	e1a01000 	mov	r1, r0
        258eb8:	e3a00009 	mov	r0, #9	; 0x9
        258ebc:	ea0554ac 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TUDomainManager::Get(unsigned long &, int)
 * Address: 00258ec0
 */
TUDomainManager::Get(unsigned long &, int) {
    /*
        258ec0:	e1a0c00d 	mov	ip, sp
        258ec4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258ec8:	e24cb004 	sub	fp, ip, #4	; 0x4
        258ecc:	e1a04001 	mov	r4, r1
        258ed0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        258ed4:	e59f1030 	ldr	r1, [pc, #30]	; 258f0c <TUDomainManager::Get(unsigned long &, int)+0x4c>
        258ed8:	e5911000 	ldr	r1, [r1]
        258edc:	e2800018 	add	r0, r0, #24	; 0x18
        258ee0:	e58d0008 	str	r0, [sp, #8]
        258ee4:	e88d0006 	stmia	sp, {r1, r2}
        258ee8:	e1a0200d 	mov	r2, sp
        258eec:	e3a01005 	mov	r1, #5	; 0x5
        258ef0:	e59f0018 	ldr	r0, [pc, #18]	; 258f10 <TUDomainManager::Get(unsigned long &, int)+0x50>
        258ef4:	e5900000 	ldr	r0, [r0]
        258ef8:	eb055508 	bl	3ae320 <MonitorDispatchSWI>
        258efc:	e3300000 	teq	r0, #0	; 0x0
        258f00:	059d1000 	ldreq	r1, [sp]
        258f04:	05841000 	streq	r1, [r4]
        258f08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258f0c:	0c101054 	ldceq	0, cr1, [r0], -#336
        258f10:	0c104eec 	ldceq	14, cr4, [r0], -#944
    */
}

/**
 * Symbol: TUDomainManager::ReleasePagesForFaultHandling(unsigned long, unsigned long)
 * Address: 00258f14
 */
TUDomainManager::ReleasePagesForFaultHandling(unsigned long, unsigned long) {
    /*
        258f14:	e1a0c00d 	mov	ip, sp
        258f18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        258f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        258f20:	e3a00000 	mov	r0, #0	; 0x0
        258f24:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        258f28:	e92d0006 	stmdb	sp!, {r1, r2}
        258f2c:	e1a0200d 	mov	r2, sp
        258f30:	e3a01006 	mov	r1, #6	; 0x6
        258f34:	e59f0008 	ldr	r0, [pc, #8]	; 258f44 <TUDomainManager::ReleasePagesForFaultHandling(unsigned long, unsigned long)+0x30>
        258f38:	e5900000 	ldr	r0, [r0]
        258f3c:	eb0554f7 	bl	3ae320 <MonitorDispatchSWI>
        258f40:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        258f44:	0c104eec 	ldceq	14, cr4, [r0], -#944
    */
}

/**
 * Symbol: TUDomainManager::ReleasePagesFromOtherMonitorsForFaultHandling(unsigned long, unsigned long)
 * Address: 00258f48
 */
TUDomainManager::ReleasePagesFromOtherMonitorsForFaultHandling(unsigned long, unsigned long) {
    /*
        258f48:	e1a0c00d 	mov	ip, sp
        258f4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        258f50:	e24cb004 	sub	fp, ip, #4	; 0x4
        258f54:	e24dd004 	sub	sp, sp, #4	; 0x4
        258f58:	e92d0006 	stmdb	sp!, {r1, r2}
        258f5c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        258f60:	e58d0008 	str	r0, [sp, #8]
        258f64:	e1a0200d 	mov	r2, sp
        258f68:	e3a01006 	mov	r1, #6	; 0x6
        258f6c:	e59f0008 	ldr	r0, [pc, #8]	; 258f7c <TUDomainManager::ReleasePagesFromOtherMonitorsForFaultHandling(unsigned long, unsigned long)+0x34>
        258f70:	e5900000 	ldr	r0, [r0]
        258f74:	eb0554e9 	bl	3ae320 <MonitorDispatchSWI>
        258f78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        258f7c:	0c104eec 	ldceq	14, cr4, [r0], -#944
    */
}

/**
 * Symbol: TUDomainManager::GetExternal(unsigned long &, int)
 * Address: 00258f80
 */
TUDomainManager::GetExternal(unsigned long &, int) {
    /*
        258f80:	e1a0c00d 	mov	ip, sp
        258f84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258f88:	e24cb004 	sub	fp, ip, #4	; 0x4
        258f8c:	e1a04001 	mov	r4, r1
        258f90:	e24dd00c 	sub	sp, sp, #12	; 0xc
        258f94:	e59f0028 	ldr	r0, [pc, #28]	; 258fc4 <TUDomainManager::GetExternal(unsigned long &, int)+0x44>
        258f98:	e5900000 	ldr	r0, [r0]
        258f9c:	e88d0005 	stmia	sp, {r0, r2}
        258fa0:	e1a0200d 	mov	r2, sp
        258fa4:	e3a01001 	mov	r1, #1	; 0x1
        258fa8:	e59f0018 	ldr	r0, [pc, #18]	; 258fc8 <TUDomainManager::GetExternal(unsigned long &, int)+0x48>
        258fac:	e5900000 	ldr	r0, [r0]
        258fb0:	eb0554da 	bl	3ae320 <MonitorDispatchSWI>
        258fb4:	e3300000 	teq	r0, #0	; 0x0
        258fb8:	059d1000 	ldreq	r1, [sp]
        258fbc:	05841000 	streq	r1, [r4]
        258fc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258fc4:	0c101054 	ldceq	0, cr1, [r0], -#336
        258fc8:	0c104eec 	ldceq	14, cr4, [r0], -#944
    */
}

/**
 * Symbol: Release__15TUDomainManagerSFUl
 * Address: 00258fcc
 */
void TUDomainManager::Release() {
    /*
        258fcc:	e1a01000 	mov	r1, r0
        258fd0:	e3a03000 	mov	r3, #0	; 0x0
        258fd4:	e3a02000 	mov	r2, #0	; 0x0
        258fd8:	e3a00011 	mov	r0, #17	; 0x11
        258fdc:	ea055464 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TUDomainManager::CopyPhysPg(unsigned long, unsigned long, unsigned long)
 * Address: 00258fe0
 */
TUDomainManager::CopyPhysPg(unsigned long, unsigned long, unsigned long) {
    /*
        258fe0:	e3a00012 	mov	r0, #18	; 0x12
        258fe4:	ea055462 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00258fe8
 */
TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        258fe8:	e1a0c00d 	mov	ip, sp
        258fec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        258ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        258ff4:	e1a04000 	mov	r4, r0
        258ff8:	e1a05001 	mov	r5, r1
        258ffc:	e1a06003 	mov	r6, r3
        259000:	e3a03000 	mov	r3, #0	; 0x0
        259004:	e3a01001 	mov	r1, #1	; 0x1
        259008:	e1a00005 	mov	r0, r5
        25900c:	e59b8008 	ldr	r8, [fp, #8]
        259010:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        259014:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259018:	e2840010 	add	r0, r4, #16	; 0x10
        25901c:	e1a03004 	mov	r3, r4
        259020:	e1a0200c 	mov	r2, ip
        259024:	e59f1060 	ldr	r1, [pc, #60]	; 25908c <TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0xa4>
        259028:	eb65f2ab 	bl	1bd5adc <$Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5>
        25902c:	e28dd010 	add	sp, sp, #16	; 0x10
        259030:	e1b07000 	movs	r7, r0
        259034:	1a000012 	bne	259084 <TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x9c>
        259038:	e3a03000 	mov	r3, #0	; 0x0
        25903c:	e1a02006 	mov	r2, r6
        259040:	e3a01000 	mov	r1, #0	; 0x0
        259044:	e1a00005 	mov	r0, r5
        259048:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25904c:	e2840018 	add	r0, r4, #24	; 0x18
        259050:	e1a05000 	mov	r5, r0
        259054:	e1a03004 	mov	r3, r4
        259058:	e1a02008 	mov	r2, r8
        25905c:	e59f102c 	ldr	r1, [pc, #2c]	; 259090 <TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0xa8>
        259060:	eb65f29d 	bl	1bd5adc <$Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5>
        259064:	e28dd010 	add	sp, sp, #16	; 0x10
        259068:	e1b07000 	movs	r7, r0
        25906c:	1a000004 	bne	259084 <TUDomainManager::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x9c>
        259070:	e2840004 	add	r0, r4, #4	; 0x4
        259074:	eb65f28f 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        259078:	e1b07000 	movs	r7, r0
        25907c:	05950000 	ldreq	r0, [r5]
        259080:	0b65feef 	bleq	1bd8c44 <$Register__13TUPageManagerSFUl>
        259084:	e1a00007 	mov	r0, r7
        259088:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25908c:	01bd18f0 	ldreqsh	r1, [sp, r0]!
        259090:	01bd7be4 	moveqs	r7, r4, ror #23
    */
}

/**
 * Symbol: RegisterPageMonitor__15TUDomainManagerSFv
 * Address: 00259094
 */
void TUDomainManager::RegisterPageMonitor() {
    /*
        259094:	e1a0c00d 	mov	ip, sp
        259098:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25909c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2590a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2590a4:	e59f0014 	ldr	r0, [pc, #14]	; 2590c0 <RegisterPageMonitor__15TUDomainManagerSFv+0x2c>
        2590a8:	e5900000 	ldr	r0, [r0]
        2590ac:	e58d0000 	str	r0, [sp]
        2590b0:	e1a0200d 	mov	r2, sp
        2590b4:	e3a01003 	mov	r1, #3	; 0x3
        2590b8:	eb055498 	bl	3ae320 <MonitorDispatchSWI>
        2590bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2590c0:	0c104eec 	ldceq	14, cr4, [r0], -#944
    */
}

/**
 * Symbol: ReleasePageTable__15TUDomainManagerSFUl
 * Address: 002590c4
 */
void TUDomainManager::ReleasePageTable() {
    /*
        2590c4:	e1a0c00d 	mov	ip, sp
        2590c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2590cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2590d0:	e1a04000 	mov	r4, r0
        2590d4:	e1a01000 	mov	r1, r0
        2590d8:	e3a0003f 	mov	r0, #63	; 0x3f
        2590dc:	eb055424 	bl	3ae174 <GenericSWI>
        2590e0:	e3300000 	teq	r0, #0	; 0x0
        2590e4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2590e8:	e1a02004 	mov	r2, r4
        2590ec:	e3a01002 	mov	r1, #2	; 0x2
        2590f0:	e59f0008 	ldr	r0, [pc, #8]	; 259100 <ReleasePageTable__15TUDomainManagerSFUl+0x3c>
        2590f4:	e5900000 	ldr	r0, [r0]
        2590f8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2590fc:	ea055487 	b	3ae320 <MonitorDispatchSWI>
        259100:	0c104ef4 	ldceq	14, cr4, [r0], -#976
    */
}

/**
 * Symbol: AllocatePageTable__15TUDomainManagerSFv
 * Address: 00259104
 */
void TUDomainManager::AllocatePageTable() {
    /*
        259104:	e3a02000 	mov	r2, #0	; 0x0
        259108:	e3a01001 	mov	r1, #1	; 0x1
        25910c:	e59f0004 	ldr	r0, [pc, #4]	; 259118 <AllocatePageTable__15TUDomainManagerSFv+0x14>	; fField4
        259110:	e5900000 	ldr	r0, [r0]
        259114:	ea055481 	b	3ae320 <MonitorDispatchSWI>
        259118:	0c104ef4 	ldceq	14, cr4, [r0], -#976
    */
}

/**
 * Symbol: TUDomainManager::AddDomain(unsigned long)
 * Address: 0025911c
 */
TUDomainManager::AddDomain(unsigned long) {
    /*
        25911c:	e1a0c00d 	mov	ip, sp
        259120:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259124:	e24cb004 	sub	fp, ip, #4	; 0x4
        259128:	e24dd008 	sub	sp, sp, #8	; 0x8
        25912c:	e3a02000 	mov	r2, #0	; 0x0
        259130:	e5cd2004 	strb	r2, [sp, #4]	; fField4
        259134:	e58d1000 	str	r1, [sp]
        259138:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        25913c:	e1a0000d 	mov	r0, sp
        259140:	eb660b1d 	bl	1bdbdbc <TUDomain::$SetFaultMonitor(unsigned long)>
        259144:	e1a04000 	mov	r4, r0
        259148:	e1a0000d 	mov	r0, sp
        25914c:	e3a01000 	mov	r1, #0	; 0x0
        259150:	eb65d573 	bl	1bce724 <TUObject::$__dt(void)>
        259154:	e1a00004 	mov	r0, r4
        259158:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUDomainManager::AddDomain(unsigned long &, unsigned long, unsigned long)
 * Address: 0025915c
 */
TUDomainManager::AddDomain(unsigned long &, unsigned long, unsigned long) {
    /*
        25915c:	e1a0c00d 	mov	ip, sp
        259160:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        259164:	e24cb004 	sub	fp, ip, #4	; 0x4
        259168:	e1a04000 	mov	r4, r0
        25916c:	e1a07001 	mov	r7, r1
        259170:	e1a06002 	mov	r6, r2
        259174:	e1a05003 	mov	r5, r3
        259178:	e3a00008 	mov	r0, #8	; 0x8
        25917c:	eb65d56d 	bl	1bce738 <$__nw(unsigned int)>
        259180:	e3500000 	cmp	r0, #0	; 0x0
        259184:	13a01000 	movne	r1, #0	; 0x0
        259188:	15c01004 	strneb	r1, [r0, #4]	; fField4
        25918c:	15801000 	strne	r1, [r0]
        259190:	e1a08000 	mov	r8, r0
        259194:	059f0024 	ldreq	r0, [pc, #24]	; 2591c0 <TUDomainManager::AddDomain(unsigned long &, unsigned long, unsigned long)+0x64>	; fField24
        259198:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25919c:	e1a03005 	mov	r3, r5
        2591a0:	e1a02006 	mov	r2, r6
        2591a4:	e1a00008 	mov	r0, r8
        2591a8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2591ac:	eb65f246 	bl	1bd5acc <TUDomain::$Init(unsigned long, unsigned long, unsigned long)>
        2591b0:	e1b05000 	movs	r5, r0
        2591b4:	0a000002 	beq	2591c4 <TUDomainManager::AddDomain(unsigned long &, unsigned long, unsigned long)+0x68>
        2591b8:	e1a00005 	mov	r0, r5
        2591bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2591c0:	ffffd8e7 	swinv	0x00ffd8e7
        2591c4:	e2840028 	add	r0, r4, #40	; 0x28
        2591c8:	e1a01008 	mov	r1, r8
        2591cc:	eb6644ce 	bl	1bea50c <CList::$InsertUnique(void *)>
        2591d0:	e3300000 	teq	r0, #0	; 0x0
        2591d4:	03a000b2 	moveq	r0, #178	; 0xb2
        2591d8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2591dc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2591e0:	e5980000 	ldr	r0, [r8]
        2591e4:	e5870000 	str	r0, [r7]
        2591e8:	eafffff2 	b	2591b8 <TUDomainManager::AddDomain(unsigned long &, unsigned long, unsigned long)+0x5c>
    */
}

/**
 * Symbol: TUDomainManager::FaultMonProc(long, void *)
 * Address: 002591ec
 */
TUDomainManager::FaultMonProc(long, void *) {
    /*
        2591ec:	e1a0c00d 	mov	ip, sp
        2591f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2591f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2591f8:	e1a04000 	mov	r4, r0
        2591fc:	e3710002 	cmn	r1, #2	; 0x2
        259200:	1a000011 	bne	25924c <TUDomainManager::FaultMonProc(long, void *)+0x60>
        259204:	e24dd064 	sub	sp, sp, #100	; 0x64
        259208:	e3a00000 	mov	r0, #0	; 0x0
        25920c:	e5c40020 	strb	r0, [r4, #32]	; fField32
        259210:	e1a0000d 	mov	r0, sp
        259214:	eb65e9ed 	bl	1bd39d0 <$GetFaultState(TProcessorState *)>
        259218:	e59d0054 	ldr	r0, [sp, #84]
        25921c:	e1a0100d 	mov	r1, sp
        259220:	e5840024 	str	r0, [r4, #36]	; fField36
        259224:	e1a00004 	mov	r0, r4
        259228:	e1a0e00f 	mov	lr, pc
        25922c:	e594f000 	ldr	pc, [r4]
        259230:	e1a05000 	mov	r5, r0
        259234:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        259238:	e3300000 	teq	r0, #0	; 0x0
        25923c:	11a0000d 	movne	r0, sp
        259240:	1b660ade 	blne	1bdbdc0 <$SetFaultState(TProcessorState *)>
        259244:	e1a00005 	mov	r0, r5
        259248:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25924c:	e1a00004 	mov	r0, r4
        259250:	e5943000 	ldr	r3, [r4]
        259254:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        259258:	e283f004 	add	pc, r3, #4	; 0x4
    */
}

/**
 * Symbol: TUDomainManager::PageMonProc(long, void *)
 * Address: 0025925c
 */
TUDomainManager::PageMonProc(long, void *) {
    /*
        25925c:	e1a03000 	mov	r3, r0
        259260:	e3710106 	cmn	r1, #-2147483647	; 0x80000001
        259264:	1a000003 	bne	259278 <TUDomainManager::PageMonProc(long, void *)+0x1c>
        259268:	e1a01002 	mov	r1, r2
        25926c:	e1a00003 	mov	r0, r3
        259270:	e5932000 	ldr	r2, [r3]
        259274:	e282f008 	add	pc, r2, #8	; 0x8
        259278:	e1a00003 	mov	r0, r3
        25927c:	e5933000 	ldr	r3, [r3]
        259280:	e283f004 	add	pc, r3, #4	; 0x4
    */
}

/**
 * Symbol: TUDomainManager::RememberPhysMap(unsigned long, unsigned long, unsigned char)
 * Address: 00259284
 */
TUDomainManager::RememberPhysMap(unsigned long, unsigned long, unsigned char) {
    /*
        259284:	e1a0c00d 	mov	ip, sp
        259288:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25928c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259290:	e1a05000 	mov	r5, r0
        259294:	e1a04002 	mov	r4, r2
        259298:	e21360ff 	ands	r6, r3, #255	; 0xff
        25929c:	e1a07621 	mov	r7, r1, lsr #12
        2592a0:	e1a07607 	mov	r7, r7, lsl #12
        2592a4:	03a00000 	moveq	r0, #0	; 0x0
        2592a8:	13a00001 	movne	r0, #1	; 0x1
        2592ac:	e1872000 	orr	r2, r7, r0
        2592b0:	e1a03004 	mov	r3, r4
        2592b4:	e3a0000a 	mov	r0, #10	; 0xa
        2592b8:	e5951024 	ldr	r1, [r5, #36]	; fField36
        2592bc:	eb0553ac 	bl	3ae174 <GenericSWI>
        2592c0:	e3a080ed 	mov	r8, #237	; 0xed
        2592c4:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        2592c8:	e1300008 	teq	r0, r8
        2592cc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2592d0:	eb65d932 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        2592d4:	e3300000 	teq	r0, #0	; 0x0
        2592d8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2592dc:	e1b00006 	movs	r0, r6
        2592e0:	13a00001 	movne	r0, #1	; 0x1
        2592e4:	e1872000 	orr	r2, r7, r0
        2592e8:	e1a03004 	mov	r3, r4
        2592ec:	e3a0000a 	mov	r0, #10	; 0xa
        2592f0:	e5951024 	ldr	r1, [r5, #36]	; fField36
        2592f4:	eb05539e 	bl	3ae174 <GenericSWI>
        2592f8:	e1300008 	teq	r0, r8
        2592fc:	0afffff3 	beq	2592d0 <TUDomainManager::RememberPhysMap(unsigned long, unsigned long, unsigned char)+0x4c>
        259300:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: RememberPhysMap__15TUDomainManagerSFUlN21Uc
 * Address: 00259304
 */
void TUDomainManager::RememberPhysMap() {
    /*
        259304:	e1a0c00d 	mov	ip, sp
        259308:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25930c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259310:	e1a05000 	mov	r5, r0
        259314:	e1a04002 	mov	r4, r2
        259318:	e21360ff 	ands	r6, r3, #255	; 0xff
        25931c:	e1a07621 	mov	r7, r1, lsr #12
        259320:	e1a07607 	mov	r7, r7, lsl #12
        259324:	03a00000 	moveq	r0, #0	; 0x0
        259328:	13a00001 	movne	r0, #1	; 0x1
        25932c:	e1872000 	orr	r2, r7, r0
        259330:	e1a03004 	mov	r3, r4
        259334:	e1a01005 	mov	r1, r5
        259338:	e3a0000a 	mov	r0, #10	; 0xa
        25933c:	eb05538c 	bl	3ae174 <GenericSWI>
        259340:	e3a080ed 	mov	r8, #237	; 0xed
        259344:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        259348:	e1300008 	teq	r0, r8
        25934c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        259350:	eb65d912 	bl	1bcf7a0 <$AllocatePageTable__15TUDomainManagerSFv>
        259354:	e3300000 	teq	r0, #0	; 0x0
        259358:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25935c:	e1b00006 	movs	r0, r6
        259360:	13a00001 	movne	r0, #1	; 0x1
        259364:	e1872000 	orr	r2, r7, r0
        259368:	e1a03004 	mov	r3, r4
        25936c:	e1a01005 	mov	r1, r5
        259370:	e3a0000a 	mov	r0, #10	; 0xa
        259374:	eb05537e 	bl	3ae174 <GenericSWI>
        259378:	e1300008 	teq	r0, r8
        25937c:	0afffff3 	beq	259350 <RememberPhysMap__15TUDomainManagerSFUlN21Uc+0x4c>
        259380:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

