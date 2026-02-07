#include "DDKIncludes/OS600/UserGlobals.h"

/**
 * Symbol: TPort::Reset(unsigned long, unsigned long)
 * Address: 00191914
 */
long		TPort::Reset(ULong sendersResetFlags, ULong receiversResetFlags) {
    /*
        191914:	e1a0c00d 	mov	ip, sp
        191918:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19191c:	e24cb004 	sub	fp, ip, #4	; 0x4
        191920:	e1a05000 	mov	r5, r0
        191924:	e1a06001 	mov	r6, r1
        191928:	e1a04002 	mov	r4, r2
        19192c:	eb080497 	bl	392b90 <EnterFIQAtomic>
        191930:	e3a090c9 	mov	r9, #201	; 0xc9
        191934:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        191938:	e59f70b8 	ldr	r7, [pc, #b8]	; 1919f8 <TPort::Reset(unsigned long, unsigned long)+0xe4>
        19193c:	e3360000 	teq	r6, #0	; 0x0
        191940:	0a000013 	beq	191994 <TPort::Reset(unsigned long, unsigned long)+0x80>
        191944:	e3160001 	tst	r6, #1	; 0x1
        191948:	059fa0ac 	ldreq	sl, [pc, #ac]	; 1919fc <TPort::Reset(unsigned long, unsigned long)+0xe8>
        19194c:	11a0a009 	movne	sl, r9
        191950:	e2850010 	add	r0, r5, #16	; 0x10
        191954:	e1a08000 	mov	r8, r0
        191958:	eb6920db 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        19195c:	e1b06000 	movs	r6, r0
        191960:	0a00000b 	beq	191994 <TPort::Reset(unsigned long, unsigned long)+0x80>
        191964:	e1a01006 	mov	r1, r6
        191968:	e5970000 	ldr	r0, [r7]
        19196c:	eb65c619 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        191970:	eb08048e 	bl	392bb0 <ExitFIQAtomic>
        191974:	e1a0100a 	mov	r1, sl
        191978:	e1a00006 	mov	r0, r6
        19197c:	eb659047 	bl	1af5aa0 <TSharedMemMsg::$CompleteSender(long)>
        191980:	eb080482 	bl	392b90 <EnterFIQAtomic>
        191984:	e1a00008 	mov	r0, r8
        191988:	eb6920cf 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        19198c:	e1b06000 	movs	r6, r0
        191990:	1afffff3 	bne	191964 <TPort::Reset(unsigned long, unsigned long)+0x50>
        191994:	e3340000 	teq	r4, #0	; 0x0
        191998:	0a000013 	beq	1919ec <TPort::Reset(unsigned long, unsigned long)+0xd8>
        19199c:	e3140001 	tst	r4, #1	; 0x1
        1919a0:	059f9054 	ldreq	r9, [pc, #54]	; 1919fc <TPort::Reset(unsigned long, unsigned long)+0xe8>
        1919a4:	e2850024 	add	r0, r5, #36	; 0x24
        1919a8:	e1a05000 	mov	r5, r0
        1919ac:	eb6920c6 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1919b0:	e1b04000 	movs	r4, r0
        1919b4:	0a00000c 	beq	1919ec <TPort::Reset(unsigned long, unsigned long)+0xd8>
        1919b8:	e1a01004 	mov	r1, r4
        1919bc:	e5970000 	ldr	r0, [r7]
        1919c0:	eb65c604 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        1919c4:	eb080479 	bl	392bb0 <ExitFIQAtomic>
        1919c8:	e1a02009 	mov	r2, r9
        1919cc:	e1a00004 	mov	r0, r4
        1919d0:	e3a01000 	mov	r1, #0	; 0x0
        1919d4:	eb659030 	bl	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        1919d8:	eb08046c 	bl	392b90 <EnterFIQAtomic>
        1919dc:	e1a00005 	mov	r0, r5
        1919e0:	eb6920b9 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1919e4:	e1b04000 	movs	r4, r0
        1919e8:	1afffff2 	bne	1919b8 <TPort::Reset(unsigned long, unsigned long)+0xa4>
        1919ec:	eb08046f 	bl	392bb0 <ExitFIQAtomic>
        1919f0:	e3a00000 	mov	r0, #0	; 0x0
        1919f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1919f8:	0c100fe0 	ldceq	15, cr0, [r0], -#896
        1919fc:	ffffd8db 	swinv	0x00ffd8db
    */
}

/**
 * Symbol: TPort::ResetFilter(TSharedMemMsg *, unsigned long)
 * Address: 00191a7c
 */
TPort::ResetFilter(TSharedMemMsg *, unsigned long) {
    /*
        191a7c:	e1a0c00d 	mov	ip, sp
        191a80:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        191a84:	e24cb004 	sub	fp, ip, #4	; 0x4
        191a88:	e1a05000 	mov	r5, r0
        191a8c:	e1a04001 	mov	r4, r1
        191a90:	e1a06002 	mov	r6, r2
        191a94:	e3a07000 	mov	r7, #0	; 0x0
        191a98:	e2800024 	add	r0, r0, #36	; 0x24
        191a9c:	e1a08000 	mov	r8, r0
        191aa0:	eb691852 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        191aa4:	ea000001 	b	191ab0 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x34>
        191aa8:	e1a00008 	mov	r0, r8
        191aac:	eb6907cf 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        191ab0:	e1b01000 	movs	r1, r0
        191ab4:	0a000003 	beq	191ac8 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x4c>
        191ab8:	e1310004 	teq	r1, r4
        191abc:	1afffff9 	bne	191aa8 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x2c>
        191ac0:	e3310000 	teq	r1, #0	; 0x0
        191ac4:	1a000002 	bne	191ad4 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x58>
        191ac8:	e3a070dc 	mov	r7, #220	; 0xdc
        191acc:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        191ad0:	ea000018 	b	191b38 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0xbc>
        191ad4:	e2850010 	add	r0, r5, #16	; 0x10
        191ad8:	e5846054 	str	r6, [r4, #84]
        191adc:	e1a06000 	mov	r6, r0
        191ae0:	eb691842 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        191ae4:	ea000002 	b	191af4 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x78>
        191ae8:	e1a00006 	mov	r0, r6
        191aec:	e1a01005 	mov	r1, r5
        191af0:	eb6907be 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        191af4:	e1b05000 	movs	r5, r0
        191af8:	0a00000e 	beq	191b38 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0xbc>
        191afc:	e5940054 	ldr	r0, [r4, #84]
        191b00:	e3700001 	cmn	r0, #1	; 0x1
        191b04:	0a000002 	beq	191b14 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x98>
        191b08:	e5951050 	ldr	r1, [r5, #80]	; fField80
        191b0c:	e1110000 	tst	r1, r0
        191b10:	0afffff4 	beq	191ae8 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0x6c>
        191b14:	e3350000 	teq	r5, #0	; 0x0
        191b18:	0a000006 	beq	191b38 <TPort::ResetFilter(TSharedMemMsg *, unsigned long)+0xbc>
        191b1c:	e1a00006 	mov	r0, r6
        191b20:	e1a01005 	mov	r1, r5
        191b24:	eb69206d 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        191b28:	e1a01005 	mov	r1, r5
        191b2c:	e1a00004 	mov	r0, r4
        191b30:	e3a02000 	mov	r2, #0	; 0x0
        191b34:	eb658fd8 	bl	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        191b38:	e1a00007 	mov	r0, r7
        191b3c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPort::__dt(void)
 * Address: 00191b40
 */
TPort::~TPort(void) {
    /*
        191b40:	e1a0c00d 	mov	ip, sp
        191b44:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        191b48:	e24cb004 	sub	fp, ip, #4	; 0x4
        191b4c:	e1a04000 	mov	r4, r0
        191b50:	e1a06001 	mov	r6, r1
        191b54:	eb08040d 	bl	392b90 <EnterFIQAtomic>
        191b58:	e2840010 	add	r0, r4, #16	; 0x10
        191b5c:	e1a09000 	mov	r9, r0
        191b60:	eb692059 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        191b64:	e1b07000 	movs	r7, r0
        191b68:	e59f8098 	ldr	r8, [pc, #98]	; 191c08 <TPort::__dt(void)+0xc8>
        191b6c:	e3a050dd 	mov	r5, #221	; 0xdd
        191b70:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        191b74:	0a00000b 	beq	191ba8 <TPort::__dt(void)+0x68>
        191b78:	e1a01007 	mov	r1, r7
        191b7c:	e5980000 	ldr	r0, [r8]
        191b80:	eb65c594 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        191b84:	eb080409 	bl	392bb0 <ExitFIQAtomic>
        191b88:	e1a00007 	mov	r0, r7
        191b8c:	e1a01005 	mov	r1, r5
        191b90:	eb658fc2 	bl	1af5aa0 <TSharedMemMsg::$CompleteSender(long)>
        191b94:	eb0803fd 	bl	392b90 <EnterFIQAtomic>
        191b98:	e1a00009 	mov	r0, r9
        191b9c:	eb69204a 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        191ba0:	e1b07000 	movs	r7, r0
        191ba4:	1afffff3 	bne	191b78 <TPort::__dt(void)+0x38>
        191ba8:	e2840024 	add	r0, r4, #36	; 0x24
        191bac:	e1a09000 	mov	r9, r0
        191bb0:	eb692045 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        191bb4:	e1b07000 	movs	r7, r0
        191bb8:	0a00000c 	beq	191bf0 <TPort::__dt(void)+0xb0>
        191bbc:	e1a01007 	mov	r1, r7
        191bc0:	e5980000 	ldr	r0, [r8]
        191bc4:	eb65c583 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        191bc8:	eb0803f8 	bl	392bb0 <ExitFIQAtomic>
        191bcc:	e1a00007 	mov	r0, r7
        191bd0:	e1a02005 	mov	r2, r5
        191bd4:	e3a01000 	mov	r1, #0	; 0x0
        191bd8:	eb658faf 	bl	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        191bdc:	eb0803eb 	bl	392b90 <EnterFIQAtomic>
        191be0:	e1a00009 	mov	r0, r9
        191be4:	eb692038 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        191be8:	e1b07000 	movs	r7, r0
        191bec:	1afffff2 	bne	191bbc <TPort::__dt(void)+0x7c>
        191bf0:	eb0803ee 	bl	392bb0 <ExitFIQAtomic>
        191bf4:	e3160001 	tst	r6, #1	; 0x1
        191bf8:	11a00004 	movne	r0, r4
        191bfc:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        191c00:	1a68eeb6 	bne	1bcd6e0 <$__dl(void *)>
        191c04:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        191c08:	0c100fe0 	ldceq	15, cr0, [r0], -#896
    */
}

/**
 * Symbol: TPort::Send(TSharedMemMsg *, unsigned long)
 * Address: 0019211c
 */
long		TPort::Send(TUAsyncMessage* async, void* content, ULong size, TTimeout timeout = kNoTimeout, TTime* futureTimeToSend = nil, ULong msgType = 0, Boolean urgent = false) {
    /*
        19211c:	e1a0c00d 	mov	ip, sp
        192120:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        192124:	e24cb004 	sub	fp, ip, #4	; 0x4
        192128:	e1a06000 	mov	r6, r0
        19212c:	e1a04001 	mov	r4, r1
        192130:	e1a05002 	mov	r5, r2
        192134:	e3a08000 	mov	r8, #0	; 0x0
        192138:	e3120401 	tst	r2, #16777216	; 0x1000000
        19213c:	15940024 	ldrne	r0, [r4, #36]
        192140:	13300000 	teqne	r0, #0	; 0x0
        192144:	0a000009 	beq	192170 <TPort::Send(TSharedMemMsg *, unsigned long)+0x54>
        192148:	e1a01004 	mov	r1, r4
        19214c:	e59f002c 	ldr	r0, [pc, #2c]	; 192180 <TPort::Send(TSharedMemMsg *, unsigned long)+0x64>
        192150:	e5900000 	ldr	r0, [r0]
        192154:	eb65bff1 	bl	1b02120 <TTimerEngine::$QueueTimeout(TSharedMemMsg *)>
        192158:	e3300000 	teq	r0, #0	; 0x0
        19215c:	059f8020 	ldreq	r8, [pc, #20]	; 192184 <TPort::Send(TSharedMemMsg *, unsigned long)+0x68>
        192160:	0a00002c 	beq	192218 <TPort::Send(TSharedMemMsg *, unsigned long)+0xfc>
        192164:	e594003c 	ldr	r0, [r4, #60]
        192168:	e3800080 	orr	r0, r0, #128	; 0x80
        19216c:	e584003c 	str	r0, [r4, #60]
        192170:	e2860024 	add	r0, r6, #36	; 0x24
        192174:	e1a09000 	mov	r9, r0
        192178:	eb69169c 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        19217c:	ea000004 	b	192194 <TPort::Send(TSharedMemMsg *, unsigned long)+0x78>
        192180:	0c100fe0 	ldceq	15, cr0, [r0], -#896
        192184:	ffffd8db 	swinv	0x00ffd8db
        192188:	e1a00009 	mov	r0, r9
        19218c:	e1a01007 	mov	r1, r7
        192190:	eb690616 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        192194:	e1b07000 	movs	r7, r0
        192198:	15970054 	ldrne	r0, [r7, #84]
        19219c:	13700001 	cmnne	r0, #1	; 0x1
        1921a0:	0a000002 	beq	1921b0 <TPort::Send(TSharedMemMsg *, unsigned long)+0x94>
        1921a4:	e5941050 	ldr	r1, [r4, #80]	; fField80
        1921a8:	e1100001 	tst	r0, r1
        1921ac:	0afffff5 	beq	192188 <TPort::Send(TSharedMemMsg *, unsigned long)+0x6c>
        1921b0:	e3150402 	tst	r5, #33554432	; 0x2000000
        1921b4:	159f0034 	ldrne	r0, [pc, #34]	; 1921f0 <TPort::Send(TSharedMemMsg *, unsigned long)+0xd4>
        1921b8:	15900000 	ldrne	r0, [r0]
        1921bc:	1b65dcb3 	blne	1b09490 <$UnScheduleTask(TTask *)>
        1921c0:	e3370000 	teq	r7, #0	; 0x0
        1921c4:	0a00000a 	beq	1921f4 <TPort::Send(TSharedMemMsg *, unsigned long)+0xd8>
        1921c8:	e3150301 	tst	r5, #67108864	; 0x4000000
        1921cc:	1b65dcc5 	blne	1b094e8 <$WantSchedule(void)>
        1921d0:	e1a00009 	mov	r0, r9
        1921d4:	e1a01007 	mov	r1, r7
        1921d8:	eb691ec0 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1921dc:	e1a01004 	mov	r1, r4
        1921e0:	e1a00007 	mov	r0, r7
        1921e4:	e3a02000 	mov	r2, #0	; 0x0
        1921e8:	eb658e2b 	bl	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        1921ec:	ea000007 	b	192210 <TPort::Send(TSharedMemMsg *, unsigned long)+0xf4>
        1921f0:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1921f4:	e3150002 	tst	r5, #2	; 0x2
        1921f8:	e2860010 	add	r0, r6, #16	; 0x10
        1921fc:	e1a01004 	mov	r1, r4
        192200:	0a000001 	beq	19220c <TPort::Send(TSharedMemMsg *, unsigned long)+0xf0>
        192204:	eb68f55f 	bl	1bcf788 <TDoubleQContainer::$AddToFront(void *)>
        192208:	ea000000 	b	192210 <TPort::Send(TSharedMemMsg *, unsigned long)+0xf4>
        19220c:	eb68f154 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        192210:	e3380000 	teq	r8, #0	; 0x0
        192214:	0a000000 	beq	19221c <TPort::Send(TSharedMemMsg *, unsigned long)+0x100>
        192218:	e5a48044 	str	r8, [r4, #68]!
        19221c:	e1a00008 	mov	r0, r8
        192220:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPort::Receive(TSharedMemMsg *, unsigned long)
 * Address: 00192330
 */
{ return TPort::Receive(nil, (TTimeout) kNoTimeout, msgFilter); } {
    /*
        192330:	e1a0c00d 	mov	ip, sp
        192334:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        192338:	e24cb004 	sub	fp, ip, #4	; 0x4
        19233c:	e1a06000 	mov	r6, r0
        192340:	e1a04001 	mov	r4, r1
        192344:	e1a05002 	mov	r5, r2
        192348:	e3a08000 	mov	r8, #0	; 0x0
        19234c:	e3120401 	tst	r2, #16777216	; 0x1000000
        192350:	e59f9030 	ldr	r9, [pc, #30]	; 192388 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x58>
        192354:	15940024 	ldrne	r0, [r4, #36]
        192358:	13300000 	teqne	r0, #0	; 0x0
        19235c:	0a000005 	beq	192378 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x48>
        192360:	e1a01004 	mov	r1, r4
        192364:	e5990000 	ldr	r0, [r9]
        192368:	eb65bf6c 	bl	1b02120 <TTimerEngine::$QueueTimeout(TSharedMemMsg *)>
        19236c:	e3300000 	teq	r0, #0	; 0x0
        192370:	059f8014 	ldreq	r8, [pc, #14]	; 19238c <TPort::Receive(TSharedMemMsg *, unsigned long)+0x5c>
        192374:	0a00003a 	beq	192464 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x134>
        192378:	e2860010 	add	r0, r6, #16	; 0x10
        19237c:	e1a0a000 	mov	sl, r0
        192380:	eb69161a 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        192384:	ea000004 	b	19239c <TPort::Receive(TSharedMemMsg *, unsigned long)+0x6c>
        192388:	0c100fe0 	ldceq	15, cr0, [r0], -#896
        19238c:	ffffd8db 	swinv	0x00ffd8db
        192390:	e1a0000a 	mov	r0, sl
        192394:	e1a01007 	mov	r1, r7
        192398:	eb690594 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        19239c:	e1b07000 	movs	r7, r0
        1923a0:	15940054 	ldrne	r0, [r4, #84]
        1923a4:	13700001 	cmnne	r0, #1	; 0x1
        1923a8:	0a000002 	beq	1923b8 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x88>
        1923ac:	e5971050 	ldr	r1, [r7, #80]	; fField80
        1923b0:	e1110000 	tst	r1, r0
        1923b4:	0afffff5 	beq	192390 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x60>
        1923b8:	e3150020 	tst	r5, #32	; 0x20
        1923bc:	0a000008 	beq	1923e4 <TPort::Receive(TSharedMemMsg *, unsigned long)+0xb4>
        1923c0:	e3a00000 	mov	r0, #0	; 0x0
        1923c4:	e5840044 	str	r0, [r4, #68]
        1923c8:	e1a01004 	mov	r1, r4
        1923cc:	e5990000 	ldr	r0, [r9]
        1923d0:	eb65c380 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        1923d4:	e3370000 	teq	r7, #0	; 0x0
        1923d8:	03a080dc 	moveq	r8, #220	; 0xdc
        1923dc:	02488b0a 	subeq	r8, r8, #10240	; 0x2800
        1923e0:	ea00001d 	b	19245c <TPort::Receive(TSharedMemMsg *, unsigned long)+0x12c>
        1923e4:	e3370000 	teq	r7, #0	; 0x0
        1923e8:	0a000007 	beq	19240c <TPort::Receive(TSharedMemMsg *, unsigned long)+0xdc>
        1923ec:	e1a0000a 	mov	r0, sl
        1923f0:	e1a01007 	mov	r1, r7
        1923f4:	eb691e39 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1923f8:	e1a01007 	mov	r1, r7
        1923fc:	e1a00004 	mov	r0, r4
        192400:	e3a02000 	mov	r2, #0	; 0x0
        192404:	eb658da4 	bl	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        192408:	ea000013 	b	19245c <TPort::Receive(TSharedMemMsg *, unsigned long)+0x12c>
        19240c:	e3150004 	tst	r5, #4	; 0x4
        192410:	0a000005 	beq	19242c <TPort::Receive(TSharedMemMsg *, unsigned long)+0xfc>
        192414:	e1a01004 	mov	r1, r4
        192418:	e5990000 	ldr	r0, [r9]
        19241c:	eb65c36d 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        192420:	e3a080dc 	mov	r8, #220	; 0xdc
        192424:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        192428:	ea00000d 	b	192464 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x134>
        19242c:	e3150402 	tst	r5, #33554432	; 0x2000000
        192430:	159f001c 	ldrne	r0, [pc, #1c]	; 192454 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x124>
        192434:	15900000 	ldrne	r0, [r0]
        192438:	1b65dc14 	blne	1b09490 <$UnScheduleTask(TTask *)>
        19243c:	e3150002 	tst	r5, #2	; 0x2
        192440:	e2860024 	add	r0, r6, #36	; 0x24
        192444:	e1a01004 	mov	r1, r4
        192448:	0a000002 	beq	192458 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x128>
        19244c:	eb68f4cd 	bl	1bcf788 <TDoubleQContainer::$AddToFront(void *)>
        192450:	ea000001 	b	19245c <TPort::Receive(TSharedMemMsg *, unsigned long)+0x12c>
        192454:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        192458:	eb68f0c1 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        19245c:	e3380000 	teq	r8, #0	; 0x0
        192460:	0a000000 	beq	192468 <TPort::Receive(TSharedMemMsg *, unsigned long)+0x138>
        192464:	e5a48044 	str	r8, [r4, #68]!
        192468:	e1a00008 	mov	r0, r8
        19246c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

