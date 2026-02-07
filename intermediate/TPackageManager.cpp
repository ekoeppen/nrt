#include "include/TPackageManager.h"

/**
 * Symbol: TPackageManager::MainConstructor(void)
 * Address: 0015def0
 */
TPackageManager::MainConstructor(void) {
    /*
        15def0:	e1a0c00d 	mov	ip, sp
        15def4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15def8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15defc:	e1a04000 	mov	r4, r0
        15df00:	e3a06000 	mov	r6, #0	; 0x0
        15df04:	e5806078 	str	r6, [r0, #120]	; fField120
        15df08:	e580607c 	str	r6, [r0, #124]
        15df0c:	e5806074 	str	r6, [r0, #116]	; fField116
        15df10:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        15df14:	e28d001c 	add	r0, sp, #28	; 0x1c
        15df18:	eb664a3f 	bl	1af081c <TSingleQContainer::$__ct(void)>
        15df1c:	e1a00004 	mov	r0, r4
        15df20:	eb693df5 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        15df24:	eb6a0c70 	bl	1be10ec <$GetHeap>
        15df28:	e28d1008 	add	r1, sp, #8	; 0x8
        15df2c:	e5840078 	str	r0, [r4, #120]	; fField120
        15df30:	e59f505c 	ldr	r5, [pc, #5c]	; 15df94 <TPackageManager::MainConstructor(void)+0xa4>
        15df34:	e1a00005 	mov	r0, r5
        15df38:	eb08b2d2 	bl	38aa88 <C$$dtorvec$$Limit+0x114>
        15df3c:	e3300000 	teq	r0, #0	; 0x0
        15df40:	1a00002e 	bne	15e000 <TPackageManager::MainConstructor(void)+0x110>
        15df44:	e58d6018 	str	r6, [sp, #24]
        15df48:	e3a02001 	mov	r2, #1	; 0x1
        15df4c:	e59d000c 	ldr	r0, [sp, #12]
        15df50:	e59f1040 	ldr	r1, [pc, #40]	; 15df98 <TPackageManager::MainConstructor(void)+0xa8>
        15df54:	eb6a1495 	bl	1be31b0 <$ZapHeap>
        15df58:	e59d0028 	ldr	r0, [sp, #40]
        15df5c:	e3c00080 	bic	r0, r0, #128	; 0x80
        15df60:	e58d0028 	str	r0, [sp, #40]
        15df64:	e28d1008 	add	r1, sp, #8	; 0x8
        15df68:	e1a00005 	mov	r0, r5
        15df6c:	eb08b30a 	bl	38ab9c <C$$dtorvec$$Limit+0x228>
        15df70:	e59d000c 	ldr	r0, [sp, #12]
        15df74:	eb6a0c4b 	bl	1be10a8 <$DestroyVMHeap>
        15df78:	e1a0100d 	mov	r1, sp
        15df7c:	e59f0018 	ldr	r0, [pc, #18]	; 15df9c <TPackageManager::MainConstructor(void)+0xac>
        15df80:	eb08b2bc 	bl	38aa78 <C$$dtorvec$$Limit+0x104>
        15df84:	e1b05000 	movs	r5, r0
        15df88:	0a000004 	beq	15dfa0 <TPackageManager::MainConstructor(void)+0xb0>
        15df8c:	e1a00005 	mov	r0, r5
        15df90:	ea00001a 	b	15e000 <TPackageManager::MainConstructor(void)+0x110>
        15df94:	70726f74 	rsbvcs	r6, r2, r4, ror pc
        15df98:	2d3e3c2d 	ldccs	12, cr3, [lr, -#180]!
        15df9c:	6b73746b 	blvs	1e3b150 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x22a8f8>
        15dfa0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        15dfa4:	e5840074 	str	r0, [r4, #116]	; fField116
        15dfa8:	e3a00000 	mov	r0, #0	; 0x0
        15dfac:	eb664a21 	bl	1af0838 <TPackageEventHandler::$__ct(void)>
        15dfb0:	e5a40070 	str	r0, [r4, #112]!	; fField112
        15dfb4:	e3300000 	teq	r0, #0	; 0x0
        15dfb8:	0a00000f 	beq	15dffc <TPackageManager::MainConstructor(void)+0x10c>
        15dfbc:	e59f2040 	ldr	r2, [pc, #40]	; 15e004 <TPackageManager::MainConstructor(void)+0x114>
        15dfc0:	e59f1040 	ldr	r1, [pc, #40]	; 15e008 <TPackageManager::MainConstructor(void)+0x118>
        15dfc4:	eb6a2d39 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        15dfc8:	e3a0000c 	mov	r0, #12	; 0xc
        15dfcc:	eb69c1d9 	bl	1bce738 <$__nw(unsigned int)>
        15dfd0:	e1b04000 	movs	r4, r0
        15dfd4:	0a000004 	beq	15dfec <TPackageManager::MainConstructor(void)+0xfc>
        15dfd8:	e5c46004 	strb	r6, [r4, #4]	; fField4
        15dfdc:	e5846000 	str	r6, [r4]
        15dfe0:	e2841008 	add	r1, r4, #8	; 0x8
        15dfe4:	e1a00004 	mov	r0, r4
        15dfe8:	eb69da8d 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        15dfec:	e59f0018 	ldr	r0, [pc, #18]	; 15e00c <TPackageManager::MainConstructor(void)+0x11c>
        15dff0:	e5804000 	str	r4, [r0]
        15dff4:	e1b00004 	movs	r0, r4
        15dff8:	1a000004 	bne	15e010 <TPackageManager::MainConstructor(void)+0x120>
        15dffc:	eb6a1047 	bl	1be2120 <$MemError>
        15e000:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15e004:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        15e008:	70636b6d 	rsbvc	r6, r3, sp, ror #22
        15e00c:	0c1016dc 	ldceq	6, cr1, [r0], -#880
        15e010:	eb69dea8 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        15e014:	eaffffdc 	b	15df8c <TPackageManager::MainConstructor(void)+0x9c>
    */
}

/**
 * Symbol: TPackageManager::MainDestructor(void)
 * Address: 0015e018
 */
TPackageManager::MainDestructor(void) {
    /*
        15e018:	e1a0c00d 	mov	ip, sp
        15e01c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15e020:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e024:	e1a04000 	mov	r4, r0
        15e028:	e5900070 	ldr	r0, [r0, #112]	; fField112
        15e02c:	e3300000 	teq	r0, #0	; 0x0
        15e030:	0a000002 	beq	15e040 <TPackageManager::MainDestructor(void)+0x28>
        15e034:	e3a01001 	mov	r1, #1	; 0x1
        15e038:	e1a0e00f 	mov	lr, pc
        15e03c:	e590f000 	ldr	pc, [r0]
        15e040:	e59f5020 	ldr	r5, [pc, #20]	; 15e068 <TPackageManager::MainDestructor(void)+0x50>
        15e044:	e5950000 	ldr	r0, [r5]
        15e048:	e3300000 	teq	r0, #0	; 0x0
        15e04c:	13a01001 	movne	r1, #1	; 0x1
        15e050:	1b69c1b2 	blne	1bce720 <TULockingSemaphore::$__dt(void)>
        15e054:	e3a00000 	mov	r0, #0	; 0x0
        15e058:	e5850000 	str	r0, [r5]
        15e05c:	e1a00004 	mov	r0, r4
        15e060:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        15e064:	ea6941a6 	b	1bae704 <TAppWorld::$MainDestructor(void)>
        15e068:	0c1016dc 	ldceq	6, cr1, [r0], -#880
    */
}

/**
 * Symbol: TPackageManager::GetSizeOf(void)
 * Address: 0015e074
 */
TPackageManager::GetSizeOf(void) {
    /*
        15e074:	e3a00080 	mov	r0, #128	; 0x80
        15e078:	e1a0f00e 	mov	pc, lr
    */
}

