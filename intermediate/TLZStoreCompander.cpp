#include "include/TLZStoreCompander.h"

/**
 * Symbol: Sizeof__17TLZStoreCompanderSFv
 * Address: 001fa034
 */
void TLZStoreCompander::Sizeof() {
    /*
        1fa034:	e3a0002c 	mov	r0, #44	; 0x2c
        1fa038:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreCompander::New(void)
 * Address: 001fa03c
 */
TLZStoreCompander::New(void) {
    /*
        1fa03c:	e3a01000 	mov	r1, #0	; 0x0
        1fa040:	e5801010 	str	r1, [r0, #16]	; fField16
        1fa044:	e5801014 	str	r1, [r0, #20]	; fField20
        1fa048:	e5801018 	str	r1, [r0, #24]	; fField24
        1fa04c:	e5c01028 	strb	r1, [r0, #40]	; fField40
        1fa050:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreCompander::Delete(void)
 * Address: 001fa054
 */
TLZStoreCompander::Delete(void) {
    /*
        1fa054:	e1a0c00d 	mov	ip, sp
        1fa058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fa05c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa060:	e1a04000 	mov	r4, r0
        1fa064:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
        1fa068:	e3300000 	teq	r0, #0	; 0x0
        1fa06c:	0a000008 	beq	1fa094 <TLZStoreCompander::Delete(void)+0x40>
        1fa070:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1fa074:	e3300000 	teq	r0, #0	; 0x0
        1fa078:	1b063d88 	blne	3896a0 <TDecompressor::Delete(void)>
        1fa07c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fa080:	e3300000 	teq	r0, #0	; 0x0
        1fa084:	1b063d3f 	blne	389588 <TCompressor::Delete(void)>
        1fa088:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1fa08c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1fa090:	ea674d92 	b	1bcd6e0 <$__dl(void *)>
        1fa094:	e5b42010 	ldr	r2, [r4, #16]!	; fField16
        1fa098:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1fa09c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1fa0a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1fa0a4:	ea646654 	b	1b139fc <$ReleaseSharedLZObjects(TCompressor *, TDecompressor *, char *)>
    */
}

/**
 * Symbol: TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 001fa0a8
 */
TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        1fa0a8:	e1a0c00d 	mov	ip, sp
        1fa0ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fa0b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa0b4:	e1a04000 	mov	r4, r0
        1fa0b8:	e1a05001 	mov	r5, r1
        1fa0bc:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        1fa0c0:	e31000ff 	tst	r0, #255	; 0xff
        1fa0c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fa0c8:	e284401c 	add	r4, r4, #28	; 0x1c
        1fa0cc:	e8840006 	stmia	r4, {r1, r2}
        1fa0d0:	e244401c 	sub	r4, r4, #28	; 0x1c
        1fa0d4:	0a000007 	beq	1fa0f8 <TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x50>
        1fa0d8:	e2842010 	add	r2, r4, #16	; 0x10
        1fa0dc:	e2841014 	add	r1, r4, #20	; 0x14
        1fa0e0:	e2840018 	add	r0, r4, #24	; 0x18
        1fa0e4:	e1a0300d 	mov	r3, sp
        1fa0e8:	eb644963 	bl	1b0c67c <$GetSharedLZObjects(TCompressor **, TDecompressor **, char **, long *)>
        1fa0ec:	e3300000 	teq	r0, #0	; 0x0
        1fa0f0:	1a000024 	bne	1fa188 <TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xe0>
        1fa0f4:	ea000014 	b	1fa14c <TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xa4>
        1fa0f8:	e3a00001 	mov	r0, #1	; 0x1
        1fa0fc:	e5c40028 	strb	r0, [r4, #40]	; fField40
        1fa100:	e28f1f21 	add	r1, pc, #132	; 0x84
        1fa104:	e28f0f24 	add	r0, pc, #144	; 0x90
        1fa108:	eb67769f 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fa10c:	e5840018 	str	r0, [r4, #24]	; fField24
        1fa110:	e28f1f24 	add	r1, pc, #144	; 0x90
        1fa114:	e28f0f27 	add	r0, pc, #156	; 0x9c
        1fa118:	eb67769b 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fa11c:	e5840014 	str	r0, [r4, #20]	; fField20
        1fa120:	e3a00e52 	mov	r0, #1312	; 0x520
        1fa124:	eb675183 	bl	1bce738 <$__nw(unsigned int)>
        1fa128:	e5840010 	str	r0, [r4, #16]	; fField16
        1fa12c:	e3300000 	teq	r0, #0	; 0x0
        1fa130:	15940018 	ldrne	r0, [r4, #24]	; fField24
        1fa134:	13300000 	teqne	r0, #0	; 0x0
        1fa138:	15940014 	ldrne	r0, [r4, #20]	; fField20
        1fa13c:	13300000 	teqne	r0, #0	; 0x0
        1fa140:	03a000e9 	moveq	r0, #233	; 0xe9
        1fa144:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1fa148:	0a00000e 	beq	1fa188 <TLZStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xe0>
        1fa14c:	e2846024 	add	r6, r4, #36	; 0x24
        1fa150:	e5944020 	ldr	r4, [r4, #32]	; fField32
        1fa154:	e24dd014 	sub	sp, sp, #20	; 0x14
        1fa158:	e1a0000d 	mov	r0, sp
        1fa15c:	eb63d599 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1fa160:	e3a03014 	mov	r3, #20	; 0x14
        1fa164:	e92d0008 	stmdb	sp!, {r3}
        1fa168:	e28d3004 	add	r3, sp, #4	; 0x4
        1fa16c:	e1a01004 	mov	r1, r4
        1fa170:	e1a00005 	mov	r0, r5
        1fa174:	e3a02000 	mov	r2, #0	; 0x0
        1fa178:	eb641ff0 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa17c:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        1fa180:	e5861000 	str	r1, [r6]
        1fa184:	e28dd014 	add	sp, sp, #20	; 0x14
        1fa188:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fa18c:	544c5a43 	strplb	r5, [ip], -#2627
        1fa190:	6f6d7072 	swivs	0x006d7072
        1fa194:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1fa198:	72000000 	andvc	r0, r0, #0	; 0x0
        1fa19c:	54436f6d 	strplb	r6, [r3], -#3949
        1fa1a0:	70726573 	rsbvcs	r6, r2, r3, ror r5
        1fa1a4:	736f7200 	cmnvc	pc, #0	; 0x0
        1fa1a8:	544c5a44 	strplb	r5, [ip], -#2628
        1fa1ac:	65636f6d 	strvsb	r6, [r3, -#3949]!
        1fa1b0:	70726573 	rsbvcs	r6, r2, r3, ror r5
        1fa1b4:	736f7200 	cmnvc	pc, #0	; 0x0
        1fa1b8:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        1fa1bc:	6f6d7072 	swivs	0x006d7072
        1fa1c0:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1fa1c4:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TLZStoreCompander::BlockSize(void)
 * Address: 001fa1c8
 */
TLZStoreCompander::BlockSize(void) {
    /*
        1fa1c8:	e3a00b01 	mov	r0, #1024	; 0x400
        1fa1cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fa1d0
 */
TLZStoreCompander::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fa1d0:	e1a0c00d 	mov	ip, sp
        1fa1d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1fa1d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fa1dc:	e24cb014 	sub	fp, ip, #20	; 0x14
        1fa1e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fa1e4:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        1fa1e8:	e591001c 	ldr	r0, [r1, #28]	; fField28
        1fa1ec:	e5911024 	ldr	r1, [r1, #36]
        1fa1f0:	e3a03004 	mov	r3, #4	; 0x4
        1fa1f4:	e59b2008 	ldr	r2, [fp, #8]	; fField8
        1fa1f8:	e92d0008 	stmdb	sp!, {r3}
        1fa1fc:	e1a02522 	mov	r2, r2, lsr #10
        1fa200:	e1a02102 	mov	r2, r2, lsl #2
        1fa204:	e08d3003 	add	r3, sp, r3
        1fa208:	eb641fcc 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa20c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa210:	e1b04000 	movs	r4, r0
        1fa214:	1a000022 	bne	1fa2a4 <TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xd4>
        1fa218:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1fa21c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1fa220:	e28d2004 	add	r2, sp, #4	; 0x4
        1fa224:	e59d1000 	ldr	r1, [sp]
        1fa228:	eb6402b4 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1fa22c:	e1b04000 	movs	r4, r0
        1fa230:	1a00001b 	bne	1fa2a4 <TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xd4>
        1fa234:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1fa238:	e3330000 	teq	r3, #0	; 0x0
        1fa23c:	0a000015 	beq	1fa298 <TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fa240:	e92d0008 	stmdb	sp!, {r3}
        1fa244:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1fa248:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1fa24c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1fa250:	e3a02000 	mov	r2, #0	; 0x0
        1fa254:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1fa258:	eb641fb8 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa25c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa260:	e1b04000 	movs	r4, r0
        1fa264:	1a00000e 	bne	1fa2a4 <TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xd4>
        1fa268:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1fa26c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1fa270:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fa274:	e92d000c 	stmdb	sp!, {r2, r3}
        1fa278:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1fa27c:	e28b300c 	add	r3, fp, #12	; 0xc
        1fa280:	e893000c 	ldmia	r3, {r2, r3}
        1fa284:	e28b1010 	add	r1, fp, #16	; 0x10
        1fa288:	eb063d0e 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1fa28c:	e28dd008 	add	sp, sp, #8	; 0x8
        1fa290:	e1a04000 	mov	r4, r0
        1fa294:	ea000002 	b	1fa2a4 <TLZStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xd4>
        1fa298:	e28b100c 	add	r1, fp, #12	; 0xc
        1fa29c:	e8910003 	ldmia	r1, {r0, r1}
        1fa2a0:	eb67975d 	bl	1be001c <$ZeroBytes>
        1fa2a4:	e1a00004 	mov	r0, r4
        1fa2a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLZStoreCompander::Write(unsigned long, char *, long, unsigned long)
 * Address: 001fa2ac
 */
TLZStoreCompander::Write(unsigned long, char *, long, unsigned long) {
    /*
        1fa2ac:	e1a0c00d 	mov	ip, sp
        1fa2b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1fa2b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1fa2b8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1fa2bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fa2c0:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        1fa2c4:	e591001c 	ldr	r0, [r1, #28]	; fField28
        1fa2c8:	e5911024 	ldr	r1, [r1, #36]
        1fa2cc:	e3a03004 	mov	r3, #4	; 0x4
        1fa2d0:	e59b2008 	ldr	r2, [fp, #8]	; fField8
        1fa2d4:	e92d0008 	stmdb	sp!, {r3}
        1fa2d8:	e1a02522 	mov	r2, r2, lsr #10
        1fa2dc:	e1a02102 	mov	r2, r2, lsl #2
        1fa2e0:	e08d3003 	add	r3, sp, r3
        1fa2e4:	eb641f95 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa2e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa2ec:	e3300000 	teq	r0, #0	; 0x0
        1fa2f0:	1a000011 	bne	1fa33c <TLZStoreCompander::Write(unsigned long, char *, long, unsigned long)+0x90>
        1fa2f4:	e28b300c 	add	r3, fp, #12	; 0xc
        1fa2f8:	e893000c 	ldmia	r3, {r2, r3}
        1fa2fc:	e92d000c 	stmdb	sp!, {r2, r3}
        1fa300:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1fa304:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fa308:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fa30c:	e28b1010 	add	r1, fp, #16	; 0x10
        1fa310:	e3a03e52 	mov	r3, #1312	; 0x520
        1fa314:	eb063ca5 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1fa318:	e28dd008 	add	sp, sp, #8	; 0x8
        1fa31c:	e3300000 	teq	r0, #0	; 0x0
        1fa320:	1a000005 	bne	1fa33c <TLZStoreCompander::Write(unsigned long, char *, long, unsigned long)+0x90>
        1fa324:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1fa328:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fa32c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1fa330:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1fa334:	e59d1000 	ldr	r1, [sp]
        1fa338:	eb063236 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        1fa33c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLZStoreCompander::DoTransactionAgainst(long, unsigned long)
 * Address: 001fa340
 */
TLZStoreCompander::DoTransactionAgainst(long, unsigned long) {
    /*
        1fa340:	e1a0c00d 	mov	ip, sp
        1fa344:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1fa348:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa34c:	e1a0c001 	mov	ip, r1
        1fa350:	e3a03001 	mov	r3, #1	; 0x1
        1fa354:	e92d0008 	stmdb	sp!, {r3}
        1fa358:	e280201c 	add	r2, r0, #28	; 0x1c
        1fa35c:	e8920007 	ldmia	r2, {r0, r1, r2}
        1fa360:	e1a0300c 	mov	r3, ip
        1fa364:	eb6448c3 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        1fa368:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLZStoreCompander::IsReadOnly(void)
 * Address: 001fa36c
 */
TLZStoreCompander::IsReadOnly(void) {
    /*
        1fa36c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fa370:	e3300000 	teq	r0, #0	; 0x0
        1fa374:	13a00000 	movne	r0, #0	; 0x0
        1fa378:	03a00001 	moveq	r0, #1	; 0x1
        1fa37c:	e20000ff 	and	r0, r0, #255	; 0xff
        1fa380:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__17TLZStoreCompanderSFv
 * Address: 003879a4
 */
void TLZStoreCompander::ClassInfo() {
    /*
        3879a4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3879a8:	e1a0f00e 	mov	pc, lr
        3879ac:	e3a00000 	mov	r0, #0	; 0x0
        3879b0:	e1a0f00e 	mov	pc, lr
        3879b4:	544c5a53 	strplb	r5, [ip], -#2643
        3879b8:	746f7265 	strvcbt	r7, [pc], #265	; 3879c0 <ClassInfo__17TLZStoreCompanderSFv+0x1c>
        3879bc:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        3879c0:	616e6465 	cmnvs	lr, r5, ror #8
        3879c4:	72005453 	andvc	r5, r0, #1392508928	; 0x53000000
        3879c8:	746f7265 	strvcbt	r7, [pc], #265	; 3879d0 <ClassInfo__17TLZStoreCompanderSFv+0x2c>
        3879cc:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        3879d0:	616e6465 	cmnvs	lr, r5, ror #8
        3879d4:	72000000 	andvc	r0, r0, #0	; 0x0
        3879d8:	00000000 	andeq	r0, r0, r0
        3879dc:	eafffff0 	b	3879a4 <ClassInfo__17TLZStoreCompanderSFv>
        3879e0:	ea5e27aa 	b	1b11890 <TLZStoreCompander::$New(void)>
        3879e4:	ea5e131c 	b	1b0c65c <TLZStoreCompander::$Delete(void)>
        3879e8:	ea5e131c 	b	1b0c660 <TLZStoreCompander::$Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        3879ec:	ea5e1738 	b	1b0d6d4 <TLZStoreCompander::$BlockSize(void)>
        3879f0:	ea5e131b 	b	1b0c664 <TLZStoreCompander::$Read(unsigned long, char *, long, unsigned long)>
        3879f4:	ea5e131b 	b	1b0c668 <TLZStoreCompander::$Write(unsigned long, char *, long, unsigned long)>
        3879f8:	ea5e1f60 	b	1b0f780 <TLZStoreCompander::$DoTransactionAgainst(long, unsigned long)>
        3879fc:	ea5e238a 	b	1b1082c <TLZStoreCompander::$IsReadOnly(void)>
        387a00:	00000000 	andeq	r0, r0, r0
        387a04:	00000048 	andeq	r0, r0, r8, asr #32
        387a08:	00000055 	andeq	r0, r0, r5, asr r0
        387a0c:	0000005e 	andeq	r0, r0, lr, asr r0
        387a10:	00000070 	andeq	r0, r0, r0, ror r0
        387a14:	000000a0 	andeq	r0, r0, r0, lsr #1
        387a18:	ea5e2bb9 	b	1b12904 <$Sizeof__16TXIPPackageStoreSFv>
        387a24:	ea5e2798 	b	1b1188c <TXIPPackageStore::$New(void)>
        387a28:	ea5e1b4d 	b	1b0e764 <TXIPPackageStore::$Delete(void)>
        387a38:	ea000001 	b	387a44 <ClassInfo__16TXIPPackageStoreSFv+0x8>
    */
}

