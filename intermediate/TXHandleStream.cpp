#include "include/TXHandleStream.h"

/**
 * Symbol: TXHandleStream::Write(void const *, long)
 * Address: 00245f1c
 */
TXHandleStream::Write(void const *, long) {
    /*
        245f1c:	e1a0c00d 	mov	ip, sp
        245f20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        245f24:	e24cb004 	sub	fp, ip, #4	; 0x4
        245f28:	e1a05000 	mov	r5, r0
        245f2c:	e1a06001 	mov	r6, r1
        245f30:	e1a04002 	mov	r4, r2
        245f34:	e24dd004 	sub	sp, sp, #4	; 0x4
        245f38:	e1a0100d 	mov	r1, sp
        245f3c:	e5902000 	ldr	r2, [r0]
        245f40:	e1a0e00f 	mov	lr, pc
        245f44:	e282f00c 	add	pc, r2, #12	; 0xc
        245f48:	e3300000 	teq	r0, #0	; 0x0
        245f4c:	0a000000 	beq	245f54 <TXHandleStream::Write(void const *, long)+0x38>
        245f50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        245f54:	e1a00005 	mov	r0, r5
        245f58:	e5951000 	ldr	r1, [r5]
        245f5c:	e1a0e00f 	mov	lr, pc
        245f60:	e281f004 	add	pc, r1, #4	; 0x4
        245f64:	e1a01000 	mov	r1, r0
        245f68:	e59d0000 	ldr	r0, [sp]
        245f6c:	e0400001 	sub	r0, r0, r1
        245f70:	e1500004 	cmp	r0, r4
        245f74:	a1a00004 	movge	r0, r4
        245f78:	e1a02000 	mov	r2, r0
        245f7c:	e1a03004 	mov	r3, r4
        245f80:	e92d0008 	stmdb	sp!, {r3}
        245f84:	e1a03006 	mov	r3, r6
        245f88:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        245f8c:	eb64fcd5 	bl	1b852e8 <TXArray::$Replace(long, long, void const *, long)>
        245f90:	e28dd004 	add	sp, sp, #4	; 0x4
        245f94:	eaffffed 	b	245f50 <TXHandleStream::Write(void const *, long)+0x34>
    */
}

/**
 * Symbol: TXHandleStream::Read(void *, long)
 * Address: 00245f98
 */
TXHandleStream::Read(void *, long) {
    /*
        245f98:	e1a0c00d 	mov	ip, sp
        245f9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        245fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        245fa4:	e1a04000 	mov	r4, r0
        245fa8:	e1a06001 	mov	r6, r1
        245fac:	e1a05002 	mov	r5, r2
        245fb0:	e5901000 	ldr	r1, [r0]
        245fb4:	e1a0e00f 	mov	lr, pc
        245fb8:	e281f004 	add	pc, r1, #4	; 0x4
        245fbc:	e1a01000 	mov	r1, r0
        245fc0:	e1a03006 	mov	r3, r6
        245fc4:	e1a02005 	mov	r2, r5
        245fc8:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        245fcc:	eb64fcc2 	bl	1b852dc <$CopyTo__7TXArrayCFlT1Pv>
        245fd0:	e3a00000 	mov	r0, #0	; 0x0
        245fd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXHandleStream::__ct(void)
 * Address: 002460fc
 */
TXHandleStream::TXHandleStream(void) {
    /*
        2460fc:	e1a0c00d 	mov	ip, sp
        246100:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        246104:	e24cb004 	sub	fp, ip, #4	; 0x4
        246108:	e1b04000 	movs	r4, r0
        24610c:	1a000003 	bne	246120 <TXHandleStream::__ct(void)+0x24>
        246110:	e3a0000c 	mov	r0, #12	; 0xc
        246114:	eb662187 	bl	1bce738 <$__nw(unsigned int)>
        246118:	e1b04000 	movs	r4, r0
        24611c:	0a000008 	beq	246144 <TXHandleStream::__ct(void)+0x48>
        246120:	e1a00004 	mov	r0, r4
        246124:	eb654eeb 	bl	1b99cd8 <TXStream::$__ct(void)>
        246128:	e59f001c 	ldr	r0, [pc, #1c]	; 24614c <TXHandleStream::__ct(void)+0x50>
        24612c:	e3a0201e 	mov	r2, #30	; 0x1e
        246130:	e3a01001 	mov	r1, #1	; 0x1
        246134:	e5840000 	str	r0, [r4]
        246138:	e3a00000 	mov	r0, #0	; 0x0
        24613c:	eb64fc61 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        246140:	e5840008 	str	r0, [r4, #8]	; fField8
        246144:	e1a00004 	mov	r0, r4
        246148:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24614c:	0001ddf0 	streqd	sp, [r1], -r0
    */
}

/**
 * Symbol: TXHandleStream::__dt(void)
 * Address: 00246150
 */
TXHandleStream::~TXHandleStream(void) {
    /*
        246150:	e1a0c00d 	mov	ip, sp
        246154:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        246158:	e24cb004 	sub	fp, ip, #4	; 0x4
        24615c:	e1a04000 	mov	r4, r0
        246160:	e1a05001 	mov	r5, r1
        246164:	e59f0038 	ldr	r0, [pc, #38]	; 2461a4 <TXHandleStream::__dt(void)+0x54>
        246168:	e5840000 	str	r0, [r4]
        24616c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        246170:	e3300000 	teq	r0, #0	; 0x0
        246174:	0a000002 	beq	246184 <TXHandleStream::__dt(void)+0x34>
        246178:	e3a01001 	mov	r1, #1	; 0x1
        24617c:	e1a0e00f 	mov	lr, pc
        246180:	e590f000 	ldr	pc, [r0]
        246184:	e1a00004 	mov	r0, r4
        246188:	e3a01000 	mov	r1, #0	; 0x0
        24618c:	eb654ed2 	bl	1b99cdc <TXStream::$__dt(void)>
        246190:	e3150001 	tst	r5, #1	; 0x1
        246194:	11a00004 	movne	r0, r4
        246198:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        24619c:	1a661d4f 	bne	1bcd6e0 <$__dl(void *)>
        2461a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2461a4:	0001ddf0 	streqd	sp, [r1], -r0
    */
}

/**
 * Symbol: TXHandleStream::GetSize(long *)
 * Address: 002461a8
 */
TXHandleStream::GetSize(long *) {
    /*
        2461a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2461ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2461b0:	e5810000 	str	r0, [r1]
        2461b4:	e3a00000 	mov	r0, #0	; 0x0
        2461b8:	e1a0f00e 	mov	pc, lr
    */
}

