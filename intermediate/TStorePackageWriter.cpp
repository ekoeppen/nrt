#include "include/TStorePackageWriter.h"

/**
 * Symbol: TStorePackageWriter::__ct(void)
 * Address: 001fbdf0
 */
TStorePackageWriter::TStorePackageWriter(void) {
    /*
        1fbdf0:	e1a0c00d 	mov	ip, sp
        1fbdf4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1fbdf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fbdfc:	e3300000 	teq	r0, #0	; 0x0
        1fbe00:	1a000003 	bne	1fbe14 <TStorePackageWriter::__ct(void)+0x24>
        1fbe04:	e3a00030 	mov	r0, #48	; 0x30
        1fbe08:	eb674a4a 	bl	1bce738 <$__nw(unsigned int)>
        1fbe0c:	e3300000 	teq	r0, #0	; 0x0
        1fbe10:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1fbe14:	e59f1018 	ldr	r1, [pc, #18]	; 1fbe34 <TStorePackageWriter::__ct(void)+0x44>
        1fbe18:	e5801000 	str	r1, [r0]
        1fbe1c:	e3a01000 	mov	r1, #0	; 0x0
        1fbe20:	e5801004 	str	r1, [r0, #4]	; fField4
        1fbe24:	e5801008 	str	r1, [r0, #8]	; fField8
        1fbe28:	e580102c 	str	r1, [r0, #44]	; fField44
        1fbe2c:	e5801028 	str	r1, [r0, #40]	; fField40
        1fbe30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1fbe34:	0001eeb0 	streqh	lr, [r1], -r0
    */
}

/**
 * Symbol: TStorePackageWriter::__dt(void)
 * Address: 001fbe38
 */
TStorePackageWriter::~TStorePackageWriter(void) {
    /*
        1fbe38:	e1a0c00d 	mov	ip, sp
        1fbe3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1fbe40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fbe44:	e1a04000 	mov	r4, r0
        1fbe48:	e1a05001 	mov	r5, r1
        1fbe4c:	e59f0034 	ldr	r0, [pc, #34]	; 1fbe88 <TStorePackageWriter::__dt(void)+0x50>
        1fbe50:	e5840000 	str	r0, [r4]
        1fbe54:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1fbe58:	eb674620 	bl	1bcd6e0 <$__dl(void *)>
        1fbe5c:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1fbe60:	eb67461e 	bl	1bcd6e0 <$__dl(void *)>
        1fbe64:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fbe68:	e3300000 	teq	r0, #0	; 0x0
        1fbe6c:	13a01001 	movne	r1, #1	; 0x1
        1fbe70:	1b645ec5 	blne	1b1398c <TCRelocationGenerator::$__dt(void)>
        1fbe74:	e3150001 	tst	r5, #1	; 0x1
        1fbe78:	11a00004 	movne	r0, r4
        1fbe7c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1fbe80:	1a674616 	bne	1bcd6e0 <$__dl(void *)>
        1fbe84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1fbe88:	0001eeb0 	streqh	lr, [r1], -r0
    */
}

/**
 * Symbol: TStorePackageWriter::Init(TStore *, unsigned long, unsigned long, TCallbackCompressor *, RelocationHeader *, RelocationEntry *)
 * Address: 001fbe90
 */
TStorePackageWriter::Init(TStore *, unsigned long, unsigned long, TCallbackCompressor *, RelocationHeader *, RelocationEntry *) {
    /*
        1fbe90:	e1a0c00d 	mov	ip, sp
        1fbe94:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1fbe98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fbe9c:	e1a04000 	mov	r4, r0
        1fbea0:	e1a05002 	mov	r5, r2
        1fbea4:	e1a06003 	mov	r6, r3
        1fbea8:	e3a02000 	mov	r2, #0	; 0x0
        1fbeac:	e99b0101 	ldmib	fp, {r0, r8}
        1fbeb0:	e59b700c 	ldr	r7, [fp, #12]	; fField12
        1fbeb4:	e5840004 	str	r0, [r4, #4]	; fField4
        1fbeb8:	e3300000 	teq	r0, #0	; 0x0
        1fbebc:	e5842014 	str	r2, [r4, #20]	; fField20
        1fbec0:	0a000002 	beq	1fbed0 <TStorePackageWriter::Init(TStore *, unsigned long, unsigned long, TCallbackCompressor *, RelocationHeader *, RelocationEntry *)+0x40>
        1fbec4:	e59f30a8 	ldr	r3, [pc, #a8]	; 1fbf74 <TStorePackageWriter::Init(TStore *, unsigned long, unsigned long, TCallbackCompressor *, RelocationHeader *, RelocationEntry *)+0xe4>
        1fbec8:	e280000c 	add	r0, r0, #12	; 0xc
        1fbecc:	e9a00018 	stmib	r0!, {r3, r4}
        1fbed0:	e2844018 	add	r4, r4, #24	; 0x18
        1fbed4:	e8840022 	stmia	r4, {r1, r5}
        1fbed8:	e524200c 	str	r2, [r4, -#12]!	; fField12
        1fbedc:	e3a00b01 	mov	r0, #1024	; 0x400
        1fbee0:	e5842004 	str	r2, [r4, #4]	; fField4
        1fbee4:	e244400c 	sub	r4, r4, #12	; 0xc
        1fbee8:	eb674a12 	bl	1bce738 <$__nw(unsigned int)>
        1fbeec:	e5840008 	str	r0, [r4, #8]	; fField8
        1fbef0:	eb67988a 	bl	1be2120 <$MemError>
        1fbef4:	e3300000 	teq	r0, #0	; 0x0
        1fbef8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1fbefc:	e2460001 	sub	r0, r6, #1	; 0x1
        1fbf00:	e2800b01 	add	r0, r0, #1024	; 0x400
        1fbf04:	e1a00520 	mov	r0, r0, lsr #10
        1fbf08:	e1a02100 	mov	r2, r0, lsl #2
        1fbf0c:	e1a01005 	mov	r1, r5
        1fbf10:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fbf14:	eb642901 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        1fbf18:	e3300000 	teq	r0, #0	; 0x0
        1fbf1c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1fbf20:	e3a00000 	mov	r0, #0	; 0x0
        1fbf24:	eb645a91 	bl	1b12970 <TCRelocationGenerator::$__ct(void)>
        1fbf28:	e5840028 	str	r0, [r4, #40]	; fField40
        1fbf2c:	eb67987b 	bl	1be2120 <$MemError>
        1fbf30:	e3300000 	teq	r0, #0	; 0x0
        1fbf34:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1fbf38:	e1a02007 	mov	r2, r7
        1fbf3c:	e1a01008 	mov	r1, r8
        1fbf40:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fbf44:	eb645230 	bl	1b1080c <TCRelocationGenerator::$Init(RelocationHeader *, RelocationEntry *)>
        1fbf48:	e3300000 	teq	r0, #0	; 0x0
        1fbf4c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1fbf50:	e3a01000 	mov	r1, #0	; 0x0
        1fbf54:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fbf58:	eb644e1c 	bl	1b0f7d0 <TCRelocationGenerator::$GetRelocDataSizeForBlock(unsigned long)>
        1fbf5c:	e5840024 	str	r0, [r4, #36]	; fField36
        1fbf60:	e3a00000 	mov	r0, #0	; 0x0
        1fbf64:	eb60ffa1 	bl	1a3bdf0 <TFrameRelocationGenerator::$__ct(void)>
        1fbf68:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        1fbf6c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1fbf70:	ea67986a 	b	1be2120 <$MemError>
        1fbf74:	01af39f0 	streqd	r3, [pc, r0]!
    */
}

/**
 * Symbol: TStorePackageWriter::WriteCompressedData(void *, long)
 * Address: 001fbf78
 */
TStorePackageWriter::WriteCompressedData(void *, long) {
    /*
        1fbf78:	e1a0c00d 	mov	ip, sp
        1fbf7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fbf80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fbf84:	e1a04000 	mov	r4, r0
        1fbf88:	e1a06001 	mov	r6, r1
        1fbf8c:	e1a05002 	mov	r5, r2
        1fbf90:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1fbf94:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1fbf98:	e0800001 	add	r0, r0, r1
        1fbf9c:	e0800002 	add	r0, r0, r2
        1fbfa0:	e2802004 	add	r2, r0, #4	; 0x4
        1fbfa4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fbfa8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fbfac:	eb6428db 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        1fbfb0:	e3300000 	teq	r0, #0	; 0x0
        1fbfb4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1fbfb8:	e1a03005 	mov	r3, r5
        1fbfbc:	e92d0008 	stmdb	sp!, {r3}
        1fbfc0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1fbfc4:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1fbfc8:	e0810000 	add	r0, r1, r0
        1fbfcc:	e2802004 	add	r2, r0, #4	; 0x4
        1fbfd0:	e1a03006 	mov	r3, r6
        1fbfd4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fbfd8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fbfdc:	eb643947 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fbfe0:	e28dd004 	add	sp, sp, #4	; 0x4
        1fbfe4:	e3300000 	teq	r0, #0	; 0x0
        1fbfe8:	05941010 	ldreq	r1, [r4, #16]	; fField16
        1fbfec:	00811005 	addeq	r1, r1, r5
        1fbff0:	05a41010 	streq	r1, [r4, #16]!	; fField16
        1fbff4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStorePackageWriter::WriteChunk(char *, long, unsigned char)
 * Address: 001fbff8
 */
TStorePackageWriter::WriteChunk(char *, long, unsigned char) {
    /*
        1fbff8:	e1a0c00d 	mov	ip, sp
        1fbffc:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1fc000:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fc004:	e1a04000 	mov	r4, r0
        1fc008:	e1a05002 	mov	r5, r2
        1fc00c:	e203a0ff 	and	sl, r3, #255	; 0xff
        1fc010:	e3a06000 	mov	r6, #0	; 0x0
        1fc014:	e1b07002 	movs	r7, r2
        1fc018:	0a00008f 	beq	1fc25c <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x264>
        1fc01c:	e2849020 	add	r9, r4, #32	; 0x20
        1fc020:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1fc024:	e2601b01 	rsb	r1, r0, #1024	; 0x400
        1fc028:	e1510007 	cmp	r1, r7
        1fc02c:	a1a01007 	movge	r1, r7
        1fc030:	e1a08001 	mov	r8, r1
        1fc034:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1fc038:	e0811000 	add	r1, r1, r0
        1fc03c:	e0450007 	sub	r0, r5, r7
        1fc040:	e51b2034 	ldr	r2, [fp, -#52]
        1fc044:	e0800002 	add	r0, r0, r2
        1fc048:	e1a02008 	mov	r2, r8
        1fc04c:	eb678bc0 	bl	1bdef54 <$BlockMove>
        1fc050:	e1a0300a 	mov	r3, sl
        1fc054:	e92d0008 	stmdb	sp!, {r3}
        1fc058:	e2841008 	add	r1, r4, #8	; 0x8
        1fc05c:	e8910003 	ldmia	r1, {r0, r1}
        1fc060:	e0802001 	add	r2, r0, r1
        1fc064:	e1a03008 	mov	r3, r8
        1fc068:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1fc06c:	eb612081 	bl	1a44278 <TFrameRelocationGenerator::$Update(long, char *, long, unsigned char)>
        1fc070:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc074:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1fc078:	e0800008 	add	r0, r0, r8
        1fc07c:	e584000c 	str	r0, [r4, #12]	; fField12
        1fc080:	e3300b01 	teq	r0, #1024	; 0x400
        1fc084:	1a00006a 	bne	1fc234 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x23c>
        1fc088:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fc08c:	e3a00000 	mov	r0, #0	; 0x0
        1fc090:	e1a02009 	mov	r2, r9
        1fc094:	e5840020 	str	r0, [r4, #32]	; fField32
        1fc098:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc09c:	e2801004 	add	r1, r0, #4	; 0x4
        1fc0a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc0a4:	eb062ac0 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1fc0a8:	e1b06000 	movs	r6, r0
        1fc0ac:	1a000054 	bne	1fc204 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x20c>
        1fc0b0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1fc0b4:	e3300000 	teq	r0, #0	; 0x0
        1fc0b8:	0a00000a 	beq	1fc0e8 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0xf0>
        1fc0bc:	eb06355d 	bl	389638 <TCallbackCompressor::Reset(void)>
        1fc0c0:	e3a02b01 	mov	r2, #1024	; 0x400
        1fc0c4:	e9940003 	ldmib	r4, {r0, r1}
        1fc0c8:	eb06355d 	bl	389644 <TCallbackCompressor::WriteChunk(void *, long)>
        1fc0cc:	e1b06000 	movs	r6, r0
        1fc0d0:	1a00004b 	bne	1fc204 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x20c>
        1fc0d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1fc0d8:	eb06355c 	bl	389650 <TCallbackCompressor::Flush(void)>
        1fc0dc:	e1b06000 	movs	r6, r0
        1fc0e0:	1a000047 	bne	1fc204 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x20c>
        1fc0e4:	ea000005 	b	1fc100 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x108>
        1fc0e8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1fc0ec:	e1a00004 	mov	r0, r4
        1fc0f0:	e3a02b01 	mov	r2, #1024	; 0x400
        1fc0f4:	eb643906 	bl	1b0a514 <TStorePackageWriter::$WriteCompressedData(void *, long)>
        1fc0f8:	e1b06000 	movs	r6, r0
        1fc0fc:	1a000040 	bne	1fc204 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x20c>
        1fc100:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc104:	e3300000 	teq	r0, #0	; 0x0
        1fc108:	0a000025 	beq	1fc1a4 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1ac>
        1fc10c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1fc110:	e28d3004 	add	r3, sp, #4	; 0x4
        1fc114:	e92d0008 	stmdb	sp!, {r3}
        1fc118:	e28d3004 	add	r3, sp, #4	; 0x4
        1fc11c:	e28d200c 	add	r2, sp, #12	; 0xc
        1fc120:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fc124:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1fc128:	eb644da6 	bl	1b0f7c8 <TCRelocationGenerator::$GetRelocDataForBlock(unsigned long, char **, long *, char **)>
        1fc12c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc130:	e1b06000 	movs	r6, r0
        1fc134:	1a000017 	bne	1fc198 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1a0>
        1fc138:	e59d3000 	ldr	r3, [sp]
        1fc13c:	e92d0008 	stmdb	sp!, {r3}
        1fc140:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc144:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc148:	e3a02000 	mov	r2, #0	; 0x0
        1fc14c:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        1fc150:	eb6438ea 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc154:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc158:	e1b06000 	movs	r6, r0
        1fc15c:	1a00000d 	bne	1fc198 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1a0>
        1fc160:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        1fc164:	e33c0000 	teq	ip, #0	; 0x0
        1fc168:	0a00000c 	beq	1fc1a0 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1a8>
        1fc16c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc170:	e59d2000 	ldr	r2, [sp]
        1fc174:	e0403002 	sub	r3, r0, r2
        1fc178:	e92d0008 	stmdb	sp!, {r3}
        1fc17c:	e1a0300c 	mov	r3, ip
        1fc180:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc184:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc188:	eb6438dc 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc18c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc190:	e1b06000 	movs	r6, r0
        1fc194:	0a000001 	beq	1fc1a0 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x1a8>
        1fc198:	e28dd010 	add	sp, sp, #16	; 0x10
        1fc19c:	ea000026 	b	1fc23c <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x244>
        1fc1a0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1fc1a4:	e1a0100d 	mov	r1, sp
        1fc1a8:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1fc1ac:	eb610f82 	bl	1a3ffbc <TFrameRelocationGenerator::$GetHeader(FrameRelocationHeader *)>
        1fc1b0:	e3a03004 	mov	r3, #4	; 0x4
        1fc1b4:	e92d0008 	stmdb	sp!, {r3}
        1fc1b8:	e08d3003 	add	r3, sp, r3
        1fc1bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc1c0:	e2842020 	add	r2, r4, #32	; 0x20
        1fc1c4:	e8920006 	ldmia	r2, {r1, r2}
        1fc1c8:	eb6438cc 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc1cc:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc1d0:	e1b06000 	movs	r6, r0
        1fc1d4:	1a00000a 	bne	1fc204 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x20c>
        1fc1d8:	e3a03004 	mov	r3, #4	; 0x4
        1fc1dc:	e92d0008 	stmdb	sp!, {r3}
        1fc1e0:	e1a03009 	mov	r3, r9
        1fc1e4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1fc1e8:	e1a02100 	mov	r2, r0, lsl #2
        1fc1ec:	e2841018 	add	r1, r4, #24	; 0x18
        1fc1f0:	e8910003 	ldmia	r1, {r0, r1}
        1fc1f4:	eb6438c1 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc1f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc1fc:	e1b06000 	movs	r6, r0
        1fc200:	0a000001 	beq	1fc20c <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x214>
        1fc204:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc208:	ea00000b 	b	1fc23c <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x244>
        1fc20c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1fc210:	e2801001 	add	r1, r0, #1	; 0x1
        1fc214:	e3a00000 	mov	r0, #0	; 0x0
        1fc218:	e584000c 	str	r0, [r4, #12]	; fField12
        1fc21c:	e5841014 	str	r1, [r4, #20]	; fField20
        1fc220:	e5840010 	str	r0, [r4, #16]	; fField16
        1fc224:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fc228:	eb644d68 	bl	1b0f7d0 <TCRelocationGenerator::$GetRelocDataSizeForBlock(unsigned long)>
        1fc22c:	e5840024 	str	r0, [r4, #36]	; fField36
        1fc230:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc234:	e0577008 	subs	r7, r7, r8
        1fc238:	1affff78 	bne	1fc020 <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x28>
        1fc23c:	e3360000 	teq	r6, #0	; 0x0
        1fc240:	0a000005 	beq	1fc25c <TStorePackageWriter::WriteChunk(char *, long, unsigned char)+0x264>
        1fc244:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc248:	e3310000 	teq	r1, #0	; 0x0
        1fc24c:	15940018 	ldrne	r0, [r4, #24]	; fField24
        1fc250:	1b062a5b 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1fc254:	e1a00004 	mov	r0, r4
        1fc258:	eb646e65 	bl	1b17bf4 <TStorePackageWriter::$Abort(void)>
        1fc25c:	e1a00006 	mov	r0, r6
        1fc260:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStorePackageWriter::Abort(void)
 * Address: 001fc264
 */
TStorePackageWriter::Abort(void) {
    /*
        1fc264:	e1a0c00d 	mov	ip, sp
        1fc268:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1fc26c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fc270:	e1a04000 	mov	r4, r0
        1fc274:	e3a00000 	mov	r0, #0	; 0x0
        1fc278:	e3a05000 	mov	r5, #0	; 0x0
        1fc27c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1fc280:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1fc284:	e3510000 	cmp	r1, #0	; 0x0
        1fc288:	9a000012 	bls	1fc2d8 <TStorePackageWriter::Abort(void)+0x74>
        1fc28c:	e3a03004 	mov	r3, #4	; 0x4
        1fc290:	e92d0008 	stmdb	sp!, {r3}
        1fc294:	e1a02105 	mov	r2, r5, lsl #2
        1fc298:	e08d3003 	add	r3, sp, r3
        1fc29c:	e2841018 	add	r1, r4, #24	; 0x18
        1fc2a0:	e8910003 	ldmia	r1, {r0, r1}
        1fc2a4:	eb6417a5 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fc2a8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc2ac:	e3300000 	teq	r0, #0	; 0x0
        1fc2b0:	1a000008 	bne	1fc2d8 <TStorePackageWriter::Abort(void)+0x74>
        1fc2b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc2b8:	e59d1000 	ldr	r1, [sp]
        1fc2bc:	eb062a40 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1fc2c0:	e3300000 	teq	r0, #0	; 0x0
        1fc2c4:	1a000003 	bne	1fc2d8 <TStorePackageWriter::Abort(void)+0x74>
        1fc2c8:	e2855001 	add	r5, r5, #1	; 0x1
        1fc2cc:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1fc2d0:	e1510005 	cmp	r1, r5
        1fc2d4:	8affffec 	bhi	1fc28c <TStorePackageWriter::Abort(void)+0x28>
        1fc2d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStorePackageWriter::Flush(void)
 * Address: 001fc2dc
 */
TStorePackageWriter::Flush(void) {
    /*
        1fc2dc:	e1a0c00d 	mov	ip, sp
        1fc2e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fc2e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fc2e8:	e1a04000 	mov	r4, r0
        1fc2ec:	e3a05000 	mov	r5, #0	; 0x0
        1fc2f0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1fc2f4:	e3300000 	teq	r0, #0	; 0x0
        1fc2f8:	0a000067 	beq	1fc49c <TStorePackageWriter::Flush(void)+0x1c0>
        1fc2fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fc300:	e3a07000 	mov	r7, #0	; 0x0
        1fc304:	e5847020 	str	r7, [r4, #32]	; fField32
        1fc308:	e2842020 	add	r2, r4, #32	; 0x20
        1fc30c:	e1a06002 	mov	r6, r2
        1fc310:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc314:	e2801004 	add	r1, r0, #4	; 0x4
        1fc318:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc31c:	eb062a22 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1fc320:	e1b05000 	movs	r5, r0
        1fc324:	1a000053 	bne	1fc478 <TStorePackageWriter::Flush(void)+0x19c>
        1fc328:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1fc32c:	e3300000 	teq	r0, #0	; 0x0
        1fc330:	0a000009 	beq	1fc35c <TStorePackageWriter::Flush(void)+0x80>
        1fc334:	eb0634bf 	bl	389638 <TCallbackCompressor::Reset(void)>
        1fc338:	e9940007 	ldmib	r4, {r0, r1, r2}
        1fc33c:	eb0634c0 	bl	389644 <TCallbackCompressor::WriteChunk(void *, long)>
        1fc340:	e1b05000 	movs	r5, r0
        1fc344:	1a00004b 	bne	1fc478 <TStorePackageWriter::Flush(void)+0x19c>
        1fc348:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1fc34c:	eb0634bf 	bl	389650 <TCallbackCompressor::Flush(void)>
        1fc350:	e1b05000 	movs	r5, r0
        1fc354:	1a000047 	bne	1fc478 <TStorePackageWriter::Flush(void)+0x19c>
        1fc358:	ea000005 	b	1fc374 <TStorePackageWriter::Flush(void)+0x98>
        1fc35c:	e2842008 	add	r2, r4, #8	; 0x8
        1fc360:	e8920006 	ldmia	r2, {r1, r2}
        1fc364:	e1a00004 	mov	r0, r4
        1fc368:	eb643869 	bl	1b0a514 <TStorePackageWriter::$WriteCompressedData(void *, long)>
        1fc36c:	e1b05000 	movs	r5, r0
        1fc370:	1a000040 	bne	1fc478 <TStorePackageWriter::Flush(void)+0x19c>
        1fc374:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc378:	e3300000 	teq	r0, #0	; 0x0
        1fc37c:	0a000025 	beq	1fc418 <TStorePackageWriter::Flush(void)+0x13c>
        1fc380:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1fc384:	e28d3004 	add	r3, sp, #4	; 0x4
        1fc388:	e92d0008 	stmdb	sp!, {r3}
        1fc38c:	e28d3004 	add	r3, sp, #4	; 0x4
        1fc390:	e28d200c 	add	r2, sp, #12	; 0xc
        1fc394:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1fc398:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1fc39c:	eb644d09 	bl	1b0f7c8 <TCRelocationGenerator::$GetRelocDataForBlock(unsigned long, char **, long *, char **)>
        1fc3a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc3a4:	e1b05000 	movs	r5, r0
        1fc3a8:	1a000017 	bne	1fc40c <TStorePackageWriter::Flush(void)+0x130>
        1fc3ac:	e59d3000 	ldr	r3, [sp]
        1fc3b0:	e92d0008 	stmdb	sp!, {r3}
        1fc3b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc3b8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc3bc:	e3a02000 	mov	r2, #0	; 0x0
        1fc3c0:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        1fc3c4:	eb64384d 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc3c8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc3cc:	e1b05000 	movs	r5, r0
        1fc3d0:	1a00000d 	bne	1fc40c <TStorePackageWriter::Flush(void)+0x130>
        1fc3d4:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        1fc3d8:	e33c0000 	teq	ip, #0	; 0x0
        1fc3dc:	0a00000c 	beq	1fc414 <TStorePackageWriter::Flush(void)+0x138>
        1fc3e0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1fc3e4:	e59d2000 	ldr	r2, [sp]
        1fc3e8:	e0403002 	sub	r3, r0, r2
        1fc3ec:	e92d0008 	stmdb	sp!, {r3}
        1fc3f0:	e1a0300c 	mov	r3, ip
        1fc3f4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc3f8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc3fc:	eb64383f 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc400:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc404:	e1b05000 	movs	r5, r0
        1fc408:	0a000001 	beq	1fc414 <TStorePackageWriter::Flush(void)+0x138>
        1fc40c:	e28dd010 	add	sp, sp, #16	; 0x10
        1fc410:	ea000019 	b	1fc47c <TStorePackageWriter::Flush(void)+0x1a0>
        1fc414:	e28dd00c 	add	sp, sp, #12	; 0xc
        1fc418:	e1a0100d 	mov	r1, sp
        1fc41c:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1fc420:	eb610ee5 	bl	1a3ffbc <TFrameRelocationGenerator::$GetHeader(FrameRelocationHeader *)>
        1fc424:	e3a03004 	mov	r3, #4	; 0x4
        1fc428:	e92d0008 	stmdb	sp!, {r3}
        1fc42c:	e08d3003 	add	r3, sp, r3
        1fc430:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fc434:	e2842020 	add	r2, r4, #32	; 0x20
        1fc438:	e8920006 	ldmia	r2, {r1, r2}
        1fc43c:	eb64382f 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc440:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc444:	e1b05000 	movs	r5, r0
        1fc448:	1a00000a 	bne	1fc478 <TStorePackageWriter::Flush(void)+0x19c>
        1fc44c:	e3a03004 	mov	r3, #4	; 0x4
        1fc450:	e92d0008 	stmdb	sp!, {r3}
        1fc454:	e1a03006 	mov	r3, r6
        1fc458:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1fc45c:	e1a02100 	mov	r2, r0, lsl #2
        1fc460:	e2841018 	add	r1, r4, #24	; 0x18
        1fc464:	e8910003 	ldmia	r1, {r0, r1}
        1fc468:	eb643824 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1fc46c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc470:	e1b05000 	movs	r5, r0
        1fc474:	0a00000a 	beq	1fc4a4 <TStorePackageWriter::Flush(void)+0x1c8>
        1fc478:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc47c:	e3350000 	teq	r5, #0	; 0x0
        1fc480:	0a000005 	beq	1fc49c <TStorePackageWriter::Flush(void)+0x1c0>
        1fc484:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1fc488:	e3310000 	teq	r1, #0	; 0x0
        1fc48c:	15940018 	ldrne	r0, [r4, #24]	; fField24
        1fc490:	1b0629cb 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1fc494:	e1a00004 	mov	r0, r4
        1fc498:	eb646dd5 	bl	1b17bf4 <TStorePackageWriter::$Abort(void)>
        1fc49c:	e1a00005 	mov	r0, r5
        1fc4a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1fc4a4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1fc4a8:	e2800001 	add	r0, r0, #1	; 0x1
        1fc4ac:	e5840014 	str	r0, [r4, #20]	; fField20
        1fc4b0:	e584700c 	str	r7, [r4, #12]	; fField12
        1fc4b4:	e5a47010 	str	r7, [r4, #16]!	; fField16
        1fc4b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fc4bc:	eafffff6 	b	1fc49c <TStorePackageWriter::Flush(void)+0x1c0>
    */
}

