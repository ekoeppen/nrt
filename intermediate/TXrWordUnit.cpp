#include "include/TXrWordUnit.h"

/**
 * Symbol: Make__11TXrWordUnitSFP7TDomainUlP6TArray
 * Address: 0024fb04
 */
void TXrWordUnit::Make() {
    /*
        24fb04:	e1a0c00d 	mov	ip, sp
        24fb08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24fb0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fb10:	e1a06000 	mov	r6, r0
        24fb14:	e1a05001 	mov	r5, r1
        24fb18:	e1a04002 	mov	r4, r2
        24fb1c:	e3a00064 	mov	r0, #100	; 0x64
        24fb20:	eb65fb04 	bl	1bce738 <$__nw(unsigned int)>
        24fb24:	e1b07000 	movs	r7, r0
        24fb28:	0a000003 	beq	24fb3c <Make__11TXrWordUnitSFP7TDomainUlP6TArray+0x38>
        24fb2c:	e1a00007 	mov	r0, r7
        24fb30:	eb642c85 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        24fb34:	e59f003c 	ldr	r0, [pc, #3c]	; 24fb78 <Make__11TXrWordUnitSFP7TDomainUlP6TArray+0x74>
        24fb38:	e5870000 	str	r0, [r7]
        24fb3c:	e3370000 	teq	r7, #0	; 0x0
        24fb40:	0a00000a 	beq	24fb70 <Make__11TXrWordUnitSFP7TDomainUlP6TArray+0x6c>
        24fb44:	e1a03004 	mov	r3, r4
        24fb48:	e1a02005 	mov	r2, r5
        24fb4c:	e1a01006 	mov	r1, r6
        24fb50:	e1a00007 	mov	r0, r7
        24fb54:	eb63308c 	bl	1b1bd8c <TXrWordUnit::$IXrWordUnit(TDomain *, unsigned long, TArray *)>
        24fb58:	e3300000 	teq	r0, #0	; 0x0
        24fb5c:	0a000003 	beq	24fb70 <Make__11TXrWordUnitSFP7TDomainUlP6TArray+0x6c>
        24fb60:	e1a00007 	mov	r0, r7
        24fb64:	e1a0e00f 	mov	lr, pc
        24fb68:	e597f000 	ldr	pc, [r7]
        24fb6c:	e3a07000 	mov	r7, #0	; 0x0
        24fb70:	e1a00007 	mov	r0, r7
        24fb74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24fb78:	0001b830 	andeq	fp, r1, r0, lsr r8
    */
}

/**
 * Symbol: TXrWordUnit::IXrWordUnit(TDomain *, unsigned long, TArray *)
 * Address: 0024fb7c
 */
TXrWordUnit::IXrWordUnit(TDomain *, unsigned long, TArray *) {
    /*
        24fb7c:	e1a0c00d 	mov	ip, sp
        24fb80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24fb84:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fb88:	e1a04000 	mov	r4, r0
        24fb8c:	e1a00003 	mov	r0, r3
        24fb90:	e3a03010 	mov	r3, #16	; 0x10
        24fb94:	e92d0008 	stmdb	sp!, {r3}
        24fb98:	e1a03000 	mov	r3, r0
        24fb9c:	e1a00004 	mov	r0, r4
        24fba0:	eb6472a0 	bl	1b6c628 <TStdWordUnit::$IStdWordUnit(TDomain *, unsigned long, TArray *, unsigned long)>
        24fba4:	e3a01000 	mov	r1, #0	; 0x0
        24fba8:	e5a41060 	str	r1, [r4, #96]!	; fField96
        24fbac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordUnit::IDispose(void)
 * Address: 0024fbb0
 */
TXrWordUnit::IDispose(void) {
    /*
        24fbb0:	e1a0c00d 	mov	ip, sp
        24fbb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24fbb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fbbc:	e1a04000 	mov	r4, r0
        24fbc0:	e5900060 	ldr	r0, [r0, #96]	; fField96
        24fbc4:	e3300000 	teq	r0, #0	; 0x0
        24fbc8:	0a000002 	beq	24fbd8 <TXrWordUnit::IDispose(void)+0x28>
        24fbcc:	eb607ef9 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        24fbd0:	e3a00000 	mov	r0, #0	; 0x0
        24fbd4:	e5840060 	str	r0, [r4, #96]	; fField96
        24fbd8:	e1a00004 	mov	r0, r4
        24fbdc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        24fbe0:	ea644100 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TXrWordUnit::GetWordBase(FPoint *, FPoint *, unsigned long)
 * Address: 0024fbe4
 */
TXrWordUnit::GetWordBase(FPoint *, FPoint *, unsigned long) {
    /*
        24fbe4:	e1a0c00d 	mov	ip, sp
        24fbe8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24fbec:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fbf0:	e1a04000 	mov	r4, r0
        24fbf4:	e1a06001 	mov	r6, r1
        24fbf8:	e1a05002 	mov	r5, r2
        24fbfc:	e59f7050 	ldr	r7, [pc, #50]	; 24fc54 <TXrWordUnit::GetWordBase(FPoint *, FPoint *, unsigned long)+0x70>
        24fc00:	e5971004 	ldr	r1, [r7, #4]
        24fc04:	e5900044 	ldr	r0, [r0, #68]
        24fc08:	e1a00800 	mov	r0, r0, lsl #16
        24fc0c:	eb66452b 	bl	1be10c0 <$FixedDivide>
        24fc10:	e5860004 	str	r0, [r6, #4]
        24fc14:	e594003c 	ldr	r0, [r4, #60]	; fField60
        24fc18:	e1a00800 	mov	r0, r0, lsl #16
        24fc1c:	e5971000 	ldr	r1, [r7]
        24fc20:	eb664526 	bl	1be10c0 <$FixedDivide>
        24fc24:	e5860000 	str	r0, [r6]
        24fc28:	e5971004 	ldr	r1, [r7, #4]
        24fc2c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        24fc30:	e1a00800 	mov	r0, r0, lsl #16
        24fc34:	eb664521 	bl	1be10c0 <$FixedDivide>
        24fc38:	e5850004 	str	r0, [r5, #4]
        24fc3c:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
        24fc40:	e1a00800 	mov	r0, r0, lsl #16
        24fc44:	e5971000 	ldr	r1, [r7]
        24fc48:	eb66451c 	bl	1be10c0 <$FixedDivide>
        24fc4c:	e5850000 	str	r0, [r5]
        24fc50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24fc54:	0c101894 	ldceq	8, cr1, [r0], -#592
    */
}

/**
 * Symbol: TXrWordUnit::GetWordSlant(unsigned long)
 * Address: 0024fc58
 */
TXrWordUnit::GetWordSlant(unsigned long) {
    /*
        24fc58:	e5900054 	ldr	r0, [r0, #84]	; fField84
        24fc5c:	e1a00800 	mov	r0, r0, lsl #16
        24fc60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXrWordUnit::GetWordSize(unsigned long)
 * Address: 0024fc64
 */
TXrWordUnit::GetWordSize(unsigned long) {
    /*
        24fc64:	e1a0c00d 	mov	ip, sp
        24fc68:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24fc6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fc70:	e1a04000 	mov	r4, r0
        24fc74:	e59f505c 	ldr	r5, [pc, #5c]	; 24fcd8 <TXrWordUnit::GetWordSize(unsigned long)+0x74>
        24fc78:	e5951004 	ldr	r1, [r5, #4]
        24fc7c:	e5900044 	ldr	r0, [r0, #68]
        24fc80:	e1a00800 	mov	r0, r0, lsl #16
        24fc84:	eb66450d 	bl	1be10c0 <$FixedDivide>
        24fc88:	e1a07000 	mov	r7, r0
        24fc8c:	e5951004 	ldr	r1, [r5, #4]
        24fc90:	e5940048 	ldr	r0, [r4, #72]	; fField72
        24fc94:	e1a00800 	mov	r0, r0, lsl #16
        24fc98:	eb664508 	bl	1be10c0 <$FixedDivide>
        24fc9c:	e1a06000 	mov	r6, r0
        24fca0:	e5951004 	ldr	r1, [r5, #4]
        24fca4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24fca8:	e1a00800 	mov	r0, r0, lsl #16
        24fcac:	eb664503 	bl	1be10c0 <$FixedDivide>
        24fcb0:	e1a08000 	mov	r8, r0
        24fcb4:	e5b51004 	ldr	r1, [r5, #4]!
        24fcb8:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
        24fcbc:	e1a00800 	mov	r0, r0, lsl #16
        24fcc0:	eb6644fe 	bl	1be10c0 <$FixedDivide>
        24fcc4:	e0471008 	sub	r1, r7, r8
        24fcc8:	e0460000 	sub	r0, r6, r0
        24fccc:	e0810000 	add	r0, r1, r0
        24fcd0:	e1a000c0 	mov	r0, r0, asr #1
        24fcd4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24fcd8:	0c101894 	ldceq	8, cr1, [r0], -#592
    */
}

/**
 * Symbol: TXrWordUnit::GetTrainingData(long)
 * Address: 0024fcdc
 */
TXrWordUnit::GetTrainingData(long) {
    /*
        24fcdc:	e1a0c00d 	mov	ip, sp
        24fce0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24fce4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24fce8:	e5900060 	ldr	r0, [r0, #96]	; fField96
        24fcec:	e3300000 	teq	r0, #0	; 0x0
        24fcf0:	03a00000 	moveq	r0, #0	; 0x0
        24fcf4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        24fcf8:	e1a05000 	mov	r5, r0
        24fcfc:	eb6644f9 	bl	1be10e8 <$GetHandleSize>
        24fd00:	e1a06000 	mov	r6, r0
        24fd04:	eb664908 	bl	1be212c <$NewHandle>
        24fd08:	e1b04000 	movs	r4, r0
        24fd0c:	0a00000b 	beq	24fd40 <TXrWordUnit::GetTrainingData(long)+0x64>
        24fd10:	e1a00005 	mov	r0, r5
        24fd14:	eb647248 	bl	1b6c63c <$LockHandle(char **)>
        24fd18:	e1a00004 	mov	r0, r4
        24fd1c:	eb647246 	bl	1b6c63c <$LockHandle(char **)>
        24fd20:	e1a02006 	mov	r2, r6
        24fd24:	e5941000 	ldr	r1, [r4]
        24fd28:	e5950000 	ldr	r0, [r5]
        24fd2c:	eb663c88 	bl	1bdef54 <$BlockMove>
        24fd30:	e1a00005 	mov	r0, r5
        24fd34:	eb647a75 	bl	1b6e710 <$UnlockHandle(char **)>
        24fd38:	e1a00004 	mov	r0, r4
        24fd3c:	eb647a73 	bl	1b6e710 <$UnlockHandle(char **)>
        24fd40:	e1a00004 	mov	r0, r4
        24fd44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordUnit::DisposeTrainingData(char **)
 * Address: 0024fd48
 */
TXrWordUnit::DisposeTrainingData(char **) {
    /*
        24fd48:	e3310000 	teq	r1, #0	; 0x0
        24fd4c:	11a00001 	movne	r0, r1
        24fd50:	1a646e10 	bne	1b6b598 <$DeleteHandle(char **)>
        24fd54:	e1a0f00e 	mov	pc, lr
    */
}

