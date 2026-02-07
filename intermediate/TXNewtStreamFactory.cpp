#include "include/TXNewtStreamFactory.h"

/**
 * Symbol: TXNewtStreamFactory::Create(TXStream **, long)
 * Address: 0023efc8
 */
TXNewtStreamFactory::Create(TXStream **, long) {
    /*
        23efc8:	e1a0c00d 	mov	ip, sp
        23efcc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23efd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23efd4:	e1a05001 	mov	r5, r1
        23efd8:	e1a04002 	mov	r4, r2
        23efdc:	e3a06000 	mov	r6, #0	; 0x0
        23efe0:	e3a08000 	mov	r8, #0	; 0x0
        23efe4:	e52d806c 	str	r8, [sp, -#108]!
        23efe8:	e28d0008 	add	r0, sp, #8	; 0x8
        23efec:	eb65ce60 	bl	1bb2974 <$setjmp>
        23eff0:	e3300000 	teq	r0, #0	; 0x0
        23eff4:	e1a0000d 	mov	r0, sp
        23eff8:	1a00004d 	bne	23f134 <TXNewtStreamFactory::Create(TXStream **, long)+0x16c>
        23effc:	eb66841e 	bl	1be007c <$AddExceptionHandler>
        23f000:	e3540a01 	cmp	r4, #4096	; 0x1000
        23f004:	ba000046 	blt	23f124 <TXNewtStreamFactory::Create(TXStream **, long)+0x15c>
        23f008:	e3a00033 	mov	r0, #51	; 0x33
        23f00c:	eb62147c 	bl	1ac4204 <$BusyBoxSend(long)>
        23f010:	e24dd008 	sub	sp, sp, #8	; 0x8
        23f014:	eb661494 	bl	1bc426c <$GetStores(void)>
        23f018:	eb660c4b 	bl	1bc214c <$AllocateRefHandle(long)>
        23f01c:	e1a07000 	mov	r7, r0
        23f020:	e5900000 	ldr	r0, [r0]
        23f024:	e1a01008 	mov	r1, r8
        23f028:	eb661489 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        23f02c:	eb660c46 	bl	1bc214c <$AllocateRefHandle(long)>
        23f030:	e58d0004 	str	r0, [sp, #4]
        23f034:	e1a00007 	mov	r0, r7
        23f038:	eb66105f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f03c:	e28f0f32 	add	r0, pc, #200	; 0xc8
        23f040:	eb6618a2 	bl	1bc52d0 <$MakeString(char const *)>
        23f044:	eb660c40 	bl	1bc214c <$AllocateRefHandle(long)>
        23f048:	e58d0000 	str	r0, [sp]
        23f04c:	e2440001 	sub	r0, r4, #1	; 0x1
        23f050:	e2900b01 	adds	r0, r0, #1024	; 0x400
        23f054:	42400001 	submi	r0, r0, #1	; 0x1
        23f058:	42800b01 	addmi	r0, r0, #1024	; 0x400
        23f05c:	e1a00540 	mov	r0, r0, asr #10
        23f060:	e1a00500 	mov	r0, r0, lsl #10
        23f064:	e2804b02 	add	r4, r0, #2048	; 0x800
        23f068:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23f06c:	e3a00002 	mov	r0, #2	; 0x2
        23f070:	eb660c35 	bl	1bc214c <$AllocateRefHandle(long)>
        23f074:	e58d0000 	str	r0, [sp]
        23f078:	e1a0300d 	mov	r3, sp
        23f07c:	e92d0008 	stmdb	sp!, {r3}
        23f080:	e1a00104 	mov	r0, r4, lsl #2
        23f084:	eb660c30 	bl	1bc214c <$AllocateRefHandle(long)>
        23f088:	e58d0008 	str	r0, [sp, #8]
        23f08c:	e28d2008 	add	r2, sp, #8	; 0x8
        23f090:	e28d3010 	add	r3, sp, #16	; 0x10
        23f094:	e59f1084 	ldr	r1, [pc, #84]	; 23f120 <TXNewtStreamFactory::Create(TXStream **, long)+0x158>
        23f098:	e28d0014 	add	r0, sp, #20	; 0x14
        23f09c:	eb601884 	bl	1a452b4 <$FLBAllocCompressed>
        23f0a0:	e28dd004 	add	sp, sp, #4	; 0x4
        23f0a4:	eb660c28 	bl	1bc214c <$AllocateRefHandle(long)>
        23f0a8:	e58d0008 	str	r0, [sp, #8]
        23f0ac:	e59d0000 	ldr	r0, [sp]
        23f0b0:	eb661041 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f0b4:	e59d0004 	ldr	r0, [sp, #4]
        23f0b8:	eb66103f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f0bc:	e59d0008 	ldr	r0, [sp, #8]
        23f0c0:	e5900000 	ldr	r0, [r0]
        23f0c4:	eb66187a 	bl	1bc52b4 <$LockRef(long)>
        23f0c8:	e3a03000 	mov	r3, #0	; 0x0
        23f0cc:	e92d0008 	stmdb	sp!, {r3}
        23f0d0:	e28d100c 	add	r1, sp, #12	; 0xc
        23f0d4:	e3a03b01 	mov	r3, #1024	; 0x400
        23f0d8:	e3a02000 	mov	r2, #0	; 0x0
        23f0dc:	e3a00000 	mov	r0, #0	; 0x0
        23f0e0:	eb654e0f 	bl	1b92924 <TXBinaryStream::$__ct(RefVar const &, unsigned char, int, unsigned char)>
        23f0e4:	e28dd004 	add	sp, sp, #4	; 0x4
        23f0e8:	e5850000 	str	r0, [r5]
        23f0ec:	e59d0008 	ldr	r0, [sp, #8]
        23f0f0:	eb661031 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f0f4:	e5bd000c 	ldr	r0, [sp, #12]!
        23f0f8:	eb66102f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f0fc:	e59d0004 	ldr	r0, [sp, #4]
        23f100:	eb66102d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f104:	e28dd008 	add	sp, sp, #8	; 0x8
        23f108:	ea00000c 	b	23f140 <TXNewtStreamFactory::Create(TXStream **, long)+0x178>
        23f10c:	544c5a53 	strplb	r5, [ip], -#2643
        23f110:	746f7265 	strvcbt	r7, [pc], #265	; 23f118 <TXNewtStreamFactory::Create(TXStream **, long)+0x150>
        23f114:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        23f118:	616e6465 	cmnvs	lr, r5, ror #8
        23f11c:	72000000 	andvc	r0, r0, #0	; 0x0
        23f120:	006820a0 	rsbeq	r2, r8, r0, lsr #1
        23f124:	e3a00000 	mov	r0, #0	; 0x0
        23f128:	eb656af0 	bl	1b99cf0 <TXHandleStream::$__ct(void)>
        23f12c:	e5850000 	str	r0, [r5]
        23f130:	ea000002 	b	23f140 <TXNewtStreamFactory::Create(TXStream **, long)+0x178>
        23f134:	e2800060 	add	r0, r0, #96	; 0x60
        23f138:	eb62944f 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23f13c:	e1a06000 	mov	r6, r0
        23f140:	e1a0000d 	mov	r0, sp
        23f144:	eb6687db 	bl	1be10b8 <$ExitHandler>
        23f148:	e28dd06c 	add	sp, sp, #108	; 0x6c
        23f14c:	e3360000 	teq	r6, #0	; 0x0
        23f150:	05950000 	ldreq	r0, [r5]
        23f154:	03300000 	teqeq	r0, #0	; 0x0
        23f158:	03a060e9 	moveq	r6, #233	; 0xe9
        23f15c:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        23f160:	e1a00006 	mov	r0, r6
        23f164:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

