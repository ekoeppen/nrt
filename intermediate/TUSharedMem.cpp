#include "DDKIncludes/OS600/UserSharedMem.h"

/**
 * Symbol: TUSharedMem::Init(void)
 * Address: 0025a5ac
 */
long		TUSharedMem::Init() {
    /*
        25a5ac:	e1a0c00d 	mov	ip, sp
        25a5b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a5b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a5b8:	e24dd028 	sub	sp, sp, #40	; 0x28
        25a5bc:	e1a0200d 	mov	r2, sp
        25a5c0:	e3a0300c 	mov	r3, #12	; 0xc
        25a5c4:	e3a01006 	mov	r1, #6	; 0x6
        25a5c8:	eb65f165 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        25a5cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUSharedMem::SetBuffer(void *, unsigned long, unsigned long)
 * Address: 0025a5d0
 */
long		TUSharedMem::SetBuffer(void* buffer, ULong size, ULong permissions = kSMemReadOnly) {
    /*
        25a5d0:	e5900000 	ldr	r0, [r0]
        25a5d4:	ea054f72 	b	3ae3a4 <SMemSetBufferSWI>
    */
}

/**
 * Symbol: TUSharedMem::GetSize(unsigned long *, void **)
 * Address: 0025a5e8
 */
long		TUSharedMem::GetSize(ULong* returnSize, void** returnBuffer = nil) {
    /*
        25a5e8:	e5900000 	ldr	r0, [r0]
        25a5ec:	e3a03000 	mov	r3, #0	; 0x0
        25a5f0:	ea054f6d 	b	3ae3ac <SMemGetSizeSWI>
    */
}

/**
 * Symbol: TUSharedMem::CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)
 * Address: 0025a5f4
 */
long		TUSharedMem::CopyToShared(void* buffer, ULong size, ULong offset = 0, TUMsgToken* token = nil) {
    /*
        25a5f4:	e1a0c00d 	mov	ip, sp
        25a5f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a5fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a600:	e1a0c002 	mov	ip, r2
        25a604:	e1a0e003 	mov	lr, r3
        25a608:	e59b2004 	ldr	r2, [fp, #4]
        25a60c:	e3320000 	teq	r2, #0	; 0x0
        25a610:	0a000004 	beq	25a628 <TUSharedMem::CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)+0x34>
        25a614:	e5923008 	ldr	r3, [r2, #8]
        25a618:	e92d0008 	stmdb	sp!, {r3}
        25a61c:	e5923000 	ldr	r3, [r2]
        25a620:	e92d0008 	stmdb	sp!, {r3}
        25a624:	ea000002 	b	25a634 <TUSharedMem::CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)+0x40>
        25a628:	e3a03000 	mov	r3, #0	; 0x0
        25a62c:	e3a02000 	mov	r2, #0	; 0x0
        25a630:	e92d000c 	stmdb	sp!, {r2, r3}
        25a634:	e1a0300e 	mov	r3, lr
        25a638:	e1a0200c 	mov	r2, ip
        25a63c:	e5900000 	ldr	r0, [r0]
        25a640:	eb054f65 	bl	3ae3dc <SMemCopyToSharedSWI>
        25a644:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUSharedMem::CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)
 * Address: 0025a648
 */
long		TUSharedMem::CopyFromShared(ULong* returnSize, void* buffer, ULong size, ULong offset = 0, TUMsgToken* token = nil) {
    /*
        25a648:	e1a0c00d 	mov	ip, sp
        25a64c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25a650:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a654:	e1a0e002 	mov	lr, r2
        25a658:	e1a0c003 	mov	ip, r3
        25a65c:	e59b2008 	ldr	r2, [fp, #8]
        25a660:	e3320000 	teq	r2, #0	; 0x0
        25a664:	e1a03001 	mov	r3, r1
        25a668:	e59b4004 	ldr	r4, [fp, #4]
        25a66c:	0a000005 	beq	25a688 <TUSharedMem::CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)+0x40>
        25a670:	e92d0008 	stmdb	sp!, {r3}
        25a674:	e5923008 	ldr	r3, [r2, #8]
        25a678:	e92d0008 	stmdb	sp!, {r3}
        25a67c:	e5923000 	ldr	r3, [r2]
        25a680:	e92d0008 	stmdb	sp!, {r3}
        25a684:	ea000002 	b	25a694 <TUSharedMem::CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)+0x4c>
        25a688:	e3a02000 	mov	r2, #0	; 0x0
        25a68c:	e3a01000 	mov	r1, #0	; 0x0
        25a690:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        25a694:	e1a03004 	mov	r3, r4
        25a698:	e1a0200c 	mov	r2, ip
        25a69c:	e1a0100e 	mov	r1, lr
        25a6a0:	e5900000 	ldr	r0, [r0]
        25a6a4:	eb054f52 	bl	3ae3f4 <SMemCopyFromSharedSWI>
        25a6a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

