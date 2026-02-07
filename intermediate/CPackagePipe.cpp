#include "include/CPackagePipe.h"

/**
 * Symbol: CPackagePipe::__ct(void)
 * Address: 0015fe48
 */
CPackagePipe::CPackagePipe(void) {
    /*
        15fe48:	e1a0c00d 	mov	ip, sp
        15fe4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15fe50:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fe54:	e1b04000 	movs	r4, r0
        15fe58:	1a000003 	bne	15fe6c <CPackagePipe::__ct(void)+0x24>
        15fe5c:	e3a00018 	mov	r0, #24	; 0x18
        15fe60:	eb69ba34 	bl	1bce738 <$__nw(unsigned int)>
        15fe64:	e1b04000 	movs	r4, r0
        15fe68:	0a000009 	beq	15fe94 <CPackagePipe::__ct(void)+0x4c>
        15fe6c:	e1a00004 	mov	r0, r4
        15fe70:	eb6a10ee 	bl	1be4230 <CPipe::$__ct(void)>
        15fe74:	e59f0020 	ldr	r0, [pc, #20]	; 15fe9c <CPackagePipe::__ct(void)+0x54>
        15fe78:	e5840000 	str	r0, [r4]
        15fe7c:	e3a00000 	mov	r0, #0	; 0x0
        15fe80:	e584000c 	str	r0, [r4, #12]	; fField12
        15fe84:	e5840008 	str	r0, [r4, #8]	; fField8
        15fe88:	e5840010 	str	r0, [r4, #16]	; fField16
        15fe8c:	e5840014 	str	r0, [r4, #20]
        15fe90:	e5840004 	str	r0, [r4, #4]	; fField4
        15fe94:	e1a00004 	mov	r0, r4
        15fe98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15fe9c:	0001b90c 	andeq	fp, r1, ip, lsl #18
    */
}

/**
 * Symbol: CPackagePipe::__dt(void)
 * Address: 0015fea0
 */
CPackagePipe::~CPackagePipe(void) {
    /*
        15fea0:	e1a0c00d 	mov	ip, sp
        15fea4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15fea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15feac:	e1a04000 	mov	r4, r0
        15feb0:	e1a05001 	mov	r5, r1
        15feb4:	e59f0038 	ldr	r0, [pc, #38]	; 15fef4 <CPackagePipe::__dt(void)+0x54>
        15feb8:	e5840000 	str	r0, [r4]
        15febc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15fec0:	e3300000 	teq	r0, #0	; 0x0
        15fec4:	13a01001 	movne	r1, #1	; 0x1
        15fec8:	1b69ba12 	blne	1bce718 <TPackageIterator::$__dt(void)>
        15fecc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        15fed0:	eb69b602 	bl	1bcd6e0 <$__dl(void *)>
        15fed4:	e1a00004 	mov	r0, r4
        15fed8:	e3a01000 	mov	r1, #0	; 0x0
        15fedc:	eb6a14e9 	bl	1be5288 <CPipe::$__dt(void)>
        15fee0:	e3150001 	tst	r5, #1	; 0x1
        15fee4:	11a00004 	movne	r0, r4
        15fee8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        15feec:	1a69b5fb 	bne	1bcd6e0 <$__dl(void *)>
        15fef0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15fef4:	0001b90c 	andeq	fp, r1, ip, lsl #18
    */
}

/**
 * Symbol: CPackagePipe::ReadSeek(long, int)
 * Address: 0015fef8
 */
CPackagePipe::ReadSeek(long, int) {
    /*
        15fef8:	e3a00000 	mov	r0, #0	; 0x0
        15fefc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPackagePipe::ReadPosition( const(void))
 * Address: 0015ff00
 */
CPackagePipe::ReadPosition( const(void)) {
    /*
        15ff00:	e3a00000 	mov	r0, #0	; 0x0
        15ff04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPackagePipe::WriteSeek(long, int)
 * Address: 0015ff08
 */
CPackagePipe::WriteSeek(long, int) {
    /*
        15ff08:	e3a00000 	mov	r0, #0	; 0x0
        15ff0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPackagePipe::WritePosition( const(void))
 * Address: 0015ff10
 */
CPackagePipe::WritePosition( const(void)) {
    /*
        15ff10:	e3a00000 	mov	r0, #0	; 0x0
        15ff14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPackagePipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 0015ff18
 */
CPackagePipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        15ff18:	e1a0c00d 	mov	ip, sp
        15ff1c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15ff20:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ff24:	e1a04000 	mov	r4, r0
        15ff28:	e1a06001 	mov	r6, r1
        15ff2c:	e1a05002 	mov	r5, r2
        15ff30:	e1a07003 	mov	r7, r3
        15ff34:	e2801010 	add	r1, r0, #16	; 0x10
        15ff38:	e8910003 	ldmia	r1, {r0, r1}
        15ff3c:	e0412000 	sub	r2, r1, r0
        15ff40:	e5951000 	ldr	r1, [r5]
        15ff44:	e1520001 	cmp	r2, r1
        15ff48:	b1a01002 	movlt	r1, r2
        15ff4c:	e1b08001 	movs	r8, r1
        15ff50:	0a00000b 	beq	15ff84 <CPackagePipe::ReadChunk(void *, long &, unsigned char &)+0x6c>
        15ff54:	e594100c 	ldr	r1, [r4, #12]	; fField12
        15ff58:	e0811000 	add	r1, r1, r0
        15ff5c:	e1a02008 	mov	r2, r8
        15ff60:	e1a00006 	mov	r0, r6
        15ff64:	eb6952b9 	bl	1bb4a50 <$memcpy>
        15ff68:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15ff6c:	e0800008 	add	r0, r0, r8
        15ff70:	e5840010 	str	r0, [r4, #16]	; fField16
        15ff74:	e5951000 	ldr	r1, [r5]
        15ff78:	e0411008 	sub	r1, r1, r8
        15ff7c:	e0866008 	add	r6, r6, r8
        15ff80:	e5851000 	str	r1, [r5]
        15ff84:	e5950000 	ldr	r0, [r5]
        15ff88:	e3300000 	teq	r0, #0	; 0x0
        15ff8c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15ff90:	e5940004 	ldr	r0, [r4, #4]	; fField4
        15ff94:	e3300000 	teq	r0, #0	; 0x0
        15ff98:	1a000005 	bne	15ffb4 <CPackagePipe::ReadChunk(void *, long &, unsigned char &)+0x9c>
        15ff9c:	e59f0030 	ldr	r0, [pc, #30]	; 15ffd4 <CPackagePipe::ReadChunk(void *, long &, unsigned char &)+0xbc>
        15ffa0:	e5900000 	ldr	r0, [r0]
        15ffa4:	e3a02000 	mov	r2, #0	; 0x0
        15ffa8:	e3a010ea 	mov	r1, #234	; 0xea
        15ffac:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        15ffb0:	eb6a0c79 	bl	1be319c <$Throw>
        15ffb4:	e1a03007 	mov	r3, r7
        15ffb8:	e1a02005 	mov	r2, r5
        15ffbc:	e1a01006 	mov	r1, r6
        15ffc0:	e5b4c004 	ldr	ip, [r4, #4]!	; fField4
        15ffc4:	e1a0000c 	mov	r0, ip
        15ffc8:	e59cc000 	ldr	ip, [ip]
        15ffcc:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        15ffd0:	e28cf014 	add	pc, ip, #20	; 0x14
        15ffd4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPackagePipe::WriteChunk(void *, long, unsigned char)
 * Address: 0015ffd8
 */
CPackagePipe::WriteChunk(void *, long, unsigned char) {
    /*
        15ffd8:	e59f000c 	ldr	r0, [pc, #c]	; 15ffec <CPackagePipe::WriteChunk(void *, long, unsigned char)+0x14>
        15ffdc:	e5900000 	ldr	r0, [r0]
        15ffe0:	e3a02000 	mov	r2, #0	; 0x0
        15ffe4:	e59f1004 	ldr	r1, [pc, #4]	; 15fff0 <CPackagePipe::WriteChunk(void *, long, unsigned char)+0x18>	; fField4
        15ffe8:	ea6a0c6b 	b	1be319c <$Throw>
        15ffec:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15fff0:	ffffc94f 	swinv	0x00ffc94f
    */
}

/**
 * Symbol: CPackagePipe::Init(CPipe *)
 * Address: 0015fff4
 */
CPackagePipe::Init(CPipe *) {
    /*
        15fff4:	e1a0c00d 	mov	ip, sp
        15fff8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15fffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        160000:	e1a04000 	mov	r4, r0
        160004:	e5801004 	str	r1, [r0, #4]	; fField4
        160008:	e3a00000 	mov	r0, #0	; 0x0
        16000c:	eb69b5a8 	bl	1bcd6b4 <TPackageIterator::$__ct(CPipe *)>
        160010:	e3a050e9 	mov	r5, #233	; 0xe9
        160014:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        160018:	e5840008 	str	r0, [r4, #8]	; fField8
        16001c:	e59f6108 	ldr	r6, [pc, #108]	; 16012c <CPackagePipe::Init(CPipe *)+0x138>
        160020:	e3300000 	teq	r0, #0	; 0x0
        160024:	1a000003 	bne	160038 <CPackagePipe::Init(CPipe *)+0x44>
        160028:	e3a02000 	mov	r2, #0	; 0x0
        16002c:	e1a01005 	mov	r1, r5
        160030:	e5960000 	ldr	r0, [r6]
        160034:	eb6a0c58 	bl	1be319c <$Throw>
        160038:	e5940008 	ldr	r0, [r4, #8]	; fField8
        16003c:	eb69d698 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        160040:	e3300000 	teq	r0, #0	; 0x0
        160044:	0a000003 	beq	160058 <CPackagePipe::Init(CPipe *)+0x64>
        160048:	e1a01000 	mov	r1, r0
        16004c:	e3a02000 	mov	r2, #0	; 0x0
        160050:	e5960000 	ldr	r0, [r6]
        160054:	eb6a0c50 	bl	1be319c <$Throw>
        160058:	e5940008 	ldr	r0, [r4, #8]	; fField8
        16005c:	eb69c611 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        160060:	e5941008 	ldr	r1, [r4, #8]	; fField8
        160064:	e5911010 	ldr	r1, [r1, #16]	; fField16
        160068:	e1b01001 	movs	r1, r1
        16006c:	13a01014 	movne	r1, #20	; 0x14
        160070:	e0800001 	add	r0, r0, r1
        160074:	eb69b9af 	bl	1bce738 <$__nw(unsigned int)>
        160078:	e584000c 	str	r0, [r4, #12]	; fField12
        16007c:	e3300000 	teq	r0, #0	; 0x0
        160080:	1a000003 	bne	160094 <CPackagePipe::Init(CPipe *)+0xa0>
        160084:	e3a02000 	mov	r2, #0	; 0x0
        160088:	e1a01005 	mov	r1, r5
        16008c:	e5960000 	ldr	r0, [r6]
        160090:	eb6a0c41 	bl	1be319c <$Throw>
        160094:	e5940008 	ldr	r0, [r4, #8]	; fField8
        160098:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        16009c:	e3a02034 	mov	r2, #52	; 0x34
        1600a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1600a4:	eb695269 	bl	1bb4a50 <$memcpy>
        1600a8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1600ac:	eb69debf 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        1600b0:	e1a05280 	mov	r5, r0, lsl #5
        1600b4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1600b8:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        1600bc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1600c0:	e2800034 	add	r0, r0, #52	; 0x34
        1600c4:	e1a02005 	mov	r2, r5
        1600c8:	eb695260 	bl	1bb4a50 <$memcpy>
        1600cc:	e2855034 	add	r5, r5, #52	; 0x34
        1600d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1600d4:	eb69c5f3 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        1600d8:	e0402005 	sub	r2, r0, r5
        1600dc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1600e0:	e5b01018 	ldr	r1, [r0, #24]!
        1600e4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1600e8:	e0800005 	add	r0, r0, r5
        1600ec:	eb695257 	bl	1bb4a50 <$memcpy>
        1600f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1600f4:	eb69c5eb 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        1600f8:	e0400005 	sub	r0, r0, r5
        1600fc:	e0805005 	add	r5, r0, r5
        160100:	e5940008 	ldr	r0, [r4, #8]	; fField8
        160104:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        160108:	e3310000 	teq	r1, #0	; 0x0
        16010c:	0a000004 	beq	160124 <CPackagePipe::Init(CPipe *)+0x130>
        160110:	e594000c 	ldr	r0, [r4, #12]	; fField12
        160114:	e0800005 	add	r0, r0, r5
        160118:	e3a02014 	mov	r2, #20	; 0x14
        16011c:	eb69524b 	bl	1bb4a50 <$memcpy>
        160120:	e2855014 	add	r5, r5, #20	; 0x14
        160124:	e5a45014 	str	r5, [r4, #20]!
        160128:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        16012c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPackagePipe::Overflow(void)
 * Address: 00160130
 */
CPackagePipe::Overflow(void) {
    /*
        160130:	e59f000c 	ldr	r0, [pc, #c]	; 160144 <CPackagePipe::Overflow(void)+0x14>
        160134:	e5900000 	ldr	r0, [r0]
        160138:	e3a02000 	mov	r2, #0	; 0x0
        16013c:	e59f1004 	ldr	r1, [pc, #4]	; 160148 <CPackagePipe::Overflow(void)+0x18>	; fField4
        160140:	ea6a0c15 	b	1be319c <$Throw>
        160144:	00371324 	eoreqs	r1, r7, r4, lsr #6
        160148:	ffffc94f 	swinv	0x00ffc94f
    */
}

/**
 * Symbol: CPackagePipe::Underflow(long, unsigned char &)
 * Address: 0016014c
 */
CPackagePipe::Underflow(long, unsigned char &) {
    /*
        16014c:	e59f000c 	ldr	r0, [pc, #c]	; 160160 <CPackagePipe::Underflow(long, unsigned char &)+0x14>
        160150:	e5900000 	ldr	r0, [r0]
        160154:	e3a02000 	mov	r2, #0	; 0x0
        160158:	e59f1004 	ldr	r1, [pc, #4]	; 160164 <CPackagePipe::Underflow(long, unsigned char &)+0x18>	; fField4
        16015c:	ea6a0c0e 	b	1be319c <$Throw>
        160160:	00371324 	eoreqs	r1, r7, r4, lsr #6
        160164:	ffffc94f 	swinv	0x00ffc94f
    */
}

/**
 * Symbol: CPackagePipe::FlushRead(void)
 * Address: 00160168
 */
CPackagePipe::FlushRead(void) {
    /*
        160168:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPackagePipe::FlushWrite(void)
 * Address: 0016016c
 */
CPackagePipe::FlushWrite(void) {
    /*
        16016c:	e59f000c 	ldr	r0, [pc, #c]	; 160180 <CPackagePipe::FlushWrite(void)+0x14>
        160170:	e5900000 	ldr	r0, [r0]
        160174:	e3a02000 	mov	r2, #0	; 0x0
        160178:	e59f1004 	ldr	r1, [pc, #4]	; 160184 <CPackagePipe::FlushWrite(void)+0x18>	; fField4
        16017c:	ea6a0c06 	b	1be319c <$Throw>
        160180:	00371324 	eoreqs	r1, r7, r4, lsr #6
        160184:	ffffc94f 	swinv	0x00ffc94f
    */
}

/**
 * Symbol: CPackagePipe::Reset(void)
 * Address: 00160188
 */
CPackagePipe::Reset(void) {
    /*
        160188:	e3a01000 	mov	r1, #0	; 0x0
        16018c:	e5801010 	str	r1, [r0, #16]	; fField16
        160190:	e5900004 	ldr	r0, [r0, #4]	; fField4
        160194:	e5901000 	ldr	r1, [r0]
        160198:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

