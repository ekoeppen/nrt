#include "include/PMuxServiceStarter.h"

/**
 * Symbol: Sizeof__18PMuxServiceStarterSFv
 * Address: 0015459c
 */
void PMuxServiceStarter::Sizeof() {
    /*
        15459c:	e3a00014 	mov	r0, #20	; 0x14
        1545a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxServiceStarter::New(void)
 * Address: 001545a4
 */
PMuxServiceStarter::New(void) {
    /*
        1545a4:	e3a01000 	mov	r1, #0	; 0x0
        1545a8:	e5801010 	str	r1, [r0, #16]	; fField16
        1545ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxServiceStarter::Delete(void)
 * Address: 001545b0
 */
PMuxServiceStarter::Delete(void) {
    /*
        1545b0:	e1a0c00d 	mov	ip, sp
        1545b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1545b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1545bc:	e5b04010 	ldr	r4, [r0, #16]!	; fField16
        1545c0:	e3340000 	teq	r4, #0	; 0x0
        1545c4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1545c8:	e1a00004 	mov	r0, r4
        1545cc:	e3a01000 	mov	r1, #0	; 0x0
        1545d0:	eb69e853 	bl	1bce724 <TUObject::$__dt(void)>
        1545d4:	e1a00004 	mov	r0, r4
        1545d8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1545dc:	ea69e43f 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)
 * Address: 001545e0
 */
PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long) {
    /*
        1545e0:	e1a0c00d 	mov	ip, sp
        1545e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1545e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1545ec:	e1a04000 	mov	r4, r0
        1545f0:	e1a05001 	mov	r5, r1
        1545f4:	e1a07002 	mov	r7, r2
        1545f8:	e1a06003 	mov	r6, r3
        1545fc:	e3a00008 	mov	r0, #8	; 0x8
        154600:	e59b8008 	ldr	r8, [fp, #8]
        154604:	e59ba004 	ldr	sl, [fp, #4]
        154608:	eb69e84a 	bl	1bce738 <$__nw(unsigned int)>
        15460c:	e3a09000 	mov	r9, #0	; 0x0
        154610:	e3500000 	cmp	r0, #0	; 0x0
        154614:	15c09004 	strneb	r9, [r0, #4]
        154618:	15809000 	strne	r9, [r0]
        15461c:	e5840010 	str	r0, [r4, #16]	; fField16
        154620:	1a000002 	bne	154630 <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x50>
        154624:	eb6a36bd 	bl	1be2120 <$MemError>
        154628:	e1a06000 	mov	r6, r0
        15462c:	ea000034 	b	154704 <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x124>
        154630:	e1a03008 	mov	r3, r8
        154634:	e1a02006 	mov	r2, r6
        154638:	e1a01007 	mov	r1, r7
        15463c:	e1a00004 	mov	r0, r4
        154640:	eb000031 	bl	15470c <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)>
        154644:	e1b06000 	movs	r6, r0
        154648:	1a00002d 	bne	154704 <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x124>
        15464c:	e3a060e9 	mov	r6, #233	; 0xe9
        154650:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        154654:	e3a00000 	mov	r0, #0	; 0x0
        154658:	eb6a6c5f 	bl	1bef7dc <TCommToolOpenRequest::$__ct(void)>
        15465c:	e1b07000 	movs	r7, r0
        154660:	0a000025 	beq	1546fc <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x11c>
        154664:	e3a00000 	mov	r0, #0	; 0x0
        154668:	eb63640c 	bl	1a2d6a0 <TCommToolOpenReply::$__ct(void)>
        15466c:	e1b08000 	movs	r8, r0
        154670:	0a00001f 	beq	1546f4 <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x114>
        154674:	e587500c 	str	r5, [r7, #12]
        154678:	e5950000 	ldr	r0, [r5]
        15467c:	e5870010 	str	r0, [r7, #16]	; fField16
        154680:	e5c79014 	strb	r9, [r7, #20]
        154684:	e3a00000 	mov	r0, #0	; 0x0
        154688:	eb62c310 	bl	1a052d0 <TAsyncServiceMessage::$__ct(void)>
        15468c:	e1b05000 	movs	r5, r0
        154690:	0a000015 	beq	1546ec <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x10c>
        154694:	e1a0100a 	mov	r1, sl
        154698:	e1a00005 	mov	r0, r5
        15469c:	eb62c72a 	bl	1a0634c <TAsyncServiceMessage::$Init(TCMService *)>
        1546a0:	e1b06000 	movs	r6, r0
        1546a4:	1a000010 	bne	1546ec <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)+0x10c>
        1546a8:	e3a03004 	mov	r3, #4	; 0x4
        1546ac:	e3a02014 	mov	r2, #20	; 0x14
        1546b0:	e1a01008 	mov	r1, r8
        1546b4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1546b8:	e1a02007 	mov	r2, r7
        1546bc:	e1a00005 	mov	r0, r5
        1546c0:	e3a03018 	mov	r3, #24	; 0x18
        1546c4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1546c8:	eb62cb30 	bl	1a07390 <TAsyncServiceMessage::$Send(TUPort *, void *, unsigned long, void *, unsigned long, unsigned long)>
        1546cc:	e28dd00c 	add	sp, sp, #12	; 0xc
        1546d0:	e1b05000 	movs	r5, r0
        1546d4:	03a00001 	moveq	r0, #1	; 0x1
        1546d8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1546dc:	e1a00004 	mov	r0, r4
        1546e0:	eb633ee5 	bl	1a2427c <PMuxServiceStarter::$CloseMuxTool(void)>
        1546e4:	e1a00005 	mov	r0, r5
        1546e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1546ec:	e1a00008 	mov	r0, r8
        1546f0:	eb69e3fa 	bl	1bcd6e0 <$__dl(void *)>
        1546f4:	e1a00007 	mov	r0, r7
        1546f8:	eb69e3f8 	bl	1bcd6e0 <$__dl(void *)>
        1546fc:	e1a00004 	mov	r0, r4
        154700:	eb633edd 	bl	1a2427c <PMuxServiceStarter::$CloseMuxTool(void)>
        154704:	e1a00006 	mov	r0, r6
        154708:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)
 * Address: 0015470c
 */
PMuxServiceStarter::StartMuxTool(unsigned long, char *, long) {
    /*
        15470c:	e1a0c00d 	mov	ip, sp
        154710:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        154714:	e24cb004 	sub	fp, ip, #4	; 0x4
        154718:	e1a05000 	mov	r5, r0
        15471c:	e1a04001 	mov	r4, r1
        154720:	e1a07002 	mov	r7, r2
        154724:	e1a06003 	mov	r6, r3
        154728:	eb00002d 	bl	1547e4 <PMuxServiceStarter::SetMuxToolPort(unsigned long)>
        15472c:	e1b08000 	movs	r8, r0
        154730:	0a000025 	beq	1547cc <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0xc0>
        154734:	e1a01007 	mov	r1, r7
        154738:	e28f0f25 	add	r0, pc, #148	; 0x94
        15473c:	eb6a0d12 	bl	1bd7b8c <$NewByName__FPCcT1>
        154740:	e1b07000 	movs	r7, r0
        154744:	059f8094 	ldreq	r8, [pc, #94]	; 1547e0 <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0xd4>
        154748:	0a00001f 	beq	1547cc <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0xc0>
        15474c:	e1a03006 	mov	r3, r6
        154750:	e1a02007 	mov	r2, r7
        154754:	e1a01004 	mov	r1, r4
        154758:	e3a00000 	mov	r0, #0	; 0x0
        15475c:	eb6363d4 	bl	1a2d6b4 <TMuxTool::$__ct(unsigned long, PMuxTool *, long)>
        154760:	e1a06000 	mov	r6, r0
        154764:	e1a03004 	mov	r3, r4
        154768:	e3a0200d 	mov	r2, #13	; 0xd
        15476c:	e3a01e77 	mov	r1, #1904	; 0x770
        154770:	e2811a01 	add	r1, r1, #4096	; 0x1000
        154774:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        154778:	e3a03000 	mov	r3, #0	; 0x0
        15477c:	e3a02000 	mov	r2, #0	; 0x0
        154780:	e3a01001 	mov	r1, #1	; 0x1
        154784:	eb6a21b0 	bl	1bdce4c <TUTaskWorld::$StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long)>
        154788:	e28dd00c 	add	sp, sp, #12	; 0xc
        15478c:	e1b08000 	movs	r8, r0
        154790:	1a000003 	bne	1547a4 <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0x98>
        154794:	e1a01004 	mov	r1, r4
        154798:	e1a00005 	mov	r0, r5
        15479c:	eb000010 	bl	1547e4 <PMuxServiceStarter::SetMuxToolPort(unsigned long)>
        1547a0:	e1a08000 	mov	r8, r0
        1547a4:	e3360000 	teq	r6, #0	; 0x0
        1547a8:	0a000003 	beq	1547bc <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0xb0>
        1547ac:	e1a00006 	mov	r0, r6
        1547b0:	e3a01001 	mov	r1, #1	; 0x1
        1547b4:	e1a0e00f 	mov	lr, pc
        1547b8:	e596f000 	ldr	pc, [r6]
        1547bc:	e3380000 	teq	r8, #0	; 0x0
        1547c0:	13370000 	teqne	r7, #0	; 0x0
        1547c4:	11a00007 	movne	r0, r7
        1547c8:	1b08bd00 	blne	383bd0 <PMuxTool::Delete(void)>
        1547cc:	e1a00008 	mov	r0, r8
        1547d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1547d4:	504d7578 	subpl	r7, sp, r8, ror r5
        1547d8:	546f6f6c 	strplbt	r6, [pc], #f6c	; 1547e0 <PMuxServiceStarter::StartMuxTool(unsigned long, char *, long)+0xd4>
        1547dc:	00000000 	andeq	r0, r0, r0
        1547e0:	ffff9a6b 	swinv	0x00ff9a6b
    */
}

/**
 * Symbol: PMuxServiceStarter::SetMuxToolPort(unsigned long)
 * Address: 001547e4
 */
PMuxServiceStarter::SetMuxToolPort(unsigned long) {
    /*
        1547e4:	e1a0c00d 	mov	ip, sp
        1547e8:	e92dd813 	stmdb	sp!, {r0, r1, r4, fp, ip, lr, pc}
        1547ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1547f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1547f4:	e1a0100d 	mov	r1, sp
        1547f8:	e24b0014 	sub	r0, fp, #20	; 0x14
        1547fc:	e3a02004 	mov	r2, #4	; 0x4
        154800:	eb6a29d3 	bl	1bdef54 <$BlockMove>
        154804:	e3a04000 	mov	r4, #0	; 0x0
        154808:	e5cd4004 	strb	r4, [sp, #4]
        15480c:	e59f0074 	ldr	r0, [pc, #74]	; 154888 <PMuxServiceStarter::SetMuxToolPort(unsigned long)+0xa4>
        154810:	e52d000c 	str	r0, [sp, -#12]!
        154814:	e28d1004 	add	r1, sp, #4	; 0x4
        154818:	e1a0000d 	mov	r0, sp
        15481c:	e3a02004 	mov	r2, #4	; 0x4
        154820:	eb6a29cb 	bl	1bdef54 <$BlockMove>
        154824:	e5cd4008 	strb	r4, [sp, #8]
        154828:	e24dd010 	sub	sp, sp, #16	; 0x10
        15482c:	e1a0000d 	mov	r0, sp
        154830:	eb69e394 	bl	1bcd688 <TUNameServer::$__ct(void)>
        154834:	e28d3024 	add	r3, sp, #36	; 0x24
        154838:	e92d0008 	stmdb	sp!, {r3}
        15483c:	e28d302c 	add	r3, sp, #44	; 0x2c
        154840:	e28d2018 	add	r2, sp, #24	; 0x18
        154844:	e28d1020 	add	r1, sp, #32	; 0x20
        154848:	e28d0004 	add	r0, sp, #4	; 0x4
        15484c:	eb6a08c2 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        154850:	e28dd004 	add	sp, sp, #4	; 0x4
        154854:	e1a04000 	mov	r4, r0
        154858:	e1a0000d 	mov	r0, sp
        15485c:	e3a01000 	mov	r1, #0	; 0x0
        154860:	eb69e7a7 	bl	1bce704 <TUNameServer::$__dt(void)>
        154864:	e28dd010 	add	sp, sp, #16	; 0x10
        154868:	e3340000 	teq	r4, #0	; 0x0
        15486c:	1a000003 	bne	154880 <PMuxServiceStarter::SetMuxToolPort(unsigned long)+0x9c>
        154870:	e51b0018 	ldr	r0, [fp, -#24]
        154874:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154878:	e59d1018 	ldr	r1, [sp, #24]
        15487c:	eb69eff1 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        154880:	e1a00004 	mov	r0, r4
        154884:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        154888:	6d757820 	ldcvsl	8, cr7, [r5, -#128]!
    */
}

/**
 * Symbol: PMuxServiceStarter::CloseMuxTool(void)
 * Address: 0015488c
 */
PMuxServiceStarter::CloseMuxTool(void) {
    /*
        15488c:	e1a0c00d 	mov	ip, sp
        154890:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        154894:	e24cb004 	sub	fp, ip, #4	; 0x4
        154898:	e1a04000 	mov	r4, r0
        15489c:	e24dd020 	sub	sp, sp, #32	; 0x20
        1548a0:	e28d0014 	add	r0, sp, #20	; 0x14
        1548a4:	eb6a6bc9 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        1548a8:	e28d0004 	add	r0, sp, #4	; 0x4
        1548ac:	eb6a6bc0 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1548b0:	e3a00002 	mov	r0, #2	; 0x2
        1548b4:	e58d001c 	str	r0, [sp, #28]
        1548b8:	e28d0004 	add	r0, sp, #4	; 0x4
        1548bc:	e3a01010 	mov	r1, #16	; 0x10
        1548c0:	e3a02000 	mov	r2, #0	; 0x0
        1548c4:	e3a0c004 	mov	ip, #4	; 0x4
        1548c8:	e5b4e010 	ldr	lr, [r4, #16]!	; fField16
        1548cc:	e3a04000 	mov	r4, #0	; 0x0
        1548d0:	e3a03000 	mov	r3, #0	; 0x0
        1548d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1548d8:	e1a03004 	mov	r3, r4
        1548dc:	e1a0100c 	mov	r1, ip
        1548e0:	e3a0000c 	mov	r0, #12	; 0xc
        1548e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1548e8:	e28d3034 	add	r3, sp, #52	; 0x34
        1548ec:	e92d0008 	stmdb	sp!, {r3}
        1548f0:	e28d3024 	add	r3, sp, #36	; 0x24
        1548f4:	e1a0000e 	mov	r0, lr
        1548f8:	e3a02002 	mov	r2, #2	; 0x2
        1548fc:	e3a01001 	mov	r1, #1	; 0x1
        154900:	eb6a1911 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        154904:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__18PMuxServiceStarterSFv
 * Address: 00383b4c
 */
void PMuxServiceStarter::ClassInfo() {
    /*
        383b4c:	e24f0044 	sub	r0, pc, #68	; 0x44
        383b50:	e1a0f00e 	mov	pc, lr
        383b54:	e3a00000 	mov	r0, #0	; 0x0
        383b58:	e1a0f00e 	mov	pc, lr
        383b5c:	504d7578 	subpl	r7, sp, r8, ror r5
        383b60:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        383b64:	69636553 	stmvsdb	r3!, {r0, r1, r4, r6, r8, sl, sp, lr}^
        383b68:	74617274 	strvcbt	r7, [r1], -#628
        383b6c:	65720050 	ldrvsb	r0, [r2, -#80]!
        383b70:	4d757853 	ldcmil	8, cr7, [r5, -#332]!
        383b74:	65727669 	ldrvsb	r7, [r2, -#1641]!
        383b78:	63650000 	cmnvs	r5, #0	; 0x0
        383b7c:	00000000 	andeq	r0, r0, r0
        383b80:	eafffff1 	b	383b4c <ClassInfo__18PMuxServiceStarterSFv>
        383b84:	eaf74286 	b	1545a4 <PMuxServiceStarter::New(void)>
        383b88:	eaf74288 	b	1545b0 <PMuxServiceStarter::Delete(void)>
        383b8c:	eaf74293 	b	1545e0 <PMuxServiceStarter::OpenConnectionEnd(TOptionArray *, unsigned long, char *, TCMService *, long)>
        383b90:	e1a0000f 	mov	r0, pc
        383b94:	e1a0f00e 	mov	pc, lr
        383b98:	504d7578 	subpl	r7, sp, r8, ror r5
        383b9c:	546f6f6c 	strplbt	r6, [pc], #f6c	; 383ba4 <New__8PMuxToolSFPc>
        383ba0:	00000000 	andeq	r0, r0, r0
    */
}

