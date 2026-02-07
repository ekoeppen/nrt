#include "DDKIncludes/CommAPI/CommManagerInterface.h"

/**
 * Symbol: TEndpoint::InitBaseEndpoint(TEndpointEventHandler *)
 * Address: 000ac2e0
 */
TEndpoint::InitBaseEndpoint(TEndpointEventHandler *) {
    /*
         ac2e0:	e1a0c00d 	mov	ip, sp
         ac2e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ac2e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac2ec:	e1a04000 	mov	r4, r0
         ac2f0:	e3a05000 	mov	r5, #0	; 0x0
         ac2f4:	e3a00000 	mov	r0, #0	; 0x0
         ac2f8:	e2844010 	add	r4, r4, #16	; 0x10
         ac2fc:	e8840003 	stmia	r4, {r0, r1}
         ac300:	e5840008 	str	r0, [r4, #8]	; fField8
         ac304:	e2444010 	sub	r4, r4, #16	; 0x10
         ac308:	e3a00001 	mov	r0, #1	; 0x1
         ac30c:	e5c40020 	strb	r0, [r4, #32]	; fField32
         ac310:	e5c40021 	strb	r0, [r4, #33]	; fField33
         ac314:	e3a00000 	mov	r0, #0	; 0x0
         ac318:	eb6c29fc 	bl	1bb6b10 <TCMOTransportInfo::$__ct(void)>
         ac31c:	e5a4001c 	str	r0, [r4, #28]!	; fField28
         ac320:	e3300000 	teq	r0, #0	; 0x0
         ac324:	03e050a7 	mvneq	r5, #167	; 0xa7
         ac328:	02455b23 	subeq	r5, r5, #35840	; 0x8c00
         ac32c:	e1a00005 	mov	r0, r5
         ac330:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpoint::DestroyBaseEndpoint(void)
 * Address: 000ad82c
 */
TEndpoint::DestroyBaseEndpoint(void) {
    /*
         ad82c:	e1a0c00d 	mov	ip, sp
         ad830:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad834:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad838:	e1a04000 	mov	r4, r0
         ad83c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         ad840:	e3300000 	teq	r0, #0	; 0x0
         ad844:	0a000002 	beq	ad854 <TEndpoint::DestroyBaseEndpoint(void)+0x28>
         ad848:	e3a01001 	mov	r1, #1	; 0x1
         ad84c:	e1a0e00f 	mov	lr, pc
         ad850:	e590f000 	ldr	pc, [r0]
         ad854:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
         ad858:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ad85c:	ea6c7f9f 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TEndpoint::DeleteLeavingTool(void)
 * Address: 000ad860
 */
TEndpoint::DeleteLeavingTool(void) {
    /*
         ad860:	e1a0c00d 	mov	ip, sp
         ad864:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ad868:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad86c:	e1a04000 	mov	r4, r0
         ad870:	e5900014 	ldr	r0, [r0, #20]	; fField20
         ad874:	eb6c2cf6 	bl	1bb8c54 <TEndpointEventHandler::$GetServicePortId(void)>
         ad878:	e1a05000 	mov	r5, r0
         ad87c:	e3a00000 	mov	r0, #0	; 0x0
         ad880:	e5c40021 	strb	r0, [r4, #33]	; fField33
         ad884:	e1a00004 	mov	r0, r4
         ad888:	eb6c28d8 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         ad88c:	e1a00005 	mov	r0, r5
         ad890:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpoint::GetInfo(TCMOTransportInfo *)
 * Address: 000ad894
 */
TEndpoint::GetInfo(TCMOTransportInfo *) {
    /*
         ad894:	e92d4000 	stmdb	sp!, {lr}
         ad898:	e5b0e01c 	ldr	lr, [r0, #28]!	; fField28
         ad89c:	e33e0000 	teq	lr, #0	; 0x0
         ad8a0:	03a000ea 	moveq	r0, #234	; 0xea
         ad8a4:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         ad8a8:	08bd8000 	ldmeqia	sp!, {pc}
         ad8ac:	e1a00001 	mov	r0, r1
         ad8b0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         ad8b4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
         ad8b8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         ad8bc:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
         ad8c0:	e89e100c 	ldmia	lr, {r2, r3, ip}
         ad8c4:	e880100c 	stmia	r0, {r2, r3, ip}
         ad8c8:	e3a00000 	mov	r0, #0	; 0x0
         ad8cc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TEndpoint::EasyOpen(unsigned long)
 * Address: 000ad8d0
 */
TEndpoint::EasyOpen(unsigned long) {
    /*
         ad8d0:	e1a0c00d 	mov	ip, sp
         ad8d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad8d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad8dc:	e1a04000 	mov	r4, r0
         ad8e0:	eb6c30fa 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         ad8e4:	e3300000 	teq	r0, #0	; 0x0
         ad8e8:	1a000004 	bne	ad900 <TEndpoint::EasyOpen(unsigned long)+0x30>
         ad8ec:	e1a00004 	mov	r0, r4
         ad8f0:	e3a03001 	mov	r3, #1	; 0x1
         ad8f4:	e3a02000 	mov	r2, #0	; 0x0
         ad8f8:	e3a01000 	mov	r1, #0	; 0x0
         ad8fc:	eb656ada 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
         ad900:	e3300000 	teq	r0, #0	; 0x0
         ad904:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         ad908:	e3a03001 	mov	r3, #1	; 0x1
         ad90c:	e3a02000 	mov	r2, #0	; 0x0
         ad910:	e92d000c 	stmdb	sp!, {r2, r3}
         ad914:	e1a00004 	mov	r0, r4
         ad918:	e3a03000 	mov	r3, #0	; 0x0
         ad91c:	e3a01000 	mov	r1, #0	; 0x0
         ad920:	eb656ad2 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         ad924:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpoint::EasyConnect(unsigned long, TOptionArray *, unsigned long)
 * Address: 000ad928
 */
TEndpoint::EasyConnect(unsigned long, TOptionArray *, unsigned long) {
    /*
         ad928:	e1a0c00d 	mov	ip, sp
         ad92c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ad930:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad934:	e1a04000 	mov	r4, r0
         ad938:	e1a06002 	mov	r6, r2
         ad93c:	e1a05003 	mov	r5, r3
         ad940:	eb6c30e2 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         ad944:	e3300000 	teq	r0, #0	; 0x0
         ad948:	1a000004 	bne	ad960 <TEndpoint::EasyConnect(unsigned long, TOptionArray *, unsigned long)+0x38>
         ad94c:	e1a02005 	mov	r2, r5
         ad950:	e1a00004 	mov	r0, r4
         ad954:	e3a03001 	mov	r3, #1	; 0x1
         ad958:	e3a01000 	mov	r1, #0	; 0x0
         ad95c:	eb656ac2 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
         ad960:	e3300000 	teq	r0, #0	; 0x0
         ad964:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         ad968:	e3a03001 	mov	r3, #1	; 0x1
         ad96c:	e1a02005 	mov	r2, r5
         ad970:	e92d000c 	stmdb	sp!, {r2, r3}
         ad974:	e1a01006 	mov	r1, r6
         ad978:	e1a00004 	mov	r0, r4
         ad97c:	e3a03000 	mov	r3, #0	; 0x0
         ad980:	e3a02000 	mov	r2, #0	; 0x0
         ad984:	eb656ab9 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         ad988:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpoint::EasyClose(void)
 * Address: 000ad98c
 */
TEndpoint::EasyClose(void) {
    /*
         ad98c:	e1a0c00d 	mov	ip, sp
         ad990:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad994:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad998:	e1a04000 	mov	r4, r0
         ad99c:	e5900010 	ldr	r0, [r0, #16]
         ad9a0:	e3300005 	teq	r0, #5	; 0x5
         ad9a4:	1a000008 	bne	ad9cc <TEndpoint::EasyClose(void)+0x40>
         ad9a8:	e3a03001 	mov	r3, #1	; 0x1
         ad9ac:	e3a02000 	mov	r2, #0	; 0x0
         ad9b0:	e92d000c 	stmdb	sp!, {r2, r3}
         ad9b4:	e1a00004 	mov	r0, r4
         ad9b8:	e3a03000 	mov	r3, #0	; 0x0
         ad9bc:	e3a01000 	mov	r1, #0	; 0x0
         ad9c0:	eb656aab 	bl	1a08474 <TEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
         ad9c4:	e28dd008 	add	sp, sp, #8	; 0x8
         ad9c8:	ea000005 	b	ad9e4 <TEndpoint::EasyClose(void)+0x58>
         ad9cc:	e3300007 	teq	r0, #7	; 0x7
         ad9d0:	1a000007 	bne	ad9f4 <TEndpoint::EasyClose(void)+0x68>
         ad9d4:	e1a00004 	mov	r0, r4
         ad9d8:	e3a02001 	mov	r2, #1	; 0x1
         ad9dc:	e3a01000 	mov	r1, #0	; 0x0
         ad9e0:	eb656ea7 	bl	1a09484 <TEndpoint::$nRelease(unsigned long, unsigned char)>
         ad9e4:	e3300000 	teq	r0, #0	; 0x0
         ad9e8:	1280cb23 	addne	ip, r0, #35840	; 0x8c00
         ad9ec:	137c00a6 	cmnne	ip, #166	; 0xa6
         ad9f0:	1a000003 	bne	ada04 <TEndpoint::EasyClose(void)+0x78>
         ad9f4:	e1a00004 	mov	r0, r4
         ad9f8:	e3a02001 	mov	r2, #1	; 0x1
         ad9fc:	e3a01000 	mov	r1, #0	; 0x0
         ada00:	eb656ea2 	bl	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
         ada04:	e3300000 	teq	r0, #0	; 0x0
         ada08:	01a00004 	moveq	r0, r4
         ada0c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         ada10:	0a6c2861 	beq	1bb7b9c <TEndpoint::$Close(void)>
         ada14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpoint::SetClientHandler(unsigned long)
 * Address: 000ada18
 */
TEndpoint::SetClientHandler(unsigned long) {
    /*
         ada18:	e5a01018 	str	r1, [r0, #24]!	; fField24
         ada1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpoint::UseForks(unsigned char)
 * Address: 000ada20
 */
TEndpoint::UseForks(unsigned char) {
    /*
         ada20:	e20110ff 	and	r1, r1, #255	; 0xff
         ada24:	e5900014 	ldr	r0, [r0, #20]	; fField20
         ada28:	ea656a88 	b	1a08450 <TEndpointEventHandler::$UseForks(unsigned char)>
    */
}

/**
 * Symbol: New__9TEndpointSFPc
 * Address: 00382a0c
 */
void TEndpoint::New() {
    /*
        382a0c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        382a10:	e1a01000 	mov	r1, r0
        382a14:	ebfffff7 	bl	3829f8 <TCMService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0xc>
        382a18:	eb613361 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        382a1c:	e1100000 	tst	r0, r0
        382a20:	e28dd004 	add	sp, sp, #4	; 0x4
        382a24:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        382a28:	01a0f00e 	moveq	pc, lr
        382a2c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a34:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TEndpoint::Delete(void)
 * Address: 00382a38
 */
TEndpoint::Delete(void) {
    /*
        382a38:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a3c:	e92d4001 	stmdb	sp!, {r0, lr}
        382a40:	e28fe004 	add	lr, pc, #4	; 0x4
        382a44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a48:	e28cf00c 	add	pc, ip, #12	; 0xc
        382a4c:	e8bd4001 	ldmia	sp!, {r0, lr}
        382a50:	ea613fc1 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)
 * Address: 00382a54
 */
TEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long) {
    /*
        382a54:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a5c:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00382a60
 */
TEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        382a60:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a64:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a68:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TEndpoint::AddToAppWorld(void)
 * Address: 00382a6c
 */
TEndpoint::AddToAppWorld(void) {
    /*
        382a6c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a70:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a74:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TEndpoint::RemoveFromAppWorld(void)
 * Address: 00382a78
 */
TEndpoint::RemoveFromAppWorld(void) {
    /*
        382a78:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a7c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a80:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TEndpoint::Open(unsigned long)
 * Address: 00382a84
 */
TEndpoint::Open(unsigned long) {
    /*
        382a84:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a88:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a8c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TEndpoint::Close(void)
 * Address: 00382a90
 */
TEndpoint::Close(void) {
    /*
        382a90:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382a94:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382a98:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TEndpoint::Abort(void)
 * Address: 00382a9c
 */
TEndpoint::Abort(void) {
    /*
        382a9c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382aa0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382aa4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TEndpoint::SetSync(unsigned char)
 * Address: 00382aa8
 */
TEndpoint::SetSync(unsigned char) {
    /*
        382aa8:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382aac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382ab0:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long)
 * Address: 00382ab4
 */
TEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long) {
    /*
        382ab4:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382ab8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382abc:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long)
 * Address: 00382ac0
 */
TEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long) {
    /*
        382ac0:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382ac4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382ac8:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TEndpoint::Bind(TOptionArray *, long *, unsigned long)
 * Address: 00382acc
 */
TEndpoint::Bind(TOptionArray *, long *, unsigned long) {
    /*
        382acc:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382ad0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382ad4:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TEndpoint::UnBind(unsigned long)
 * Address: 00382ad8
 */
TEndpoint::UnBind(unsigned long) {
    /*
        382ad8:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382adc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382ae0:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 00382ae4
 */
TEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
        382ae4:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382ae8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382aec:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)
 * Address: 00382af0
 */
TEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long) {
    /*
        382af0:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382af4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382af8:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 00382afc
 */
TEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
        382afc:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b00:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b04:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TEndpoint::Disconnect(CBufferSegment *, long, long)
 * Address: 00382b08
 */
TEndpoint::Disconnect(CBufferSegment *, long, long) {
    /*
        382b08:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b0c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b10:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TEndpoint::Release(unsigned long)
 * Address: 00382b14
 */
TEndpoint::Release(unsigned long) {
    /*
        382b14:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b18:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b1c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long)
 * Address: 00382b20
 */
TEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long) {
    /*
        382b20:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b24:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b28:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)
 * Address: 00382b2c
 */
TEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long) {
    /*
        382b2c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b34:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: TEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long)
 * Address: 00382b38
 */
TEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long) {
    /*
        382b38:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b3c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b40:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: TEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long)
 * Address: 00382b44
 */
TEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long) {
    /*
        382b44:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b48:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b4c:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: TEndpoint::WaitForEvent(unsigned long)
 * Address: 00382b50
 */
TEndpoint::WaitForEvent(unsigned long) {
    /*
        382b50:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b54:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b58:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: TEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)
 * Address: 00382b5c
 */
TEndpoint::nBind(TOptionArray *, unsigned long, unsigned char) {
    /*
        382b5c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b60:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b64:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: TEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 00382b68
 */
TEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
        382b68:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b70:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: TEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)
 * Address: 00382b74
 */
TEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char) {
    /*
        382b74:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b7c:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: TEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 00382b80
 */
TEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
        382b80:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b84:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b88:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: TEndpoint::nRelease(unsigned long, unsigned char)
 * Address: 00382b8c
 */
TEndpoint::nRelease(unsigned long, unsigned char) {
    /*
        382b8c:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b90:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382b94:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: TEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)
 * Address: 00382b98
 */
TEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char) {
    /*
        382b98:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382b9c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382ba0:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: TEndpoint::nUnBind(unsigned long, unsigned char)
 * Address: 00382ba4
 */
TEndpoint::nUnBind(unsigned long, unsigned char) {
    /*
        382ba4:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382ba8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bac:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: TEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)
 * Address: 00382bb0
 */
TEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char) {
    /*
        382bb0:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bb4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bb8:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: TEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 00382bbc
 */
TEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        382bbc:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bc0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bc4:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: TEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 00382bc8
 */
TEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
        382bc8:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bcc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bd0:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: TEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 00382bd4
 */
TEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        382bd4:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bd8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bdc:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: TEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 00382be0
 */
TEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
        382be0:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382be4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382be8:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: TEndpoint::nAbort(unsigned char)
 * Address: 00382bec
 */
TEndpoint::nAbort(unsigned char) {
    /*
        382bec:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bf0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382bf4:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: TEndpoint::Timeout(unsigned long)
 * Address: 00382bf8
 */
TEndpoint::Timeout(unsigned long) {
    /*
        382bf8:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382bfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382c00:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: TEndpoint::IsPending(unsigned long)
 * Address: 00382c04
 */
TEndpoint::IsPending(unsigned long) {
    /*
        382c04:	e5900004 	ldr	r0, [r0, #4]	; TEndpoint
        382c08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        382c0c:	e28cf0a0 	add	pc, ip, #160	; 0xa0
        382c10:	00000000 	andeq	r0, r0, r0
        382c14:	00000048 	andeq	r0, r0, r8, asr #32
        382c18:	00000052 	andeq	r0, r0, r2, asr r0
        382c1c:	00000059 	andeq	r0, r0, r9, asr r0
        382c20:	00000060 	andeq	r0, r0, r0, rrx
        382c24:	00000074 	andeq	r0, r0, r4, ror r0
        382c28:	ea5a5c30 	b	1a19cf0 <$Sizeof__13TAsyncServiceSFv>
        382c34:	ea5a4b91 	b	1a15a80 <TAsyncService::$New(void)>
        382c38:	ea5a2ecf 	b	1a0e77c <TAsyncService::$Delete(void)>
        382c3c:	00020000 	andeq	r0, r2, r0
        382c48:	ea000001 	b	382c54 <ClassInfo__13TAsyncServiceSFv+0x8>
    */
}

