#include "DDKIncludes/UtilityClasses/MemObject.h"

/**
 * Symbol: CMemObject::__ct(void)
 * Address: 0011c908
 */
CMemObject::CMemObject() {
    /*
        11c908:	e1a0c00d 	mov	ip, sp
        11c90c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11c910:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c914:	e1b04000 	movs	r4, r0
        11c918:	1a000003 	bne	11c92c <CMemObject::__ct(void)+0x24>
        11c91c:	e3a00024 	mov	r0, #36	; 0x24
        11c920:	eb6ac784 	bl	1bce738 <$__nw(unsigned int)>
        11c924:	e1b04000 	movs	r4, r0
        11c928:	0a00000f 	beq	11c96c <CMemObject::__ct(void)+0x64>
        11c92c:	e3a05000 	mov	r5, #0	; 0x0
        11c930:	e5c45008 	strb	r5, [r4, #8]	; fSharedMemoryObject
        11c934:	e5845004 	str	r5, [r4, #4]	; fFlags
        11c938:	e584500c 	str	r5, [r4, #12]	; fSharedMemoryToken
        11c93c:	e5845018 	str	r5, [r4, #24]
        11c940:	e5845010 	str	r5, [r4, #16]	; fSize
        11c944:	e5845014 	str	r5, [r4, #20]	; fBuffer
        11c948:	e5940000 	ldr	r0, [r4]
        11c94c:	e3c00207 	bic	r0, r0, #1879048192	; 0x70000000
        11c950:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        11c954:	e5840000 	str	r0, [r4]
        11c958:	e2840004 	add	r0, r4, #4	; 0x4
        11c95c:	e1a01005 	mov	r1, r5
        11c960:	eb6acfb8 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        11c964:	e584501c 	str	r5, [r4, #28]	; fField28
        11c968:	e5845020 	str	r5, [r4, #32]	; fField32
        11c96c:	e1a00004 	mov	r0, r4
        11c970:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::__dt(void)
 * Address: 0011c974
 */
CMemObject::~CMemObject() {
    /*
        11c974:	e1a0c00d 	mov	ip, sp
        11c978:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11c97c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c980:	e1a04000 	mov	r4, r0
        11c984:	e1a05001 	mov	r5, r1
        11c988:	eb6b2a96 	bl	1be73e8 <CMemObject::$Destroy(void)>
        11c98c:	e2840004 	add	r0, r4, #4	; 0x4
        11c990:	e3a01000 	mov	r1, #0	; 0x0
        11c994:	eb6ac762 	bl	1bce724 <TUObject::$__dt(void)>
        11c998:	e3150001 	tst	r5, #1	; 0x1
        11c99c:	11a00004 	movne	r0, r4
        11c9a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        11c9a4:	1a6ac34d 	bne	1bcd6e0 <$__dl(void *)>
        11c9a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::Init(unsigned long, void *, unsigned char, unsigned long)
 * Address: 0011c9ac
 */
NewtonErr			CMemObject::Init(ULong size, Boolean makeShared = false, ULong permissions = kSMemReadOnly) {
    /*
        11c9ac:	e1a0c00d 	mov	ip, sp
        11c9b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11c9b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c9b8:	e31300ff 	tst	r3, #255	; 0xff
        11c9bc:	e3a03000 	mov	r3, #0	; 0x0
        11c9c0:	e59be004 	ldr	lr, [fp, #4]	; fFlags
        11c9c4:	e280001c 	add	r0, r0, #28	; 0x1c
        11c9c8:	e8800006 	stmia	r0, {r1, r2}
        11c9cc:	e240001c 	sub	r0, r0, #28	; 0x1c
        11c9d0:	e5901000 	ldr	r1, [r0]
        11c9d4:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
        11c9d8:	e5801000 	str	r1, [r0]
        11c9dc:	0a000002 	beq	11c9ec <CMemObject::Init(unsigned long, void *, unsigned char, unsigned long)+0x40>
        11c9e0:	e1a0100e 	mov	r1, lr
        11c9e4:	eb6b36de 	bl	1bea564 <CMemObject::$MakeShared(unsigned long)>
        11c9e8:	e1a03000 	mov	r3, r0
        11c9ec:	e1a00003 	mov	r0, r3
        11c9f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::Destroy(void)
 * Address: 0011c9f4
 */
void				CMemObject::Destroy(void) {
    /*
        11c9f4:	e1a0c00d 	mov	ip, sp
        11c9f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11c9fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ca00:	e1a04000 	mov	r4, r0
        11ca04:	e5900000 	ldr	r0, [r0]
        11ca08:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        11ca0c:	12000101 	andne	r0, r0, #1073741824	; 0x40000000
        11ca10:	13300000 	teqne	r0, #0	; 0x0
        11ca14:	15940020 	ldrne	r0, [r4, #32]	; fField32
        11ca18:	1b6ac330 	blne	1bcd6e0 <$__dl(void *)>
        11ca1c:	e3a00000 	mov	r0, #0	; 0x0
        11ca20:	e5a40020 	str	r0, [r4, #32]!	; fField32
        11ca24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::Make(unsigned long, TUMsgToken *)
 * Address: 0011ca28
 */
long				CMemObject::Make(TObjectId sharedObjectId, TUMsgToken* msgToken = nil) {
    /*
        11ca28:	e1a0c00d 	mov	ip, sp
        11ca2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11ca30:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ca34:	e1a04000 	mov	r4, r0
        11ca38:	e1a05002 	mov	r5, r2
        11ca3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        11ca40:	e3a00000 	mov	r0, #0	; 0x0
        11ca44:	e5cd0004 	strb	r0, [sp, #4]	; fFlags
        11ca48:	e2840004 	add	r0, r4, #4	; 0x4
        11ca4c:	e1a06000 	mov	r6, r0
        11ca50:	e58d1000 	str	r1, [sp]
        11ca54:	eb6acf7b 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        11ca58:	e5940000 	ldr	r0, [r4]
        11ca5c:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        11ca60:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        11ca64:	e3350000 	teq	r5, #0	; 0x0
        11ca68:	e5840000 	str	r0, [r4]
        11ca6c:	0a000005 	beq	11ca88 <CMemObject::Make(unsigned long, TUMsgToken *)+0x60>
        11ca70:	e284000c 	add	r0, r4, #12	; 0xc
        11ca74:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        11ca78:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        11ca7c:	e5940000 	ldr	r0, [r4]
        11ca80:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        11ca84:	e5840000 	str	r0, [r4]
        11ca88:	e284101c 	add	r1, r4, #28	; 0x1c
        11ca8c:	e1a00006 	mov	r0, r6
        11ca90:	e3a02000 	mov	r2, #0	; 0x0
        11ca94:	eb6adfe7 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        11ca98:	e1a04000 	mov	r4, r0
        11ca9c:	e1a0000d 	mov	r0, sp
        11caa0:	e3a01000 	mov	r1, #0	; 0x0
        11caa4:	eb6ac71e 	bl	1bce724 <TUObject::$__dt(void)>
        11caa8:	e1a00004 	mov	r0, r4
        11caac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::MakeShared(unsigned long)
 * Address: 0011cab0
 */
NewtonErr			CMemObject::MakeShared(ULong permissions = kSMemReadOnly) {
    /*
        11cab0:	e1a0c00d 	mov	ip, sp
        11cab4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11cab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11cabc:	e1a04000 	mov	r4, r0
        11cac0:	e1a05001 	mov	r5, r1
        11cac4:	e5900000 	ldr	r0, [r0]
        11cac8:	e3100202 	tst	r0, #536870912	; 0x20000000
        11cacc:	e2846004 	add	r6, r4, #4	; 0x4
        11cad0:	1a000003 	bne	11cae4 <CMemObject::MakeShared(unsigned long)+0x34>
        11cad4:	e1a00006 	mov	r0, r6
        11cad8:	eb6adfe7 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        11cadc:	e3300000 	teq	r0, #0	; 0x0
        11cae0:	1a000004 	bne	11caf8 <CMemObject::MakeShared(unsigned long)+0x48>
        11cae4:	e1a00006 	mov	r0, r6
        11cae8:	e1a03005 	mov	r3, r5
        11caec:	e5941020 	ldr	r1, [r4, #32]	; fField32
        11caf0:	e594201c 	ldr	r2, [r4, #28]	; fField28
        11caf4:	eb6af89c 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        11caf8:	e3300000 	teq	r0, #0	; 0x0
        11cafc:	05941000 	ldreq	r1, [r4]
        11cb00:	03811202 	orreq	r1, r1, #536870912	; 0x20000000
        11cb04:	05841000 	streq	r1, [r4]
        11cb08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::CopyTo(void *, unsigned long, unsigned long)
 * Address: 0011cb0c
 */
NewtonErr			CMemObject::CopyTo(void* buffer, ULong size, ULong offset = 0) {
    /*
        11cb0c:	e1a0c00d 	mov	ip, sp
        11cb10:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11cb14:	e24cb004 	sub	fp, ip, #4	; 0x4
        11cb18:	e1a0c003 	mov	ip, r3
        11cb1c:	e5903000 	ldr	r3, [r0]
        11cb20:	e3130102 	tst	r3, #-2147483648	; 0x80000000
        11cb24:	0a000006 	beq	11cb44 <CMemObject::CopyTo(void *, unsigned long, unsigned long)+0x38>
        11cb28:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11cb2c:	e080300c 	add	r3, r0, ip
        11cb30:	e1a00001 	mov	r0, r1
        11cb34:	e1a01003 	mov	r1, r3
        11cb38:	eb6b0905 	bl	1bdef54 <$BlockMove>
        11cb3c:	e3a00000 	mov	r0, #0	; 0x0
        11cb40:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        11cb44:	e3130201 	tst	r3, #268435456	; 0x10000000
        11cb48:	e280e004 	add	lr, r0, #4	; 0x4
        11cb4c:	03a03000 	moveq	r3, #0	; 0x0
        11cb50:	1280300c 	addne	r3, r0, #12	; 0xc
        11cb54:	e92d0008 	stmdb	sp!, {r3}
        11cb58:	e1a0000e 	mov	r0, lr
        11cb5c:	e1a0300c 	mov	r3, ip
        11cb60:	eb6acf3e 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        11cb64:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long)
 * Address: 0011cb68
 */
NewtonErr			CMemObject::CopyFrom(ULong* returnSize, void* buffer, ULong size, ULong offset = 0) {
    /*
        11cb68:	e1a0c00d 	mov	ip, sp
        11cb6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11cb70:	e24cb004 	sub	fp, ip, #4	; 0x4
        11cb74:	e1a0e002 	mov	lr, r2
        11cb78:	e1a0c003 	mov	ip, r3
        11cb7c:	e59b2004 	ldr	r2, [fp, #4]	; fFlags
        11cb80:	e5903000 	ldr	r3, [r0]
        11cb84:	e3130102 	tst	r3, #-2147483648	; 0x80000000
        11cb88:	0a00000b 	beq	11cbbc <CMemObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long)+0x54>
        11cb8c:	e590301c 	ldr	r3, [r0, #28]	; fField28
        11cb90:	e0433002 	sub	r3, r3, r2
        11cb94:	e153000c 	cmp	r3, ip
        11cb98:	81a0300c 	movhi	r3, ip
        11cb9c:	e5813000 	str	r3, [r1]
        11cba0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11cba4:	e0800002 	add	r0, r0, r2
        11cba8:	e1a02003 	mov	r2, r3
        11cbac:	e1a0100e 	mov	r1, lr
        11cbb0:	eb6b08e7 	bl	1bdef54 <$BlockMove>
        11cbb4:	e3a00000 	mov	r0, #0	; 0x0
        11cbb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11cbbc:	e3130201 	tst	r3, #268435456	; 0x10000000
        11cbc0:	e2804004 	add	r4, r0, #4	; 0x4
        11cbc4:	03a03000 	moveq	r3, #0	; 0x0
        11cbc8:	1280300c 	addne	r3, r0, #12	; 0xc
        11cbcc:	e92d000c 	stmdb	sp!, {r2, r3}
        11cbd0:	e1a00004 	mov	r0, r4
        11cbd4:	e1a0300c 	mov	r3, ip
        11cbd8:	e1a0200e 	mov	r2, lr
        11cbdc:	eb6acf16 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        11cbe0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CMemObject::GetId(void)
 * Address: 0011cbe4
 */
TObjectId			CMemObject::GetId(void);				// returns id if type is external, 0 otherwise {
    /*
        11cbe4:	e5900004 	ldr	r0, [r0, #4]	; fFlags
        11cbe8:	e1a0f00e 	mov	pc, lr
    */
}

