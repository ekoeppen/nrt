#include "include/TCardPipe.h"

/**
 * Symbol: TCardPipe::WritePosition( const(void))
 * Address: 0004fefc
 */
TCardPipe::WritePosition( const(void)) {
    /*
         4fefc:	e3a00000 	mov	r0, #0	; 0x0
         4ff00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::FlushRead(void)
 * Address: 0004ff04
 */
TCardPipe::FlushRead(void) {
    /*
         4ff04:	e5901000 	ldr	r1, [r0]
         4ff08:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TCardPipe::FlushWrite(void)
 * Address: 0004ff0c
 */
TCardPipe::FlushWrite(void) {
    /*
         4ff0c:	e5901000 	ldr	r1, [r0]
         4ff10:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TCardPipe::Reset(void)
 * Address: 0004ff14
 */
TCardPipe::Reset(void) {
    /*
         4ff14:	e3a01000 	mov	r1, #0	; 0x0
         4ff18:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         4ff1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::Overflow(void)
 * Address: 0004ff20
 */
TCardPipe::Overflow(void) {
    /*
         4ff20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::Underflow(long, unsigned char &)
 * Address: 0004ff24
 */
TCardPipe::Underflow(long, unsigned char &) {
    /*
         4ff24:	e3a00001 	mov	r0, #1	; 0x1
         4ff28:	e5c20000 	strb	r0, [r2]
         4ff2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::__ct(void *, unsigned long, unsigned char)
 * Address: 000500d0
 */
TCardPipe::TCardPipe(*, unsigned long, unsigned char) {
    /*
         500d0:	e1a0c00d 	mov	ip, sp
         500d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         500d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         500dc:	e1b04000 	movs	r4, r0
         500e0:	e1a06001 	mov	r6, r1
         500e4:	e1a05002 	mov	r5, r2
         500e8:	e20370ff 	and	r7, r3, #255	; 0xff
         500ec:	1a000003 	bne	50100 <TCardPipe::__ct(void *, unsigned long, unsigned char)+0x30>
         500f0:	e3a00014 	mov	r0, #20	; 0x14
         500f4:	eb6df98f 	bl	1bce738 <$__nw(unsigned int)>
         500f8:	e1b04000 	movs	r4, r0
         500fc:	0a000008 	beq	50124 <TCardPipe::__ct(void *, unsigned long, unsigned char)+0x54>
         50100:	e1a00004 	mov	r0, r4
         50104:	eb6e5049 	bl	1be4230 <CPipe::$__ct(void)>
         50108:	e59f001c 	ldr	r0, [pc, #1c]	; 5012c <TCardPipe::__ct(void *, unsigned long, unsigned char)+0x5c>
         5010c:	e8840041 	stmia	r4, {r0, r6}
         50110:	e3a00000 	mov	r0, #0	; 0x0
         50114:	e284400c 	add	r4, r4, #12	; 0xc
         50118:	e8840081 	stmia	r4, {r0, r7}
         5011c:	e5245004 	str	r5, [r4, -#4]!	; fField4
         50120:	e2444008 	sub	r4, r4, #8	; 0x8
         50124:	e1a00004 	mov	r0, r4
         50128:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5012c:	000207d8 	ldreqd	r0, [r2], -r8
    */
}

/**
 * Symbol: TCardPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 00050130
 */
TCardPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
         50130:	e1a0c00d 	mov	ip, sp
         50134:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         50138:	e24cb004 	sub	fp, ip, #4	; 0x4
         5013c:	e1a04000 	mov	r4, r0
         50140:	e1a07001 	mov	r7, r1
         50144:	e1a05002 	mov	r5, r2
         50148:	e1a06003 	mov	r6, r3
         5014c:	e3a00000 	mov	r0, #0	; 0x0
         50150:	e5929000 	ldr	r9, [r2]
         50154:	e5c30000 	strb	r0, [r3]
         50158:	e52d006c 	str	r0, [sp, -#108]!
         5015c:	e28d0008 	add	r0, sp, #8	; 0x8
         50160:	eb6d8a03 	bl	1bb2974 <$setjmp>
         50164:	e3300000 	teq	r0, #0	; 0x0
         50168:	1a000024 	bne	50200 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0xd0>
         5016c:	e1a0000d 	mov	r0, sp
         50170:	eb6e3fc1 	bl	1be007c <$AddExceptionHandler>
         50174:	e3a0a001 	mov	sl, #1	; 0x1
         50178:	e594000c 	ldr	r0, [r4, #12]	; fField12
         5017c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         50180:	e0818000 	add	r8, r1, r0
         50184:	ea00000e 	b	501c4 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x94>
         50188:	e5941010 	ldr	r1, [r4, #16]	; fField16
         5018c:	e3310000 	teq	r1, #0	; 0x0
         50190:	04d80001 	ldreqb	r0, [r8], #1
         50194:	0a000003 	beq	501a8 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x78>
         50198:	e5941004 	ldr	r1, [r4, #4]	; fField4
         5019c:	e0810080 	add	r0, r1, r0, lsl #1
         501a0:	e2800001 	add	r0, r0, #1	; 0x1
         501a4:	eb6dfd8a 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         501a8:	e4c70001 	strb	r0, [r7], #1
         501ac:	e594000c 	ldr	r0, [r4, #12]	; fField12
         501b0:	e2800001 	add	r0, r0, #1	; 0x1
         501b4:	e584000c 	str	r0, [r4, #12]	; fField12
         501b8:	e5951000 	ldr	r1, [r5]
         501bc:	e2411001 	sub	r1, r1, #1	; 0x1
         501c0:	e5851000 	str	r1, [r5]
         501c4:	e5950000 	ldr	r0, [r5]
         501c8:	e3500000 	cmp	r0, #0	; 0x0
         501cc:	da000003 	ble	501e0 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0xb0>
         501d0:	e594000c 	ldr	r0, [r4, #12]	; fField12
         501d4:	e5941008 	ldr	r1, [r4, #8]	; fField8
         501d8:	e1500001 	cmp	r0, r1
         501dc:	3affffe9 	bcc	50188 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x58>
         501e0:	e5950000 	ldr	r0, [r5]
         501e4:	e3500000 	cmp	r0, #0	; 0x0
         501e8:	da00002b 	ble	5029c <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x16c>
         501ec:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
         501f0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         501f4:	e1500001 	cmp	r0, r1
         501f8:	25c6a000 	strcsb	sl, [r6]
         501fc:	ea000026 	b	5029c <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x16c>
         50200:	e59d0060 	ldr	r0, [sp, #96]
         50204:	e59f1070 	ldr	r1, [pc, #70]	; 5027c <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x14c>
         50208:	e5911000 	ldr	r1, [r1]
         5020c:	eb6e4be0 	bl	1be3194 <$Subexception>
         50210:	e59f4068 	ldr	r4, [pc, #68]	; 50280 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x150>
         50214:	e3300000 	teq	r0, #0	; 0x0
         50218:	13a02000 	movne	r2, #0	; 0x0
         5021c:	15940000 	ldrne	r0, [r4]
         50220:	159f105c 	ldrne	r1, [pc, #5c]	; 50284 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x154>
         50224:	1a000012 	bne	50274 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x144>
         50228:	e59d0060 	ldr	r0, [sp, #96]
         5022c:	e59f1054 	ldr	r1, [pc, #54]	; 50288 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x158>
         50230:	e5911000 	ldr	r1, [r1]
         50234:	eb6e4bd6 	bl	1be3194 <$Subexception>
         50238:	e3300000 	teq	r0, #0	; 0x0
         5023c:	13a02000 	movne	r2, #0	; 0x0
         50240:	13a010b5 	movne	r1, #181	; 0xb5
         50244:	12411b0a 	subne	r1, r1, #10240	; 0x2800
         50248:	15940000 	ldrne	r0, [r4]
         5024c:	1a000008 	bne	50274 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x144>
         50250:	e59d0060 	ldr	r0, [sp, #96]
         50254:	e59f1030 	ldr	r1, [pc, #30]	; 5028c <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x15c>
         50258:	e5911000 	ldr	r1, [r1]
         5025c:	eb6e4bcc 	bl	1be3194 <$Subexception>
         50260:	e3300000 	teq	r0, #0	; 0x0
         50264:	0a00000a 	beq	50294 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x164>
         50268:	e3a02000 	mov	r2, #0	; 0x0
         5026c:	e5940000 	ldr	r0, [r4]
         50270:	e59f1018 	ldr	r1, [pc, #18]	; 50290 <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x160>
         50274:	eb6e4bc8 	bl	1be319c <$Throw>
         50278:	ea000007 	b	5029c <TCardPipe::ReadChunk(void *, long &, unsigned char &)+0x16c>
         5027c:	003712c4 	eoreqs	r1, r7, r4, asr #5
         50280:	00371324 	eoreqs	r1, r7, r4, lsr #6
         50284:	ffffd8b3 	swinv	0x00ffd8b3
         50288:	003712b8 	ldreqh	r1, [r7], -r8
         5028c:	003712c8 	eoreqs	r1, r7, r8, asr #5
         50290:	ffffd8af 	swinv	0x00ffd8af
         50294:	e1a0000d 	mov	r0, sp
         50298:	eb6e47ad 	bl	1be2154 <$NextHandler>
         5029c:	e1a0000d 	mov	r0, sp
         502a0:	eb6e4384 	bl	1be10b8 <$ExitHandler>
         502a4:	e5950000 	ldr	r0, [r5]
         502a8:	e0490000 	sub	r0, r9, r0
         502ac:	e5850000 	str	r0, [r5]
         502b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPipe::WriteChunk(void *, long, unsigned char)
 * Address: 000502b4
 */
TCardPipe::WriteChunk(void *, long, unsigned char) {
    /*
         502b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::ReadSeek(long, int)
 * Address: 000502b8
 */
TCardPipe::ReadSeek(long, int) {
    /*
         502b8:	e3720001 	cmn	r2, #1	; 0x1
         502bc:	0a000007 	beq	502e0 <TCardPipe::ReadSeek(long, int)+0x28>
         502c0:	e3320000 	teq	r2, #0	; 0x0
         502c4:	0590200c 	ldreq	r2, [r0, #12]	; fField12
         502c8:	00821001 	addeq	r1, r2, r1
         502cc:	0a000003 	beq	502e0 <TCardPipe::ReadSeek(long, int)+0x28>
         502d0:	e3320001 	teq	r2, #1	; 0x1
         502d4:	1a000002 	bne	502e4 <TCardPipe::ReadSeek(long, int)+0x2c>
         502d8:	e5902008 	ldr	r2, [r0, #8]	; fField8
         502dc:	e0421001 	sub	r1, r2, r1
         502e0:	e580100c 	str	r1, [r0, #12]	; fField12
         502e4:	e590000c 	ldr	r0, [r0, #12]	; fField12
         502e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::ReadPosition( const(void))
 * Address: 000502ec
 */
TCardPipe::ReadPosition( const(void)) {
    /*
         502ec:	e590000c 	ldr	r0, [r0, #12]	; fField12
         502f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardPipe::WriteSeek(long, int)
 * Address: 000502f4
 */
TCardPipe::WriteSeek(long, int) {
    /*
         502f4:	e3a00000 	mov	r0, #0	; 0x0
         502f8:	e1a0f00e 	mov	pc, lr
    */
}

