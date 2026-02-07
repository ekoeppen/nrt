#include "include/TObjectPtr.h"

/**
 * Symbol: TObjectPtr::__dt(void)
 * Address: 0031a15c
 */
TObjectPtr::~TObjectPtr(void) {
    /*
        31a15c:	e1a0c00d 	mov	ip, sp
        31a160:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31a164:	e24cb004 	sub	fp, ip, #4	; 0x4
        31a168:	e1a04000 	mov	r4, r0
        31a16c:	e1a05001 	mov	r5, r1
        31a170:	e5900000 	ldr	r0, [r0]
        31a174:	e5900000 	ldr	r0, [r0]
        31a178:	e3300002 	teq	r0, #2	; 0x2
        31a17c:	1b62b8bb 	blne	1bc8470 <$UnlockRef(long)>
        31a180:	e5940000 	ldr	r0, [r4]
        31a184:	eb62a40c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31a188:	e3150001 	tst	r5, #1	; 0x1
        31a18c:	11a00004 	movne	r0, r4
        31a190:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        31a194:	1a62cd51 	bne	1bcd6e0 <$__dl(void *)>
        31a198:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectPtr::__ct(TObjectPtr const &)
 * Address: 0031ada4
 */
TObjectPtr::TObjectPtr(TObjectPtr const &) {
    /*
        31ada4:	e1a0c00d 	mov	ip, sp
        31ada8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31adac:	e24cb004 	sub	fp, ip, #4	; 0x4
        31adb0:	e1b04000 	movs	r4, r0
        31adb4:	e1a05001 	mov	r5, r1
        31adb8:	1a000003 	bne	31adcc <TObjectPtr::__ct(TObjectPtr const &)+0x28>
        31adbc:	e3a00004 	mov	r0, #4	; 0x4
        31adc0:	eb62ce5c 	bl	1bce738 <$__nw(unsigned int)>
        31adc4:	e1b04000 	movs	r4, r0
        31adc8:	0a00000a 	beq	31adf8 <TObjectPtr::__ct(TObjectPtr const &)+0x54>
        31adcc:	e3a00002 	mov	r0, #2	; 0x2
        31add0:	eb629cdd 	bl	1bc214c <$AllocateRefHandle(long)>
        31add4:	e3a01000 	mov	r1, #0	; 0x0
        31add8:	e5840000 	str	r0, [r4]
        31addc:	e5a01004 	str	r1, [r0, #4]!	; fField4
        31ade0:	e5950000 	ldr	r0, [r5]
        31ade4:	e5900000 	ldr	r0, [r0]
        31ade8:	e5941000 	ldr	r1, [r4]
        31adec:	e5810000 	str	r0, [r1]
        31adf0:	e3300002 	teq	r0, #2	; 0x2
        31adf4:	1b62a92e 	blne	1bc52b4 <$LockRef(long)>
        31adf8:	e1a00004 	mov	r0, r4
        31adfc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectPtr::operator=(TObjectPtr const &)
 * Address: 0031be28
 */
TObjectPtr::operator=(TObjectPtr const &) {
    /*
        31be28:	e1a0c00d 	mov	ip, sp
        31be2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31be30:	e24cb004 	sub	fp, ip, #4	; 0x4
        31be34:	e1a04000 	mov	r4, r0
        31be38:	e1a05001 	mov	r5, r1
        31be3c:	e5900000 	ldr	r0, [r0]
        31be40:	e5900000 	ldr	r0, [r0]
        31be44:	e3300002 	teq	r0, #2	; 0x2
        31be48:	1b62b188 	blne	1bc8470 <$UnlockRef(long)>
        31be4c:	e5950000 	ldr	r0, [r5]
        31be50:	e5900000 	ldr	r0, [r0]
        31be54:	e5941000 	ldr	r1, [r4]
        31be58:	e5810000 	str	r0, [r1]
        31be5c:	e3300002 	teq	r0, #2	; 0x2
        31be60:	1b62a513 	blne	1bc52b4 <$LockRef(long)>
        31be64:	e1a00004 	mov	r0, r4
        31be68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectPtr::operator=(long)
 * Address: 0031bf8c
 */
TObjectPtr::operator=(long) {
    /*
        31bf8c:	e1a0c00d 	mov	ip, sp
        31bf90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31bf94:	e24cb004 	sub	fp, ip, #4	; 0x4
        31bf98:	e1a04000 	mov	r4, r0
        31bf9c:	e1a05001 	mov	r5, r1
        31bfa0:	e5900000 	ldr	r0, [r0]
        31bfa4:	e5900000 	ldr	r0, [r0]
        31bfa8:	e3300002 	teq	r0, #2	; 0x2
        31bfac:	1b62b12f 	blne	1bc8470 <$UnlockRef(long)>
        31bfb0:	e5941000 	ldr	r1, [r4]
        31bfb4:	e5815000 	str	r5, [r1]
        31bfb8:	e3350002 	teq	r5, #2	; 0x2
        31bfbc:	11a00005 	movne	r0, r5
        31bfc0:	1b62a4bb 	blne	1bc52b4 <$LockRef(long)>
        31bfc4:	e1a00004 	mov	r0, r4
        31bfc8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectPtr::operator char *( const(void))
 * Address: 0031c3ac
 */
TObjectPtr::operator char *( const(void)) {
    /*
        31c3ac:	e1a0c00d 	mov	ip, sp
        31c3b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31c3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c3b8:	e1a04000 	mov	r4, r0
        31c3bc:	e5900000 	ldr	r0, [r0]
        31c3c0:	e5900000 	ldr	r0, [r0]
        31c3c4:	e3300002 	teq	r0, #2	; 0x2
        31c3c8:	1a000004 	bne	31c3e0 <TObjectPtr::operator char *( const(void))+0x34>
        31c3cc:	e59f001c 	ldr	r0, [pc, #1c]	; 31c3f0 <TObjectPtr::operator char *( const(void))+0x44>
        31c3d0:	e5900000 	ldr	r0, [r0]
        31c3d4:	e3a02000 	mov	r2, #0	; 0x0
        31c3d8:	e59f1014 	ldr	r1, [pc, #14]	; 31c3f4 <TObjectPtr::operator char *( const(void))+0x48>
        31c3dc:	eb631b6e 	bl	1be319c <$Throw>
        31c3e0:	e5940000 	ldr	r0, [r4]
        31c3e4:	e5900000 	ldr	r0, [r0]
        31c3e8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        31c3ec:	ea62a3c0 	b	1bc52f4 <$ObjectPtr(long)>
        31c3f0:	00371308 	eoreqs	r1, r7, r8, lsl #6
        31c3f4:	ffff43ab 	swinv	0x00ff43ab
    */
}

/**
 * Symbol: TObjectPtr::__ct(void)
 * Address: 0031e05c
 */
TObjectPtr::TObjectPtr(void) {
    /*
        31e05c:	e1a0c00d 	mov	ip, sp
        31e060:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31e064:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e068:	e1b04000 	movs	r4, r0
        31e06c:	1a000003 	bne	31e080 <TObjectPtr::__ct(void)+0x24>
        31e070:	e3a00004 	mov	r0, #4	; 0x4
        31e074:	eb62c1af 	bl	1bce738 <$__nw(unsigned int)>
        31e078:	e1b04000 	movs	r4, r0
        31e07c:	0a000004 	beq	31e094 <TObjectPtr::__ct(void)+0x38>
        31e080:	e3a00002 	mov	r0, #2	; 0x2
        31e084:	eb629030 	bl	1bc214c <$AllocateRefHandle(long)>
        31e088:	e3a01000 	mov	r1, #0	; 0x0
        31e08c:	e5840000 	str	r0, [r4]
        31e090:	e5a01004 	str	r1, [r0, #4]!	; fField4
        31e094:	e1a00004 	mov	r0, r4
        31e098:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectPtr::__ct(long)
 * Address: 0031e80c
 */
TObjectPtr::TObjectPtr(long) {
    /*
        31e80c:	e1a0c00d 	mov	ip, sp
        31e810:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31e814:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e818:	e1b04000 	movs	r4, r0
        31e81c:	e1a05001 	mov	r5, r1
        31e820:	1a000005 	bne	31e83c <TObjectPtr::__ct(long)+0x30>
        31e824:	e3a00004 	mov	r0, #4	; 0x4
        31e828:	eb62bfc2 	bl	1bce738 <$__nw(unsigned int)>
        31e82c:	e1b04000 	movs	r4, r0
        31e830:	1a000001 	bne	31e83c <TObjectPtr::__ct(long)+0x30>
        31e834:	e1a00004 	mov	r0, r4
        31e838:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31e83c:	e1a00005 	mov	r0, r5
        31e840:	eb628e41 	bl	1bc214c <$AllocateRefHandle(long)>
        31e844:	e3a01000 	mov	r1, #0	; 0x0
        31e848:	e5840000 	str	r0, [r4]
        31e84c:	e3350002 	teq	r5, #2	; 0x2
        31e850:	e5a01004 	str	r1, [r0, #4]!	; fField4
        31e854:	1a000005 	bne	31e870 <TObjectPtr::__ct(long)+0x64>
        31e858:	e59f0020 	ldr	r0, [pc, #20]	; 31e880 <TObjectPtr::__ct(long)+0x74>
        31e85c:	e5900000 	ldr	r0, [r0]
        31e860:	e3a02000 	mov	r2, #0	; 0x0
        31e864:	e3a01feb 	mov	r1, #940	; 0x3ac
        31e868:	e2411903 	sub	r1, r1, #49152	; 0xc000
        31e86c:	eb63124a 	bl	1be319c <$Throw>
        31e870:	e5940000 	ldr	r0, [r4]
        31e874:	e5900000 	ldr	r0, [r0]
        31e878:	eb629a8d 	bl	1bc52b4 <$LockRef(long)>
        31e87c:	eaffffec 	b	31e834 <TObjectPtr::__ct(long)+0x28>
        31e880:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TObjectPtr::__ct(RefStruct const &)
 * Address: 0031f1c4
 */
TObjectPtr::TObjectPtr(RefStruct const &) {
    /*
        31f1c4:	e1a0c00d 	mov	ip, sp
        31f1c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31f1cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        31f1d0:	e1b04000 	movs	r4, r0
        31f1d4:	e1a05001 	mov	r5, r1
        31f1d8:	1a000005 	bne	31f1f4 <TObjectPtr::__ct(RefStruct const &)+0x30>
        31f1dc:	e3a00004 	mov	r0, #4	; 0x4
        31f1e0:	eb62bd54 	bl	1bce738 <$__nw(unsigned int)>
        31f1e4:	e1b04000 	movs	r4, r0
        31f1e8:	1a000001 	bne	31f1f4 <TObjectPtr::__ct(RefStruct const &)+0x30>
        31f1ec:	e1a00004 	mov	r0, r4
        31f1f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31f1f4:	e5950000 	ldr	r0, [r5]
        31f1f8:	e5900000 	ldr	r0, [r0]
        31f1fc:	eb628bd2 	bl	1bc214c <$AllocateRefHandle(long)>
        31f200:	e3a01000 	mov	r1, #0	; 0x0
        31f204:	e5840000 	str	r0, [r4]
        31f208:	e5a01004 	str	r1, [r0, #4]!	; fField4
        31f20c:	e5950000 	ldr	r0, [r5]
        31f210:	e5900000 	ldr	r0, [r0]
        31f214:	e3300002 	teq	r0, #2	; 0x2
        31f218:	1a000005 	bne	31f234 <TObjectPtr::__ct(RefStruct const &)+0x70>
        31f21c:	e59f0020 	ldr	r0, [pc, #20]	; 31f244 <TObjectPtr::__ct(RefStruct const &)+0x80>
        31f220:	e5900000 	ldr	r0, [r0]
        31f224:	e3a02000 	mov	r2, #0	; 0x0
        31f228:	e3a01feb 	mov	r1, #940	; 0x3ac
        31f22c:	e2411903 	sub	r1, r1, #49152	; 0xc000
        31f230:	eb630fd9 	bl	1be319c <$Throw>
        31f234:	e5940000 	ldr	r0, [r4]
        31f238:	e5900000 	ldr	r0, [r0]
        31f23c:	eb62981c 	bl	1bc52b4 <$LockRef(long)>
        31f240:	eaffffe9 	b	31f1ec <TObjectPtr::__ct(RefStruct const &)+0x28>
        31f244:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TObjectPtr::__ct(RefVar const &)
 * Address: 0031fe10
 */
TObjectPtr::TObjectPtr(RefVar const &) {
    /*
        31fe10:	e1a0c00d 	mov	ip, sp
        31fe14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31fe18:	e24cb004 	sub	fp, ip, #4	; 0x4
        31fe1c:	e1b04000 	movs	r4, r0
        31fe20:	e1a05001 	mov	r5, r1
        31fe24:	1a000005 	bne	31fe40 <TObjectPtr::__ct(RefVar const &)+0x30>
        31fe28:	e3a00004 	mov	r0, #4	; 0x4
        31fe2c:	eb62ba41 	bl	1bce738 <$__nw(unsigned int)>
        31fe30:	e1b04000 	movs	r4, r0
        31fe34:	1a000001 	bne	31fe40 <TObjectPtr::__ct(RefVar const &)+0x30>
        31fe38:	e1a00004 	mov	r0, r4
        31fe3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31fe40:	e5950000 	ldr	r0, [r5]
        31fe44:	e5900000 	ldr	r0, [r0]
        31fe48:	eb6288bf 	bl	1bc214c <$AllocateRefHandle(long)>
        31fe4c:	e3a01000 	mov	r1, #0	; 0x0
        31fe50:	e5840000 	str	r0, [r4]
        31fe54:	e5a01004 	str	r1, [r0, #4]!	; fField4
        31fe58:	e5950000 	ldr	r0, [r5]
        31fe5c:	e5900000 	ldr	r0, [r0]
        31fe60:	e3300002 	teq	r0, #2	; 0x2
        31fe64:	1a000005 	bne	31fe80 <TObjectPtr::__ct(RefVar const &)+0x70>
        31fe68:	e59f0020 	ldr	r0, [pc, #20]	; 31fe90 <TObjectPtr::__ct(RefVar const &)+0x80>
        31fe6c:	e5900000 	ldr	r0, [r0]
        31fe70:	e3a02000 	mov	r2, #0	; 0x0
        31fe74:	e3a01feb 	mov	r1, #940	; 0x3ac
        31fe78:	e2411903 	sub	r1, r1, #49152	; 0xc000
        31fe7c:	eb630cc6 	bl	1be319c <$Throw>
        31fe80:	e5940000 	ldr	r0, [r4]
        31fe84:	e5900000 	ldr	r0, [r0]
        31fe88:	eb629509 	bl	1bc52b4 <$LockRef(long)>
        31fe8c:	eaffffe9 	b	31fe38 <TObjectPtr::__ct(RefVar const &)+0x28>
        31fe90:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

