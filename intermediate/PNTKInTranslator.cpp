#include "include/PNTKInTranslator.h"

/**
 * Symbol: Sizeof__16PNTKInTranslatorSFv
 * Address: 00129ef4
 */
void PNTKInTranslator::Sizeof() {
    /*
        129ef4:	e3a00024 	mov	r0, #36	; 0x24
        129ef8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKInTranslator::New(void)
 * Address: 00129efc
 */
PNTKInTranslator::New(void) {
    /*
        129efc:	e3a01000 	mov	r1, #0	; 0x0
        129f00:	e5801018 	str	r1, [r0, #24]	; fField24
        129f04:	e580101c 	str	r1, [r0, #28]	; fField28
        129f08:	e5801010 	str	r1, [r0, #16]	; fField16
        129f0c:	e5801014 	str	r1, [r0, #20]	; fField20
        129f10:	e5c01020 	strb	r1, [r0, #32]	; fField32
        129f14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKInTranslator::SetTimeout(unsigned long)
 * Address: 00129f18
 */
PNTKInTranslator::SetTimeout(unsigned long) {
    /*
        129f18:	e5a01014 	str	r1, [r0, #20]!	; fField20
        129f1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKInTranslator::Delete(void)
 * Address: 00129f20
 */
PNTKInTranslator::Delete(void) {
    /*
        129f20:	e590001c 	ldr	r0, [r0, #28]	; fField28
        129f24:	e3300000 	teq	r0, #0	; 0x0
        129f28:	01a0f00e 	moveq	pc, lr
        129f2c:	e3a01001 	mov	r1, #1	; 0x1
        129f30:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: PNTKInTranslator::Init(void *)
 * Address: 00129f34
 */
PNTKInTranslator::Init(void *) {
    /*
        129f34:	e1a0c00d 	mov	ip, sp
        129f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        129f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        129f40:	e1a04000 	mov	r4, r0
        129f44:	e3a05000 	mov	r5, #0	; 0x0
        129f48:	e3310000 	teq	r1, #0	; 0x0
        129f4c:	0a00001a 	beq	129fbc <PNTKInTranslator::Init(void *)+0x88>
        129f50:	e1a00001 	mov	r0, r1
        129f54:	e5911004 	ldr	r1, [r1, #4]
        129f58:	e5841010 	str	r1, [r4, #16]	; fField16
        129f5c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        129f60:	e5841014 	str	r1, [r4, #20]	; fField20
        129f64:	e5900000 	ldr	r0, [r0]
        129f68:	e5840018 	str	r0, [r4, #24]	; fField24
        129f6c:	e3a00000 	mov	r0, #0	; 0x0
        129f70:	eb6a1a30 	bl	1bb0838 <TTaskSafeRingPipe::$__ct(void)>
        129f74:	e584001c 	str	r0, [r4, #28]	; fField28
        129f78:	e3300000 	teq	r0, #0	; 0x0
        129f7c:	0a00000b 	beq	129fb0 <PNTKInTranslator::Init(void *)+0x7c>
        129f80:	e59f1024 	ldr	r1, [pc, #24]	; 129fac <PNTKInTranslator::Init(void *)+0x78>	; fField24
        129f84:	eb6ad817 	bl	1bdffe8 <$SetPtrName>
        129f88:	e5943014 	ldr	r3, [r4, #20]	; fField20
        129f8c:	e92d0008 	stmdb	sp!, {r3}
        129f90:	e3a02000 	mov	r2, #0	; 0x0
        129f94:	e5b43010 	ldr	r3, [r4, #16]!	; fField16
        129f98:	e5941008 	ldr	r1, [r4, #8]	; fField8
        129f9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        129fa0:	eb6a0dcf 	bl	1bad6e4 <TTaskSafeRingPipe::$Init(TTaskSafeRingBuffer *, unsigned char, unsigned long, unsigned long)>
        129fa4:	e28dd004 	add	sp, sp, #4	; 0x4
        129fa8:	ea000004 	b	129fc0 <PNTKInTranslator::Init(void *)+0x8c>
        129fac:	6e746b50 	mrcvs	11, 3, r6, cr4, cr0, {2}
        129fb0:	eb6ae05a 	bl	1be2120 <$MemError>
        129fb4:	e1a05000 	mov	r5, r0
        129fb8:	ea000000 	b	129fc0 <PNTKInTranslator::Init(void *)+0x8c>
        129fbc:	e3e05000 	mvn	r5, #0	; 0x0
        129fc0:	e1a00005 	mov	r0, r5
        129fc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKInTranslator::Idle(void)
 * Address: 00129fc8
 */
PNTKInTranslator::Idle(void) {
    /*
        129fc8:	e1a0c00d 	mov	ip, sp
        129fcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        129fd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        129fd4:	e1a04000 	mov	r4, r0
        129fd8:	e3a00000 	mov	r0, #0	; 0x0
        129fdc:	e52d006c 	str	r0, [sp, -#108]!
        129fe0:	e28d0008 	add	r0, sp, #8	; 0x8
        129fe4:	eb6a2262 	bl	1bb2974 <$setjmp>
        129fe8:	e3300000 	teq	r0, #0	; 0x0
        129fec:	159d0064 	ldrne	r0, [sp, #100]
        129ff0:	1a000010 	bne	12a038 <PNTKInTranslator::Idle(void)+0x70>
        129ff4:	e1a0000d 	mov	r0, sp
        129ff8:	eb6ad81f 	bl	1be007c <$AddExceptionHandler>
        129ffc:	e3a05001 	mov	r5, #1	; 0x1
        12a000:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        12a004:	e3300000 	teq	r0, #0	; 0x0
        12a008:	1a00000e 	bne	12a048 <PNTKInTranslator::Idle(void)+0x80>
        12a00c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12a010:	e5901000 	ldr	r1, [r0]
        12a014:	e1a0e00f 	mov	lr, pc
        12a018:	e281f040 	add	pc, r1, #64	; 0x40
        12a01c:	e3500000 	cmp	r0, #0	; 0x0
        12a020:	da000008 	ble	12a048 <PNTKInTranslator::Idle(void)+0x80>
        12a024:	e59f0014 	ldr	r0, [pc, #14]	; 12a040 <PNTKInTranslator::Idle(void)+0x78>
        12a028:	e5900000 	ldr	r0, [r0]
        12a02c:	eb666892 	bl	1ac427c <TNTKNub::$DoCommand(void)>
        12a030:	e3500000 	cmp	r0, #0	; 0x0
        12a034:	aa000002 	bge	12a044 <PNTKInTranslator::Idle(void)+0x7c>
        12a038:	eb6678fb 	bl	1ac842c <$NTKShutdown(long)>
        12a03c:	ea000001 	b	12a048 <PNTKInTranslator::Idle(void)+0x80>
        12a040:	0c10155c 	ldceq	5, cr1, [r0], -#368
        12a044:	c5c45020 	strgtb	r5, [r4, #32]	; fField32
        12a048:	e1a0000d 	mov	r0, sp
        12a04c:	eb6adc19 	bl	1be10b8 <$ExitHandler>
        12a050:	e3a009e1 	mov	r0, #3686400	; 0x384000
        12a054:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKInTranslator::FrameAvailable(void)
 * Address: 0012a058
 */
PNTKInTranslator::FrameAvailable(void) {
    /*
        12a058:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        12a05c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKInTranslator::ProduceFrame(int)
 * Address: 0012a060
 */
PNTKInTranslator::ProduceFrame(int) {
    /*
        12a060:	e1a0c00d 	mov	ip, sp
        12a064:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12a068:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a06c:	e3a05000 	mov	r5, #0	; 0x0
        12a070:	e5c05020 	strb	r5, [r0, #32]	; fField32
        12a074:	e24dd010 	sub	sp, sp, #16	; 0x10
        12a078:	e5b0101c 	ldr	r1, [r0, #28]!	; fField28
        12a07c:	e1a0000d 	mov	r0, sp
        12a080:	eb6a5c18 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
        12a084:	e3a00002 	mov	r0, #2	; 0x2
        12a088:	eb6a602f 	bl	1bc214c <$AllocateRefHandle(long)>
        12a08c:	e1a04000 	mov	r4, r0
        12a090:	e52d506c 	str	r5, [sp, -#108]!
        12a094:	e28d0008 	add	r0, sp, #8	; 0x8
        12a098:	eb6a2235 	bl	1bb2974 <$setjmp>
        12a09c:	e3300000 	teq	r0, #0	; 0x0
        12a0a0:	1a000016 	bne	12a100 <PNTKInTranslator::ProduceFrame(int)+0xa0>
        12a0a4:	e1a0000d 	mov	r0, sp
        12a0a8:	eb6ad7f3 	bl	1be007c <$AddExceptionHandler>
        12a0ac:	e28d006c 	add	r0, sp, #108	; 0x6c
        12a0b0:	eb6a7095 	bl	1bc630c <TObjectReader::$Read(void)>
        12a0b4:	e5840000 	str	r0, [r4]
        12a0b8:	e59f003c 	ldr	r0, [pc, #3c]	; 12a0fc <PNTKInTranslator::ProduceFrame(int)+0x9c>
        12a0bc:	e5900000 	ldr	r0, [r0]
        12a0c0:	e3a01000 	mov	r1, #0	; 0x0
        12a0c4:	eb667cfd 	bl	1ac94c0 <TNTKNub::$SendResult(long)>
        12a0c8:	e3300000 	teq	r0, #0	; 0x0
        12a0cc:	1b6678d6 	blne	1ac842c <$NTKShutdown(long)>
        12a0d0:	e1a0000d 	mov	r0, sp
        12a0d4:	eb6adbf7 	bl	1be10b8 <$ExitHandler>
        12a0d8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12a0dc:	e5945000 	ldr	r5, [r4]
        12a0e0:	e1a00004 	mov	r0, r4
        12a0e4:	eb6a6434 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12a0e8:	e1a0000d 	mov	r0, sp
        12a0ec:	e3a01000 	mov	r1, #0	; 0x0
        12a0f0:	eb64919e 	bl	1a4e770 <TObjectReader::$__dt(void)>
        12a0f4:	e1a00005 	mov	r0, r5
        12a0f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12a0fc:	0c10155c 	ldceq	5, cr1, [r0], -#368
        12a100:	e28d006c 	add	r0, sp, #108	; 0x6c
        12a104:	e3a01000 	mov	r1, #0	; 0x0
        12a108:	eb649198 	bl	1a4e770 <TObjectReader::$__dt(void)>
        12a10c:	e1a0000d 	mov	r0, sp
        12a110:	eb6ae00f 	bl	1be2154 <$NextHandler>
        12a114:	eafffff9 	b	12a100 <PNTKInTranslator::ProduceFrame(int)+0xa0>
    */
}

/**
 * Symbol: PNTKInTranslator::ReadHeader(unsigned long *, unsigned long *)
 * Address: 0012a118
 */
PNTKInTranslator::ReadHeader(unsigned long *, unsigned long *) {
    /*
        12a118:	e1a0c00d 	mov	ip, sp
        12a11c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12a120:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a124:	e1a04000 	mov	r4, r0
        12a128:	e1a05002 	mov	r5, r2
        12a12c:	e280c014 	add	ip, r0, #20	; 0x14
        12a130:	e89c1008 	ldmia	ip, {r3, ip}
        12a134:	e92d0008 	stmdb	sp!, {r3}
        12a138:	e5903010 	ldr	r3, [r0, #16]	; fField16
        12a13c:	e1a0000c 	mov	r0, ip
        12a140:	e3a02004 	mov	r2, #4	; 0x4
        12a144:	e59cc000 	ldr	ip, [ip]
        12a148:	e1a0e00f 	mov	lr, pc
        12a14c:	e28cf058 	add	pc, ip, #88	; 0x58
        12a150:	e28dd004 	add	sp, sp, #4	; 0x4
        12a154:	e284c014 	add	ip, r4, #20	; 0x14
        12a158:	e89c1008 	ldmia	ip, {r3, ip}
        12a15c:	e92d0008 	stmdb	sp!, {r3}
        12a160:	e1a01005 	mov	r1, r5
        12a164:	e1a0000c 	mov	r0, ip
        12a168:	e3a02004 	mov	r2, #4	; 0x4
        12a16c:	e5b43010 	ldr	r3, [r4, #16]!	; fField16
        12a170:	e59cc000 	ldr	ip, [ip]
        12a174:	e1a0e00f 	mov	lr, pc
        12a178:	e28cf058 	add	pc, ip, #88	; 0x58
        12a17c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKInTranslator::ReadData(void *, long)
 * Address: 0012a180
 */
PNTKInTranslator::ReadData(void *, long) {
    /*
        12a180:	e1a0c00d 	mov	ip, sp
        12a184:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a188:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a18c:	e280c014 	add	ip, r0, #20	; 0x14
        12a190:	e89c1008 	ldmia	ip, {r3, ip}
        12a194:	e92d0008 	stmdb	sp!, {r3}
        12a198:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a19c:	e1a0000c 	mov	r0, ip
        12a1a0:	e59cc000 	ldr	ip, [ip]
        12a1a4:	e1a0e00f 	mov	lr, pc
        12a1a8:	e28cf058 	add	pc, ip, #88	; 0x58
        12a1ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PNTKInTranslator::LoadPackage(void)
 * Address: 0012a1b0
 */
PNTKInTranslator::LoadPackage(void) {
    /*
        12a1b0:	e1a0c00d 	mov	ip, sp
        12a1b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12a1b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a1bc:	e1a05000 	mov	r5, r0
        12a1c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        12a1c4:	e3a00002 	mov	r0, #2	; 0x2
        12a1c8:	eb6a5fdf 	bl	1bc214c <$AllocateRefHandle(long)>
        12a1cc:	e58d0000 	str	r0, [sp]
        12a1d0:	e1a0400d 	mov	r4, sp
        12a1d4:	e59f0038 	ldr	r0, [pc, #38]	; 12a214 <PNTKInTranslator::LoadPackage(void)+0x64>
        12a1d8:	eb6b578f 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        12a1dc:	eb6a5fda 	bl	1bc214c <$AllocateRefHandle(long)>
        12a1e0:	e58d0004 	str	r0, [sp, #4]
        12a1e4:	e28d1004 	add	r1, sp, #4	; 0x4
        12a1e8:	e3a03000 	mov	r3, #0	; 0x0
        12a1ec:	e1a02004 	mov	r2, r4
        12a1f0:	e5b5001c 	ldr	r0, [r5, #28]!	; fField28
        12a1f4:	eb6b5baa 	bl	1c010a4 <$NewPackage__FP5CPipeRC6RefVarT2Ul>
        12a1f8:	e1a04000 	mov	r4, r0
        12a1fc:	e59d0000 	ldr	r0, [sp]
        12a200:	eb6a63ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12a204:	e59d0004 	ldr	r0, [sp, #4]
        12a208:	eb6a63eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12a20c:	e1a00004 	mov	r0, r4
        12a210:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12a214:	00682f90 	streqb	r2, [r8], -#240
    */
}

/**
 * Symbol: ClassInfo__16PNTKInTranslatorSFv
 * Address: 003858c0
 */
void PNTKInTranslator::ClassInfo() {
    /*
        3858c0:	e24f0044 	sub	r0, pc, #68	; 0x44
        3858c4:	e1a0f00e 	mov	pc, lr
        3858c8:	e3a00000 	mov	r0, #0	; 0x0
        3858cc:	e1a0f00e 	mov	pc, lr
        3858d0:	504e544b 	subpl	r5, lr, fp, asr #8
        3858d4:	496e5472 	stmmidb	lr!, {r1, r4, r5, r6, sl, ip, lr}^
        3858d8:	616e736c 	cmnvs	lr, ip, ror #6
        3858dc:	61746f72 	cmnvs	r4, r2, ror pc
        3858e0:	0050496e 	subeqs	r4, r0, lr, ror #18
        3858e4:	5472616e 	ldrplbt	r6, [r2], -#366
        3858e8:	736c6174 	cmnvc	ip, #29	; 0x1d
        3858ec:	6f720000 	swivs	0x00720000
        3858f0:	00000000 	andeq	r0, r0, r0
        3858f4:	eafffff1 	b	3858c0 <ClassInfo__16PNTKInTranslatorSFv>
        3858f8:	ea5d0acc 	b	1ac8430 <PNTKInTranslator::$New(void)>
        3858fc:	ea5cfa5a 	b	1ac426c <PNTKInTranslator::$Delete(void)>
        385900:	ea5d06b5 	b	1ac73dc <PNTKInTranslator::$Init(void *)>
        385904:	ea5d06ad 	b	1ac73c0 <PNTKInTranslator::$Idle(void)>
        385908:	ea5d06a4 	b	1ac73a0 <PNTKInTranslator::$FrameAvailable(void)>
        38590c:	ea5d0ad3 	b	1ac8460 <PNTKInTranslator::$ProduceFrame(int)>
        385910:	00000000 	andeq	r0, r0, r0
        385914:	00000048 	andeq	r0, r0, r8, asr #32
        385918:	00000056 	andeq	r0, r0, r6, asr r0
        38591c:	00000061 	andeq	r0, r0, r1, rrx
        385920:	00000060 	andeq	r0, r0, r0, rrx
        385924:	00000098 	muleq	r0, r8, r0
        385928:	ea5d0ef0 	b	1ac94f0 <$Sizeof__17PNTKOutTranslatorSFv>
        385934:	ea5d0abe 	b	1ac8434 <PNTKOutTranslator::$New(void)>
        385938:	ea5cfa4c 	b	1ac4270 <PNTKOutTranslator::$Delete(void)>
        385948:	ea000001 	b	385954 <ClassInfo__17PNTKOutTranslatorSFv+0x8>
    */
}

