#include "include/TLink.h"

/**
 * Symbol: TLink::__ct(PLink *)
 * Address: 000fdbf0
 */
TLink::TLink(PLink *) {
    /*
         fdbf0:	e1a0c00d 	mov	ip, sp
         fdbf4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fdbf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdbfc:	e1b04000 	movs	r4, r0
         fdc00:	e1a05001 	mov	r5, r1
         fdc04:	1a000003 	bne	fdc18 <TLink::__ct(PLink *)+0x28>
         fdc08:	e3a00d0f 	mov	r0, #960	; 0x3c0
         fdc0c:	eb6b42c9 	bl	1bce738 <$__nw(unsigned int)>
         fdc10:	e1b04000 	movs	r4, r0
         fdc14:	0a000026 	beq	fdcb4 <TLink::__ct(PLink *)+0xc4>
         fdc18:	e1a00004 	mov	r0, r4
         fdc1c:	eb6b9979 	bl	1be4208 <TAEventHandler::$__ct(void)>
         fdc20:	e2840024 	add	r0, r4, #36	; 0x24
         fdc24:	e1a08000 	mov	r8, r0
         fdc28:	eb65d352 	bl	1a72978 <TString32::$__ct(void)>
         fdc2c:	e284004c 	add	r0, r4, #76	; 0x4c
         fdc30:	eb6b3e9d 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         fdc34:	e284005c 	add	r0, r4, #92	; 0x5c
         fdc38:	eb6b9560 	bl	1be31c0 <CBufferList::$__ct(void)>
         fdc3c:	e284007c 	add	r0, r4, #124	; 0x7c
         fdc40:	eb6b996f 	bl	1be4204 <CBufferSegment::$__ct(void)>
         fdc44:	e28400a4 	add	r0, r4, #164	; 0xa4
         fdc48:	eb65cf22 	bl	1a718d8 <TPacketBuffer::$__ct(void)>
         fdc4c:	e59f0068 	ldr	r0, [pc, #68]	; fdcbc <TLink::__ct(PLink *)+0xcc>
         fdc50:	e58400c8 	str	r0, [r4, #200]
         fdc54:	e28460ec 	add	r6, r4, #236	; 0xec
         fdc58:	e1a00006 	mov	r0, r6
         fdc5c:	eb6b9975 	bl	1be4238 <TAEvent::$__ct(void)>
         fdc60:	e59f0058 	ldr	r0, [pc, #58]	; fdcc0 <TLink::__ct(PLink *)+0xd0>
         fdc64:	e3a07000 	mov	r7, #0	; 0x0
         fdc68:	e5860000 	str	r0, [r6]
         fdc6c:	e586700c 	str	r7, [r6, #12]
         fdc70:	e5867008 	str	r7, [r6, #8]
         fdc74:	e2860014 	add	r0, r6, #20	; 0x14
         fdc78:	e3a01001 	mov	r1, #1	; 0x1
         fdc7c:	eb6bd74a 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         fdc80:	e2840f47 	add	r0, r4, #284	; 0x11c
         fdc84:	eb6b954d 	bl	1be31c0 <CBufferList::$__ct(void)>
         fdc88:	e2840f4f 	add	r0, r4, #316	; 0x13c
         fdc8c:	eb6b995c 	bl	1be4204 <CBufferSegment::$__ct(void)>
         fdc90:	e59f002c 	ldr	r0, [pc, #2c]	; fdcc4 <TLink::__ct(PLink *)+0xd4>
         fdc94:	e5840000 	str	r0, [r4]
         fdc98:	e5c4701c 	strb	r7, [r4, #28]	; fField28
         fdc9c:	e5c4701d 	strb	r7, [r4, #29]	; fField29
         fdca0:	e3a000ff 	mov	r0, #255	; 0xff
         fdca4:	e5c4001f 	strb	r0, [r4, #31]	; fField31
         fdca8:	e5c4001e 	strb	r0, [r4, #30]	; fField30
         fdcac:	e5c87000 	strb	r7, [r8]
         fdcb0:	e5845048 	str	r5, [r4, #72]	; fField72
         fdcb4:	e1a00004 	mov	r0, r4
         fdcb8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         fdcbc:	0001e91c 	andeq	lr, r1, ip, lsl r9
         fdcc0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         fdcc4:	0001f6b0 	streqh	pc, [r1], -r0
    */
}

/**
 * Symbol: TLink::__dt(void)
 * Address: 000fdcc8
 */
TLink::~TLink(void) {
    /*
         fdcc8:	e1a0c00d 	mov	ip, sp
         fdccc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fdcd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdcd4:	e1a04000 	mov	r4, r0
         fdcd8:	e1a05001 	mov	r5, r1
         fdcdc:	e59f0070 	ldr	r0, [pc, #70]	; fdd54 <TLink::__dt(void)+0x8c>
         fdce0:	e5840000 	str	r0, [r4]
         fdce4:	e5940048 	ldr	r0, [r4, #72]	; fField72
         fdce8:	eb0a1dd8 	bl	385450 <PLink::Delete(void)>
         fdcec:	e2840f4f 	add	r0, r4, #316	; 0x13c
         fdcf0:	e3a01000 	mov	r1, #0	; 0x0
         fdcf4:	eb6b995c 	bl	1be426c <CBufferSegment::$__dt(void)>
         fdcf8:	e2840f47 	add	r0, r4, #284	; 0x11c
         fdcfc:	e3a01000 	mov	r1, #0	; 0x0
         fdd00:	eb6b9952 	bl	1be4250 <CBufferList::$__dt(void)>
         fdd04:	e28400a4 	add	r0, r4, #164	; 0xa4
         fdd08:	e3a01000 	mov	r1, #0	; 0x0
         fdd0c:	eb6bd72a 	bl	1bf39bc <TMemoryObject::$__dt(void)>
         fdd10:	e284007c 	add	r0, r4, #124	; 0x7c
         fdd14:	e3a01000 	mov	r1, #0	; 0x0
         fdd18:	eb6b9953 	bl	1be426c <CBufferSegment::$__dt(void)>
         fdd1c:	e284005c 	add	r0, r4, #92	; 0x5c
         fdd20:	e3a01000 	mov	r1, #0	; 0x0
         fdd24:	eb6b9949 	bl	1be4250 <CBufferList::$__dt(void)>
         fdd28:	e284004c 	add	r0, r4, #76	; 0x4c
         fdd2c:	e3a01000 	mov	r1, #0	; 0x0
         fdd30:	eb6b4276 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         fdd34:	e1a00004 	mov	r0, r4
         fdd38:	e3a01000 	mov	r1, #0	; 0x0
         fdd3c:	eb6b994b 	bl	1be4270 <TAEventHandler::$__dt(void)>
         fdd40:	e3150001 	tst	r5, #1	; 0x1
         fdd44:	11a00004 	movne	r0, r4
         fdd48:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         fdd4c:	1a6b3e63 	bne	1bcd6e0 <$__dl(void *)>
         fdd50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fdd54:	0001f6b0 	streqh	pc, [r1], -r0
    */
}

/**
 * Symbol: TLink::Init(void)
 * Address: 000fdd58
 */
TLink::Init(void) {
    /*
         fdd58:	e1a0c00d 	mov	ip, sp
         fdd5c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fdd60:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdd64:	e1a05000 	mov	r5, r0
         fdd68:	e24dd010 	sub	sp, sp, #16	; 0x10
         fdd6c:	e3a00000 	mov	r0, #0	; 0x0
         fdd70:	e5cd000c 	strb	r0, [sp, #12]
         fdd74:	e58d0008 	str	r0, [sp, #8]
         fdd78:	e1a0200d 	mov	r2, sp
         fdd7c:	e28d1004 	add	r1, sp, #4	; 0x4
         fdd80:	e5950048 	ldr	r0, [r5, #72]	; fField72
         fdd84:	eb0a1db8 	bl	38546c <PLink::Init(unsigned long *, unsigned long *)>
         fdd88:	e3300000 	teq	r0, #0	; 0x0
         fdd8c:	1a000070 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fdd90:	e58550e8 	str	r5, [r5, #232]	; fField232
         fdd94:	e28500a4 	add	r0, r5, #164	; 0xa4
         fdd98:	e1a07000 	mov	r7, r0
         fdd9c:	e3a03001 	mov	r3, #1	; 0x1
         fdda0:	e3a02001 	mov	r2, #1	; 0x1
         fdda4:	e3a0405b 	mov	r4, #91	; 0x5b
         fdda8:	e2844c02 	add	r4, r4, #512	; 0x200
         fddac:	e1a01004 	mov	r1, r4
         fddb0:	eb6bd700 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
         fddb4:	e3300000 	teq	r0, #0	; 0x0
         fddb8:	1a000065 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fddbc:	e5857114 	str	r7, [r5, #276]	; fField276
         fddc0:	e59f0178 	ldr	r0, [pc, #178]	; fdf40 <TLink::Init(void)+0x1e8>
         fddc4:	e58500f0 	str	r0, [r5, #240]	; fField240
         fddc8:	e3a00006 	mov	r0, #6	; 0x6
         fddcc:	e3e03000 	mvn	r3, #0	; 0x0
         fddd0:	e3a02000 	mov	r2, #0	; 0x0
         fddd4:	e58500fc 	str	r0, [r5, #252]	; fField252
         fddd8:	e92d000c 	stmdb	sp!, {r2, r3}
         fdddc:	e597601c 	ldr	r6, [r7, #28]	; fField28
         fdde0:	e1a00007 	mov	r0, r7
         fdde4:	eb6bd6fa 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         fdde8:	e1a01000 	mov	r1, r0
         fddec:	e285007c 	add	r0, r5, #124	; 0x7c
         fddf0:	e1a07000 	mov	r7, r0
         fddf4:	e3a03000 	mov	r3, #0	; 0x0
         fddf8:	e1a02006 	mov	r2, r6
         fddfc:	eb6badaa 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         fde00:	e28dd008 	add	sp, sp, #8	; 0x8
         fde04:	e3300000 	teq	r0, #0	; 0x0
         fde08:	1a000051 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fde0c:	e285005c 	add	r0, r5, #92	; 0x5c
         fde10:	e1a06000 	mov	r6, r0
         fde14:	e3a01000 	mov	r1, #0	; 0x0
         fde18:	eb6bad9b 	bl	1be948c <CBufferList::$Init(unsigned char)>
         fde1c:	e3300000 	teq	r0, #0	; 0x0
         fde20:	1a00004b 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fde24:	e1a01007 	mov	r1, r7
         fde28:	e1a00006 	mov	r0, r6
         fde2c:	eb6bb1b4 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         fde30:	e3e03000 	mvn	r3, #0	; 0x0
         fde34:	e3a02000 	mov	r2, #0	; 0x0
         fde38:	e92d000c 	stmdb	sp!, {r2, r3}
         fde3c:	e2851f59 	add	r1, r5, #356	; 0x164
         fde40:	e2850f4f 	add	r0, r5, #316	; 0x13c
         fde44:	e1a06000 	mov	r6, r0
         fde48:	e3a03000 	mov	r3, #0	; 0x0
         fde4c:	e1a02004 	mov	r2, r4
         fde50:	eb6bad95 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         fde54:	e28dd008 	add	sp, sp, #8	; 0x8
         fde58:	e3300000 	teq	r0, #0	; 0x0
         fde5c:	1a00003c 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fde60:	e2850f47 	add	r0, r5, #284	; 0x11c
         fde64:	e1a04000 	mov	r4, r0
         fde68:	e3a01000 	mov	r1, #0	; 0x0
         fde6c:	eb6bad86 	bl	1be948c <CBufferList::$Init(unsigned char)>
         fde70:	e3300000 	teq	r0, #0	; 0x0
         fde74:	1a000036 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fde78:	e1a01006 	mov	r1, r6
         fde7c:	e1a00004 	mov	r0, r4
         fde80:	eb6bb19f 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         fde84:	e28d0008 	add	r0, sp, #8	; 0x8
         fde88:	eb65daf2 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         fde8c:	e3300000 	teq	r0, #0	; 0x0
         fde90:	1a00002f 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fde94:	e285004c 	add	r0, r5, #76	; 0x4c
         fde98:	e1a04000 	mov	r4, r0
         fde9c:	e3a01001 	mov	r1, #1	; 0x1
         fdea0:	eb6b5efb 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         fdea4:	e3300000 	teq	r0, #0	; 0x0
         fdea8:	1a000029 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fdeac:	e1a00004 	mov	r0, r4
         fdeb0:	e59d1008 	ldr	r1, [sp, #8]
         fdeb4:	eb6b77b5 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         fdeb8:	e3300000 	teq	r0, #0	; 0x0
         fdebc:	1a000024 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fdec0:	e1a00004 	mov	r0, r4
         fdec4:	e1a01005 	mov	r1, r5
         fdec8:	eb6b7bd0 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         fdecc:	e3300000 	teq	r0, #0	; 0x0
         fded0:	1a00001f 	bne	fdf54 <TLink::Init(void)+0x1fc>
         fded4:	e59d0004 	ldr	r0, [sp, #4]
         fded8:	e5850014 	str	r0, [r5, #20]	; fField20
         fdedc:	e41d0004 	ldr	r0, [sp], -#4
         fdee0:	e5850018 	str	r0, [r5, #24]
         fdee4:	e1a0000d 	mov	r0, sp
         fdee8:	eb6b56be 	bl	1bd39e8 <$GetNetworkPersistentInfo(unsigned long *)>
         fdeec:	e59d0000 	ldr	r0, [sp]
         fdef0:	e5c5001d 	strb	r0, [r5, #29]	; fField29
         fdef4:	e59d0008 	ldr	r0, [sp, #8]
         fdef8:	e3300002 	teq	r0, #2	; 0x2
         fdefc:	1a000010 	bne	fdf44 <TLink::Init(void)+0x1ec>
         fdf00:	e59d0000 	ldr	r0, [sp]
         fdf04:	e1b04820 	movs	r4, r0, lsr #16
         fdf08:	0a000006 	beq	fdf28 <TLink::Init(void)+0x1d0>
         fdf0c:	e1a01004 	mov	r1, r4
         fdf10:	e1a00005 	mov	r0, r5
         fdf14:	eb660822 	bl	1a7ffa4 <TLink::$SetNetwork(unsigned short)>
         fdf18:	e3340000 	teq	r4, #0	; 0x0
         fdf1c:	0a000001 	beq	fdf28 <TLink::Init(void)+0x1d0>
         fdf20:	e3300000 	teq	r0, #0	; 0x0
         fdf24:	0a000009 	beq	fdf50 <TLink::Init(void)+0x1f8>
         fdf28:	e1a00005 	mov	r0, r5
         fdf2c:	e3a02801 	mov	r2, #65536	; 0x10000
         fdf30:	e2422002 	sub	r2, r2, #2	; 0x2
         fdf34:	e3a01cff 	mov	r1, #65280	; 0xff00
         fdf38:	eb6620f1 	bl	1a86304 <TLink::$SetNetwork(unsigned long, unsigned long)>
         fdf3c:	ea000003 	b	fdf50 <TLink::Init(void)+0x1f8>
         fdf40:	6c617020 	stcvsl	0, cr7, [r1], -#128
         fdf44:	e1a00005 	mov	r0, r5
         fdf48:	e3a01000 	mov	r1, #0	; 0x0
         fdf4c:	eb660814 	bl	1a7ffa4 <TLink::$SetNetwork(unsigned short)>
         fdf50:	e28dd004 	add	sp, sp, #4	; 0x4
         fdf54:	e1a04000 	mov	r4, r0
         fdf58:	e28d0008 	add	r0, sp, #8	; 0x8
         fdf5c:	e3a01000 	mov	r1, #0	; 0x0
         fdf60:	eb6b41ef 	bl	1bce724 <TUObject::$__dt(void)>
         fdf64:	e1a00004 	mov	r0, r4
         fdf68:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLink::Activate(void)
 * Address: 000fdf6c
 */
TLink::Activate(void) {
    /*
         fdf6c:	e1a0c00d 	mov	ip, sp
         fdf70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fdf74:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdf78:	e1a04000 	mov	r4, r0
         fdf7c:	e5900048 	ldr	r0, [r0, #72]	; fField72
         fdf80:	eb0a1d3c 	bl	385478 <PLink::Activate(void)>
         fdf84:	e3300000 	teq	r0, #0	; 0x0
         fdf88:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         fdf8c:	e1a00004 	mov	r0, r4
         fdf90:	eb6618b9 	bl	1a8427c <TLink::$PostRead(void)>
         fdf94:	e3300000 	teq	r0, #0	; 0x0
         fdf98:	03a01001 	moveq	r1, #1	; 0x1
         fdf9c:	05c4101c 	streqb	r1, [r4, #28]	; fField28
         fdfa0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLink::Write(TPacketMessage *)
 * Address: 000fdfa4
 */
TLink::Write(TPacketMessage *) {
    /*
         fdfa4:	e1a0c00d 	mov	ip, sp
         fdfa8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fdfac:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdfb0:	e1a04000 	mov	r4, r0
         fdfb4:	e1a05001 	mov	r5, r1
         fdfb8:	e2800f4f 	add	r0, r0, #316	; 0x13c
         fdfbc:	e1a07000 	mov	r7, r0
         fdfc0:	e5901000 	ldr	r1, [r0]
         fdfc4:	e1a0e00f 	mov	lr, pc
         fdfc8:	e281f028 	add	pc, r1, #40	; 0x28
         fdfcc:	e2841f59 	add	r1, r4, #356	; 0x164
         fdfd0:	e3a0605b 	mov	r6, #91	; 0x5b
         fdfd4:	e2866c02 	add	r6, r6, #512	; 0x200
         fdfd8:	e1a02006 	mov	r2, r6
         fdfdc:	e595002c 	ldr	r0, [r5, #44]
         fdfe0:	eb66080c 	bl	1a80018 <TWriteChain::$StreamOut(unsigned char *, unsigned long)>
         fdfe4:	e595002c 	ldr	r0, [r5, #44]
         fdfe8:	eb65fb89 	bl	1a7ce14 <TWriteChain::$Length(void)>
         fdfec:	e0461000 	sub	r1, r6, r0
         fdff0:	e1a00007 	mov	r0, r7
         fdff4:	e3a02001 	mov	r2, #1	; 0x1
         fdff8:	e5973000 	ldr	r3, [r7]
         fdffc:	e1a0e00f 	mov	lr, pc
         fe000:	e283f034 	add	pc, r3, #52	; 0x34
         fe004:	e2842f47 	add	r2, r4, #284	; 0x11c
         fe008:	e2851014 	add	r1, r5, #20	; 0x14
         fe00c:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
         fe010:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         fe014:	ea0a1d26 	b	3854b4 <PLink::Write(TAddress *, CBufferList *)>
    */
}

/**
 * Symbol: TLink::PostRead(void)
 * Address: 000fe018
 */
TLink::PostRead(void) {
    /*
         fe018:	e1a0c00d 	mov	ip, sp
         fe01c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fe020:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe024:	e1a04000 	mov	r4, r0
         fe028:	e280005c 	add	r0, r0, #92	; 0x5c
         fe02c:	e1a05000 	mov	r5, r0
         fe030:	e5901000 	ldr	r1, [r0]
         fe034:	e1a0e00f 	mov	lr, pc
         fe038:	e281f028 	add	pc, r1, #40	; 0x28
         fe03c:	e1a02005 	mov	r2, r5
         fe040:	e284104c 	add	r1, r4, #76	; 0x4c
         fe044:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
         fe048:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         fe04c:	ea0a1d1b 	b	3854c0 <PLink::PostRead(TUAsyncMessage *, CBufferList *)>
    */
}

/**
 * Symbol: TLink::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000fe050
 */
TLink::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         fe050:	e1a0c00d 	mov	ip, sp
         fe054:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fe058:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe05c:	e1a04000 	mov	r4, r0
         fe060:	e1a01003 	mov	r1, r3
         fe064:	e5930008 	ldr	r0, [r3, #8]
         fe068:	e3300000 	teq	r0, #0	; 0x0
         fe06c:	11a00004 	movne	r0, r4
         fe070:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         fe074:	1a661880 	bne	1a8427c <TLink::$PostRead(void)>
         fe078:	e5940114 	ldr	r0, [r4, #276]	; fField276
         fe07c:	e5911014 	ldr	r1, [r1, #20]	; fField20
         fe080:	e3a06000 	mov	r6, #0	; 0x0
         fe084:	e5a06028 	str	r6, [r0, #40]!
         fe088:	e5801004 	str	r1, [r0, #4]
         fe08c:	e59f0074 	ldr	r0, [pc, #74]	; fe108 <TLink::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb8>
         fe090:	e3a03000 	mov	r3, #0	; 0x0
         fe094:	e58400f0 	str	r0, [r4, #240]	; fField240
         fe098:	e92d0008 	stmdb	sp!, {r3}
         fe09c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         fe0a0:	e2840c01 	add	r0, r4, #256	; 0x100
         fe0a4:	e1a07000 	mov	r7, r0
         fe0a8:	e3a02000 	mov	r2, #0	; 0x0
         fe0ac:	eb6bd64b 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
         fe0b0:	e28dd004 	add	sp, sp, #4	; 0x4
         fe0b4:	e5945114 	ldr	r5, [r4, #276]	; fField276
         fe0b8:	e1a00005 	mov	r0, r5
         fe0bc:	eb6bd644 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         fe0c0:	e5b51028 	ldr	r1, [r5, #40]!
         fe0c4:	e0800001 	add	r0, r0, r1
         fe0c8:	e5d00001 	ldrb	r0, [r0, #1]
         fe0cc:	e5c7000a 	strb	r0, [r7, #10]
         fe0d0:	e5c4610c 	strb	r6, [r4, #268]	; fField268
         fe0d4:	e3a00030 	mov	r0, #48	; 0x30
         fe0d8:	e5846118 	str	r6, [r4, #280]	; fField280
         fe0dc:	e52d0004 	str	r0, [sp, -#4]!
         fe0e0:	eb6b563b 	bl	1bd39d4 <$GetGlobals>
         fe0e4:	e28430ec 	add	r3, r4, #236	; 0xec
         fe0e8:	e92d0008 	stmdb	sp!, {r3}
         fe0ec:	e28d3004 	add	r3, sp, #4	; 0x4
         fe0f0:	e3a02000 	mov	r2, #0	; 0x0
         fe0f4:	e3a01000 	mov	r1, #0	; 0x0
         fe0f8:	e590c000 	ldr	ip, [r0]
         fe0fc:	e1a0e00f 	mov	lr, pc
         fe100:	e28cf050 	add	pc, ip, #80	; 0x50
         fe104:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         fe108:	6c617020 	stcvsl	0, cr7, [r1], -#128
    */
}

/**
 * Symbol: TLink::AcquireNodeAddress(TAcquireNodeAddress *)
 * Address: 000fe11c
 */
TLink::AcquireNodeAddress(TAcquireNodeAddress *) {
    /*
         fe11c:	e1a0c00d 	mov	ip, sp
         fe120:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fe124:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe128:	e1a04000 	mov	r4, r0
         fe12c:	e1a05001 	mov	r5, r1
         fe130:	e24dd004 	sub	sp, sp, #4	; 0x4
         fe134:	e2811018 	add	r1, r1, #24	; 0x18
         fe138:	e5900048 	ldr	r0, [r0, #72]	; fField72
         fe13c:	e1a0200d 	mov	r2, sp
         fe140:	eb0a1cd2 	bl	385490 <PLink::AcquireNodeAddress(unsigned char &, unsigned long &)>
         fe144:	e3300000 	teq	r0, #0	; 0x0
         fe148:	1a000005 	bne	fe164 <TLink::AcquireNodeAddress(TAcquireNodeAddress *)+0x48>
         fe14c:	e5d51018 	ldrb	r1, [r5, #24]
         fe150:	e5c4101d 	strb	r1, [r4, #29]	; fField29
         fe154:	e59d1000 	ldr	r1, [sp]
         fe158:	e5c4101f 	strb	r1, [r4, #31]	; fField31
         fe15c:	e1a01441 	mov	r1, r1, asr #8
         fe160:	e5c4101e 	strb	r1, [r4, #30]	; fField30
         fe164:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLink::SetNetwork(unsigned long, unsigned long)
 * Address: 000fe168
 */
TLink::SetNetwork(unsigned long, unsigned long) {
    /*
         fe168:	e1a0c00d 	mov	ip, sp
         fe16c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fe170:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe174:	e1a04000 	mov	r4, r0
         fe178:	e1a05002 	mov	r5, r2
         fe17c:	e24dd004 	sub	sp, sp, #4	; 0x4
         fe180:	e3a00000 	mov	r0, #0	; 0x0
         fe184:	e594201e 	ldr	r2, [r4, #30]	; fField30
         fe188:	e1a02822 	mov	r2, r2, lsr #16
         fe18c:	e1520001 	cmp	r2, r1
         fe190:	3a000002 	bcc	fe1a0 <TLink::SetNetwork(unsigned long, unsigned long)+0x38>
         fe194:	e1520005 	cmp	r2, r5
         fe198:	93a00000 	movls	r0, #0	; 0x0
         fe19c:	9a000016 	bls	fe1fc <TLink::SetNetwork(unsigned long, unsigned long)+0x94>
         fe1a0:	e58d1000 	str	r1, [sp]
         fe1a4:	e1510005 	cmp	r1, r5
         fe1a8:	8a000013 	bhi	fe1fc <TLink::SetNetwork(unsigned long, unsigned long)+0x94>
         fe1ac:	e284601d 	add	r6, r4, #29	; 0x1d
         fe1b0:	e5941014 	ldr	r1, [r4, #20]	; fField20
         fe1b4:	e3310002 	teq	r1, #2	; 0x2
         fe1b8:	15d4101c 	ldrneb	r1, [r4, #28]	; fField28
         fe1bc:	13310000 	teqne	r1, #0	; 0x0
         fe1c0:	1a000003 	bne	fe1d4 <TLink::SetNetwork(unsigned long, unsigned long)+0x6c>
         fe1c4:	e1a01006 	mov	r1, r6
         fe1c8:	e1a0200d 	mov	r2, sp
         fe1cc:	e5940048 	ldr	r0, [r4, #72]	; fField72
         fe1d0:	eb0a1cae 	bl	385490 <PLink::AcquireNodeAddress(unsigned char &, unsigned long &)>
         fe1d4:	e3300000 	teq	r0, #0	; 0x0
         fe1d8:	e59d1000 	ldr	r1, [sp]
         fe1dc:	05c4101f 	streqb	r1, [r4, #31]	; fField31
         fe1e0:	01a01441 	moveq	r1, r1, asr #8
         fe1e4:	05c4101e 	streqb	r1, [r4, #30]	; fField30
         fe1e8:	0a000003 	beq	fe1fc <TLink::SetNetwork(unsigned long, unsigned long)+0x94>
         fe1ec:	e2811001 	add	r1, r1, #1	; 0x1
         fe1f0:	e58d1000 	str	r1, [sp]
         fe1f4:	e1510005 	cmp	r1, r5
         fe1f8:	9affffec 	bls	fe1b0 <TLink::SetNetwork(unsigned long, unsigned long)+0x48>
         fe1fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLink::SetNetwork(unsigned short)
 * Address: 000fe200
 */
TLink::SetNetwork(unsigned short) {
    /*
         fe200:	e1a01801 	mov	r1, r1, lsl #16
         fe204:	e1a01821 	mov	r1, r1, lsr #16
         fe208:	e1a02001 	mov	r2, r1
         fe20c:	ea66203c 	b	1a86304 <TLink::$SetNetwork(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TLink::GetZoneName(TGetZoneNameReply *)
 * Address: 000fe210
 */
TLink::GetZoneName(TGetZoneNameReply *) {
    /*
         fe210:	e1a0c00d 	mov	ip, sp
         fe214:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         fe218:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe21c:	e2802024 	add	r2, r0, #36	; 0x24
         fe220:	e2810014 	add	r0, r1, #20	; 0x14
         fe224:	e1a01002 	mov	r1, r2
         fe228:	eb65cd96 	bl	1a71888 <TString32::$__as(TString32 const &)>
         fe22c:	e3a00000 	mov	r0, #0	; 0x0
         fe230:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLink::SetZoneName(TSetZoneNameMessage *)
 * Address: 000fe234
 */
TLink::SetZoneName(TSetZoneNameMessage *) {
    /*
         fe234:	e1a0c00d 	mov	ip, sp
         fe238:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         fe23c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe240:	e2811018 	add	r1, r1, #24	; 0x18
         fe244:	e2800024 	add	r0, r0, #36	; 0x24
         fe248:	eb65cd8e 	bl	1a71888 <TString32::$__as(TString32 const &)>
         fe24c:	e3a00000 	mov	r0, #0	; 0x0
         fe250:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

