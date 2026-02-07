#include "include/PConnectionEnd.h"

/**
 * Symbol: New__14PConnectionEndSFPc
 * Address: 0038377c
 */
void PConnectionEnd::New() {
    /*
        38377c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383780:	e1a01000 	mov	r1, r0
        383784:	ebfffff6 	bl	383764 <TCommToolProtocol::HandleInternalEvent(void)+0xc>
        383788:	eb613005 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38378c:	e1100000 	tst	r0, r0
        383790:	e28dd004 	add	sp, sp, #4	; 0x4
        383794:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        383798:	01a0f00e 	moveq	pc, lr
        38379c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837a4:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PConnectionEnd::Delete(void)
 * Address: 003837a8
 */
PConnectionEnd::Delete(void) {
    /*
        3837a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837ac:	e92d4001 	stmdb	sp!, {r0, lr}
        3837b0:	e28fe004 	add	lr, pc, #4	; 0x4
        3837b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837b8:	e28cf00c 	add	pc, ip, #12	; 0xc
        3837bc:	e8bd4001 	ldmia	sp!, {r0, lr}
        3837c0:	ea613c65 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PConnectionEnd::Init(PMuxTool *, PCECallBack *, unsigned long)
 * Address: 003837c4
 */
PConnectionEnd::Init(PMuxTool *, PCECallBack *, unsigned long) {
    /*
        3837c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837cc:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PConnectionEnd::HandleInternalRequest(void *)
 * Address: 003837d0
 */
PConnectionEnd::HandleInternalRequest(void *) {
    /*
        3837d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837d4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837d8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PConnectionEnd::HandleInternalEvent(void)
 * Address: 003837dc
 */
PConnectionEnd::HandleInternalEvent(void) {
    /*
        3837dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837e4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PConnectionEnd::OpenStart(void)
 * Address: 003837e8
 */
PConnectionEnd::OpenStart(void) {
    /*
        3837e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837f0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PConnectionEnd::CloseStart(void)
 * Address: 003837f4
 */
PConnectionEnd::CloseStart(void) {
    /*
        3837f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3837f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3837fc:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PConnectionEnd::BindStart(void)
 * Address: 00383800
 */
PConnectionEnd::BindStart(void) {
    /*
        383800:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383804:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383808:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PConnectionEnd::UnbindStart(void)
 * Address: 0038380c
 */
PConnectionEnd::UnbindStart(void) {
    /*
        38380c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383810:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383814:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PConnectionEnd::ConnectStart(void)
 * Address: 00383818
 */
PConnectionEnd::ConnectStart(void) {
    /*
        383818:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38381c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383820:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PConnectionEnd::ListenStart(void)
 * Address: 00383824
 */
PConnectionEnd::ListenStart(void) {
    /*
        383824:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383828:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38382c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PConnectionEnd::AcceptStart(void)
 * Address: 00383830
 */
PConnectionEnd::AcceptStart(void) {
    /*
        383830:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383834:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383838:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: PConnectionEnd::ReleaseStart(void)
 * Address: 0038383c
 */
PConnectionEnd::ReleaseStart(void) {
    /*
        38383c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383840:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383844:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: PConnectionEnd::TerminateStart(void)
 * Address: 00383848
 */
PConnectionEnd::TerminateStart(void) {
    /*
        383848:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38384c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383850:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: PConnectionEnd::PutBytesStart(CBufferList *)
 * Address: 00383854
 */
PConnectionEnd::PutBytesStart(CBufferList *) {
    /*
        383854:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383858:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38385c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: PConnectionEnd::PutFramedBytesStart(CBufferList *, unsigned char)
 * Address: 00383860
 */
PConnectionEnd::PutFramedBytesStart(CBufferList *, unsigned char) {
    /*
        383860:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383864:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383868:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: PConnectionEnd::KillPutStart(void)
 * Address: 0038386c
 */
PConnectionEnd::KillPutStart(void) {
    /*
        38386c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383870:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383874:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: PConnectionEnd::GetBytesStart(CBufferList *)
 * Address: 00383878
 */
PConnectionEnd::GetBytesStart(CBufferList *) {
    /*
        383878:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38387c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383880:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: PConnectionEnd::GetFramedBytesStart(CBufferList *)
 * Address: 00383884
 */
PConnectionEnd::GetFramedBytesStart(CBufferList *) {
    /*
        383884:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383888:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38388c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: PConnectionEnd::GetBytesImmediateStart(CBufferList *, long)
 * Address: 00383890
 */
PConnectionEnd::GetBytesImmediateStart(CBufferList *, long) {
    /*
        383890:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383894:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383898:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: PConnectionEnd::KillGetStart(void)
 * Address: 0038389c
 */
PConnectionEnd::KillGetStart(void) {
    /*
        38389c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838a4:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: PConnectionEnd::HandleTimerTick(void)
 * Address: 003838a8
 */
PConnectionEnd::HandleTimerTick(void) {
    /*
        3838a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838b0:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: PConnectionEnd::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)
 * Address: 003838b4
 */
PConnectionEnd::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long) {
    /*
        3838b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838bc:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: PConnectionEnd::HandleReply(unsigned long, unsigned long)
 * Address: 003838c0
 */
PConnectionEnd::HandleReply(unsigned long, unsigned long) {
    /*
        3838c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838c8:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: PConnectionEnd::KillControlStart(void)
 * Address: 003838cc
 */
PConnectionEnd::KillControlStart(void) {
    /*
        3838cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838d4:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: PConnectionEnd::KillGetCommEventStart(void)
 * Address: 003838d8
 */
PConnectionEnd::KillGetCommEventStart(void) {
    /*
        3838d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838e0:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: PConnectionEnd::GetCommEvent(void)
 * Address: 003838e4
 */
PConnectionEnd::GetCommEvent(void) {
    /*
        3838e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838ec:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: PConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 003838f0
 */
PConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        3838f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3838f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3838f8:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: PConnectionEnd::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 003838fc
 */
PConnectionEnd::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        3838fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383900:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383904:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: PConnectionEnd::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00383908
 */
PConnectionEnd::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        383908:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38390c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383910:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: PConnectionEnd::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 00383914
 */
PConnectionEnd::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
        383914:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383918:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38391c:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: PConnectionEnd::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 00383920
 */
PConnectionEnd::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
        383920:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383924:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383928:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: PConnectionEnd::ForwardOptions(void)
 * Address: 0038392c
 */
PConnectionEnd::ForwardOptions(void) {
    /*
        38392c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383930:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383934:	e28cf088 	add	pc, ip, #136	; 0x88
        383938:	e1a0000f 	mov	r0, pc
        38393c:	e1a0f00e 	mov	pc, lr
        383940:	504d7578 	subpl	r7, sp, r8, ror r5
        383944:	43616c6c 	cmnmi	r1, #27648	; 0x6c00
        383948:	4261636b 	rsbmi	r6, r1, #-1409286143	; 0xac000001
        38394c:	00000000 	andeq	r0, r0, r0
    */
}

