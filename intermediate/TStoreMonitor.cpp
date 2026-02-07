#include "include/TStoreMonitor.h"

/**
 * Symbol: New__13TStoreMonitorSFPc
 * Address: 00386ca8
 */
void TStoreMonitor::New() {
    /*
        386ca8:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        386cac:	e1a01000 	mov	r1, r0
        386cb0:	ebfffff6 	bl	386c90 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x54>
        386cb4:	eb6122ba 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        386cb8:	e1100000 	tst	r0, r0
        386cbc:	e28dd004 	add	sp, sp, #4	; 0x4
        386cc0:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        386cc4:	01a0f00e 	moveq	pc, lr
        386cc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreMonitor::Delete(void)
 * Address: 00386ccc
 */
TStoreMonitor::Delete(void) {
    /*
        386ccc:	e92d4000 	stmdb	sp!, {lr}
        386cd0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386cd4:	e3a0c001 	mov	ip, #1	; 0x1
        386cd8:	ebffffda 	bl	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
        386cdc:	e8bd4000 	ldmia	sp!, {lr}
        386ce0:	ea612aed 	b	1bd189c <TProtocol::$DestroyMonitor(void)>
    */
}

/**
 * Symbol: TStoreMonitor::Init(TStore *)
 * Address: 00386ce4
 */
TStoreMonitor::Init(TStore *) {
    /*
        386ce4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386ce8:	e3a0c002 	mov	ip, #2	; 0x2
        386cec:	eaffffd5 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NeedsFormat(unsigned char *)
 * Address: 00386cf0
 */
TStoreMonitor::NeedsFormat(unsigned char *) {
    /*
        386cf0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386cf4:	e3a0c003 	mov	ip, #3	; 0x3
        386cf8:	eaffffd2 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::Format(void)
 * Address: 00386cfc
 */
TStoreMonitor::Format(void) {
    /*
        386cfc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d00:	e3a0c004 	mov	ip, #4	; 0x4
        386d04:	eaffffcf 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::GetRootId(unsigned long *)
 * Address: 00386d08
 */
TStoreMonitor::GetRootId(unsigned long *) {
    /*
        386d08:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d0c:	e3a0c005 	mov	ip, #5	; 0x5
        386d10:	eaffffcc 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NewObject(long, unsigned long *)
 * Address: 00386d14
 */
TStoreMonitor::NewObject(long, unsigned long *) {
    /*
        386d14:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d18:	e3a0c006 	mov	ip, #6	; 0x6
        386d1c:	eaffffc9 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::EraseObject(unsigned long)
 * Address: 00386d20
 */
TStoreMonitor::EraseObject(unsigned long) {
    /*
        386d20:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d24:	e3a0c007 	mov	ip, #7	; 0x7
        386d28:	eaffffc6 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::DeleteObject(unsigned long)
 * Address: 00386d2c
 */
TStoreMonitor::DeleteObject(unsigned long) {
    /*
        386d2c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d30:	e3a0c008 	mov	ip, #8	; 0x8
        386d34:	eaffffc3 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::SetObjectSize(unsigned long, long)
 * Address: 00386d38
 */
TStoreMonitor::SetObjectSize(unsigned long, long) {
    /*
        386d38:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d3c:	e3a0c009 	mov	ip, #9	; 0x9
        386d40:	eaffffc0 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::GetObjectSize(unsigned long, long *)
 * Address: 00386d44
 */
TStoreMonitor::GetObjectSize(unsigned long, long *) {
    /*
        386d44:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d48:	e3a0c00a 	mov	ip, #10	; 0xa
        386d4c:	eaffffbd 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::Write(unsigned long, long, char *, long)
 * Address: 00386d50
 */
TStoreMonitor::Write(unsigned long, long, char *, long) {
    /*
        386d50:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d54:	e3a0c00b 	mov	ip, #11	; 0xb
        386d58:	eaffffba 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::Read(unsigned long, long, char *, long)
 * Address: 00386d5c
 */
TStoreMonitor::Read(unsigned long, long, char *, long) {
    /*
        386d5c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d60:	e3a0c00c 	mov	ip, #12	; 0xc
        386d64:	eaffffb7 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::GetStoreSizes(long *, long *)
 * Address: 00386d68
 */
TStoreMonitor::GetStoreSizes(long *, long *) {
    /*
        386d68:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d6c:	e3a0c00d 	mov	ip, #13	; 0xd
        386d70:	eaffffb4 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::IsReadOnly(unsigned char *)
 * Address: 00386d74
 */
TStoreMonitor::IsReadOnly(unsigned char *) {
    /*
        386d74:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d78:	e3a0c00e 	mov	ip, #14	; 0xe
        386d7c:	eaffffb1 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::LockStore(void)
 * Address: 00386d80
 */
TStoreMonitor::LockStore(void) {
    /*
        386d80:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d84:	e3a0c00f 	mov	ip, #15	; 0xf
        386d88:	eaffffae 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::UnlockStore(void)
 * Address: 00386d8c
 */
TStoreMonitor::UnlockStore(void) {
    /*
        386d8c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d90:	e3a0c010 	mov	ip, #16	; 0x10
        386d94:	eaffffab 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::Abort(void)
 * Address: 00386d98
 */
TStoreMonitor::Abort(void) {
    /*
        386d98:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386d9c:	e3a0c011 	mov	ip, #17	; 0x11
        386da0:	eaffffa8 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::Idle(unsigned char *, unsigned char *)
 * Address: 00386da4
 */
TStoreMonitor::Idle(unsigned char *, unsigned char *) {
    /*
        386da4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386da8:	e3a0c012 	mov	ip, #18	; 0x12
        386dac:	eaffffa5 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NextObject(unsigned long, unsigned long *)
 * Address: 00386db0
 */
TStoreMonitor::NextObject(unsigned long, unsigned long *) {
    /*
        386db0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386db4:	e3a0c013 	mov	ip, #19	; 0x13
        386db8:	eaffffa2 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::CheckIntegrity(unsigned long *)
 * Address: 00386dbc
 */
TStoreMonitor::CheckIntegrity(unsigned long *) {
    /*
        386dbc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386dc0:	e3a0c014 	mov	ip, #20	; 0x14
        386dc4:	eaffff9f 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NewWithinTransaction(long, unsigned long *)
 * Address: 00386dc8
 */
TStoreMonitor::NewWithinTransaction(long, unsigned long *) {
    /*
        386dc8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386dcc:	e3a0c015 	mov	ip, #21	; 0x15
        386dd0:	eaffff9c 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::StartTransactionAgainst(unsigned long)
 * Address: 00386dd4
 */
TStoreMonitor::StartTransactionAgainst(unsigned long) {
    /*
        386dd4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386dd8:	e3a0c016 	mov	ip, #22	; 0x16
        386ddc:	eaffff99 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::SeparatelyAbort(unsigned long)
 * Address: 00386de0
 */
TStoreMonitor::SeparatelyAbort(unsigned long) {
    /*
        386de0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386de4:	e3a0c017 	mov	ip, #23	; 0x17
        386de8:	eaffff96 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::AddToCurrentTransaction(unsigned long)
 * Address: 00386dec
 */
TStoreMonitor::AddToCurrentTransaction(unsigned long) {
    /*
        386dec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386df0:	e3a0c018 	mov	ip, #24	; 0x18
        386df4:	eaffff93 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::LockReadOnly(void)
 * Address: 00386df8
 */
TStoreMonitor::LockReadOnly(void) {
    /*
        386df8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386dfc:	e3a0c019 	mov	ip, #25	; 0x19
        386e00:	eaffff90 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::UnlockReadOnly(unsigned char)
 * Address: 00386e04
 */
TStoreMonitor::UnlockReadOnly(unsigned char) {
    /*
        386e04:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386e08:	e3a0c01a 	mov	ip, #26	; 0x1a
        386e0c:	eaffff8d 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NewObject(char *, long, unsigned long *)
 * Address: 00386e10
 */
TStoreMonitor::NewObject(char *, long, unsigned long *) {
    /*
        386e10:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386e14:	e3a0c01b 	mov	ip, #27	; 0x1b
        386e18:	eaffff8a 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::ReplaceObject(unsigned long, char *, long)
 * Address: 00386e1c
 */
TStoreMonitor::ReplaceObject(unsigned long, char *, long) {
    /*
        386e1c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386e20:	e3a0c01c 	mov	ip, #28	; 0x1c
        386e24:	eaffff87 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
    */
}

/**
 * Symbol: TStoreMonitor::NewXIPObject(long, unsigned long *)
 * Address: 00386e28
 */
TStoreMonitor::NewXIPObject(long, unsigned long *) {
    /*
        386e28:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386e2c:	e3a0c01d 	mov	ip, #29	; 0x1d
        386e30:	eaffff84 	b	386c48 <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc>
        386e34:	00000000 	andeq	r0, r0, r0
        386e38:	00000048 	andeq	r0, r0, r8, asr #32
        386e3c:	0000004e 	andeq	r0, r0, lr, asr #32
        386e40:	00000051 	andeq	r0, r0, r1, asr r0
        386e44:	00000050 	andeq	r0, r0, r0, asr r0
        386e48:	00000104 	andeq	r0, r0, r4, lsl #2
        386e4c:	ea5e014c 	b	1b07384 <$Sizeof__9TMuxStoreSFv>
        386e58:	ea5de467 	b	1affffc <TMuxStore::$New(void)>
        386e5c:	ea5dbf2f 	b	1af6b20 <TMuxStore::$Delete(void)>
        386e6c:	ea000001 	b	386e78 <ClassInfo__9TMuxStoreSFv+0x8>
    */
}

