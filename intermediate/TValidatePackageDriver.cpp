#include "include/TValidatePackageDriver.h"

/**
 * Symbol: New__22TValidatePackageDriverSFPc
 * Address: 00387ad4
 */
void TValidatePackageDriver::New() {
    /*
        387ad4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        387ad8:	e1a01000 	mov	r1, r0
        387adc:	ebfffff4 	bl	387ab4 <ClassInfo__16TXIPPackageStoreSFv+0x78>
        387ae0:	eb611f2f 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        387ae4:	e1100000 	tst	r0, r0
        387ae8:	e28dd004 	add	sp, sp, #4	; 0x4
        387aec:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        387af0:	01a0f00e 	moveq	pc, lr
        387af4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387af8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387afc:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TValidatePackageDriver::Delete(void)
 * Address: 00387b00
 */
TValidatePackageDriver::Delete(void) {
    /*
        387b00:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387b04:	e92d4001 	stmdb	sp!, {r0, lr}
        387b08:	e28fe004 	add	lr, pc, #4	; 0x4
        387b0c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387b10:	e28cf00c 	add	pc, ip, #12	; 0xc
        387b14:	e8bd4001 	ldmia	sp!, {r0, lr}
        387b18:	ea612b8f 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TValidatePackageDriver::ValidateBegin(unsigned short *, char *, unsigned long, char *)
 * Address: 00387b1c
 */
TValidatePackageDriver::ValidateBegin(unsigned short *, char *, unsigned long, char *) {
    /*
        387b1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387b20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387b24:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TValidatePackageDriver::ValidateNextBlock(char *, unsigned long)
 * Address: 00387b28
 */
TValidatePackageDriver::ValidateNextBlock(char *, unsigned long) {
    /*
        387b28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387b2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387b30:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TValidatePackageDriver::ValidateEnd(long)
 * Address: 00387b34
 */
TValidatePackageDriver::ValidateEnd(long) {
    /*
        387b34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387b38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387b3c:	e28cf018 	add	pc, ip, #24	; 0x18
        387b40:	00000000 	andeq	r0, r0, r0
        387b44:	00000048 	andeq	r0, r0, r8, asr #32
        387b48:	00000054 	andeq	r0, r0, r4, asr r0
        387b4c:	0000005d 	andeq	r0, r0, sp, asr r0
        387b50:	000000fc 	streqd	r0, [r0], -ip
        387b54:	0000012c 	andeq	r0, r0, ip, lsr #2
        387b58:	ea5e2b68 	b	1b12900 <$Sizeof__15TLOPackageStoreSFv>
        387b64:	ea5e2747 	b	1b11888 <TLOPackageStore::$New(void)>
        387b68:	ea5e1afc 	b	1b0e760 <TLOPackageStore::$Delete(void)>
        387b78:	ea000001 	b	387b84 <ClassInfo__15TLOPackageStoreSFv+0x8>
    */
}

