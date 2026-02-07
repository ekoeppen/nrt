#include "include/TXBinaryChars.h"

/**
 * Symbol: TXBinaryChars::__ct(RefVar const &)
 * Address: 0023e7ec
 */
TXBinaryChars::TXBinaryChars(RefVar const &) {
    /*
        23e7ec:	e1a0c00d 	mov	ip, sp
        23e7f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23e7f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e7f8:	e1b04000 	movs	r4, r0
        23e7fc:	e1a05001 	mov	r5, r1
        23e800:	1a000003 	bne	23e814 <TXBinaryChars::__ct(RefVar const &)+0x28>
        23e804:	e3a00008 	mov	r0, #8	; 0x8
        23e808:	eb663fca 	bl	1bce738 <$__nw(unsigned int)>
        23e80c:	e1b04000 	movs	r4, r0
        23e810:	0a000013 	beq	23e864 <TXBinaryChars::__ct(RefVar const &)+0x78>
        23e814:	e1a00004 	mov	r0, r4
        23e818:	eb6522de 	bl	1b87398 <TXChars::$__ct(void)>
        23e81c:	e3a00002 	mov	r0, #2	; 0x2
        23e820:	eb660e49 	bl	1bc214c <$AllocateRefHandle(long)>
        23e824:	e3a01000 	mov	r1, #0	; 0x0
        23e828:	e5840004 	str	r0, [r4, #4]	; fField4
        23e82c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23e830:	e59f0034 	ldr	r0, [pc, #34]	; 23e86c <TXBinaryChars::__ct(RefVar const &)+0x80>
        23e834:	e5840000 	str	r0, [r4]
        23e838:	e5950000 	ldr	r0, [r5]
        23e83c:	e5900000 	ldr	r0, [r0]
        23e840:	e3300002 	teq	r0, #2	; 0x2
        23e844:	15941004 	ldrne	r1, [r4, #4]	; fField4
        23e848:	1a000004 	bne	23e860 <TXBinaryChars::__ct(RefVar const &)+0x74>
        23e84c:	e2845004 	add	r5, r4, #4	; 0x4
        23e850:	e59f0018 	ldr	r0, [pc, #18]	; 23e870 <TXBinaryChars::__ct(RefVar const &)+0x84>
        23e854:	e3a01002 	mov	r1, #2	; 0x2
        23e858:	eb660e37 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        23e85c:	e5951000 	ldr	r1, [r5]
        23e860:	e5810000 	str	r0, [r1]
        23e864:	e1a00004 	mov	r0, r4
        23e868:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23e86c:	0001d1a0 	andeq	sp, r1, r0, lsr #3
        23e870:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: TXBinaryChars::Count( const(void))
 * Address: 0023e874
 */
TXBinaryChars::Count( const(void)) {
    /*
        23e874:	e1a0c00d 	mov	ip, sp
        23e878:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23e87c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e880:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23e884:	e5900000 	ldr	r0, [r0]
        23e888:	eb661a87 	bl	1bc52ac <$Length(long)>
        23e88c:	e1a000a0 	mov	r0, r0, lsr #1
        23e890:	e2400001 	sub	r0, r0, #1	; 0x1
        23e894:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::Replace(long, long, TXTextDescriptor *)
 * Address: 0023e898
 */
TXBinaryChars::Replace(long, long, TXTextDescriptor *) {
    /*
        23e898:	e1a0c00d 	mov	ip, sp
        23e89c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23e8a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e8a4:	e1a06003 	mov	r6, r3
        23e8a8:	e1a05081 	mov	r5, r1, lsl #1
        23e8ac:	e1a04082 	mov	r4, r2, lsl #1
        23e8b0:	e2800004 	add	r0, r0, #4	; 0x4
        23e8b4:	e1a08000 	mov	r8, r0
        23e8b8:	e5937008 	ldr	r7, [r3, #8]
        23e8bc:	e5900000 	ldr	r0, [r0]
        23e8c0:	e5900000 	ldr	r0, [r0]
        23e8c4:	eb661a78 	bl	1bc52ac <$Length(long)>
        23e8c8:	e1a0a000 	mov	sl, r0
        23e8cc:	e0649087 	rsb	r9, r4, r7, lsl #1
        23e8d0:	e3590000 	cmp	r9, #0	; 0x0
        23e8d4:	da00000d 	ble	23e910 <TXBinaryChars::Replace(long, long, TXTextDescriptor *)+0x78>
        23e8d8:	e3a00000 	mov	r0, #0	; 0x0
        23e8dc:	e52d006c 	str	r0, [sp, -#108]!
        23e8e0:	e28d0008 	add	r0, sp, #8	; 0x8
        23e8e4:	eb65d022 	bl	1bb2974 <$setjmp>
        23e8e8:	e3300000 	teq	r0, #0	; 0x0
        23e8ec:	e1a0000d 	mov	r0, sp
        23e8f0:	1a00002c 	bne	23e9a8 <TXBinaryChars::Replace(long, long, TXTextDescriptor *)+0x110>
        23e8f4:	eb6685e0 	bl	1be007c <$AddExceptionHandler>
        23e8f8:	e08a1009 	add	r1, sl, r9
        23e8fc:	e1a00008 	mov	r0, r8
        23e900:	eb661e99 	bl	1bc636c <$SetLength(RefVar const &, long)>
        23e904:	e1a0000d 	mov	r0, sp
        23e908:	eb6689ea 	bl	1be10b8 <$ExitHandler>
        23e90c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        23e910:	e5980000 	ldr	r0, [r8]
        23e914:	e5900000 	ldr	r0, [r0]
        23e918:	eb660e0f 	bl	1bc215c <$BinaryData(long)>
        23e91c:	e0800005 	add	r0, r0, r5
        23e920:	e3390000 	teq	r9, #0	; 0x0
        23e924:	0a000008 	beq	23e94c <TXBinaryChars::Replace(long, long, TXTextDescriptor *)+0xb4>
        23e928:	e04a1005 	sub	r1, sl, r5
        23e92c:	e0412004 	sub	r2, r1, r4
        23e930:	e0801004 	add	r1, r0, r4
        23e934:	e0800087 	add	r0, r0, r7, lsl #1
        23e938:	eb65d845 	bl	1bb4a54 <$memmove>
        23e93c:	e3590000 	cmp	r9, #0	; 0x0
        23e940:	b08a1009 	addlt	r1, sl, r9
        23e944:	b1a00008 	movlt	r0, r8
        23e948:	bb661e87 	bllt	1bc636c <$SetLength(RefVar const &, long)>
        23e94c:	e3370000 	teq	r7, #0	; 0x0
        23e950:	03a00000 	moveq	r0, #0	; 0x0
        23e954:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23e958:	e24dd018 	sub	sp, sp, #24	; 0x18
        23e95c:	e1a01008 	mov	r1, r8
        23e960:	e28d0014 	add	r0, sp, #20	; 0x14
        23e964:	eb6609dc 	bl	1bc10dc <TObjectPtr::$__ct(RefStruct const &)>
        23e968:	e28d0014 	add	r0, sp, #20	; 0x14
        23e96c:	eb660de8 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        23e970:	e0801005 	add	r1, r0, r5
        23e974:	e1a02007 	mov	r2, r7
        23e978:	e1a0000d 	mov	r0, sp
        23e97c:	eb6526a1 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        23e980:	e1a02007 	mov	r2, r7
        23e984:	e1a0100d 	mov	r1, sp
        23e988:	e1a00006 	mov	r0, r6
        23e98c:	eb65269f 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        23e990:	e1a04000 	mov	r4, r0
        23e994:	e28d0014 	add	r0, sp, #20	; 0x14
        23e998:	e3a01000 	mov	r1, #0	; 0x0
        23e99c:	eb660dd7 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        23e9a0:	e1a00004 	mov	r0, r4
        23e9a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23e9a8:	e2800060 	add	r0, r0, #96	; 0x60
        23e9ac:	eb629632 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23e9b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::CopyTo(TXTextDescriptor *, long, long)
 * Address: 0023e9c4
 */
TXBinaryChars::CopyTo(TXTextDescriptor *, long, long) {
    /*
        23e9c4:	e1a0c00d 	mov	ip, sp
        23e9c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23e9cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e9d0:	e1a06001 	mov	r6, r1
        23e9d4:	e1a05002 	mov	r5, r2
        23e9d8:	e1a04003 	mov	r4, r3
        23e9dc:	e24dd018 	sub	sp, sp, #24	; 0x18
        23e9e0:	e2801004 	add	r1, r0, #4	; 0x4
        23e9e4:	e28d0014 	add	r0, sp, #20	; 0x14
        23e9e8:	eb6609bb 	bl	1bc10dc <TObjectPtr::$__ct(RefStruct const &)>
        23e9ec:	e28d0014 	add	r0, sp, #20	; 0x14
        23e9f0:	eb660dc7 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        23e9f4:	e0801085 	add	r1, r0, r5, lsl #1
        23e9f8:	e1a02004 	mov	r2, r4
        23e9fc:	e1a0000d 	mov	r0, sp
        23ea00:	eb652680 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        23ea04:	e1a02004 	mov	r2, r4
        23ea08:	e1a01006 	mov	r1, r6
        23ea0c:	e1a0000d 	mov	r0, sp
        23ea10:	eb65267e 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        23ea14:	e1a04000 	mov	r4, r0
        23ea18:	e28d0014 	add	r0, sp, #20	; 0x14
        23ea1c:	e3a01000 	mov	r1, #0	; 0x0
        23ea20:	eb660db6 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        23ea24:	e1a00004 	mov	r0, r4
        23ea28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::AcquireCharChunk(long, long *, long *)
 * Address: 0023ea2c
 */
TXBinaryChars::AcquireCharChunk(long, long *, long *) {
    /*
        23ea2c:	e1a0c00d 	mov	ip, sp
        23ea30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23ea34:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ea38:	e1a05000 	mov	r5, r0
        23ea3c:	e1a04001 	mov	r4, r1
        23ea40:	e1a06003 	mov	r6, r3
        23ea44:	e5901000 	ldr	r1, [r0]
        23ea48:	e1a0e00f 	mov	lr, pc
        23ea4c:	e281f004 	add	pc, r1, #4	; 0x4
        23ea50:	e0400004 	sub	r0, r0, r4
        23ea54:	e5860000 	str	r0, [r6]
        23ea58:	e3500000 	cmp	r0, #0	; 0x0
        23ea5c:	d3a00000 	movle	r0, #0	; 0x0
        23ea60:	d5860000 	strle	r0, [r6]
        23ea64:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        23ea68:	e2850004 	add	r0, r5, #4	; 0x4
        23ea6c:	e1a05000 	mov	r5, r0
        23ea70:	e5900000 	ldr	r0, [r0]
        23ea74:	e5900000 	ldr	r0, [r0]
        23ea78:	eb661a0d 	bl	1bc52b4 <$LockRef(long)>
        23ea7c:	e5950000 	ldr	r0, [r5]
        23ea80:	e5900000 	ldr	r0, [r0]
        23ea84:	eb660db4 	bl	1bc215c <$BinaryData(long)>
        23ea88:	e0800084 	add	r0, r0, r4, lsl #1
        23ea8c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::ReleaseCharChunk(long)
 * Address: 0023ea90
 */
TXBinaryChars::ReleaseCharChunk(long) {
    /*
        23ea90:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23ea94:	e5900000 	ldr	r0, [r0]
        23ea98:	ea662674 	b	1bc8470 <$UnlockRef(long)>
    */
}

/**
 * Symbol: TXBinaryChars::GetLineChars(long, long, long *)
 * Address: 0023ea9c
 */
TXBinaryChars::GetLineChars(long, long, long *) {
    /*
        23ea9c:	e1a0c00d 	mov	ip, sp
        23eaa0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23eaa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eaa8:	e1a04001 	mov	r4, r1
        23eaac:	e2800004 	add	r0, r0, #4	; 0x4
        23eab0:	e1a05000 	mov	r5, r0
        23eab4:	e5900000 	ldr	r0, [r0]
        23eab8:	e5900000 	ldr	r0, [r0]
        23eabc:	eb6619fc 	bl	1bc52b4 <$LockRef(long)>
        23eac0:	e5950000 	ldr	r0, [r5]
        23eac4:	e5900000 	ldr	r0, [r0]
        23eac8:	eb660da3 	bl	1bc215c <$BinaryData(long)>
        23eacc:	e0800084 	add	r0, r0, r4, lsl #1
        23ead0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::GetChar(long)
 * Address: 0023ead4
 */
TXBinaryChars::GetChar(long) {
    /*
        23ead4:	e1a0c00d 	mov	ip, sp
        23ead8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23eadc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eae0:	e1a04001 	mov	r4, r1
        23eae4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23eae8:	e5900000 	ldr	r0, [r0]
        23eaec:	eb660d9a 	bl	1bc215c <$BinaryData(long)>
        23eaf0:	e0800084 	add	r0, r0, r4, lsl #1
        23eaf4:	e5900000 	ldr	r0, [r0]
        23eaf8:	e1a00820 	mov	r0, r0, lsr #16
        23eafc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryChars::SearchChar(unsigned short, long, long)
 * Address: 0023eb00
 */
TXBinaryChars::SearchChar(unsigned short, long, long) {
    /*
        23eb00:	e1a0c00d 	mov	ip, sp
        23eb04:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23eb08:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eb0c:	e1a05002 	mov	r5, r2
        23eb10:	e1a04003 	mov	r4, r3
        23eb14:	e1a06801 	mov	r6, r1, lsl #16
        23eb18:	e1a06826 	mov	r6, r6, lsr #16
        23eb1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23eb20:	e5900000 	ldr	r0, [r0]
        23eb24:	eb660d8c 	bl	1bc215c <$BinaryData(long)>
        23eb28:	e0801085 	add	r1, r0, r5, lsl #1
        23eb2c:	e1a02004 	mov	r2, r4
        23eb30:	e1a00006 	mov	r0, r6
        23eb34:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        23eb38:	ea652a66 	b	1b894d8 <$SearchChar(unsigned short, unsigned short const *, long)>
    */
}

/**
 * Symbol: TXBinaryChars::SearchCharBack(unsigned short, long, long)
 * Address: 0023eb3c
 */
TXBinaryChars::SearchCharBack(unsigned short, long, long) {
    /*
        23eb3c:	e1a0c00d 	mov	ip, sp
        23eb40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23eb44:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eb48:	e1a05002 	mov	r5, r2
        23eb4c:	e1a04003 	mov	r4, r3
        23eb50:	e1a06801 	mov	r6, r1, lsl #16
        23eb54:	e1a06826 	mov	r6, r6, lsr #16
        23eb58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23eb5c:	e5900000 	ldr	r0, [r0]
        23eb60:	eb660d7d 	bl	1bc215c <$BinaryData(long)>
        23eb64:	e0801085 	add	r1, r0, r5, lsl #1
        23eb68:	e1a02004 	mov	r2, r4
        23eb6c:	e1a00006 	mov	r0, r6
        23eb70:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        23eb74:	ea652a58 	b	1b894dc <$SearchCharBack(unsigned short, unsigned short const *, long)>
    */
}

/**
 * Symbol: TXBinaryChars::GetCtrlCharOffset(long, long, unsigned short *)
 * Address: 0023eb78
 */
TXBinaryChars::GetCtrlCharOffset(long, long, unsigned short *) {
    /*
        23eb78:	e1a0c00d 	mov	ip, sp
        23eb7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23eb80:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eb84:	e1a06001 	mov	r6, r1
        23eb88:	e1a05002 	mov	r5, r2
        23eb8c:	e1a04003 	mov	r4, r3
        23eb90:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23eb94:	e5900000 	ldr	r0, [r0]
        23eb98:	eb660d6f 	bl	1bc215c <$BinaryData(long)>
        23eb9c:	e0800086 	add	r0, r0, r6, lsl #1
        23eba0:	e1a02004 	mov	r2, r4
        23eba4:	e1a01005 	mov	r1, r5
        23eba8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        23ebac:	ea652a4b 	b	1b894e0 <$GetCtrlCharOffset(unsigned short const *, long, unsigned short *)>
    */
}

