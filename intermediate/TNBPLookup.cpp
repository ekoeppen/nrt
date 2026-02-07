#include "include/TNBPLookup.h"

/**
 * Symbol: TNBPLookup::__ct(void)
 * Address: 00115cb8
 */
TNBPLookup::TNBPLookup(void) {
    /*
        115cb8:	e1a0c00d 	mov	ip, sp
        115cbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        115cc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        115cc4:	e1b04000 	movs	r4, r0
        115cc8:	1a000003 	bne	115cdc <TNBPLookup::__ct(void)+0x24>
        115ccc:	e3a00f55 	mov	r0, #340	; 0x154
        115cd0:	eb6ae298 	bl	1bce738 <$__nw(unsigned int)>
        115cd4:	e1b04000 	movs	r4, r0
        115cd8:	0a000022 	beq	115d68 <TNBPLookup::__ct(void)+0xb0>
        115cdc:	e1a00004 	mov	r0, r4
        115ce0:	eb656efb 	bl	1a718d4 <TNBPRetryInfo::$__ct(void)>
        115ce4:	e3a05000 	mov	r5, #0	; 0x0
        115ce8:	e5c45020 	strb	r5, [r4, #32]
        115cec:	e584501c 	str	r5, [r4, #28]
        115cf0:	e284002c 	add	r0, r4, #44	; 0x2c
        115cf4:	e3a01001 	mov	r1, #1	; 0x1
        115cf8:	eb6b772b 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        115cfc:	e284003c 	add	r0, r4, #60	; 0x3c
        115d00:	e3a01001 	mov	r1, #1	; 0x1
        115d04:	eb6b7728 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        115d08:	e2840048 	add	r0, r4, #72	; 0x48
        115d0c:	eb656eed 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        115d10:	e2840084 	add	r0, r4, #132	; 0x84
        115d14:	eb656ef4 	bl	1a718ec <TNBPEntityName::$__ct(void)>
        115d18:	e28400f0 	add	r0, r4, #240	; 0xf0
        115d1c:	eb656ee1 	bl	1a718a8 <TCompletion::$__ct(void)>
        115d20:	e2840f43 	add	r0, r4, #268	; 0x10c
        115d24:	eb6ade60 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        115d28:	e2840f47 	add	r0, r4, #284	; 0x11c
        115d2c:	eb6b3941 	bl	1be4238 <TAEvent::$__ct(void)>
        115d30:	e59f0038 	ldr	r0, [pc, #38]	; 115d70 <TNBPLookup::__ct(void)+0xb8>
        115d34:	e584011c 	str	r0, [r4, #284]	; fField284
        115d38:	e5845128 	str	r5, [r4, #296]
        115d3c:	e5845124 	str	r5, [r4, #292]
        115d40:	e59f002c 	ldr	r0, [pc, #2c]	; 115d74 <TNBPLookup::__ct(void)+0xbc>
        115d44:	e5840120 	str	r0, [r4, #288]	; fField288
        115d48:	e3a00004 	mov	r0, #4	; 0x4
        115d4c:	e2800b01 	add	r0, r0, #1024	; 0x400
        115d50:	e584012c 	str	r0, [r4, #300]	; fField300
        115d54:	e2840f4d 	add	r0, r4, #308	; 0x134
        115d58:	eb6b392d 	bl	1be4214 <CShadowRingBuffer::$__ct(void)>
        115d5c:	e5845024 	str	r5, [r4, #36]	; fField36
        115d60:	e5c45038 	strb	r5, [r4, #56]	; fField56
        115d64:	e5845150 	str	r5, [r4, #336]
        115d68:	e1a00004 	mov	r0, r4
        115d6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        115d70:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        115d74:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: TNBPLookup::__dt(void)
 * Address: 00115d78
 */
TNBPLookup::~TNBPLookup(void) {
    /*
        115d78:	e1a0c00d 	mov	ip, sp
        115d7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        115d80:	e24cb004 	sub	fp, ip, #4	; 0x4
        115d84:	e1a04000 	mov	r4, r0
        115d88:	e1a05001 	mov	r5, r1
        115d8c:	eb65a89f 	bl	1a80010 <TNBPLookup::$StopTimer(void)>
        115d90:	e2840f4d 	add	r0, r4, #308	; 0x134
        115d94:	e3a01000 	mov	r1, #0	; 0x0
        115d98:	eb6b3936 	bl	1be4278 <CShadowRingBuffer::$__dt(void)>
        115d9c:	e2840f43 	add	r0, r4, #268	; 0x10c
        115da0:	e3a01000 	mov	r1, #0	; 0x0
        115da4:	eb6ae259 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        115da8:	e2840048 	add	r0, r4, #72	; 0x48
        115dac:	e3a01000 	mov	r1, #0	; 0x0
        115db0:	eb6ae256 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        115db4:	e284001c 	add	r0, r4, #28	; 0x1c
        115db8:	e3a01000 	mov	r1, #0	; 0x0
        115dbc:	eb6ae258 	bl	1bce724 <TUObject::$__dt(void)>
        115dc0:	e3150001 	tst	r5, #1	; 0x1
        115dc4:	11a00004 	movne	r0, r4
        115dc8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        115dcc:	1a6ade43 	bne	1bcd6e0 <$__dl(void *)>
        115dd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookup::UpdateBuffer(unsigned long)
 * Address: 00115dd4
 */
TNBPLookup::UpdateBuffer(unsigned long) {
    /*
        115dd4:	e2802f4d 	add	r2, r0, #308	; 0x134
        115dd8:	e1a00002 	mov	r0, r2
        115ddc:	e5922000 	ldr	r2, [r2]
        115de0:	e282f048 	add	pc, r2, #72	; 0x48
    */
}

/**
 * Symbol: TNBPLookup::Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long)
 * Address: 00116354
 */
TNBPLookup::Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long) {
    /*
        116354:	e1a0c00d 	mov	ip, sp
        116358:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11635c:	e24cb004 	sub	fp, ip, #4	; 0x4
        116360:	e1a04000 	mov	r4, r0
        116364:	e1a05001 	mov	r5, r1
        116368:	e1a00002 	mov	r0, r2
        11636c:	e28b900c 	add	r9, fp, #12	; 0xc
        116370:	e8990380 	ldmia	r9, {r7, r8, r9}
        116374:	e59ba008 	ldr	sl, [fp, #8]
        116378:	e59be004 	ldr	lr, [fp, #4]
        11637c:	e5c43018 	strb	r3, [r4, #24]	; fField24
        116380:	e28460f0 	add	r6, r4, #240	; 0xf0
        116384:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        116388:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
        11638c:	e89e100c 	ldmia	lr, {r2, r3, ip}
        116390:	e886100c 	stmia	r6, {r2, r3, ip}
        116394:	e284201c 	add	r2, r4, #28	; 0x1c
        116398:	e1a01000 	mov	r1, r0
        11639c:	e1a00002 	mov	r0, r2
        1163a0:	eb6ae928 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1163a4:	e2846084 	add	r6, r4, #132	; 0x84
        1163a8:	e1a01007 	mov	r1, r7
        1163ac:	e1a00006 	mov	r0, r6
        1163b0:	eb656d34 	bl	1a71888 <TString32::$__as(TString32 const &)>
        1163b4:	e2860024 	add	r0, r6, #36	; 0x24
        1163b8:	e2871024 	add	r1, r7, #36	; 0x24
        1163bc:	eb656d31 	bl	1a71888 <TString32::$__as(TString32 const &)>
        1163c0:	e2860048 	add	r0, r6, #72	; 0x48
        1163c4:	e2871048 	add	r1, r7, #72	; 0x48
        1163c8:	eb656d2e 	bl	1a71888 <TString32::$__as(TString32 const &)>
        1163cc:	e284003c 	add	r0, r4, #60	; 0x3c
        1163d0:	e1a0100a 	mov	r1, sl
        1163d4:	eb6b7575 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1163d8:	e5980000 	ldr	r0, [r8]
        1163dc:	e5840010 	str	r0, [r4, #16]	; fField16
        1163e0:	e5840014 	str	r0, [r4, #20]	; fField20
        1163e4:	e1a00004 	mov	r0, r4
        1163e8:	e898500c 	ldmia	r8, {r2, r3, ip, lr}
        1163ec:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1163f0:	e5845028 	str	r5, [r4, #40]	; fField40
        1163f4:	e3350002 	teq	r5, #2	; 0x2
        1163f8:	0a000006 	beq	116418 <TNBPLookup::Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long)+0xc4>
        1163fc:	e2840f4d 	add	r0, r4, #308	; 0x134
        116400:	e1a01009 	mov	r1, r9
        116404:	e3a03000 	mov	r3, #0	; 0x0
        116408:	e3a02000 	mov	r2, #0	; 0x0
        11640c:	eb6b4c2a 	bl	1be94bc <CShadowRingBuffer::$Init(unsigned long, long, long)>
        116410:	e3300000 	teq	r0, #0	; 0x0
        116414:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        116418:	e2840f43 	add	r0, r4, #268	; 0x10c
        11641c:	e3a01001 	mov	r1, #1	; 0x1
        116420:	eb6afd9b 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        116424:	e3300000 	teq	r0, #0	; 0x0
        116428:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11642c:	e59f1018 	ldr	r1, [pc, #18]	; 11644c <TNBPLookup::Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long)+0xf8>
        116430:	e584111c 	str	r1, [r4, #284]	; fField284
        116434:	e59f1014 	ldr	r1, [pc, #14]	; 116450 <TNBPLookup::Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long)+0xfc>
        116438:	e5841120 	str	r1, [r4, #288]	; fField288
        11643c:	e3a01004 	mov	r1, #4	; 0x4
        116440:	e2811b01 	add	r1, r1, #1024	; 0x400
        116444:	e5a4112c 	str	r1, [r4, #300]!	; fField300
        116448:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11644c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        116450:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: TNBPLookup::ResetLookupInfo(void)
 * Address: 00116748
 */
TNBPLookup::ResetLookupInfo(void) {
    /*
        116748:	e1a0c00d 	mov	ip, sp
        11674c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        116750:	e24cb004 	sub	fp, ip, #4	; 0x4
        116754:	e1a04000 	mov	r4, r0
        116758:	e24dd00c 	sub	sp, sp, #12	; 0xc
        11675c:	e1a0000d 	mov	r0, sp
        116760:	e3a01001 	mov	r1, #1	; 0x1
        116764:	eb6b7490 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        116768:	e284003c 	add	r0, r4, #60	; 0x3c
        11676c:	e1a07000 	mov	r7, r0
        116770:	e5900004 	ldr	r0, [r0, #4]
        116774:	e1a0100d 	mov	r1, sp
        116778:	eb65916c 	bl	1a7ad30 <$GetRouterAddress(unsigned long, TAddress &)>
        11677c:	e1a06000 	mov	r6, r0
        116780:	e280cdc3 	add	ip, r0, #12480	; 0x30c0
        116784:	e37c0019 	cmn	ip, #25	; 0x19
        116788:	13360000 	teqne	r6, #0	; 0x0
        11678c:	0a000001 	beq	116798 <TNBPLookup::ResetLookupInfo(void)+0x50>
        116790:	e1a00006 	mov	r0, r6
        116794:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        116798:	e3360000 	teq	r6, #0	; 0x0
        11679c:	13a00000 	movne	r0, #0	; 0x0
        1167a0:	03a00001 	moveq	r0, #1	; 0x1
        1167a4:	e31000ff 	tst	r0, #255	; 0xff
        1167a8:	e3a06000 	mov	r6, #0	; 0x0
        1167ac:	e3a08002 	mov	r8, #2	; 0x2
        1167b0:	e284502c 	add	r5, r4, #44	; 0x2c
        1167b4:	0a000008 	beq	1167dc <TNBPLookup::ResetLookupInfo(void)+0x94>
        1167b8:	e3a00001 	mov	r0, #1	; 0x1
        1167bc:	e5c40038 	strb	r0, [r4, #56]	; fField56
        1167c0:	e1a00005 	mov	r0, r5
        1167c4:	e1a0100d 	mov	r1, sp
        1167c8:	eb6b7478 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1167cc:	e5c5800b 	strb	r8, [r5, #11]
        1167d0:	e1a00004 	mov	r0, r4
        1167d4:	eb657894 	bl	1a74a2c <TNBPLookup::$AdjustZoneName(void)>
        1167d8:	ea000015 	b	116834 <TNBPLookup::ResetLookupInfo(void)+0xec>
        1167dc:	e5c48038 	strb	r8, [r4, #56]	; fField56
        1167e0:	e1a01007 	mov	r1, r7
        1167e4:	e1a00005 	mov	r0, r5
        1167e8:	eb6b7470 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1167ec:	e59d1004 	ldr	r1, [sp, #4]
        1167f0:	e5851004 	str	r1, [r5, #4]
        1167f4:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        1167f8:	e3300001 	teq	r0, #1	; 0x1
        1167fc:	1a00000c 	bne	116834 <TNBPLookup::ResetLookupInfo(void)+0xec>
        116800:	e24dd008 	sub	sp, sp, #8	; 0x8
        116804:	e1a00001 	mov	r0, r1
        116808:	e1a0200d 	mov	r2, sp
        11680c:	e28d1004 	add	r1, sp, #4	; 0x4
        116810:	eb658d34 	bl	1a79ce8 <$GetAddress(unsigned long, unsigned short &, unsigned char &)>
        116814:	e1a06000 	mov	r6, r0
        116818:	e59d1006 	ldr	r1, [sp, #6]
        11681c:	e1a01801 	mov	r1, r1, lsl #16
        116820:	e1a01821 	mov	r1, r1, lsr #16
        116824:	e5c51009 	strb	r1, [r5, #9]
        116828:	e1a01441 	mov	r1, r1, asr #8
        11682c:	e5c51008 	strb	r1, [r5, #8]
        116830:	e28dd008 	add	sp, sp, #8	; 0x8
        116834:	e5d70001 	ldrb	r0, [r7, #1]
        116838:	e5c50001 	strb	r0, [r5, #1]
        11683c:	eaffffd3 	b	116790 <TNBPLookup::ResetLookupInfo(void)+0x48>
    */
}

/**
 * Symbol: TNBPLookup::StartTimer(unsigned char)
 * Address: 00116840
 */
TNBPLookup::StartTimer(unsigned char) {
    /*
        116840:	e1a0c00d 	mov	ip, sp
        116844:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        116848:	e24cb004 	sub	fp, ip, #4	; 0x4
        11684c:	e1a04000 	mov	r4, r0
        116850:	e31100ff 	tst	r1, #255	; 0xff
        116854:	11a00004 	movne	r0, r4
        116858:	1b65a5ec 	blne	1a80010 <TNBPLookup::$StopTimer(void)>
        11685c:	e5d43018 	ldrb	r3, [r4, #24]	; fField24
        116860:	e3a02002 	mov	r2, #2	; 0x2
        116864:	e3a01001 	mov	r1, #1	; 0x1
        116868:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        11686c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        116870:	e1a00004 	mov	r0, r4
        116874:	eb6580ba 	bl	1a76b64 <TNBPRetryInfo::$CalculateDuration(unsigned long)>
        116878:	e1a05000 	mov	r5, r0
        11687c:	eb6af454 	bl	1bd39d4 <$GetGlobals>
        116880:	eb6b46ed 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        116884:	e1a01000 	mov	r1, r0
        116888:	e2840048 	add	r0, r4, #72	; 0x48
        11688c:	e1a04000 	mov	r4, r0
        116890:	e59f2010 	ldr	r2, [pc, #10]	; 1168a8 <TNBPLookup::StartTimer(unsigned char)+0x68>
        116894:	e1a03005 	mov	r3, r5
        116898:	eb659545 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        11689c:	e1a00004 	mov	r0, r4
        1168a0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1168a4:	ea65a5d3 	b	1a7fff8 <TMessageTimer::$Start(void)>
        1168a8:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: TNBPLookup::DecrementRetries(void)
 * Address: 001168ac
 */
TNBPLookup::DecrementRetries(void) {
    /*
        1168ac:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1168b0:	e3710001 	cmn	r1, #1	; 0x1
        1168b4:	12411001 	subne	r1, r1, #1	; 0x1
        1168b8:	15801010 	strne	r1, [r0, #16]	; fField16
        1168bc:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1168c0:	e2411001 	sub	r1, r1, #1	; 0x1
        1168c4:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1168c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPLookup::StopTimer(void)
 * Address: 001168cc
 */
TNBPLookup::StopTimer(void) {
    /*
        1168cc:	e2800048 	add	r0, r0, #72	; 0x48
        1168d0:	ea65a5cd 	b	1a8000c <TMessageTimer::$Stop(void)>
    */
}

/**
 * Symbol: TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)
 * Address: 001168d4
 */
TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long) {
    /*
        1168d4:	e1a0c00d 	mov	ip, sp
        1168d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1168dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1168e0:	e1a04000 	mov	r4, r0
        1168e4:	e1a06002 	mov	r6, r2
        1168e8:	e1a05003 	mov	r5, r3
        1168ec:	e20180ff 	and	r8, r1, #255	; 0xff
        1168f0:	e3a07000 	mov	r7, #0	; 0x0
        1168f4:	e59ba004 	ldr	sl, [fp, #4]
        1168f8:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1168fc:	e0800008 	add	r0, r0, r8
        116900:	e5840024 	str	r0, [r4, #36]	; fField36
        116904:	e5940028 	ldr	r0, [r4, #40]	; fField40
        116908:	e3300002 	teq	r0, #2	; 0x2
        11690c:	0a000031 	beq	1169d8 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0x104>
        116910:	e2840f4d 	add	r0, r4, #308	; 0x134
        116914:	e1a09000 	mov	r9, r0
        116918:	e5901000 	ldr	r1, [r0]
        11691c:	e1a0e00f 	mov	lr, pc
        116920:	e281f03c 	add	pc, r1, #60	; 0x3c
        116924:	e1500005 	cmp	r0, r5
        116928:	3a00002c 	bcc	1169e0 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0x10c>
        11692c:	e52d5004 	str	r5, [sp, -#4]!
        116930:	e1a0200d 	mov	r2, sp
        116934:	e1a01006 	mov	r1, r6
        116938:	e1a00009 	mov	r0, r9
        11693c:	e5993000 	ldr	r3, [r9]
        116940:	e1a0e00f 	mov	lr, pc
        116944:	e283f024 	add	pc, r3, #36	; 0x24
        116948:	e1b07000 	movs	r7, r0
        11694c:	1a00001d 	bne	1169c8 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0xf4>
        116950:	eb6af41f 	bl	1bd39d4 <$GetGlobals>
        116954:	eb659946 	bl	1a7ce74 <TAppleTalkWorld::$NewMessage(void)>
        116958:	e3300000 	teq	r0, #0	; 0x0
        11695c:	03a070a8 	moveq	r7, #168	; 0xa8
        116960:	02477b07 	subeq	r7, r7, #7168	; 0x1c00
        116964:	0a000017 	beq	1169c8 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0xf4>
        116968:	e2801080 	add	r1, r0, #128	; 0x80
        11696c:	e59f205c 	ldr	r2, [pc, #5c]	; 1169d0 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0xfc>
        116970:	e5812000 	str	r2, [r1]
        116974:	e59f2058 	ldr	r2, [pc, #58]	; 1169d4 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0x100>
        116978:	e3a03003 	mov	r3, #3	; 0x3
        11697c:	e2833b01 	add	r3, r3, #1024	; 0x400
        116980:	e5812004 	str	r2, [r1, #4]
        116984:	e5813010 	str	r3, [r1, #16]	; fField16
        116988:	e59430fc 	ldr	r3, [r4, #252]	; fField252
        11698c:	e5812014 	str	r2, [r1, #20]	; fField20
        116990:	e581300c 	str	r3, [r1, #12]
        116994:	e5d42018 	ldrb	r2, [r4, #24]	; fField24
        116998:	e5812018 	str	r2, [r1, #24]	; fField24
        11699c:	e5c1801c 	strb	r8, [r1, #28]
        1169a0:	e3a03000 	mov	r3, #0	; 0x0
        1169a4:	e5a1a020 	str	sl, [r1, #32]!
        1169a8:	e5815004 	str	r5, [r1, #4]
        1169ac:	e92d0008 	stmdb	sp!, {r3}
        1169b0:	e284101c 	add	r1, r4, #28	; 0x1c
        1169b4:	e3a03502 	mov	r3, #8388608	; 0x800000
        1169b8:	e3a02028 	mov	r2, #40	; 0x28
        1169bc:	eb65a16b 	bl	1a7ef70 <TATAsyncMsg::$Send(TUPort *, unsigned long, unsigned long, unsigned long)>
        1169c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1169c4:	e1a07000 	mov	r7, r0
        1169c8:	e28dd004 	add	sp, sp, #4	; 0x4
        1169cc:	ea000003 	b	1169e0 <TNBPLookup::HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)+0x10c>
        1169d0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1169d4:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        1169d8:	e3e07017 	mvn	r7, #23	; 0x17
        1169dc:	e2477a03 	sub	r7, r7, #12288	; 0x3000
        1169e0:	e1a00007 	mov	r0, r7
        1169e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookup::AdjustZoneName(void)
 * Address: 001169e8
 */
TNBPLookup::AdjustZoneName(void) {
    /*
        1169e8:	e1a0c00d 	mov	ip, sp
        1169ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1169f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1169f4:	e1a04000 	mov	r4, r0
        1169f8:	e24dd024 	sub	sp, sp, #36	; 0x24
        1169fc:	e3a05000 	mov	r5, #0	; 0x0
        116a00:	e1a0000d 	mov	r0, sp
        116a04:	eb656fdb 	bl	1a72978 <TString32::$__ct(void)>
        116a08:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        116a0c:	e3300001 	teq	r0, #1	; 0x1
        116a10:	1a00000e 	bne	116a50 <TNBPLookup::AdjustZoneName(void)+0x68>
        116a14:	e28400cc 	add	r0, r4, #204	; 0xcc
        116a18:	e1a06000 	mov	r6, r0
        116a1c:	eb65887f 	bl	1a78c20 <TNBPZoneString::$DefaultZone( const(void))>
        116a20:	e3300000 	teq	r0, #0	; 0x0
        116a24:	0a000009 	beq	116a50 <TNBPLookup::AdjustZoneName(void)+0x68>
        116a28:	e1a0100d 	mov	r1, sp
        116a2c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        116a30:	eb6590c8 	bl	1a7ad58 <$GetZoneName(unsigned long, TString32 &)>
        116a34:	e1b05000 	movs	r5, r0
        116a38:	1a000004 	bne	116a50 <TNBPLookup::AdjustZoneName(void)+0x68>
        116a3c:	e5dd0000 	ldrb	r0, [sp]
        116a40:	e3500000 	cmp	r0, #0	; 0x0
        116a44:	c1a00006 	movgt	r0, r6
        116a48:	c1a0100d 	movgt	r1, sp
        116a4c:	cb656b8d 	blgt	1a71888 <TString32::$__as(TString32 const &)>
        116a50:	e1a00005 	mov	r0, r5
        116a54:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookup::Again(void)
 * Address: 00116a58
 */
TNBPLookup::Again(void) {
    /*
        116a58:	e1a0c00d 	mov	ip, sp
        116a5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        116a60:	e24cb004 	sub	fp, ip, #4	; 0x4
        116a64:	e1a04000 	mov	r4, r0
        116a68:	e5d00018 	ldrb	r0, [r0, #24]	; fField24
        116a6c:	e5840130 	str	r0, [r4, #304]	; fField304
        116a70:	eb6af3d7 	bl	1bd39d4 <$GetGlobals>
        116a74:	eb6b4670 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        116a78:	e1a0c000 	mov	ip, r0
        116a7c:	e284ef43 	add	lr, r4, #268	; 0x10c
        116a80:	e2844f47 	add	r4, r4, #284	; 0x11c
        116a84:	e3a02000 	mov	r2, #0	; 0x0
        116a88:	e3a03000 	mov	r3, #0	; 0x0
        116a8c:	e3a05000 	mov	r5, #0	; 0x0
        116a90:	e3a01000 	mov	r1, #0	; 0x0
        116a94:	e3a00001 	mov	r0, #1	; 0x1
        116a98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        116a9c:	e1a03005 	mov	r3, r5
        116aa0:	e3a02018 	mov	r2, #24	; 0x18
        116aa4:	e92d000c 	stmdb	sp!, {r2, r3}
        116aa8:	e1a03004 	mov	r3, r4
        116aac:	e1a0000c 	mov	r0, ip
        116ab0:	e3a02000 	mov	r2, #0	; 0x0
        116ab4:	e59e1000 	ldr	r1, [lr]
        116ab8:	eb6b10a2 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        116abc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

