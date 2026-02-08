#include "include/TBankControlRegister.h"

/**
 * Symbol: TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)
 * Address: 0003b298
 */
TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane) {
    /*
         3b298:	e1a0c00d 	mov	ip, sp
         3b29c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3b2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b2a4:	e3710001 	cmn	r1, #1	; 0x1
         3b2a8:	03a01000 	moveq	r1, #0	; 0x0
         3b2ac:	0a00000e 	beq	3b2ec <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x54>
         3b2b0:	ca000006 	bgt	3b2d0 <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x38>
         3b2b4:	e33104ff 	teq	r1, #-16777216	; 0xff000000
         3b2b8:	03a01b01 	moveq	r1, #1024	; 0x400
         3b2bc:	0a00000a 	beq	3b2ec <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x54>
         3b2c0:	e3710801 	cmn	r1, #65536	; 0x10000
         3b2c4:	03a01c02 	moveq	r1, #512	; 0x200
         3b2c8:	0a000007 	beq	3b2ec <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x54>
         3b2cc:	ea00000a 	b	3b2fc <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x64>
         3b2d0:	e3310cff 	teq	r1, #65280	; 0xff00
         3b2d4:	03a01c05 	moveq	r1, #1280	; 0x500
         3b2d8:	0a000003 	beq	3b2ec <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x54>
         3b2dc:	e241ccff 	sub	ip, r1, #65280	; 0xff00
         3b2e0:	e33c00ff 	teq	ip, #255	; 0xff
         3b2e4:	1a000004 	bne	3b2fc <TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)+0x64>
         3b2e8:	e3a01c03 	mov	r1, #768	; 0x300
         3b2ec:	e3a02c07 	mov	r2, #1792	; 0x700
         3b2f0:	eb68b44b 	bl	1a68424 <TBankControlRegister::$SetBankControlRegister(unsigned long, unsigned long)>
         3b2f4:	e3a00000 	mov	r0, #0	; 0x0
         3b2f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         3b2fc:	e3a0003b 	mov	r0, #59	; 0x3b
         3b300:	e2800c29 	add	r0, r0, #10496	; 0x2900
         3b304:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: GetBankControlRegister__20TBankControlRegisterSFv
 * Address: 0003b308
 */
void TBankControlRegister::GetBankControlRegister() {
    /*
         3b308:	e59f0010 	ldr	r0, [pc, #10]	; 3b320 <GetBankControlRegister__20TBankControlRegisterSFv+0x18>
         3b30c:	e5901004 	ldr	r1, [r0, #4]	; fField4
         3b310:	e3310000 	teq	r1, #0	; 0x0
         3b314:	03a01001 	moveq	r1, #1	; 0x1
         3b318:	05801004 	streq	r1, [r0, #4]	; fField4
         3b31c:	e1a0f00e 	mov	pc, lr
         3b320:	0c1008c8 	ldceq	8, cr0, [r0], -#800
    */
}

/**
 * Symbol: TBankControlRegister::SetBankControlRegister(unsigned long, unsigned long)
 * Address: 0003b324
 */
TBankControlRegister::SetBankControlRegister(unsigned long, unsigned long) {
    /*
         3b324:	e3a00a41 	mov	r0, #266240	; 0x41000
         3b328:	e28006f2 	add	r0, r0, #253755392	; 0xf200000
         3b32c:	e5903000 	ldr	r3, [r0]
         3b330:	e1c32002 	bic	r2, r3, r2
         3b334:	e1a02a82 	mov	r2, r2, lsl #21
         3b338:	e1811aa2 	orr	r1, r1, r2, lsr #21
         3b33c:	e5801000 	str	r1, [r0]
         3b340:	e5900000 	ldr	r0, [r0]
         3b344:	e1a0f00e 	mov	pc, lr
    */
}

