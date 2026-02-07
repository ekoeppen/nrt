#include "include/TSimpleCRelocator.h"

/**
 * Symbol: TSimpleCRelocator::Init(TStore *, unsigned long, long *)
 * Address: 0004a03c
 */
TSimpleCRelocator::Init(TStore *, unsigned long, long *) {
    /*
         4a03c:	e1a0c00d 	mov	ip, sp
         4a040:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4a044:	e24cb004 	sub	fp, ip, #4	; 0x4
         4a048:	e1a04000 	mov	r4, r0
         4a04c:	e1a06001 	mov	r6, r1
         4a050:	e1a05002 	mov	r5, r2
         4a054:	e1a07003 	mov	r7, r3
         4a058:	e3a03010 	mov	r3, #16	; 0x10
         4a05c:	e92d0008 	stmdb	sp!, {r3}
         4a060:	e280300c 	add	r3, r0, #12	; 0xc
         4a064:	e1a01002 	mov	r1, r2
         4a068:	e1a00006 	mov	r0, r6
         4a06c:	e3a02000 	mov	r2, #0	; 0x0
         4a070:	eb6ae032 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
         4a074:	e28dd004 	add	sp, sp, #4	; 0x4
         4a078:	e3300000 	teq	r0, #0	; 0x0
         4a07c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         4a080:	e594100c 	ldr	r1, [r4, #12]	; fField12
         4a084:	e3310000 	teq	r1, #0	; 0x0
         4a088:	13e000a2 	mvnne	r0, #162	; 0xa2
         4a08c:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4a090:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         4a094:	e5941010 	ldr	r1, [r4, #16]	; fField16
         4a098:	e1b01821 	movs	r1, r1, lsr #16
         4a09c:	0a00000c 	beq	4a0d4 <TSimpleCRelocator::Init(TStore *, unsigned long, long *)+0x98>
         4a0a0:	e2810003 	add	r0, r1, #3	; 0x3
         4a0a4:	e1a00120 	mov	r0, r0, lsr #2
         4a0a8:	e1a03100 	mov	r3, r0, lsl #2
         4a0ac:	e5843004 	str	r3, [r4, #4]	; fField4
         4a0b0:	e92d0008 	stmdb	sp!, {r3}
         4a0b4:	e284301c 	add	r3, r4, #28	; 0x1c
         4a0b8:	e1a01005 	mov	r1, r5
         4a0bc:	e1a00006 	mov	r0, r6
         4a0c0:	e3a02010 	mov	r2, #16	; 0x10
         4a0c4:	eb6ae01d 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
         4a0c8:	e28dd004 	add	sp, sp, #4	; 0x4
         4a0cc:	e3300000 	teq	r0, #0	; 0x0
         4a0d0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         4a0d4:	e5941004 	ldr	r1, [r4, #4]	; fField4
         4a0d8:	e2811010 	add	r1, r1, #16	; 0x10
         4a0dc:	e5a41004 	str	r1, [r4, #4]!	; fField4
         4a0e0:	e5871000 	str	r1, [r7]
         4a0e4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSimpleCRelocator::__ct(void)
 * Address: 0004a0e8
 */
TSimpleCRelocator::TSimpleCRelocator(void) {
    /*
         4a0e8:	e1a0c00d 	mov	ip, sp
         4a0ec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4a0f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4a0f4:	e3300000 	teq	r0, #0	; 0x0
         4a0f8:	1a000003 	bne	4a10c <TSimpleCRelocator::__ct(void)+0x24>
         4a0fc:	e3a00f4d 	mov	r0, #308	; 0x134
         4a100:	eb6e118c 	bl	1bce738 <$__nw(unsigned int)>
         4a104:	e3300000 	teq	r0, #0	; 0x0
         4a108:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4a10c:	e59f1018 	ldr	r1, [pc, #18]	; 4a12c <TSimpleCRelocator::__ct(void)+0x44>
         4a110:	e5801000 	str	r1, [r0]
         4a114:	e3a01000 	mov	r1, #0	; 0x0
         4a118:	e5801004 	str	r1, [r0, #4]	; fField4
         4a11c:	e5801008 	str	r1, [r0, #8]	; fField8
         4a120:	e5c01011 	strb	r1, [r0, #17]	; fField17
         4a124:	e5c01010 	strb	r1, [r0, #16]	; fField16
         4a128:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4a12c:	0001e964 	andeq	lr, r1, r4, ror #18
    */
}

/**
 * Symbol: TSimpleCRelocator::__dt(void)
 * Address: 0004a130
 */
TSimpleCRelocator::~TSimpleCRelocator(void) {
    /*
         4a130:	e59f200c 	ldr	r2, [pc, #c]	; 4a144 <TSimpleCRelocator::__dt(void)+0x14>
         4a134:	e3110001 	tst	r1, #1	; 0x1
         4a138:	e5802000 	str	r2, [r0]
         4a13c:	1a6e0d67 	bne	1bcd6e0 <$__dl(void *)>
         4a140:	e1a0f00e 	mov	pc, lr
         4a144:	0001e964 	andeq	lr, r1, r4, ror #18
    */
}

/**
 * Symbol: TSimpleCRelocator::Relocate(char *, unsigned long)
 * Address: 0004a148
 */
TSimpleCRelocator::Relocate(char *, unsigned long) {
    /*
         4a148:	e92d4010 	stmdb	sp!, {r4, lr}
         4a14c:	e1a0c001 	mov	ip, r1
         4a150:	e590100c 	ldr	r1, [r0, #12]	; fField12
         4a154:	e3310000 	teq	r1, #0	; 0x0
         4a158:	13e000a2 	mvnne	r0, #162	; 0xa2
         4a15c:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4a160:	18bd8010 	ldmneia	sp!, {r4, pc}
         4a164:	e5901010 	ldr	r1, [r0, #16]	; fField16
         4a168:	e1a01821 	mov	r1, r1, lsr #16
         4a16c:	e3510000 	cmp	r1, #0	; 0x0
         4a170:	0a00000d 	beq	4a1ac <TSimpleCRelocator::Relocate(char *, unsigned long)+0x64>
         4a174:	e3a01000 	mov	r1, #0	; 0x0
         4a178:	da00000b 	ble	4a1ac <TSimpleCRelocator::Relocate(char *, unsigned long)+0x64>
         4a17c:	e0803001 	add	r3, r0, r1
         4a180:	e5d3301c 	ldrb	r3, [r3, #28]	; fField28
         4a184:	e08c3103 	add	r3, ip, r3, lsl #2
         4a188:	e590e018 	ldr	lr, [r0, #24]	; fField24
         4a18c:	e042e00e 	sub	lr, r2, lr
         4a190:	e5934000 	ldr	r4, [r3]
         4a194:	e08ee004 	add	lr, lr, r4
         4a198:	e2811001 	add	r1, r1, #1	; 0x1
         4a19c:	e583e000 	str	lr, [r3]
         4a1a0:	e5903010 	ldr	r3, [r0, #16]	; fField16
         4a1a4:	e1510823 	cmp	r1, r3, lsr #16
         4a1a8:	bafffff3 	blt	4a17c <TSimpleCRelocator::Relocate(char *, unsigned long)+0x34>
         4a1ac:	e3a00000 	mov	r0, #0	; 0x0
         4a1b0:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TSimpleCRelocator::GetTheNextRelocEntry(void)
 * Address: 0004a1b4
 */
TSimpleCRelocator::GetTheNextRelocEntry(void) {
    /*
         4a1b4:	e3e02000 	mvn	r2, #0	; 0x0
         4a1b8:	e590100c 	ldr	r1, [r0, #12]	; fField12
         4a1bc:	e3310000 	teq	r1, #0	; 0x0
         4a1c0:	1a000009 	bne	4a1ec <TSimpleCRelocator::GetTheNextRelocEntry(void)+0x38>
         4a1c4:	e5901008 	ldr	r1, [r0, #8]	; fField8
         4a1c8:	e5903010 	ldr	r3, [r0, #16]	; fField16
         4a1cc:	e1510823 	cmp	r1, r3, lsr #16
         4a1d0:	2a000005 	bcs	4a1ec <TSimpleCRelocator::GetTheNextRelocEntry(void)+0x38>
         4a1d4:	e2812001 	add	r2, r1, #1	; 0x1
         4a1d8:	e5802008 	str	r2, [r0, #8]	; fField8
         4a1dc:	e0810000 	add	r0, r1, r0
         4a1e0:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
         4a1e4:	e1a00100 	mov	r0, r0, lsl #2
         4a1e8:	e1a0f00e 	mov	pc, lr
         4a1ec:	e1a00002 	mov	r0, r2
         4a1f0:	e1a0f00e 	mov	pc, lr
    */
}

