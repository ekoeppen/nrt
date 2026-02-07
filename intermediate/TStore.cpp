#include "DDKIncludes/Frames/objects.h"

/**
 * Symbol: New__6TStoreSFPc
 * Address: 00386a08
 */
void TStore::New() {
    /*
        386a08:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        386a0c:	e1a01000 	mov	r1, r0
        386a10:	ebfffff8 	bl	3869f8 <ClassInfo__9TFlashAMDSFv+0xc8>
        386a14:	eb612362 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        386a18:	e1100000 	tst	r0, r0
        386a1c:	e28dd004 	add	sp, sp, #4	; 0x4
        386a20:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        386a24:	01a0f00e 	moveq	pc, lr
        386a28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a30:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TStore::Delete(void)
 * Address: 00386a34
 */
TStore::Delete(void) {
    /*
        386a34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a38:	e92d4001 	stmdb	sp!, {r0, lr}
        386a3c:	e28fe004 	add	lr, pc, #4	; 0x4
        386a40:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a44:	e28cf00c 	add	pc, ip, #12	; 0xc
        386a48:	e8bd4001 	ldmia	sp!, {r0, lr}
        386a4c:	ea612fc2 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)
 * Address: 00386a50
 */
TStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *) {
    /*
        386a50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a54:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a58:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TStore::NeedsFormat(unsigned char *)
 * Address: 00386a5c
 */
TStore::NeedsFormat(unsigned char *) {
    /*
        386a5c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a60:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a64:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TStore::Format(void)
 * Address: 00386a68
 */
TStore::Format(void) {
    /*
        386a68:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a70:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TStore::GetRootId(unsigned long *)
 * Address: 00386a74
 */
TStore::GetRootId(unsigned long *) {
    /*
        386a74:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a7c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TStore::NewObject(long, unsigned long *)
 * Address: 00386a80
 */
TStore::NewObject(long, unsigned long *) {
    /*
        386a80:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a84:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a88:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TStore::EraseObject(unsigned long)
 * Address: 00386a8c
 */
TStore::EraseObject(unsigned long) {
    /*
        386a8c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a90:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386a94:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TStore::DeleteObject(unsigned long)
 * Address: 00386a98
 */
TStore::DeleteObject(unsigned long) {
    /*
        386a98:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386a9c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386aa0:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TStore::SetObjectSize(unsigned long, long)
 * Address: 00386aa4
 */
TStore::SetObjectSize(unsigned long, long) {
    /*
        386aa4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386aa8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386aac:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TStore::GetObjectSize(unsigned long, long *)
 * Address: 00386ab0
 */
TStore::GetObjectSize(unsigned long, long *) {
    /*
        386ab0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386ab4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386ab8:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TStore::Write(unsigned long, long, char *, long)
 * Address: 00386abc
 */
TStore::Write(unsigned long, long, char *, long) {
    /*
        386abc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386ac0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386ac4:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TStore::Read(unsigned long, long, char *, long)
 * Address: 00386ac8
 */
TStore::Read(unsigned long, long, char *, long) {
    /*
        386ac8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386acc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386ad0:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TStore::GetStoreSizes(long *, long *)
 * Address: 00386ad4
 */
TStore::GetStoreSizes(long *, long *) {
    /*
        386ad4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386ad8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386adc:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TStore::IsReadOnly(unsigned char *)
 * Address: 00386ae0
 */
TStore::IsReadOnly(unsigned char *) {
    /*
        386ae0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386ae4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386ae8:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TStore::LockStore(void)
 * Address: 00386aec
 */
TStore::LockStore(void) {
    /*
        386aec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386af0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386af4:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TStore::UnlockStore(void)
 * Address: 00386af8
 */
TStore::UnlockStore(void) {
    /*
        386af8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386afc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b00:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TStore::Abort(void)
 * Address: 00386b04
 */
TStore::Abort(void) {
    /*
        386b04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b0c:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TStore::Idle(unsigned char *, unsigned char *)
 * Address: 00386b10
 */
TStore::Idle(unsigned char *, unsigned char *) {
    /*
        386b10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b18:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TStore::NextObject(unsigned long, unsigned long *)
 * Address: 00386b1c
 */
TStore::NextObject(unsigned long, unsigned long *) {
    /*
        386b1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b24:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TStore::CheckIntegrity(unsigned long *)
 * Address: 00386b28
 */
TStore::CheckIntegrity(unsigned long *) {
    /*
        386b28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b30:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: TStore::SetBuddy(TStore *)
 * Address: 00386b34
 */
TStore::SetBuddy(TStore *) {
    /*
        386b34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b3c:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: TStore::OwnsObject(unsigned long)
 * Address: 00386b40
 */
TStore::OwnsObject(unsigned long) {
    /*
        386b40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b48:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: TStore::Address(unsigned long)
 * Address: 00386b4c
 */
TStore::Address(unsigned long) {
    /*
        386b4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b54:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: TStore::StoreKind(void)
 * Address: 00386b58
 */
TStore::StoreKind(void) {
    /*
        386b58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b5c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b60:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: TStore::SetStore(TStore *, unsigned long)
 * Address: 00386b64
 */
TStore::SetStore(TStore *, unsigned long) {
    /*
        386b64:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b68:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b6c:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: TStore::IsSameStore(void *, unsigned long)
 * Address: 00386b70
 */
TStore::IsSameStore(void *, unsigned long) {
    /*
        386b70:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b74:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b78:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: TStore::IsLocked(void)
 * Address: 00386b7c
 */
TStore::IsLocked(void) {
    /*
        386b7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b80:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b84:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: TStore::VppOff(void)
 * Address: 00386b88
 */
TStore::VppOff(void) {
    /*
        386b88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b90:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: TStore::Sleep(void)
 * Address: 00386b94
 */
TStore::Sleep(void) {
    /*
        386b94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386b98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386b9c:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: TStore::IsROM(void)
 * Address: 00386ba0
 */
TStore::IsROM(void) {
    /*
        386ba0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386ba4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386ba8:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: TStore::NewWithinTransaction(long, unsigned long *)
 * Address: 00386bac
 */
TStore::NewWithinTransaction(long, unsigned long *) {
    /*
        386bac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bb4:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: TStore::StartTransactionAgainst(unsigned long)
 * Address: 00386bb8
 */
TStore::StartTransactionAgainst(unsigned long) {
    /*
        386bb8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bbc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bc0:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: TStore::SeparatelyAbort(unsigned long)
 * Address: 00386bc4
 */
TStore::SeparatelyAbort(unsigned long) {
    /*
        386bc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bc8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bcc:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: TStore::AddToCurrentTransaction(unsigned long)
 * Address: 00386bd0
 */
TStore::AddToCurrentTransaction(unsigned long) {
    /*
        386bd0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bd4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bd8:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: TStore::InSeparateTransaction(unsigned long)
 * Address: 00386bdc
 */
TStore::InSeparateTransaction(unsigned long) {
    /*
        386bdc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386be0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386be4:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: TStore::LockReadOnly(void)
 * Address: 00386be8
 */
TStore::LockReadOnly(void) {
    /*
        386be8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bf0:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: TStore::UnlockReadOnly(unsigned char)
 * Address: 00386bf4
 */
TStore::UnlockReadOnly(unsigned char) {
    /*
        386bf4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386bf8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386bfc:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: TStore::InTransaction(void)
 * Address: 00386c00
 */
TStore::InTransaction(void) {
    /*
        386c00:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c04:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c08:	e28cf0a0 	add	pc, ip, #160	; 0xa0
    */
}

/**
 * Symbol: TStore::NewObject(char *, long, unsigned long *)
 * Address: 00386c0c
 */
TStore::NewObject(char *, long, unsigned long *) {
    /*
        386c0c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c10:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c14:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TStore::ReplaceObject(unsigned long, char *, long)
 * Address: 00386c18
 */
TStore::ReplaceObject(unsigned long, char *, long) {
    /*
        386c18:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c1c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c20:	e28cf0a8 	add	pc, ip, #168	; 0xa8
    */
}

/**
 * Symbol: TStore::CalcXIPObjectSize(long, long, long *)
 * Address: 00386c24
 */
TStore::CalcXIPObjectSize(long, long, long *) {
    /*
        386c24:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c28:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c2c:	e28cf0ac 	add	pc, ip, #172	; 0xac
    */
}

/**
 * Symbol: TStore::NewXIPObject(long, unsigned long *)
 * Address: 00386c30
 */
TStore::NewXIPObject(long, unsigned long *) {
    /*
        386c30:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c34:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c38:	e28cf0b0 	add	pc, ip, #176	; 0xb0
    */
}

/**
 * Symbol: TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 00386c3c
 */
TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
        386c3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386c40:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386c44:	e28cf0b4 	add	pc, ip, #180	; 0xb4
        386c48:	e590000c 	ldr	r0, [r0, #12]	; fField12
        386c4c:	e1a0100c 	mov	r1, ip
        386c50:	e24dd004 	sub	sp, sp, #4	; 0x4
        386c54:	e1a0200d 	mov	r2, sp
        386c58:	ef00001b 	swi	0x0000001b
        386c5c:	e1100000 	tst	r0, r0
        386c60:	1a000002 	bne	386c70 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x34>
        386c64:	e59d0000 	ldr	r0, [sp]
        386c68:	e28dd010 	add	sp, sp, #16	; 0x10
        386c6c:	e1a0f00e 	mov	pc, lr
        386c70:	e3a01000 	mov	r1, #0	; 0x0
        386c74:	e3a02000 	mov	r2, #0	; 0x0
        386c78:	e1a0000f 	mov	r0, pc
        386c7c:	ea617146 	b	1be319c <$Throw>
        386c80:	6576742e 	ldrvsb	r7, [r6, -#1070]!
        386c84:	65782e6d 	ldrvsb	r2, [r8, -#3693]!
        386c88:	6f6e6361 	swivs	0x006e6361
        386c8c:	6c6c0000 	stcvsl	0, cr0, [ip]
        386c90:	e1a0000f 	mov	r0, pc
        386c94:	e1a0f00e 	mov	pc, lr
        386c98:	5453746f 	ldrplb	r7, [r3], -#1135
        386c9c:	72654d6f 	rsbvc	r4, r5, #7104	; 0x1bc0
        386ca0:	6e69746f 	cdpvs	4, 6, cr7, cr9, cr15, {3}
        386ca4:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

