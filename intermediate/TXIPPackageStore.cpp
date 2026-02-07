#include "include/TXIPPackageStore.h"

/**
 * Symbol: TXIPPackageStore::Delete(void)
 * Address: 00277d54
 */
TXIPPackageStore::Delete(void) {
    /*
        277d54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPPackageStore::Init(void)
 * Address: 00277d58
 */
TXIPPackageStore::Init(void) {
    /*
        277d58:	e3a00000 	mov	r0, #0	; 0x0
        277d5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 00277d60
 */
TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        277d60:	e1a0c00d 	mov	ip, sp
        277d64:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        277d68:	e24cb004 	sub	fp, ip, #4	; 0x4
        277d6c:	e1a05001 	mov	r5, r1
        277d70:	e1a04002 	mov	r4, r2
        277d74:	e1a06003 	mov	r6, r3
        277d78:	e59b800c 	ldr	r8, [fp, #12]
        277d7c:	e59b9018 	ldr	r9, [fp, #24]
        277d80:	e24dd024 	sub	sp, sp, #36	; 0x24
        277d84:	e1a0000d 	mov	r0, sp
        277d88:	ebfba2d8 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        277d8c:	e3a00000 	mov	r0, #0	; 0x0
        277d90:	e28d3020 	add	r3, sp, #32	; 0x20
        277d94:	e5850000 	str	r0, [r5]
        277d98:	e1a00004 	mov	r0, r4
        277d9c:	e3a0208c 	mov	r2, #140	; 0x8c
        277da0:	e3a01901 	mov	r1, #16384	; 0x4000
        277da4:	eb043b9e 	bl	386c24 <TStore::CalcXIPObjectSize(long, long, long *)>
        277da8:	e1b07000 	movs	r7, r0
        277dac:	1a00003d 	bne	277ea8 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x148>
        277db0:	e24dd028 	sub	sp, sp, #40	; 0x28
        277db4:	e1a01006 	mov	r1, r6
        277db8:	e1a0000d 	mov	r0, sp
        277dbc:	eb626ae9 	bl	1b12968 <TXIPPackageIterator::$__ct(CPipe *)>
        277dc0:	e1a0000d 	mov	r0, sp
        277dc4:	eb657736 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        277dc8:	e1b07000 	movs	r7, r0
        277dcc:	1a000031 	bne	277e98 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x138>
        277dd0:	e1a02005 	mov	r2, r5
        277dd4:	e1a00004 	mov	r0, r4
        277dd8:	e3a01020 	mov	r1, #32	; 0x20
        277ddc:	eb043b72 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        277de0:	e1b07000 	movs	r7, r0
        277de4:	1a00002b 	bne	277e98 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x138>
        277de8:	e1a00008 	mov	r0, r8
        277dec:	eb64f72f 	bl	1bb5ab0 <$strlen>
        277df0:	e1a01000 	mov	r1, r0
        277df4:	e28d202c 	add	r2, sp, #44	; 0x2c
        277df8:	e1a00004 	mov	r0, r4
        277dfc:	eb043b6a 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        277e00:	e1b07000 	movs	r7, r0
        277e04:	1a000023 	bne	277e98 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x138>
        277e08:	e1a00008 	mov	r0, r8
        277e0c:	eb64f727 	bl	1bb5ab0 <$strlen>
        277e10:	e1a03000 	mov	r3, r0
        277e14:	e92d0008 	stmdb	sp!, {r3}
        277e18:	e1a03008 	mov	r3, r8
        277e1c:	e1a00004 	mov	r0, r4
        277e20:	e3a02000 	mov	r2, #0	; 0x0
        277e24:	e59d1030 	ldr	r1, [sp, #48]
        277e28:	eb6249b4 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        277e2c:	e28dd004 	add	sp, sp, #4	; 0x4
        277e30:	e1b07000 	movs	r7, r0
        277e34:	1a000017 	bne	277e98 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x138>
        277e38:	e1a03009 	mov	r3, r9
        277e3c:	e28d2028 	add	r2, sp, #40	; 0x28
        277e40:	e1a01004 	mov	r1, r4
        277e44:	e1a0000d 	mov	r0, sp
        277e48:	eb62560f 	bl	1b0d68c <TXIPPackageIterator::$StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)>
        277e4c:	e1b07000 	movs	r7, r0
        277e50:	1a000010 	bne	277e98 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x138>
        277e54:	e3a00002 	mov	r0, #2	; 0x2
        277e58:	e2800802 	add	r0, r0, #131072	; 0x20000
        277e5c:	e58d0034 	str	r0, [sp, #52]
        277e60:	e1a0000d 	mov	r0, sp
        277e64:	eb657f5c 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        277e68:	e58d003c 	str	r0, [sp, #60]
        277e6c:	e59f00bc 	ldr	r0, [pc, #bc]	; 277f30 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x1d0>
        277e70:	e3a03020 	mov	r3, #32	; 0x20
        277e74:	e58d0038 	str	r0, [sp, #56]
        277e78:	e92d0008 	stmdb	sp!, {r3}
        277e7c:	e28d302c 	add	r3, sp, #44	; 0x2c
        277e80:	e1a00004 	mov	r0, r4
        277e84:	e3a02000 	mov	r2, #0	; 0x0
        277e88:	e5951000 	ldr	r1, [r5]
        277e8c:	eb62499b 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        277e90:	e28dd004 	add	sp, sp, #4	; 0x4
        277e94:	e1a07000 	mov	r7, r0
        277e98:	e1a0000d 	mov	r0, sp
        277e9c:	e3a01000 	mov	r1, #0	; 0x0
        277ea0:	eb655a1c 	bl	1bce718 <TPackageIterator::$__dt(void)>
        277ea4:	e28dd028 	add	sp, sp, #40	; 0x28
        277ea8:	e287cda2 	add	ip, r7, #10368	; 0x2880
        277eac:	e37c002c 	cmn	ip, #44	; 0x2c
        277eb0:	1a000011 	bne	277efc <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x19c>
        277eb4:	e1a02005 	mov	r2, r5
        277eb8:	e1a00004 	mov	r0, r4
        277ebc:	e3a01014 	mov	r1, #20	; 0x14
        277ec0:	eb043b39 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        277ec4:	e1b07000 	movs	r7, r0
        277ec8:	1a00000b 	bne	277efc <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x19c>
        277ecc:	e1a03009 	mov	r3, r9
        277ed0:	e3a02000 	mov	r2, #0	; 0x0
        277ed4:	e3a01000 	mov	r1, #0	; 0x0
        277ed8:	e3a00000 	mov	r0, #0	; 0x0
        277edc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        277ee0:	e1a01004 	mov	r1, r4
        277ee4:	e1a00006 	mov	r0, r6
        277ee8:	e5952000 	ldr	r2, [r5]
        277eec:	e28f3f10 	add	r3, pc, #64	; 0x40
        277ef0:	eb6255f3 	bl	1b0d6c4 <$AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)>
        277ef4:	e28dd010 	add	sp, sp, #16	; 0x10
        277ef8:	e1a07000 	mov	r7, r0
        277efc:	e3370000 	teq	r7, #0	; 0x0
        277f00:	0a000008 	beq	277f28 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x1c8>
        277f04:	e5951000 	ldr	r1, [r5]
        277f08:	e3310000 	teq	r1, #0	; 0x0
        277f0c:	11a00004 	movne	r0, r4
        277f10:	1b043b2b 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        277f14:	e59d0004 	ldr	r0, [sp, #4]
        277f18:	e3300000 	teq	r0, #0	; 0x0
        277f1c:	11a00004 	movne	r0, r4
        277f20:	159d1004 	ldrne	r1, [sp, #4]
        277f24:	1b043b26 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        277f28:	e1a00007 	mov	r0, r7
        277f2c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        277f30:	70616f6b 	rsbvc	r6, r1, fp, ror #30
        277f34:	5453696d 	ldrplb	r6, [r3], -#2413
        277f38:	706c6553 	rsbvc	r6, ip, r3, asr r5
        277f3c:	746f7265 	strvcbt	r7, [pc], #265	; 277f44 <TXIPPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x1e4>
        277f40:	4465636f 	strmibt	r6, [r5], -#879
        277f44:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        277f48:	73736f72 	cmnvc	r3, #456	; 0x1c8
        277f4c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TXIPPackageStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 00277f50
 */
TXIPPackageStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        277f50:	e1a0c00d 	mov	ip, sp
        277f54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        277f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        277f5c:	e1a05000 	mov	r5, r0
        277f60:	e1a04001 	mov	r4, r1
        277f64:	e1a0e002 	mov	lr, r2
        277f68:	e1a0c003 	mov	ip, r3
        277f6c:	e59b6008 	ldr	r6, [fp, #8]
        277f70:	e20660ff 	and	r6, r6, #255	; 0xff
        277f74:	e28b300c 	add	r3, fp, #12	; 0xc
        277f78:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        277f7c:	e59b7004 	ldr	r7, [fp, #4]
        277f80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        277f84:	e1a03006 	mov	r3, r6
        277f88:	e1a02007 	mov	r2, r7
        277f8c:	e92d000c 	stmdb	sp!, {r2, r3}
        277f90:	e1a0300c 	mov	r3, ip
        277f94:	e1a0200e 	mov	r2, lr
        277f98:	e1a01004 	mov	r1, r4
        277f9c:	e1a00005 	mov	r0, r5
        277fa0:	eb6255b6 	bl	1b0d680 <TXIPPackageStore::$Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)>
        277fa4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPPackageStore::DeleteObject(TStore *, unsigned long)
 * Address: 00277fa8
 */
TXIPPackageStore::DeleteObject(TStore *, unsigned long) {
    /*
        277fa8:	e1a0c00d 	mov	ip, sp
        277fac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        277fb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        277fb4:	e1a04001 	mov	r4, r1
        277fb8:	e1a05002 	mov	r5, r2
        277fbc:	e24dd028 	sub	sp, sp, #40	; 0x28
        277fc0:	e28d0014 	add	r0, sp, #20	; 0x14
        277fc4:	eb61ddff 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        277fc8:	e28d2010 	add	r2, sp, #16	; 0x10
        277fcc:	e1a01005 	mov	r1, r5
        277fd0:	e1a00004 	mov	r0, r4
        277fd4:	eb6593a2 	bl	1bdce64 <$StoreToId(TStore *, unsigned long, unsigned long *)>
        277fd8:	e3300000 	teq	r0, #0	; 0x0
        277fdc:	059d0010 	ldreq	r0, [sp, #16]
        277fe0:	0b657efe 	bleq	1bd7be0 <$PackageUnavailable(unsigned long)>
        277fe4:	e3a03014 	mov	r3, #20	; 0x14
        277fe8:	e92d0008 	stmdb	sp!, {r3}
        277fec:	e28d3018 	add	r3, sp, #24	; 0x18
        277ff0:	e1a01005 	mov	r1, r5
        277ff4:	e1a00004 	mov	r0, r4
        277ff8:	e3a02000 	mov	r2, #0	; 0x0
        277ffc:	eb62284f 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278000:	e28dd004 	add	sp, sp, #4	; 0x4
        278004:	e1b06000 	movs	r6, r0
        278008:	1a000045 	bne	278124 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0x17c>
        27800c:	e59d0020 	ldr	r0, [sp, #32]
        278010:	e1a00800 	mov	r0, r0, lsl #16
        278014:	e1a00820 	mov	r0, r0, lsr #16
        278018:	e3500002 	cmp	r0, #2	; 0x2
        27801c:	c3e06e8a 	mvngt	r6, #2208	; 0x8a0
        278020:	c2466a02 	subgt	r6, r6, #8192	; 0x2000
        278024:	ca00003e 	bgt	278124 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0x17c>
        278028:	e59d0014 	ldr	r0, [sp, #20]
        27802c:	e3300000 	teq	r0, #0	; 0x0
        278030:	0a00001a 	beq	2780a0 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0xf8>
        278034:	e3a03004 	mov	r3, #4	; 0x4
        278038:	e92d0008 	stmdb	sp!, {r3}
        27803c:	e28d3010 	add	r3, sp, #16	; 0x10
        278040:	e1a00004 	mov	r0, r4
        278044:	e3a02000 	mov	r2, #0	; 0x0
        278048:	e59d1018 	ldr	r1, [sp, #24]
        27804c:	eb62283b 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278050:	e28dd004 	add	sp, sp, #4	; 0x4
        278054:	e1b07000 	movs	r7, r0
        278058:	1a000010 	bne	2780a0 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0xf8>
        27805c:	e3a0300c 	mov	r3, #12	; 0xc
        278060:	e92d0008 	stmdb	sp!, {r3}
        278064:	e28d3004 	add	r3, sp, #4	; 0x4
        278068:	e1a00004 	mov	r0, r4
        27806c:	e3a02000 	mov	r2, #0	; 0x0
        278070:	e59d1010 	ldr	r1, [sp, #16]
        278074:	eb622831 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278078:	e28dd004 	add	sp, sp, #4	; 0x4
        27807c:	e1b07000 	movs	r7, r0
        278080:	1a000006 	bne	2780a0 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0xf8>
        278084:	e59d0000 	ldr	r0, [sp]
        278088:	e3300000 	teq	r0, #0	; 0x0
        27808c:	0a000003 	beq	2780a0 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0xf8>
        278090:	e1a00004 	mov	r0, r4
        278094:	e59d1000 	ldr	r1, [sp]
        278098:	eb61faa6 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        27809c:	e1a07000 	mov	r7, r0
        2780a0:	e1a06007 	mov	r6, r7
        2780a4:	e59d0014 	ldr	r0, [sp, #20]
        2780a8:	e3300000 	teq	r0, #0	; 0x0
        2780ac:	0a000005 	beq	2780c8 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0x120>
        2780b0:	e1a00004 	mov	r0, r4
        2780b4:	e59d1014 	ldr	r1, [sp, #20]
        2780b8:	eb623054 	bl	1b04210 <$RemoveIndexTable(TStore *, unsigned long)>
        2780bc:	e1a07000 	mov	r7, r0
        2780c0:	e3360000 	teq	r6, #0	; 0x0
        2780c4:	01a06007 	moveq	r6, r7
        2780c8:	e59d0018 	ldr	r0, [sp, #24]
        2780cc:	e3300000 	teq	r0, #0	; 0x0
        2780d0:	0a000005 	beq	2780ec <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0x144>
        2780d4:	e1a00004 	mov	r0, r4
        2780d8:	e59d1018 	ldr	r1, [sp, #24]
        2780dc:	eb61fa95 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        2780e0:	e1a07000 	mov	r7, r0
        2780e4:	e3360000 	teq	r6, #0	; 0x0
        2780e8:	01a06007 	moveq	r6, r7
        2780ec:	e59d001c 	ldr	r0, [sp, #28]
        2780f0:	e3300000 	teq	r0, #0	; 0x0
        2780f4:	0a000003 	beq	278108 <TXIPPackageStore::DeleteObject(TStore *, unsigned long)+0x160>
        2780f8:	e1a00004 	mov	r0, r4
        2780fc:	e59d101c 	ldr	r1, [sp, #28]
        278100:	eb61fa8c 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        278104:	e1a07000 	mov	r7, r0
        278108:	e3360000 	teq	r6, #0	; 0x0
        27810c:	01a06007 	moveq	r6, r7
        278110:	e1a01005 	mov	r1, r5
        278114:	e1a00004 	mov	r0, r4
        278118:	eb61fa86 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        27811c:	e3360000 	teq	r6, #0	; 0x0
        278120:	01a06000 	moveq	r6, r0
        278124:	e1a00006 	mov	r0, r6
        278128:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)
 * Address: 0027812c
 */
TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *) {
    /*
        27812c:	e1a0c00d 	mov	ip, sp
        278130:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        278134:	e24cb004 	sub	fp, ip, #4	; 0x4
        278138:	e1a04001 	mov	r4, r1
        27813c:	e1a06002 	mov	r6, r2
        278140:	e1a05003 	mov	r5, r3
        278144:	e59b7004 	ldr	r7, [fp, #4]
        278148:	e24dd034 	sub	sp, sp, #52	; 0x34
        27814c:	e3a00000 	mov	r0, #0	; 0x0
        278150:	e58d0030 	str	r0, [sp, #48]
        278154:	e1a0000d 	mov	r0, sp
        278158:	eb6269fa 	bl	1b12948 <CXIPObjectPipe::$__ct(void)>
        27815c:	e3a00000 	mov	r0, #0	; 0x0
        278160:	e5840000 	str	r0, [r4]
        278164:	e52d006c 	str	r0, [sp, -#108]!
        278168:	e28d0008 	add	r0, sp, #8	; 0x8
        27816c:	eb64ea00 	bl	1bb2974 <$setjmp>
        278170:	e3300000 	teq	r0, #0	; 0x0
        278174:	1a000019 	bne	2781e0 <TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)+0xb4>
        278178:	e1a0000d 	mov	r0, sp
        27817c:	eb659fbe 	bl	1be007c <$AddExceptionHandler>
        278180:	e1a02005 	mov	r2, r5
        278184:	e1a01006 	mov	r1, r6
        278188:	e28d006c 	add	r0, sp, #108	; 0x6c
        27818c:	eb625547 	bl	1b0d6b0 <CXIPObjectPipe::$Init(TStore *, unsigned long)>
        278190:	e3a03000 	mov	r3, #0	; 0x0
        278194:	e3a02000 	mov	r2, #0	; 0x0
        278198:	e3a01000 	mov	r1, #0	; 0x0
        27819c:	e3a00000 	mov	r0, #0	; 0x0
        2781a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2781a4:	e28f3f08 	add	r3, pc, #32	; 0x20
        2781a8:	e3a02001 	mov	r2, #1	; 0x1
        2781ac:	e92d000c 	stmdb	sp!, {r2, r3}
        2781b0:	e28d2084 	add	r2, sp, #132	; 0x84
        2781b4:	e1a01007 	mov	r1, r7
        2781b8:	e1a00004 	mov	r0, r4
        2781bc:	e3a03000 	mov	r3, #0	; 0x0
        2781c0:	eb624d0d 	bl	1b0b5fc <$CreateLargeObject(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *, char *)>
        2781c4:	e28dd018 	add	sp, sp, #24	; 0x18
        2781c8:	ea00000b 	b	2781fc <TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)+0xd0>
        2781cc:	54584950 	ldrplb	r4, [r8], -#2384
        2781d0:	53746f72 	cmnpl	r4, #456	; 0x1c8
        2781d4:	65436f6d 	strvsb	r6, [r3, -#3949]
        2781d8:	70616e64 	rsbvc	r6, r1, r4, ror #28
        2781dc:	65720000 	ldrvsb	r0, [r2]!
        2781e0:	e59d0060 	ldr	r0, [sp, #96]
        2781e4:	e59f1018 	ldr	r1, [pc, #18]	; 278204 <TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)+0xd8>
        2781e8:	e5911000 	ldr	r1, [r1]
        2781ec:	eb65abe8 	bl	1be3194 <$Subexception>
        2781f0:	e3300000 	teq	r0, #0	; 0x0
        2781f4:	0a000003 	beq	278208 <TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)+0xdc>
        2781f8:	e59d0064 	ldr	r0, [sp, #100]
        2781fc:	e58d009c 	str	r0, [sp, #156]
        278200:	ea000002 	b	278210 <TXIPPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)+0xe4>
        278204:	00371324 	eoreqs	r1, r7, r4, lsr #6
        278208:	e1a0000d 	mov	r0, sp
        27820c:	eb65a7d0 	bl	1be2154 <$NextHandler>
        278210:	e1a0000d 	mov	r0, sp
        278214:	eb65a3a7 	bl	1be10b8 <$ExitHandler>
        278218:	e28dd068 	add	sp, sp, #104	; 0x68
        27821c:	e59d0034 	ldr	r0, [sp, #52]
        278220:	e58d0000 	str	r0, [sp]
        278224:	e28d0004 	add	r0, sp, #4	; 0x4
        278228:	e3a01000 	mov	r1, #0	; 0x0
        27822c:	e1a0e00f 	mov	lr, pc
        278230:	e59df004 	ldr	pc, [sp, #4]
        278234:	e59d0000 	ldr	r0, [sp]
        278238:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPPackageStore::Resize(TStore *, unsigned long, unsigned long)
 * Address: 0027823c
 */
TXIPPackageStore::Resize(TStore *, unsigned long, unsigned long) {
    /*
        27823c:	e59f0000 	ldr	r0, [pc, #0]	; 278244 <TXIPPackageStore::Resize(TStore *, unsigned long, unsigned long)+0x8>
        278240:	e1a0f00e 	mov	pc, lr
        278244:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TXIPPackageStore::StorageSize(TStore *, unsigned long)
 * Address: 00278248
 */
TXIPPackageStore::StorageSize(TStore *, unsigned long) {
    /*
        278248:	e1a00001 	mov	r0, r1
        27824c:	e1a01002 	mov	r1, r2
        278250:	ea624cdb 	b	1b0b5c4 <$LODefaultStorageSize(TStore *, unsigned long)>
    */
}

/**
 * Symbol: TXIPPackageStore::SizeOfStream(TStore *, unsigned long, unsigned char)
 * Address: 00278254
 */
TXIPPackageStore::SizeOfStream(TStore *, unsigned long, unsigned char) {
    /*
        278254:	e1a00001 	mov	r0, r1
        278258:	e1a01002 	mov	r1, r2
        27825c:	e3a02000 	mov	r2, #0	; 0x0
        278260:	ea624cd8 	b	1b0b5c8 <$LODefaultStreamSize(TStore *, unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)
 * Address: 00278264
 */
TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *) {
    /*
        278264:	e1a0c00d 	mov	ip, sp
        278268:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27826c:	e24cb004 	sub	fp, ip, #4	; 0x4
        278270:	e1a06001 	mov	r6, r1
        278274:	e1a05002 	mov	r5, r2
        278278:	e1a04003 	mov	r4, r3
        27827c:	e3a00000 	mov	r0, #0	; 0x0
        278280:	e59ba008 	ldr	sl, [fp, #8]
        278284:	e52d0004 	str	r0, [sp, -#4]!
        278288:	e3a00b01 	mov	r0, #1024	; 0x400
        27828c:	eb655929 	bl	1bce738 <$__nw(unsigned int)>
        278290:	e1b08000 	movs	r8, r0
        278294:	1a000002 	bne	2782a4 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x40>
        278298:	eb65a7a0 	bl	1be2120 <$MemError>
        27829c:	e58d0000 	str	r0, [sp]
        2782a0:	ea00001c 	b	278318 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xb4>
        2782a4:	e24dd064 	sub	sp, sp, #100	; 0x64
        2782a8:	e28d0034 	add	r0, sp, #52	; 0x34
        2782ac:	eb6269a5 	bl	1b12948 <CXIPObjectPipe::$__ct(void)>
        2782b0:	e28d0014 	add	r0, sp, #20	; 0x14
        2782b4:	ebfba18d 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        2782b8:	e3a00000 	mov	r0, #0	; 0x0
        2782bc:	e58d0004 	str	r0, [sp, #4]
        2782c0:	e58d0000 	str	r0, [sp]
        2782c4:	e58d0008 	str	r0, [sp, #8]
        2782c8:	e58d000c 	str	r0, [sp, #12]
        2782cc:	e3a09000 	mov	r9, #0	; 0x0
        2782d0:	e3a03020 	mov	r3, #32	; 0x20
        2782d4:	e58d0010 	str	r0, [sp, #16]
        2782d8:	e92d0008 	stmdb	sp!, {r3}
        2782dc:	e28d3018 	add	r3, sp, #24	; 0x18
        2782e0:	e1a01004 	mov	r1, r4
        2782e4:	e1a00005 	mov	r0, r5
        2782e8:	e3a02000 	mov	r2, #0	; 0x0
        2782ec:	eb622793 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2782f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2782f4:	e58d0064 	str	r0, [sp, #100]
        2782f8:	e59d0064 	ldr	r0, [sp, #100]
        2782fc:	e3300000 	teq	r0, #0	; 0x0
        278300:	0a000008 	beq	278328 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xc4>
        278304:	e28d0034 	add	r0, sp, #52	; 0x34
        278308:	e3a01000 	mov	r1, #0	; 0x0
        27830c:	e1a0e00f 	mov	lr, pc
        278310:	e59df034 	ldr	pc, [sp, #52]
        278314:	e28dd064 	add	sp, sp, #100	; 0x64
        278318:	e1a00008 	mov	r0, r8
        27831c:	eb6554ef 	bl	1bcd6e0 <$__dl(void *)>
        278320:	e59d0000 	ldr	r0, [sp]
        278324:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        278328:	e59d7028 	ldr	r7, [sp, #40]
        27832c:	e3a00000 	mov	r0, #0	; 0x0
        278330:	e40d706c 	str	r7, [sp], -#108
        278334:	e58d0000 	str	r0, [sp]
        278338:	e28d0008 	add	r0, sp, #8	; 0x8
        27833c:	eb64e98c 	bl	1bb2974 <$setjmp>
        278340:	e3300000 	teq	r0, #0	; 0x0
        278344:	1a000037 	bne	278428 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1c4>
        278348:	e1a0000d 	mov	r0, sp
        27834c:	eb659f4a 	bl	1be007c <$AddExceptionHandler>
        278350:	e1a02004 	mov	r2, r4
        278354:	e1a01005 	mov	r1, r5
        278358:	e28d00a0 	add	r0, sp, #160	; 0xa0
        27835c:	eb6254d3 	bl	1b0d6b0 <CXIPObjectPipe::$Init(TStore *, unsigned long)>
        278360:	e3370000 	teq	r7, #0	; 0x0
        278364:	0a000039 	beq	278450 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ec>
        278368:	e3a05000 	mov	r5, #0	; 0x0
        27836c:	e3a04b01 	mov	r4, #1024	; 0x400
        278370:	e24dd008 	sub	sp, sp, #8	; 0x8
        278374:	e5cd5004 	strb	r5, [sp, #4]
        278378:	e3570b01 	cmp	r7, #1024	; 0x400
        27837c:	a1a00004 	movge	r0, r4
        278380:	b1a00007 	movlt	r0, r7
        278384:	e58d0000 	str	r0, [sp]
        278388:	e28d00a8 	add	r0, sp, #168	; 0xa8
        27838c:	e28d3004 	add	r3, sp, #4	; 0x4
        278390:	e1a0200d 	mov	r2, sp
        278394:	e1a01008 	mov	r1, r8
        278398:	e59dc0a8 	ldr	ip, [sp, #168]
        27839c:	e1a0e00f 	mov	lr, pc
        2783a0:	e28cf014 	add	pc, ip, #20	; 0x14
        2783a4:	e1a0c006 	mov	ip, r6
        2783a8:	e3570b01 	cmp	r7, #1024	; 0x400
        2783ac:	a1a02004 	movge	r2, r4
        2783b0:	b1a02007 	movlt	r2, r7
        2783b4:	e1a01008 	mov	r1, r8
        2783b8:	e1a0000c 	mov	r0, ip
        2783bc:	e3a03000 	mov	r3, #0	; 0x0
        2783c0:	e59cc000 	ldr	ip, [ip]
        2783c4:	e1a0e00f 	mov	lr, pc
        2783c8:	e28cf018 	add	pc, ip, #24	; 0x18
        2783cc:	e3570b01 	cmp	r7, #1024	; 0x400
        2783d0:	a1a00004 	movge	r0, r4
        2783d4:	b1a00007 	movlt	r0, r7
        2783d8:	e58d0000 	str	r0, [sp]
        2783dc:	e0477000 	sub	r7, r7, r0
        2783e0:	e0899000 	add	r9, r9, r0
        2783e4:	e33a0000 	teq	sl, #0	; 0x0
        2783e8:	0a00000a 	beq	278418 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1b4>
        2783ec:	e59a000c 	ldr	r0, [sl, #12]
        2783f0:	e1500009 	cmp	r0, r9
        2783f4:	8a000007 	bhi	278418 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1b4>
        2783f8:	e59d0074 	ldr	r0, [sp, #116]
        2783fc:	e0400007 	sub	r0, r0, r7
        278400:	e58d0078 	str	r0, [sp, #120]
        278404:	e28d1074 	add	r1, sp, #116	; 0x74
        278408:	e1a0000a 	mov	r0, sl
        27840c:	e1a0e00f 	mov	lr, pc
        278410:	e59af000 	ldr	pc, [sl]
        278414:	e3a09000 	mov	r9, #0	; 0x0
        278418:	e28dd008 	add	sp, sp, #8	; 0x8
        27841c:	e3370000 	teq	r7, #0	; 0x0
        278420:	1affffd2 	bne	278370 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x10c>
        278424:	ea000009 	b	278450 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ec>
        278428:	e59d0060 	ldr	r0, [sp, #96]
        27842c:	e59f102c 	ldr	r1, [pc, #2c]	; 278460 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1fc>
        278430:	e5911000 	ldr	r1, [r1]
        278434:	eb65ab56 	bl	1be3194 <$Subexception>
        278438:	e3300000 	teq	r0, #0	; 0x0
        27843c:	159d0064 	ldrne	r0, [sp, #100]
        278440:	158d00d0 	strne	r0, [sp, #208]
        278444:	1a000001 	bne	278450 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ec>
        278448:	e1a0000d 	mov	r0, sp
        27844c:	eb65a740 	bl	1be2154 <$NextHandler>
        278450:	e1a0000d 	mov	r0, sp
        278454:	eb65a317 	bl	1be10b8 <$ExitHandler>
        278458:	e28dd06c 	add	sp, sp, #108	; 0x6c
        27845c:	eaffffa8 	b	278304 <TXIPPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xa0>
        278460:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: Sizeof__16TXIPPackageStoreSFv
 * Address: 00279870
 */
void TXIPPackageStore::Sizeof() {
    /*
        279870:	e3a00010 	mov	r0, #16	; 0x10
        279874:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPPackageStore::New(void)
 * Address: 00279878
 */
TXIPPackageStore::New(void) {
    /*
        279878:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__16TXIPPackageStoreSFv
 * Address: 00387a3c
 */
void TXIPPackageStore::ClassInfo() {
    /*
        387a3c:	e24f0044 	sub	r0, pc, #68	; 0x44
        387a40:	e1a0f00e 	mov	pc, lr
        387a44:	e3a00000 	mov	r0, #0	; 0x0
        387a48:	e1a0f00e 	mov	pc, lr
        387a4c:	54584950 	ldrplb	r4, [r8], -#2384
        387a50:	5061636b 	rsbpl	r6, r1, fp, ror #6
        387a54:	61676553 	cmnvs	r7, r3, asr r5
        387a58:	746f7265 	strvcbt	r7, [pc], #265	; 387a60 <ClassInfo__16TXIPPackageStoreSFv+0x24>
        387a5c:	00544c72 	subeqs	r4, r4, r2, ror ip
        387a60:	674f626a 	strvsb	r6, [pc, -sl, ror #4]
        387a64:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387a68:	65005458 	strvs	r5, [r0, -#1112]	; fField1112
        387a6c:	49505374 	ldmmidb	r0, {r2, r4, r5, r6, r8, r9, ip, lr}^
        387a70:	6f726543 	swivs	0x00726543
        387a74:	6f6d7061 	swivs	0x006d7061
        387a78:	6e646572 	mcrvs	5, 3, r6, cr4, cr2, {3}
        387a84:	eaffffec 	b	387a3c <ClassInfo__16TXIPPackageStoreSFv>
        387a88:	ea5e277f 	b	1b1188c <TXIPPackageStore::$New(void)>
        387a8c:	ea5e1b34 	b	1b0e764 <TXIPPackageStore::$Delete(void)>
        387a90:	ea5e235a 	b	1b10800 <TXIPPackageStore::$Init(void)>
        387a94:	ea5e16f9 	b	1b0d680 <TXIPPackageStore::$Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)>
        387a98:	ea5e1b29 	b	1b0e744 <TXIPPackageStore::$CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)>
        387a9c:	ea5e16f8 	b	1b0d684 <TXIPPackageStore::$DeleteObject(TStore *, unsigned long)>
        387aa0:	ea5e1f3c 	b	1b0f798 <TXIPPackageStore::$Duplicate(unsigned long *, TStore *, unsigned long, TStore *)>
        387aa4:	ea5e278f 	b	1b118e8 <TXIPPackageStore::$Resize(TStore *, unsigned long, unsigned long)>
        387aa8:	ea5e2ba0 	b	1b12930 <TXIPPackageStore::$StorageSize(TStore *, unsigned long)>
        387aac:	ea5e2792 	b	1b118fc <TXIPPackageStore::$SizeOfStream(TStore *, unsigned long, unsigned char)>
        387ab0:	ea5e1705 	b	1b0d6cc <TXIPPackageStore::$Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        387ab4:	e1a0000f 	mov	r0, pc
        387ab8:	e1a0f00e 	mov	pc, lr
        387abc:	5456616c 	ldrplb	r6, [r6], -#364
        387ac0:	69646174 	stmvsdb	r4!, {r2, r4, r5, r6, r8, sp, lr}^
        387ac4:	65506163 	ldrvsb	r6, [r0, -#355]	; fField355
        387ac8:	6b616765 	blvs	1be1864 <$HandToHand+0x768>
        387acc:	44726976 	ldrmibt	r6, [r2], -#2422
        387ad0:	65720000 	ldrvsb	r0, [r2]!
    */
}

