#include "DDKIncludes/Communications/PMuxCallBack.h"

/**
 * Symbol: TMuxTool::HandleReply(unsigned long, unsigned long)
 * Address: 0012463c
 */
void						TMuxTool::HandleReply(ULong userRefCon, ULong msgType) {
    /*
        12463c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxTool::OpenMux(void)
 * Address: 00124640
 */
TMuxTool::OpenMux(void) {
    /*
        124640:	e1a0c00d 	mov	ip, sp
        124644:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124648:	e24cb004 	sub	fp, ip, #4	; 0x4
        12464c:	e1a04000 	mov	r4, r0
        124650:	e3a00001 	mov	r0, #1	; 0x1
        124654:	e584001c 	str	r0, [r4, #28]	; fField28
        124658:	e5c40096 	strb	r0, [r4, #150]	; fField150
        12465c:	eb63fefb 	bl	1a24250 <$ClassInfo__19PMuxCallBackWrapperSFv>
        124660:	eb6ac945 	bl	1bd6b7c <TClassInfo::$New( const(void))>
        124664:	e1b05000 	movs	r5, r0
        124668:	1a000004 	bne	124680 <TMuxTool::OpenMux(void)+0x40>
        12466c:	e3a010e9 	mov	r1, #233	; 0xe9
        124670:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        124674:	e1a00004 	mov	r0, r4
        124678:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        12467c:	ea640f6a 	b	1a2842c <TMuxTool::$OpenMuxComplete(long)>
        124680:	e1a01004 	mov	r1, r4
        124684:	e1a00005 	mov	r0, r5
        124688:	eb097cc2 	bl	383998 <PMuxCallBack::Init(TMuxTool *)>
        12468c:	e2842024 	add	r2, r4, #36	; 0x24
        124690:	e1a01005 	mov	r1, r5
        124694:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        124698:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        12469c:	ea097d52 	b	383bec <PMuxTool::OpenMuxStart(PMuxCallBack *, TCommToolOpenRequest *)>
    */
}

/**
 * Symbol: TMuxTool::OpenMuxComplete(long)
 * Address: 001246a0
 */
void						TMuxTool::OpenMuxComplete(NewtonErr result);	// if result == noErr, the MuxTool moves to the open state {
    /*
        1246a0:	e3310000 	teq	r1, #0	; 0x0
        1246a4:	1a6402f5 	bne	1a25280 <TMuxTool::$CloseMux(void)>
        1246a8:	e3a01002 	mov	r1, #2	; 0x2
        1246ac:	e580101c 	str	r1, [r0, #28]	; fField28
        1246b0:	e3a01000 	mov	r1, #0	; 0x0
        1246b4:	e5c01096 	strb	r1, [r0, #150]	; fField150
        1246b8:	ea640f5a 	b	1a28428 <TMuxTool::$OpenConnectionEnd(void)>
    */
}

/**
 * Symbol: TMuxTool::CloseMux(void)
 * Address: 001246bc
 */
TMuxTool::CloseMux(void) {
    /*
        1246bc:	e3a01003 	mov	r1, #3	; 0x3
        1246c0:	e580101c 	str	r1, [r0, #28]	; fField28
        1246c4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1246c8:	ea63feea 	b	1a24278 <PMuxTool::$CloseMuxStart(void)>
    */
}

/**
 * Symbol: TMuxTool::CloseMuxComplete(long)
 * Address: 001246cc
 */
void						TMuxTool::CloseMuxComplete(NewtonErr result);	// If result == kCommErrToolBusy then leave the mux tool open {
    /*
        1246cc:	e1a02001 	mov	r2, r1
        1246d0:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
        1246d4:	e37c0003 	cmn	ip, #3	; 0x3
        1246d8:	01a0f00e 	moveq	pc, lr
        1246dc:	e3a01000 	mov	r1, #0	; 0x0
        1246e0:	e580101c 	str	r1, [r0, #28]	; fField28
        1246e4:	e3a01001 	mov	r1, #1	; 0x1
        1246e8:	e5c01094 	strb	r1, [r0, #148]	; fField148
        1246ec:	e5d01096 	ldrb	r1, [r0, #150]	; fField150
        1246f0:	e3310000 	teq	r1, #0	; 0x0
        1246f4:	12801064 	addne	r1, r0, #100	; 0x64
        1246f8:	1a6402e6 	bne	1a25298 <TMuxTool::$CompleteRequest(TUMsgToken &, long)>
        1246fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxTool::OpenConnectionEnd(void)
 * Address: 00124700
 */
TMuxTool::OpenConnectionEnd(void) {
    /*
        124700:	e1a0c00d 	mov	ip, sp
        124704:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124708:	e24cb004 	sub	fp, ip, #4	; 0x4
        12470c:	e1a04000 	mov	r4, r0
        124710:	e24dd004 	sub	sp, sp, #4	; 0x4
        124714:	e3a00000 	mov	r0, #0	; 0x0
        124718:	eb6423e2 	bl	1a2d6a8 <TConnectionEndEntry::$__ct(void)>
        12471c:	e3a050e9 	mov	r5, #233	; 0xe9
        124720:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        124724:	e58d0000 	str	r0, [sp]
        124728:	e3300000 	teq	r0, #0	; 0x0
        12472c:	0a000028 	beq	1247d4 <TMuxTool::OpenConnectionEnd(void)+0xd4>
        124730:	e5940018 	ldr	r0, [r4, #24]	; fField24
        124734:	eb097d32 	bl	383c04 <PMuxTool::NewConnectionEnd(void)>
        124738:	e1b06000 	movs	r6, r0
        12473c:	0a00001e 	beq	1247bc <TMuxTool::OpenConnectionEnd(void)+0xbc>
        124740:	e3a00000 	mov	r0, #0	; 0x0
        124744:	eb6423d0 	bl	1a2d68c <TConnectionEnd::$__ct(void)>
        124748:	e59d1000 	ldr	r1, [sp]
        12474c:	e5a10004 	str	r0, [r1, #4]!	; TMuxTool
        124750:	e3300000 	teq	r0, #0	; 0x0
        124754:	0a000015 	beq	1247b0 <TMuxTool::OpenConnectionEnd(void)+0xb0>
        124758:	e28410a8 	add	r1, r4, #168	; 0xa8
        12475c:	e1a07001 	mov	r7, r1
        124760:	e5913000 	ldr	r3, [r1]
        124764:	e92d0008 	stmdb	sp!, {r3}
        124768:	e1a03006 	mov	r3, r6
        12476c:	e5942018 	ldr	r2, [r4, #24]	; fField24
        124770:	e1a01004 	mov	r1, r4
        124774:	eb640b15 	bl	1a273d0 <TConnectionEnd::$Init(TMuxTool *, PMuxTool *, PConnectionEnd *, unsigned long)>
        124778:	e28dd004 	add	sp, sp, #4	; 0x4
        12477c:	e1b05000 	movs	r5, r0
        124780:	1a00000a 	bne	1247b0 <TMuxTool::OpenConnectionEnd(void)+0xb0>
        124784:	e1a00007 	mov	r0, r7
        124788:	e1a0200d 	mov	r2, sp
        12478c:	e3a03001 	mov	r3, #1	; 0x1
        124790:	e3a01000 	mov	r1, #0	; 0x0
        124794:	eb6b1357 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        124798:	e1b05000 	movs	r5, r0
        12479c:	1a000003 	bne	1247b0 <TMuxTool::OpenConnectionEnd(void)+0xb0>
        1247a0:	e59d0000 	ldr	r0, [sp]
        1247a4:	e5900004 	ldr	r0, [r0, #4]	; TMuxTool
        1247a8:	eb640f24 	bl	1a28440 <TConnectionEnd::$OpenStart(void)>
        1247ac:	ea00000d 	b	1247e8 <TMuxTool::OpenConnectionEnd(void)+0xe8>
        1247b0:	e3360000 	teq	r6, #0	; 0x0
        1247b4:	11a00006 	movne	r0, r6
        1247b8:	1b097bfa 	blne	3837a8 <PConnectionEnd::Delete(void)>
        1247bc:	e59d0000 	ldr	r0, [sp]
        1247c0:	e3300000 	teq	r0, #0	; 0x0
        1247c4:	0a000002 	beq	1247d4 <TMuxTool::OpenConnectionEnd(void)+0xd4>
        1247c8:	e3a01001 	mov	r1, #1	; 0x1
        1247cc:	e1a0e00f 	mov	lr, pc
        1247d0:	e590f000 	ldr	pc, [r0]
        1247d4:	e1a01005 	mov	r1, r5
        1247d8:	e1a00004 	mov	r0, r4
        1247dc:	e3a03000 	mov	r3, #0	; 0x0
        1247e0:	e3a02000 	mov	r2, #0	; 0x0
        1247e4:	eb640f0e 	bl	1a28424 <TMuxTool::$OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long)>
        1247e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long)
 * Address: 001247ec
 */
TMuxTool::OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long) {
    /*
        1247ec:	e1a0c00d 	mov	ip, sp
        1247f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1247f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1247f8:	e1a04000 	mov	r4, r0
        1247fc:	e1a06001 	mov	r6, r1
        124800:	e1a05002 	mov	r5, r2
        124804:	e1a07003 	mov	r7, r3
        124808:	e24dd014 	sub	sp, sp, #20	; 0x14
        12480c:	e1a0000d 	mov	r0, sp
        124810:	eb6423a2 	bl	1a2d6a0 <TCommToolOpenReply::$__ct(void)>
        124814:	e3360000 	teq	r6, #0	; 0x0
        124818:	e1a01005 	mov	r1, r5
        12481c:	e1a00004 	mov	r0, r4
        124820:	0a000002 	beq	124830 <TMuxTool::OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long)+0x44>
        124824:	e3a02000 	mov	r2, #0	; 0x0
        124828:	eb63fe8e 	bl	1a24268 <TMuxTool::$CloseConnectionEnd(TConnectionEnd *, PConnectionEnd *)>
        12482c:	ea000003 	b	124840 <TMuxTool::OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long)+0x54>
        124830:	eb6406c9 	bl	1a2635c <TMuxTool::$GetConnectionEndEntry(TConnectionEnd *)>
        124834:	e3a01001 	mov	r1, #1	; 0x1
        124838:	e58d7010 	str	r7, [sp, #16]	; fField16
        12483c:	e5c01008 	strb	r1, [r0, #8]
        124840:	e2841064 	add	r1, r4, #100	; 0x64
        124844:	e1a0300d 	mov	r3, sp
        124848:	e1a02006 	mov	r2, r6
        12484c:	e1a00004 	mov	r0, r4
        124850:	eb640291 	bl	1a2529c <TMuxTool::$CompleteRequest(TUMsgToken &, long, TCommToolReply &)>
        124854:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::CloseConnectionEnd(TConnectionEnd *, PConnectionEnd *)
 * Address: 00124858
 */
TMuxTool::CloseConnectionEnd(TConnectionEnd *, PConnectionEnd *) {
    /*
        124858:	e1a0c00d 	mov	ip, sp
        12485c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124860:	e24cb004 	sub	fp, ip, #4	; 0x4
        124864:	e1a04000 	mov	r4, r0
        124868:	e1a05002 	mov	r5, r2
        12486c:	e3310000 	teq	r1, #0	; 0x0
        124870:	0a000008 	beq	124898 <TMuxTool::CloseConnectionEnd(TConnectionEnd *, PConnectionEnd *)+0x40>
        124874:	e1a00004 	mov	r0, r4
        124878:	eb6406b7 	bl	1a2635c <TMuxTool::$GetConnectionEndEntry(TConnectionEnd *)>
        12487c:	e1a01000 	mov	r1, r0
        124880:	e1a00004 	mov	r0, r4
        124884:	eb641b47 	bl	1a2b5a8 <TMuxTool::$RemoveConnectionEndEntry(TConnectionEndEntry *)>
        124888:	e3350000 	teq	r5, #0	; 0x0
        12488c:	11a01005 	movne	r1, r5
        124890:	15940018 	ldrne	r0, [r4, #24]	; fField24
        124894:	1b097cdd 	blne	383c10 <PMuxTool::DisposeConnectionEnd(PConnectionEnd *)>
        124898:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        12489c:	e3300000 	teq	r0, #0	; 0x0
        1248a0:	01a00004 	moveq	r0, r4
        1248a4:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1248a8:	0a640274 	beq	1a25280 <TMuxTool::$CloseMux(void)>
        1248ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::HandleTimerTick(void)
 * Address: 001248b0
 */
TMuxTool::HandleTimerTick(void) {
    /*
        1248b0:	e1a0c00d 	mov	ip, sp
        1248b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1248b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1248bc:	e1a04000 	mov	r4, r0
        1248c0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1248c4:	e3300002 	teq	r0, #2	; 0x2
        1248c8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1248cc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1248d0:	eb097cd1 	bl	383c1c <PMuxTool::HandleTimerTick(void)>
        1248d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1248d8:	e28400a8 	add	r0, r4, #168	; 0xa8
        1248dc:	e1a06000 	mov	r6, r0
        1248e0:	e3a04000 	mov	r4, #0	; 0x0
        1248e4:	e5905000 	ldr	r5, [r0]
        1248e8:	e3550000 	cmp	r5, #0	; 0x0
        1248ec:	da00000e 	ble	12492c <TMuxTool::HandleTimerTick(void)+0x7c>
        1248f0:	e1a00006 	mov	r0, r6
        1248f4:	e1a0200d 	mov	r2, sp
        1248f8:	e1a01004 	mov	r1, r4
        1248fc:	e3a03001 	mov	r3, #1	; 0x1
        124900:	eb6b0ec7 	bl	1be8424 <CDynamicArray::$GetElementsAt(long, void *, long)>
        124904:	e3300000 	teq	r0, #0	; 0x0
        124908:	1a000004 	bne	124920 <TMuxTool::HandleTimerTick(void)+0x70>
        12490c:	e59d0000 	ldr	r0, [sp]
        124910:	e5d01008 	ldrb	r1, [r0, #8]
        124914:	e3310000 	teq	r1, #0	; 0x0
        124918:	15900004 	ldrne	r0, [r0, #4]	; TMuxTool
        12491c:	1b640aa3 	blne	1a273b0 <TConnectionEnd::$HandleTimerTick(void)>
        124920:	e2844001 	add	r4, r4, #1	; 0x1
        124924:	e1540005 	cmp	r4, r5
        124928:	bafffff0 	blt	1248f0 <TMuxTool::HandleTimerTick(void)+0x40>
        12492c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::RegisterPort(unsigned char)
 * Address: 00124930
 */
TMuxTool::RegisterPort(unsigned char) {
    /*
        124930:	e1a0c00d 	mov	ip, sp
        124934:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124938:	e24cb004 	sub	fp, ip, #4	; 0x4
        12493c:	e1a04000 	mov	r4, r0
        124940:	e20170ff 	and	r7, r1, #255	; 0xff
        124944:	e3a05000 	mov	r5, #0	; 0x0
        124948:	e5900018 	ldr	r0, [r0, #24]	; fField24
        12494c:	e3300000 	teq	r0, #0	; 0x0
        124950:	0a00002e 	beq	124a10 <TMuxTool::RegisterPort(unsigned char)+0xe0>
        124954:	e24dd00c 	sub	sp, sp, #12	; 0xc
        124958:	e5940098 	ldr	r0, [r4, #152]	; fField152
        12495c:	e58d0000 	str	r0, [sp]
        124960:	e28d1004 	add	r1, sp, #4	; 0x4
        124964:	e1a0000d 	mov	r0, sp
        124968:	e3a02004 	mov	r2, #4	; 0x4
        12496c:	eb6ae978 	bl	1bdef54 <$BlockMove>
        124970:	e3a06000 	mov	r6, #0	; 0x0
        124974:	e5cd6008 	strb	r6, [sp, #8]
        124978:	e59f0058 	ldr	r0, [pc, #58]	; 1249d8 <TMuxTool::RegisterPort(unsigned char)+0xa8>
        12497c:	e52d000c 	str	r0, [sp, -#12]!
        124980:	e28d1004 	add	r1, sp, #4	; 0x4
        124984:	e1a0000d 	mov	r0, sp
        124988:	e3a02004 	mov	r2, #4	; 0x4
        12498c:	eb6ae970 	bl	1bdef54 <$BlockMove>
        124990:	e5cd6008 	strb	r6, [sp, #8]
        124994:	e24dd010 	sub	sp, sp, #16	; 0x10
        124998:	e1a0000d 	mov	r0, sp
        12499c:	eb6aa339 	bl	1bcd688 <TUNameServer::$__ct(void)>
        1249a0:	e3370000 	teq	r7, #0	; 0x0
        1249a4:	0a00000c 	beq	1249dc <TMuxTool::RegisterPort(unsigned char)+0xac>
        1249a8:	e3a03000 	mov	r3, #0	; 0x0
        1249ac:	e92d0008 	stmdb	sp!, {r3}
        1249b0:	e28d2018 	add	r2, sp, #24	; 0x18
        1249b4:	e28d1024 	add	r1, sp, #36	; 0x24
        1249b8:	e28d0004 	add	r0, sp, #4	; 0x4
        1249bc:	e594308c 	ldr	r3, [r4, #140]	; fField140
        1249c0:	eb6ad0aa 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
        1249c4:	e28dd004 	add	sp, sp, #4	; 0x4
        1249c8:	e1b05000 	movs	r5, r0
        1249cc:	03a00001 	moveq	r0, #1	; 0x1
        1249d0:	05c40095 	streqb	r0, [r4, #149]	; fField149
        1249d4:	ea000009 	b	124a00 <TMuxTool::RegisterPort(unsigned char)+0xd0>
        1249d8:	6d757820 	ldcvsl	8, cr7, [r5, -#128]!	; fField128
        1249dc:	e5d40095 	ldrb	r0, [r4, #149]	; fField149
        1249e0:	e3300000 	teq	r0, #0	; 0x0
        1249e4:	0a000005 	beq	124a00 <TMuxTool::RegisterPort(unsigned char)+0xd0>
        1249e8:	e28d2014 	add	r2, sp, #20	; 0x14
        1249ec:	e28d1020 	add	r1, sp, #32	; 0x20
        1249f0:	e1a0000d 	mov	r0, sp
        1249f4:	eb6ae52d 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
        1249f8:	e1a05000 	mov	r5, r0
        1249fc:	e5c46095 	strb	r6, [r4, #149]	; fField149
        124a00:	e1a0000d 	mov	r0, sp
        124a04:	e3a01000 	mov	r1, #0	; 0x0
        124a08:	eb6aa73d 	bl	1bce704 <TUNameServer::$__dt(void)>
        124a0c:	e28dd028 	add	sp, sp, #40	; 0x28
        124a10:	e1a00005 	mov	r0, r5
        124a14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::__ct(unsigned long, PMuxTool *, long)
 * Address: 00124a18
 */
TMuxTool::TMuxTool(unsigned long, PMuxTool *, long) {
    /*
        124a18:	e1a0c00d 	mov	ip, sp
        124a1c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        124a20:	e24cb004 	sub	fp, ip, #4	; 0x4
        124a24:	e1b04000 	movs	r4, r0
        124a28:	e1a07001 	mov	r7, r1
        124a2c:	e1a06002 	mov	r6, r2
        124a30:	e1a05003 	mov	r5, r3
        124a34:	1a000003 	bne	124a48 <TMuxTool::__ct(unsigned long, PMuxTool *, long)+0x30>
        124a38:	e3a000c8 	mov	r0, #200	; 0xc8
        124a3c:	eb6aa73d 	bl	1bce738 <$__nw(unsigned int)>
        124a40:	e1b04000 	movs	r4, r0
        124a44:	0a000019 	beq	124ab0 <TMuxTool::__ct(unsigned long, PMuxTool *, long)+0x98>
        124a48:	e1a00004 	mov	r0, r4
        124a4c:	eb6a9f07 	bl	1bcc670 <TUTaskWorld::$__ct(void)>
        124a50:	e3a08000 	mov	r8, #0	; 0x0
        124a54:	e5848064 	str	r8, [r4, #100]
        124a58:	e5848070 	str	r8, [r4, #112]
        124a5c:	e5848068 	str	r8, [r4, #104]
        124a60:	e584806c 	str	r8, [r4, #108]
        124a64:	e2840074 	add	r0, r4, #116	; 0x74
        124a68:	eb6b6d61 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
        124a6c:	e5c48090 	strb	r8, [r4, #144]
        124a70:	e584808c 	str	r8, [r4, #140]	; fField140
        124a74:	e28400a8 	add	r0, r4, #168	; 0xa8
        124a78:	eb6af9d6 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        124a7c:	e59f0034 	ldr	r0, [pc, #34]	; 124ab8 <TMuxTool::__ct(unsigned long, PMuxTool *, long)+0xa0>
        124a80:	e5840000 	str	r0, [r4]
        124a84:	e58450a4 	str	r5, [r4, #164]	; fField164
        124a88:	e5846018 	str	r6, [r4, #24]	; fField24
        124a8c:	e5847098 	str	r7, [r4, #152]	; fField152
        124a90:	e58480a0 	str	r8, [r4, #160]	; fField160
        124a94:	e5c48094 	strb	r8, [r4, #148]	; fField148
        124a98:	e5c48095 	strb	r8, [r4, #149]	; fField149
        124a9c:	e584801c 	str	r8, [r4, #28]	; fField28
        124aa0:	e5c48096 	strb	r8, [r4, #150]	; fField150
        124aa4:	e3a009e1 	mov	r0, #3686400	; 0x384000
        124aa8:	e58400c0 	str	r0, [r4, #192]	; fField192
        124aac:	e58400c4 	str	r0, [r4, #196]	; fField196
        124ab0:	e1a00004 	mov	r0, r4
        124ab4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        124ab8:	00020190 	muleq	r2, r0, r1
    */
}

/**
 * Symbol: TMuxTool::CompleteRequest(TUMsgToken &, long)
 * Address: 00124abc
 */
TMuxTool::CompleteRequest(TUMsgToken &, long) {
    /*
        124abc:	e1a0c00d 	mov	ip, sp
        124ac0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        124ac8:	e1a04001 	mov	r4, r1
        124acc:	e1a05002 	mov	r5, r2
        124ad0:	e24dd010 	sub	sp, sp, #16	; 0x10
        124ad4:	e1a0000d 	mov	r0, sp
        124ad8:	eb6b2b35 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        124adc:	e5940004 	ldr	r0, [r4, #4]	; TMuxTool
        124ae0:	e3300000 	teq	r0, #0	; 0x0
        124ae4:	0a000005 	beq	124b00 <TMuxTool::CompleteRequest(TUMsgToken &, long)+0x44>
        124ae8:	e58d5008 	str	r5, [sp, #8]
        124aec:	e59d200c 	ldr	r2, [sp, #12]
        124af0:	e1a0100d 	mov	r1, sp
        124af4:	e1a00004 	mov	r0, r4
        124af8:	e3a03000 	mov	r3, #0	; 0x0
        124afc:	eb6ad47a 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        124b00:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::CompleteRequest(TUMsgToken &, long, TCommToolReply &)
 * Address: 00124b04
 */
TMuxTool::CompleteRequest(TUMsgToken &, long, TCommToolReply &) {
    /*
        124b04:	e5910004 	ldr	r0, [r1, #4]	; TMuxTool
        124b08:	e3300000 	teq	r0, #0	; 0x0
        124b0c:	01a0f00e 	moveq	pc, lr
        124b10:	e5832008 	str	r2, [r3, #8]
        124b14:	e593200c 	ldr	r2, [r3, #12]
        124b18:	e1a0c003 	mov	ip, r3
        124b1c:	e1a00001 	mov	r0, r1
        124b20:	e3a03000 	mov	r3, #0	; 0x0
        124b24:	e1a0100c 	mov	r1, ip
        124b28:	ea6ad46f 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TMuxTool::GetConnectionEndEntry(TConnectionEnd *)
 * Address: 00124b2c
 */
TMuxTool::GetConnectionEndEntry(TConnectionEnd *) {
    /*
        124b2c:	e1a0c00d 	mov	ip, sp
        124b30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124b34:	e24cb004 	sub	fp, ip, #4	; 0x4
        124b38:	e1a04001 	mov	r4, r1
        124b3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        124b40:	e28000a8 	add	r0, r0, #168	; 0xa8
        124b44:	e1a07000 	mov	r7, r0
        124b48:	e3a05000 	mov	r5, #0	; 0x0
        124b4c:	e5906000 	ldr	r6, [r0]
        124b50:	e3560000 	cmp	r6, #0	; 0x0
        124b54:	da00000d 	ble	124b90 <TMuxTool::GetConnectionEndEntry(TConnectionEnd *)+0x64>
        124b58:	e1a00007 	mov	r0, r7
        124b5c:	e1a0200d 	mov	r2, sp
        124b60:	e1a01005 	mov	r1, r5
        124b64:	e3a03001 	mov	r3, #1	; 0x1
        124b68:	eb6b0e2d 	bl	1be8424 <CDynamicArray::$GetElementsAt(long, void *, long)>
        124b6c:	e3300000 	teq	r0, #0	; 0x0
        124b70:	059d0000 	ldreq	r0, [sp]
        124b74:	05900004 	ldreq	r0, [r0, #4]	; TMuxTool
        124b78:	01300004 	teqeq	r0, r4
        124b7c:	059d0000 	ldreq	r0, [sp]
        124b80:	0a000003 	beq	124b94 <TMuxTool::GetConnectionEndEntry(TConnectionEnd *)+0x68>
        124b84:	e2855001 	add	r5, r5, #1	; 0x1
        124b88:	e1550006 	cmp	r5, r6
        124b8c:	bafffff1 	blt	124b58 <TMuxTool::GetConnectionEndEntry(TConnectionEnd *)+0x2c>
        124b90:	e3a00000 	mov	r0, #0	; 0x0
        124b94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::GetConnectionEndEntry(unsigned long)
 * Address: 00124b98
 */
TMuxTool::GetConnectionEndEntry(unsigned long) {
    /*
        124b98:	e1a0c00d 	mov	ip, sp
        124b9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        124ba4:	e1a04001 	mov	r4, r1
        124ba8:	e24dd004 	sub	sp, sp, #4	; 0x4
        124bac:	e28000a8 	add	r0, r0, #168	; 0xa8
        124bb0:	e1a07000 	mov	r7, r0
        124bb4:	e3a05000 	mov	r5, #0	; 0x0
        124bb8:	e5906000 	ldr	r6, [r0]
        124bbc:	e3560000 	cmp	r6, #0	; 0x0
        124bc0:	da00000f 	ble	124c04 <TMuxTool::GetConnectionEndEntry(unsigned long)+0x6c>
        124bc4:	e1a00007 	mov	r0, r7
        124bc8:	e1a0200d 	mov	r2, sp
        124bcc:	e1a01005 	mov	r1, r5
        124bd0:	e3a03001 	mov	r3, #1	; 0x1
        124bd4:	eb6b0e12 	bl	1be8424 <CDynamicArray::$GetElementsAt(long, void *, long)>
        124bd8:	e3300000 	teq	r0, #0	; 0x0
        124bdc:	1a000005 	bne	124bf8 <TMuxTool::GetConnectionEndEntry(unsigned long)+0x60>
        124be0:	e59d0000 	ldr	r0, [sp]
        124be4:	e5900004 	ldr	r0, [r0, #4]	; TMuxTool
        124be8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124bec:	e1300004 	teq	r0, r4
        124bf0:	059d0000 	ldreq	r0, [sp]
        124bf4:	0a000003 	beq	124c08 <TMuxTool::GetConnectionEndEntry(unsigned long)+0x70>
        124bf8:	e2855001 	add	r5, r5, #1	; 0x1
        124bfc:	e1550006 	cmp	r5, r6
        124c00:	baffffef 	blt	124bc4 <TMuxTool::GetConnectionEndEntry(unsigned long)+0x2c>
        124c04:	e3a00000 	mov	r0, #0	; 0x0
        124c08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *)
 * Address: 00124c0c
 */
TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *) {
    /*
        124c0c:	e1a0c00d 	mov	ip, sp
        124c10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        124c18:	e1a04001 	mov	r4, r1
        124c1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        124c20:	e28000a8 	add	r0, r0, #168	; 0xa8
        124c24:	e1a06000 	mov	r6, r0
        124c28:	e3a05000 	mov	r5, #0	; 0x0
        124c2c:	e5907000 	ldr	r7, [r0]
        124c30:	e3570000 	cmp	r7, #0	; 0x0
        124c34:	da000010 	ble	124c7c <TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *)+0x70>
        124c38:	e1a00006 	mov	r0, r6
        124c3c:	e1a0200d 	mov	r2, sp
        124c40:	e1a01005 	mov	r1, r5
        124c44:	e3a03001 	mov	r3, #1	; 0x1
        124c48:	eb6b0df5 	bl	1be8424 <CDynamicArray::$GetElementsAt(long, void *, long)>
        124c4c:	e3300000 	teq	r0, #0	; 0x0
        124c50:	059d0000 	ldreq	r0, [sp]
        124c54:	01300004 	teqeq	r0, r4
        124c58:	1a000004 	bne	124c70 <TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *)+0x64>
        124c5c:	e1a00006 	mov	r0, r6
        124c60:	e1a01005 	mov	r1, r5
        124c64:	e3a02001 	mov	r2, #1	; 0x1
        124c68:	eb6b1e71 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        124c6c:	ea000002 	b	124c7c <TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *)+0x70>
        124c70:	e2855001 	add	r5, r5, #1	; 0x1
        124c74:	e1550007 	cmp	r5, r7
        124c78:	baffffee 	blt	124c38 <TMuxTool::RemoveConnectionEndEntry(TConnectionEndEntry *)+0x2c>
        124c7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 00124c80
 */
NewtonErr					TMuxTool::InitAsyncRPCMsg(TUAsyncMessage& asyncMsg, ULong refCon);	// Initialize a TUAsyncMessage for async RPC {
    /*
        124c80:	e1a0c00d 	mov	ip, sp
        124c84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        124c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        124c8c:	e1a06000 	mov	r6, r0
        124c90:	e1a04001 	mov	r4, r1
        124c94:	e1a05002 	mov	r5, r2
        124c98:	e1a00001 	mov	r0, r1
        124c9c:	e3a01001 	mov	r1, #1	; 0x1
        124ca0:	eb6ac37b 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        124ca4:	e3300000 	teq	r0, #0	; 0x0
        124ca8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        124cac:	e1a01005 	mov	r1, r5
        124cb0:	e1a00004 	mov	r0, r4
        124cb4:	eb6ae055 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        124cb8:	e3300000 	teq	r0, #0	; 0x0
        124cbc:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        124cc0:	e1a00004 	mov	r0, r4
        124cc4:	e596108c 	ldr	r1, [r6, #140]	; fField140
        124cc8:	eb6adc30 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        124ccc:	e3300000 	teq	r0, #0	; 0x0
        124cd0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::__dt(void)
 * Address: 00124cd4
 */
TMuxTool::~TMuxTool(void) {
    /*
        124cd4:	e1a0c00d 	mov	ip, sp
        124cd8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        124cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        124ce0:	e1a04000 	mov	r4, r0
        124ce4:	e1a05001 	mov	r5, r1
        124ce8:	e59f005c 	ldr	r0, [pc, #5c]	; 124d4c <TMuxTool::__dt(void)+0x78>
        124cec:	e5840000 	str	r0, [r4]
        124cf0:	e3a06000 	mov	r6, #0	; 0x0
        124cf4:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        124cf8:	e3300000 	teq	r0, #0	; 0x0
        124cfc:	0a000004 	beq	124d14 <TMuxTool::__dt(void)+0x40>
        124d00:	e594009c 	ldr	r0, [r4, #156]	; fField156
        124d04:	eb6af91d 	bl	1be3180 <$SetHeap>
        124d08:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        124d0c:	eb6af0e5 	bl	1be10a8 <$DestroyVMHeap>
        124d10:	e58460a0 	str	r6, [r4, #160]	; fField160
        124d14:	e28400a8 	add	r0, r4, #168	; 0xa8
        124d18:	e3a01000 	mov	r1, #0	; 0x0
        124d1c:	eb6afd50 	bl	1be4264 <CDynamicArray::$__dt(void)>
        124d20:	e284008c 	add	r0, r4, #140	; 0x8c
        124d24:	e3a01000 	mov	r1, #0	; 0x0
        124d28:	eb6aa67d 	bl	1bce724 <TUObject::$__dt(void)>
        124d2c:	e1a00004 	mov	r0, r4
        124d30:	e3a01000 	mov	r1, #0	; 0x0
        124d34:	eb6aa26e 	bl	1bcd6f4 <TUTaskWorld::$__dt(void)>
        124d38:	e3150001 	tst	r5, #1	; 0x1
        124d3c:	11a00004 	movne	r0, r4
        124d40:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        124d44:	1a6aa265 	bne	1bcd6e0 <$__dl(void *)>
        124d48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        124d4c:	00020190 	muleq	r2, r0, r1
    */
}

/**
 * Symbol: TMuxTool::GetSizeOf(void)
 * Address: 00124d50
 */
TMuxTool::GetSizeOf(void) {
    /*
        124d50:	e3a000c8 	mov	r0, #200	; 0xc8
        124d54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxTool::TaskConstructor(void)
 * Address: 00124d58
 */
TMuxTool::TaskConstructor(void) {
    /*
        124d58:	e1a0c00d 	mov	ip, sp
        124d5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124d60:	e24cb004 	sub	fp, ip, #4	; 0x4
        124d64:	e1a04000 	mov	r4, r0
        124d68:	e3a0507a 	mov	r5, #122	; 0x7a
        124d6c:	e2455c3f 	sub	r5, r5, #16128	; 0x3f00
        124d70:	e5900018 	ldr	r0, [r0, #24]	; fField24
        124d74:	e3300000 	teq	r0, #0	; 0x0
        124d78:	0a000014 	beq	124dd0 <TMuxTool::TaskConstructor(void)+0x78>
        124d7c:	eb6af0da 	bl	1be10ec <$GetHeap>
        124d80:	e584009c 	str	r0, [r4, #156]	; fField156
        124d84:	e28420a0 	add	r2, r4, #160	; 0xa0
        124d88:	e3a03000 	mov	r3, #0	; 0x0
        124d8c:	e3a00000 	mov	r0, #0	; 0x0
        124d90:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        124d94:	eb6af4ec 	bl	1be214c <$NewVMHeap>
        124d98:	e1b05000 	movs	r5, r0
        124d9c:	1a00000b 	bne	124dd0 <TMuxTool::TaskConstructor(void)+0x78>
        124da0:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        124da4:	eb6af8f5 	bl	1be3180 <$SetHeap>
        124da8:	e284008c 	add	r0, r4, #140	; 0x8c
        124dac:	eb6ac343 	bl	1bd5ac0 <TUPort::$Init(void)>
        124db0:	e1b05000 	movs	r5, r0
        124db4:	1a000005 	bne	124dd0 <TMuxTool::TaskConstructor(void)+0x78>
        124db8:	e1a00004 	mov	r0, r4
        124dbc:	e3a01001 	mov	r1, #1	; 0x1
        124dc0:	eb6419f2 	bl	1a2b590 <TMuxTool::$RegisterPort(unsigned char)>
        124dc4:	e1b05000 	movs	r5, r0
        124dc8:	03a00000 	moveq	r0, #0	; 0x0
        124dcc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        124dd0:	e1a00004 	mov	r0, r4
        124dd4:	eb641e11 	bl	1a2c620 <TMuxTool::$TaskDestructor(void)>
        124dd8:	e1a00005 	mov	r0, r5
        124ddc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::TaskDestructor(void)
 * Address: 00124de0
 */
TMuxTool::TaskDestructor(void) {
    /*
        124de0:	e1a0c00d 	mov	ip, sp
        124de4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        124de8:	e24cb004 	sub	fp, ip, #4	; 0x4
        124dec:	e1a04000 	mov	r4, r0
        124df0:	e3a01000 	mov	r1, #0	; 0x0
        124df4:	eb6419e5 	bl	1a2b590 <TMuxTool::$RegisterPort(unsigned char)>
        124df8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        124dfc:	e3300000 	teq	r0, #0	; 0x0
        124e00:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        124e04:	eb097b71 	bl	383bd0 <PMuxTool::Delete(void)>
        124e08:	e3a00000 	mov	r0, #0	; 0x0
        124e0c:	e5a40018 	str	r0, [r4, #24]!	; fField24
        124e10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::RequestTypeToChannelNumber(CommToolRequestType)
 * Address: 00124e14
 */
TMuxTool::RequestTypeToChannelNumber(CommToolRequestType) {
    /*
        124e14:	e3a00000 	mov	r0, #0	; 0x0
        124e18:	ea000000 	b	124e20 <TMuxTool::RequestTypeToChannelNumber(CommToolRequestType)+0xc>
        124e1c:	e2800001 	add	r0, r0, #1	; 0x1
        124e20:	e1b010c1 	movs	r1, r1, asr #1
        124e24:	1afffffc 	bne	124e1c <TMuxTool::RequestTypeToChannelNumber(CommToolRequestType)+0x8>
        124e28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxTool::TaskMain(void)
 * Address: 00124e2c
 */
TMuxTool::TaskMain(void) {
    /*
        124e2c:	e1a0c00d 	mov	ip, sp
        124e30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        124e34:	e24cb004 	sub	fp, ip, #4	; 0x4
        124e38:	e1a04000 	mov	r4, r0
        124e3c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        124e40:	e3a01000 	mov	r1, #0	; 0x0
        124e44:	e58d1004 	str	r1, [sp, #4]	; TMuxTool
        124e48:	e58d1010 	str	r1, [sp, #16]	; fField16
        124e4c:	e58d1008 	str	r1, [sp, #8]
        124e50:	e3a06000 	mov	r6, #0	; 0x0
        124e54:	e58d100c 	str	r1, [sp, #12]
        124e58:	e5d00094 	ldrb	r0, [r0, #148]	; fField148
        124e5c:	e3300000 	teq	r0, #0	; 0x0
        124e60:	1a0000a4 	bne	1250f8 <TMuxTool::TaskMain(void)+0x2cc>
        124e64:	e284a020 	add	sl, r4, #32	; 0x20
        124e68:	e284208c 	add	r2, r4, #140	; 0x8c
        124e6c:	e58d2018 	str	r2, [sp, #24]	; fField24
        124e70:	e2842064 	add	r2, r4, #100	; 0x64
        124e74:	e2845024 	add	r5, r4, #36	; 0x24
        124e78:	e58d2014 	str	r2, [sp, #20]
        124e7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        124e80:	e1a0000d 	mov	r0, sp
        124e84:	eb6abad3 	bl	1bd39d8 <$GetGlobalTime>
        124e88:	e3a03000 	mov	r3, #0	; 0x0
        124e8c:	e3a02000 	mov	r2, #0	; 0x0
        124e90:	e3e01000 	mvn	r1, #0	; 0x0
        124e94:	e59d9004 	ldr	r9, [sp, #4]	; TMuxTool
        124e98:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        124e9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        124ea0:	e28d3018 	add	r3, sp, #24	; 0x18
        124ea4:	e28d201c 	add	r2, sp, #28	; 0x1c
        124ea8:	e92d000c 	stmdb	sp!, {r2, r3}
        124eac:	e1a02005 	mov	r2, r5
        124eb0:	e1a0100a 	mov	r1, sl
        124eb4:	e3a03040 	mov	r3, #64	; 0x40
        124eb8:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        124ebc:	eb6acf5d 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        124ec0:	e28dd018 	add	sp, sp, #24	; 0x18
        124ec4:	e1a07000 	mov	r7, r0
        124ec8:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        124ecc:	e3300000 	teq	r0, #0	; 0x0
        124ed0:	0a00001c 	beq	124f48 <TMuxTool::TaskMain(void)+0x11c>
        124ed4:	e1a00004 	mov	r0, r4
        124ed8:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        124edc:	eb64051f 	bl	1a26360 <TMuxTool::$GetConnectionEndEntry(unsigned long)>
        124ee0:	e1b08000 	movs	r8, r0
        124ee4:	0a000010 	beq	124f2c <TMuxTool::TaskMain(void)+0x100>
        124ee8:	e3370000 	teq	r7, #0	; 0x0
        124eec:	1a00000e 	bne	124f2c <TMuxTool::TaskMain(void)+0x100>
        124ef0:	e28d300c 	add	r3, sp, #12	; 0xc
        124ef4:	e5980004 	ldr	r0, [r8, #4]	; TMuxTool
        124ef8:	e92d0008 	stmdb	sp!, {r3}
        124efc:	e1a01005 	mov	r1, r5
        124f00:	e5942020 	ldr	r2, [r4, #32]	; fField32
        124f04:	e59d300c 	ldr	r3, [sp, #12]
        124f08:	eb6400f4 	bl	1a252e0 <TConnectionEnd::$DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)>
        124f0c:	e28dd004 	add	sp, sp, #4	; 0x4
        124f10:	e3300000 	teq	r0, #0	; 0x0
        124f14:	0a00005d 	beq	125090 <TMuxTool::TaskMain(void)+0x264>
        124f18:	e1a00008 	mov	r0, r8
        124f1c:	e3a01001 	mov	r1, #1	; 0x1
        124f20:	e1a0e00f 	mov	lr, pc
        124f24:	e598f000 	ldr	pc, [r8]
        124f28:	ea000058 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        124f2c:	e28d000c 	add	r0, sp, #12	; 0xc
        124f30:	e3a030ea 	mov	r3, #234	; 0xea
        124f34:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        124f38:	e3a02000 	mov	r2, #0	; 0x0
        124f3c:	e3a01000 	mov	r1, #0	; 0x0
        124f40:	eb6ad369 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        124f44:	ea000051 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        124f48:	e287cc27 	add	ip, r7, #9984	; 0x2700
        124f4c:	e37c0025 	cmn	ip, #37	; 0x25
        124f50:	1a000005 	bne	124f6c <TMuxTool::TaskMain(void)+0x140>
        124f54:	e1a00004 	mov	r0, r4
        124f58:	eb640915 	bl	1a273b4 <TMuxTool::$HandleTimerTick(void)>
        124f5c:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        124f60:	e3a06001 	mov	r6, #1	; 0x1
        124f64:	e58400c4 	str	r0, [r4, #196]	; fField196
        124f68:	ea000048 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        124f6c:	e3370000 	teq	r7, #0	; 0x0
        124f70:	1a000046 	bne	125090 <TMuxTool::TaskMain(void)+0x264>
        124f74:	e59d0008 	ldr	r0, [sp, #8]
        124f78:	e1a03000 	mov	r3, r0
        124f7c:	e1a01480 	mov	r1, r0, lsl #9
        124f80:	e1a014a1 	mov	r1, r1, lsr #9
        124f84:	e3100402 	tst	r0, #33554432	; 0x2000000
        124f88:	0a00000b 	beq	124fbc <TMuxTool::TaskMain(void)+0x190>
        124f8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        124f90:	e1a0100d 	mov	r1, sp
        124f94:	e28d0010 	add	r0, sp, #16	; 0x10
        124f98:	eb6abeac 	bl	1bd4a50 <TUMsgToken::$GetUserRefCon(unsigned long *)>
        124f9c:	e3300000 	teq	r0, #0	; 0x0
        124fa0:	1a000003 	bne	124fb4 <TMuxTool::TaskMain(void)+0x188>
        124fa4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        124fa8:	e59d1000 	ldr	r1, [sp]
        124fac:	e59d200c 	ldr	r2, [sp, #12]
        124fb0:	eb097b1f 	bl	383c34 <PMuxTool::HandleReply(unsigned long, unsigned long)>
        124fb4:	e28dd004 	add	sp, sp, #4	; 0x4
        124fb8:	ea000034 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        124fbc:	e3510040 	cmp	r1, #64	; 0x40
        124fc0:	8a00002e 	bhi	125080 <TMuxTool::TaskMain(void)+0x254>
        124fc4:	e3310000 	teq	r1, #0	; 0x0
        124fc8:	0a00002c 	beq	125080 <TMuxTool::TaskMain(void)+0x254>
        124fcc:	e1a00004 	mov	r0, r4
        124fd0:	eb641976 	bl	1a2b5b0 <TMuxTool::$RequestTypeToChannelNumber(CommToolRequestType)>
        124fd4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        124fd8:	e3300001 	teq	r0, #1	; 0x1
        124fdc:	028d100c 	addeq	r1, sp, #12	; 0xc
        124fe0:	01a00004 	moveq	r0, r4
        124fe4:	03a0207d 	moveq	r2, #125	; 0x7d
        124fe8:	02422c3f 	subeq	r2, r2, #16128	; 0x3f00
        124fec:	0a000021 	beq	125078 <TMuxTool::TaskMain(void)+0x24c>
        124ff0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        124ff4:	e28d100c 	add	r1, sp, #12	; 0xc
        124ff8:	e8b11008 	ldmia	r1!, {r3, ip}
        124ffc:	e8a01008 	stmia	r0!, {r3, ip}
        125000:	e8911008 	ldmia	r1, {r3, ip}
        125004:	e8801008 	stmia	r0, {r3, ip}
        125008:	e594002c 	ldr	r0, [r4, #44]	; fField44
        12500c:	e3300001 	teq	r0, #1	; 0x1
        125010:	1a000014 	bne	125068 <TMuxTool::TaskMain(void)+0x23c>
        125014:	e3a00000 	mov	r0, #0	; 0x0
        125018:	e5840074 	str	r0, [r4, #116]	; fField116
        12501c:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        125020:	e3300000 	teq	r0, #0	; 0x0
        125024:	0a000003 	beq	125038 <TMuxTool::TaskMain(void)+0x20c>
        125028:	e3a00020 	mov	r0, #32	; 0x20
        12502c:	e5840074 	str	r0, [r4, #116]	; fField116
        125030:	e5940034 	ldr	r0, [r4, #52]	; fField52
        125034:	e584007c 	str	r0, [r4, #124]	; fField124
        125038:	e3a00002 	mov	r0, #2	; 0x2
        12503c:	e5840078 	str	r0, [r4, #120]	; fField120
        125040:	e5940030 	ldr	r0, [r4, #48]	; fField48
        125044:	e5840080 	str	r0, [r4, #128]	; fField128
        125048:	e594001c 	ldr	r0, [r4, #28]	; fField28
        12504c:	e3300002 	teq	r0, #2	; 0x2
        125050:	e1a00004 	mov	r0, r4
        125054:	1a000001 	bne	125060 <TMuxTool::TaskMain(void)+0x234>
        125058:	eb640cf2 	bl	1a28428 <TMuxTool::$OpenConnectionEnd(void)>
        12505c:	ea00000b 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        125060:	eb640cf2 	bl	1a28430 <TMuxTool::$OpenMux(void)>
        125064:	ea000009 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        125068:	e28d100c 	add	r1, sp, #12	; 0xc
        12506c:	e1a00004 	mov	r0, r4
        125070:	e3a0207e 	mov	r2, #126	; 0x7e
        125074:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
        125078:	eb640086 	bl	1a25298 <TMuxTool::$CompleteRequest(TUMsgToken &, long)>
        12507c:	ea000003 	b	125090 <TMuxTool::TaskMain(void)+0x264>
        125080:	e1a01005 	mov	r1, r5
        125084:	e28d200c 	add	r2, sp, #12	; 0xc
        125088:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12508c:	eb097ae5 	bl	383c28 <PMuxTool::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)>
        125090:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        125094:	e3300000 	teq	r0, #0	; 0x0
        125098:	0a00000f 	beq	1250dc <TMuxTool::TaskMain(void)+0x2b0>
        12509c:	e3360000 	teq	r6, #0	; 0x0
        1250a0:	1a00000d 	bne	1250dc <TMuxTool::TaskMain(void)+0x2b0>
        1250a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1250a8:	e1a0000d 	mov	r0, sp
        1250ac:	eb6aba49 	bl	1bd39d8 <$GetGlobalTime>
        1250b0:	e59d0004 	ldr	r0, [sp, #4]	; TMuxTool
        1250b4:	e0400009 	sub	r0, r0, r9
        1250b8:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        1250bc:	e1510000 	cmp	r1, r0
        1250c0:	20410000 	subcs	r0, r1, r0
        1250c4:	2a000002 	bcs	1250d4 <TMuxTool::TaskMain(void)+0x2a8>
        1250c8:	e1a00004 	mov	r0, r4
        1250cc:	eb6408b8 	bl	1a273b4 <TMuxTool::$HandleTimerTick(void)>
        1250d0:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        1250d4:	e58400c4 	str	r0, [r4, #196]	; fField196
        1250d8:	e28dd008 	add	sp, sp, #8	; 0x8
        1250dc:	e3a06000 	mov	r6, #0	; 0x0
        1250e0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1250e4:	eb097ad8 	bl	383c4c <PMuxTool::HandleInternalEvent(void)>
        1250e8:	e28dd008 	add	sp, sp, #8	; 0x8
        1250ec:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
        1250f0:	e3300000 	teq	r0, #0	; 0x0
        1250f4:	0affff60 	beq	124e7c <TMuxTool::TaskMain(void)+0x50>
        1250f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxTool::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)
 * Address: 001250fc
 */
void						TMuxTool::HandleRequest(UChar* msgBuf, TUMsgToken& msgToken, ULong msgType) {
    /*
        1250fc:	e1a00002 	mov	r0, r2
        125100:	e3a030ea 	mov	r3, #234	; 0xea
        125104:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        125108:	e3a02000 	mov	r2, #0	; 0x0
        12510c:	e3a01000 	mov	r1, #0	; 0x0
        125110:	ea6ad2f5 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

