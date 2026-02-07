#include "include/TLrgObjStore.h"

/**
 * Symbol: New__12TLrgObjStoreSFPc
 * Address: 00387404
 */
void TLrgObjStore::New() {
    /*
        387404:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        387408:	e1a01000 	mov	r1, r0
        38740c:	ebfffff6 	bl	3873ec <TStoreCompander::IsReadOnly(void)+0xc>
        387410:	eb6120e3 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        387414:	e1100000 	tst	r0, r0
        387418:	e28dd004 	add	sp, sp, #4	; 0x4
        38741c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        387420:	01a0f00e 	moveq	pc, lr
        387424:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387428:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38742c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TLrgObjStore::Delete(void)
 * Address: 00387430
 */
TLrgObjStore::Delete(void) {
    /*
        387430:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387434:	e92d4001 	stmdb	sp!, {r0, lr}
        387438:	e28fe004 	add	lr, pc, #4	; 0x4
        38743c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387440:	e28cf00c 	add	pc, ip, #12	; 0xc
        387444:	e8bd4001 	ldmia	sp!, {r0, lr}
        387448:	ea612d43 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TLrgObjStore::Init(void)
 * Address: 0038744c
 */
TLrgObjStore::Init(void) {
    /*
        38744c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387450:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387454:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TLrgObjStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 00387458
 */
TLrgObjStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        387458:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38745c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387460:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TLrgObjStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 00387464
 */
TLrgObjStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        387464:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387468:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38746c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TLrgObjStore::DeleteObject(TStore *, unsigned long)
 * Address: 00387470
 */
TLrgObjStore::DeleteObject(TStore *, unsigned long) {
    /*
        387470:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387474:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387478:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TLrgObjStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)
 * Address: 0038747c
 */
TLrgObjStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *) {
    /*
        38747c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387480:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387484:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TLrgObjStore::Resize(TStore *, unsigned long, unsigned long)
 * Address: 00387488
 */
TLrgObjStore::Resize(TStore *, unsigned long, unsigned long) {
    /*
        387488:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38748c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387490:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TLrgObjStore::StorageSize(TStore *, unsigned long)
 * Address: 00387494
 */
TLrgObjStore::StorageSize(TStore *, unsigned long) {
    /*
        387494:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387498:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38749c:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TLrgObjStore::SizeOfStream(TStore *, unsigned long, unsigned char)
 * Address: 003874a0
 */
TLrgObjStore::SizeOfStream(TStore *, unsigned long, unsigned char) {
    /*
        3874a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3874a4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3874a8:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TLrgObjStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)
 * Address: 003874ac
 */
TLrgObjStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *) {
    /*
        3874ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3874b0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3874b4:	e28cf030 	add	pc, ip, #48	; 0x30
        3874b8:	00000000 	andeq	r0, r0, r0
        3874bc:	00000048 	andeq	r0, r0, r8, asr #32
        3874c0:	0000005d 	andeq	r0, r0, sp, asr r0
        3874c4:	0000006c 	andeq	r0, r0, ip, rrx
        3874c8:	0000006c 	andeq	r0, r0, ip, rrx
        3874cc:	00000080 	andeq	r0, r0, r0, lsl #1
        3874d0:	ea5dffaa 	b	1b07380 <$Sizeof__24TSimpleStoreDecompressorSFv>
        3874dc:	ea5de2c4 	b	1affff4 <TSimpleStoreDecompressor::$New(void)>
        3874e0:	ea5dbd8b 	b	1af6b14 <TSimpleStoreDecompressor::$Delete(void)>
        3874f0:	ea000001 	b	3874fc <ClassInfo__24TSimpleStoreDecompressorSFv+0x8>
    */
}

