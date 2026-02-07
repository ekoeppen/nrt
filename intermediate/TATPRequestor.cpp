#include "include/TATPRequestor.h"

/**
 * Symbol: TATPRequestor::__ct(void)
 * Address: 001a96f4
 */
TATPRequestor::TATPRequestor(void) {
    /*
        1a96f4:	e1a0c00d 	mov	ip, sp
        1a96f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a96fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9700:	e1b04000 	movs	r4, r0
        1a9704:	1a000003 	bne	1a9718 <TATPRequestor::__ct(void)+0x24>
        1a9708:	e3a00040 	mov	r0, #64	; 0x40
        1a970c:	eb689409 	bl	1bce738 <$__nw(unsigned int)>
        1a9710:	e1b04000 	movs	r4, r0
        1a9714:	0a00000c 	beq	1a974c <TATPRequestor::__ct(void)+0x58>
        1a9718:	e2840008 	add	r0, r4, #8	; 0x8
        1a971c:	eb6928a4 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1a9720:	e3a05000 	mov	r5, #0	; 0x0
        1a9724:	e5c45030 	strb	r5, [r4, #48]
        1a9728:	e584502c 	str	r5, [r4, #44]
        1a972c:	e59f0020 	ldr	r0, [pc, #20]	; 1a9754 <TATPRequestor::__ct(void)+0x60>
        1a9730:	e5840000 	str	r0, [r4]
        1a9734:	e584503c 	str	r5, [r4, #60]
        1a9738:	e5c45004 	strb	r5, [r4, #4]
        1a973c:	e284002c 	add	r0, r4, #44	; 0x2c
        1a9740:	e1a01005 	mov	r1, r5
        1a9744:	eb689c3f 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1a9748:	e5c45038 	strb	r5, [r4, #56]
        1a974c:	e1a00004 	mov	r0, r4
        1a9750:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1a9754:	0001c87c 	andeq	ip, r1, ip, ror r8
    */
}

/**
 * Symbol: TATPRequestor::__dt(void)
 * Address: 001a9758
 */
TATPRequestor::~TATPRequestor(void) {
    /*
        1a9758:	e1a0c00d 	mov	ip, sp
        1a975c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a9760:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9764:	e1a04000 	mov	r4, r0
        1a9768:	e1a05001 	mov	r5, r1
        1a976c:	e59f002c 	ldr	r0, [pc, #2c]	; 1a97a0 <TATPRequestor::__dt(void)+0x48>
        1a9770:	e5840000 	str	r0, [r4]
        1a9774:	e284002c 	add	r0, r4, #44	; 0x2c
        1a9778:	e3a01000 	mov	r1, #0	; 0x0
        1a977c:	eb6893e8 	bl	1bce724 <TUObject::$__dt(void)>
        1a9780:	e2840008 	add	r0, r4, #8	; 0x8
        1a9784:	e3a01000 	mov	r1, #0	; 0x0
        1a9788:	eb69288b 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a978c:	e3150001 	tst	r5, #1	; 0x1
        1a9790:	11a00004 	movne	r0, r4
        1a9794:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1a9798:	1a688fd0 	bne	1bcd6e0 <$__dl(void *)>
        1a979c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1a97a0:	0001c87c 	andeq	ip, r1, ip, ror r8
    */
}

/**
 * Symbol: TATPRequestor::CopyRequest(TAddress &, unsigned char *, unsigned long, unsigned short, unsigned char)
 * Address: 001a97a4
 */
TATPRequestor::CopyRequest(TAddress &, unsigned char *, unsigned long, unsigned short, unsigned char) {
    /*
        1a97a4:	e1a0c00d 	mov	ip, sp
        1a97a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a97ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a97b0:	e1a07000 	mov	r7, r0
        1a97b4:	e1a06001 	mov	r6, r1
        1a97b8:	e1a05002 	mov	r5, r2
        1a97bc:	e1a04003 	mov	r4, r3
        1a97c0:	e59b1004 	ldr	r1, [fp, #4]
        1a97c4:	e1a09801 	mov	r9, r1, lsl #16
        1a97c8:	e1a09829 	mov	r9, r9, lsr #16
        1a97cc:	e59b0008 	ldr	r0, [fp, #8]
        1a97d0:	e20080ff 	and	r8, r0, #255	; 0xff
        1a97d4:	e24dd014 	sub	sp, sp, #20	; 0x14
        1a97d8:	e1a0000d 	mov	r0, sp
        1a97dc:	e3a01001 	mov	r1, #1	; 0x1
        1a97e0:	eb692871 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1a97e4:	e1a01006 	mov	r1, r6
        1a97e8:	e1a0000d 	mov	r0, sp
        1a97ec:	eb69286f 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1a97f0:	e58d400c 	str	r4, [sp, #12]
        1a97f4:	e5cd9011 	strb	r9, [sp, #17]
        1a97f8:	e1a00429 	mov	r0, r9, lsr #8
        1a97fc:	e5cd0010 	strb	r0, [sp, #16]
        1a9800:	e5cd8012 	strb	r8, [sp, #18]
        1a9804:	e2870008 	add	r0, r7, #8	; 0x8
        1a9808:	e1a06000 	mov	r6, r0
        1a980c:	e1a0100d 	mov	r1, sp
        1a9810:	e3a03000 	mov	r3, #0	; 0x0
        1a9814:	e3a02014 	mov	r2, #20	; 0x14
        1a9818:	eb633cfa 	bl	1a78c08 <TMemoryObject::$CopyTo(void *, unsigned long, unsigned long)>
        1a981c:	e3300000 	teq	r0, #0	; 0x0
        1a9820:	1a000004 	bne	1a9838 <TATPRequestor::CopyRequest(TAddress &, unsigned char *, unsigned long, unsigned short, unsigned char)+0x94>
        1a9824:	e1a00006 	mov	r0, r6
        1a9828:	e1a02004 	mov	r2, r4
        1a982c:	e1a01005 	mov	r1, r5
        1a9830:	e3a03014 	mov	r3, #20	; 0x14
        1a9834:	eb633cf3 	bl	1a78c08 <TMemoryObject::$CopyTo(void *, unsigned long, unsigned long)>
        1a9838:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TATPRequestor::Complete(long, TPacketBuffer *)
 * Address: 001a983c
 */
TATPRequestor::Complete(long, TPacketBuffer *) {
    /*
        1a983c:	e1a0c00d 	mov	ip, sp
        1a9840:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a9844:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9848:	e1a04000 	mov	r4, r0
        1a984c:	eb68a860 	bl	1bd39d4 <$GetGlobals>
        1a9850:	eb634d87 	bl	1a7ce74 <TAppleTalkWorld::$NewMessage(void)>
        1a9854:	e1b06000 	movs	r6, r0
        1a9858:	03a000a8 	moveq	r0, #168	; 0xa8
        1a985c:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
        1a9860:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1a9864:	e2865080 	add	r5, r6, #128	; 0x80
        1a9868:	e59f0050 	ldr	r0, [pc, #50]	; 1a98c0 <TATPRequestor::Complete(long, TPacketBuffer *)+0x84>
        1a986c:	e5850000 	str	r0, [r5]
        1a9870:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1a9874:	e5850004 	str	r0, [r5, #4]
        1a9878:	e3a00006 	mov	r0, #6	; 0x6
        1a987c:	e2800c03 	add	r0, r0, #768	; 0x300
        1a9880:	e5850010 	str	r0, [r5, #16]
        1a9884:	e59f0038 	ldr	r0, [pc, #38]	; 1a98c4 <TATPRequestor::Complete(long, TPacketBuffer *)+0x88>
        1a9888:	e5850014 	str	r0, [r5, #20]
        1a988c:	e2840008 	add	r0, r4, #8	; 0x8
        1a9890:	eb69284c 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1a9894:	e3a0100b 	mov	r1, #11	; 0xb
        1a9898:	e5a50018 	str	r0, [r5, #24]!
        1a989c:	e3a03000 	mov	r3, #0	; 0x0
        1a98a0:	e5861010 	str	r1, [r6, #16]
        1a98a4:	e92d0008 	stmdb	sp!, {r3}
        1a98a8:	e284102c 	add	r1, r4, #44	; 0x2c
        1a98ac:	e1a00006 	mov	r0, r6
        1a98b0:	e3a03502 	mov	r3, #8388608	; 0x800000
        1a98b4:	e3a0201c 	mov	r2, #28	; 0x1c
        1a98b8:	eb6355ac 	bl	1a7ef70 <TATAsyncMsg::$Send(TUPort *, unsigned long, unsigned long, unsigned long)>
        1a98bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1a98c0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1a98c4:	61746c6b 	cmnvs	r4, fp, ror #24
    */
}

