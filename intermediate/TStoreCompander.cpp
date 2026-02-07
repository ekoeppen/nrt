#include "include/TStoreCompander.h"

/**
 * Symbol: New__15TStoreCompanderSFPc
 * Address: 0038735c
 */
void TStoreCompander::New() {
    /*
        38735c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        387360:	e1a01000 	mov	r1, r0
        387364:	ebfffff6 	bl	387344 <TStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc>
        387368:	eb61210d 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38736c:	e1100000 	tst	r0, r0
        387370:	e28dd004 	add	sp, sp, #4	; 0x4
        387374:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        387378:	01a0f00e 	moveq	pc, lr
        38737c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387380:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387384:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TStoreCompander::Delete(void)
 * Address: 00387388
 */
TStoreCompander::Delete(void) {
    /*
        387388:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38738c:	e92d4001 	stmdb	sp!, {r0, lr}
        387390:	e28fe004 	add	lr, pc, #4	; 0x4
        387394:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387398:	e28cf00c 	add	pc, ip, #12	; 0xc
        38739c:	e8bd4001 	ldmia	sp!, {r0, lr}
        3873a0:	ea612d6d 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 003873a4
 */
TStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        3873a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873a8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873ac:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TStoreCompander::BlockSize(void)
 * Address: 003873b0
 */
TStoreCompander::BlockSize(void) {
    /*
        3873b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873b8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TStoreCompander::Read(unsigned long, char *, long, unsigned long)
 * Address: 003873bc
 */
TStoreCompander::Read(unsigned long, char *, long, unsigned long) {
    /*
        3873bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873c4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TStoreCompander::Write(unsigned long, char *, long, unsigned long)
 * Address: 003873c8
 */
TStoreCompander::Write(unsigned long, char *, long, unsigned long) {
    /*
        3873c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873d0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TStoreCompander::DoTransactionAgainst(long, unsigned long)
 * Address: 003873d4
 */
TStoreCompander::DoTransactionAgainst(long, unsigned long) {
    /*
        3873d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873dc:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TStoreCompander::IsReadOnly(void)
 * Address: 003873e0
 */
TStoreCompander::IsReadOnly(void) {
    /*
        3873e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3873e4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3873e8:	e28cf024 	add	pc, ip, #36	; 0x24
        3873ec:	e1a0000f 	mov	r0, pc
        3873f0:	e1a0f00e 	mov	pc, lr
        3873f4:	544c7267 	strplb	r7, [ip], -#615
        3873f8:	4f626a53 	swimi	0x00626a53
        3873fc:	746f7265 	strvcbt	r7, [pc], #265	; 387404 <New__12TLrgObjStoreSFPc>
        387400:	00000000 	andeq	r0, r0, r0
    */
}

