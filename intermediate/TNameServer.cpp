#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TNameServer::Hash(char *)
 * Address: 0012f3f0
 */
TNameServer::Hash(char *) {
    /*
        12f3f0:	e3a02000 	mov	r2, #0	; 0x0
        12f3f4:	e3a00000 	mov	r0, #0	; 0x0
        12f3f8:	e5d13000 	ldrb	r3, [r1]
        12f3fc:	e3330000 	teq	r3, #0	; 0x0
        12f400:	0a000005 	beq	12f41c <TNameServer::Hash(char *)+0x2c>
        12f404:	e7d13000 	ldrb	r3, [r1, r0]
        12f408:	e0832002 	add	r2, r3, r2
        12f40c:	e2800001 	add	r0, r0, #1	; 0x1
        12f410:	e7d13000 	ldrb	r3, [r1, r0]
        12f414:	e3330000 	teq	r3, #0	; 0x0
        12f418:	1afffff9 	bne	12f404 <TNameServer::Hash(char *)+0x14>
        12f41c:	e202000f 	and	r0, r2, #15	; 0xf
        12f420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNameServer::BuildNameAndType(unsigned long, unsigned long)
 * Address: 0012f424
 */
TNameServer::BuildNameAndType(unsigned long, unsigned long) {
    /*
        12f424:	e1a0c00d 	mov	ip, sp
        12f428:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f42c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f430:	e1a04000 	mov	r4, r0
        12f434:	e1a05002 	mov	r5, r2
        12f438:	e24dd014 	sub	sp, sp, #20	; 0x14
        12f43c:	e3a00000 	mov	r0, #0	; 0x0
        12f440:	e5cd0010 	strb	r0, [sp, #16]	; fMsgType
        12f444:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        12f448:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        12f44c:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        12f450:	e5840060 	str	r0, [r4, #96]	; fField96
        12f454:	e5840064 	str	r0, [r4, #100]	; fField100
        12f458:	e28d000c 	add	r0, sp, #12	; 0xc
        12f45c:	eb6a84f9 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        12f460:	e1a01005 	mov	r1, r5
        12f464:	e28d0004 	add	r0, sp, #4	; 0x4
        12f468:	eb6a84f6 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        12f46c:	e1a0100d 	mov	r1, sp
        12f470:	e28d000c 	add	r0, sp, #12	; 0xc
        12f474:	e3a02000 	mov	r2, #0	; 0x0
        12f478:	eb6a956e 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        12f47c:	e3a050e9 	mov	r5, #233	; 0xe9
        12f480:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        12f484:	e3300000 	teq	r0, #0	; 0x0
        12f488:	1a00000d 	bne	12f4c4 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0xa0>
        12f48c:	e59d0000 	ldr	r0, [sp]
        12f490:	eb6a9db4 	bl	1bd6b68 <$malloc>
        12f494:	e5840060 	str	r0, [r4, #96]	; fField96
        12f498:	e3300000 	teq	r0, #0	; 0x0
        12f49c:	0a000015 	beq	12f4f8 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0xd4>
        12f4a0:	e3a03000 	mov	r3, #0	; 0x0
        12f4a4:	e3a02000 	mov	r2, #0	; 0x0
        12f4a8:	e92d000c 	stmdb	sp!, {r2, r3}
        12f4ac:	e1a02000 	mov	r2, r0
        12f4b0:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        12f4b4:	e28d1008 	add	r1, sp, #8	; 0x8
        12f4b8:	e28d0014 	add	r0, sp, #20	; 0x14
        12f4bc:	eb6a84de 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        12f4c0:	e28dd008 	add	sp, sp, #8	; 0x8
        12f4c4:	e3300000 	teq	r0, #0	; 0x0
        12f4c8:	1a000015 	bne	12f524 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0x100>
        12f4cc:	e1a0100d 	mov	r1, sp
        12f4d0:	e28d0004 	add	r0, sp, #4	; 0x4
        12f4d4:	e3a02000 	mov	r2, #0	; 0x0
        12f4d8:	eb6a9556 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        12f4dc:	e3300000 	teq	r0, #0	; 0x0
        12f4e0:	1a00000f 	bne	12f524 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0x100>
        12f4e4:	e59d0000 	ldr	r0, [sp]
        12f4e8:	eb6a9d9e 	bl	1bd6b68 <$malloc>
        12f4ec:	e5a40064 	str	r0, [r4, #100]!	; fField100
        12f4f0:	e3300000 	teq	r0, #0	; 0x0
        12f4f4:	1a000001 	bne	12f500 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0xdc>
        12f4f8:	e1a00005 	mov	r0, r5
        12f4fc:	ea000008 	b	12f524 <TNameServer::BuildNameAndType(unsigned long, unsigned long)+0x100>
        12f500:	e3a03000 	mov	r3, #0	; 0x0
        12f504:	e3a02000 	mov	r2, #0	; 0x0
        12f508:	e92d000c 	stmdb	sp!, {r2, r3}
        12f50c:	e1a02000 	mov	r2, r0
        12f510:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        12f514:	e28d1008 	add	r1, sp, #8	; 0x8
        12f518:	e28d000c 	add	r0, sp, #12	; 0xc
        12f51c:	eb6a84c6 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        12f520:	e28dd008 	add	sp, sp, #8	; 0x8
        12f524:	e1a04000 	mov	r4, r0
        12f528:	e28d0004 	add	r0, sp, #4	; 0x4
        12f52c:	e3a01000 	mov	r1, #0	; 0x0
        12f530:	eb6a7c7b 	bl	1bce724 <TUObject::$__dt(void)>
        12f534:	e28d000c 	add	r0, sp, #12	; 0xc
        12f538:	e3a01000 	mov	r1, #0	; 0x0
        12f53c:	eb6a7c78 	bl	1bce724 <TUObject::$__dt(void)>
        12f540:	e1a00004 	mov	r0, r4
        12f544:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::DeleteNameAndType(void)
 * Address: 0012f548
 */
TNameServer::DeleteNameAndType(void) {
    /*
        12f548:	e1a0c00d 	mov	ip, sp
        12f54c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12f550:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f554:	e1a04000 	mov	r4, r0
        12f558:	e5900060 	ldr	r0, [r0, #96]	; fField96
        12f55c:	eb6a785f 	bl	1bcd6e0 <$__dl(void *)>
        12f560:	e5b40064 	ldr	r0, [r4, #100]!	; fField100
        12f564:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        12f568:	ea6a785c 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TNameServer::RegisterName(unsigned long, unsigned long)
 * Address: 0012f6b8
 */
NewtonErr		TNameServer::RegisterName(char* name, char* type, ULong thing, ULong spec) {
    /*
        12f6b8:	e1a0c00d 	mov	ip, sp
        12f6bc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12f6c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f6c4:	e1a04000 	mov	r4, r0
        12f6c8:	e1a06001 	mov	r6, r1
        12f6cc:	e1a05002 	mov	r5, r2
        12f6d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        12f6d4:	e3a03000 	mov	r3, #0	; 0x0
        12f6d8:	e1a0200d 	mov	r2, sp
        12f6dc:	e92d000c 	stmdb	sp!, {r2, r3}
        12f6e0:	e5901060 	ldr	r1, [r0, #96]	; fField96
        12f6e4:	eb6731a7 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f6e8:	e0800100 	add	r0, r0, r0, lsl #2
        12f6ec:	e0840100 	add	r0, r4, r0, lsl #2
        12f6f0:	e2800068 	add	r0, r0, #104	; 0x68
        12f6f4:	e28d3008 	add	r3, sp, #8	; 0x8
        12f6f8:	e2842060 	add	r2, r4, #96	; 0x60
        12f6fc:	e8920006 	ldmia	r2, {r1, r2}
        12f700:	eb6798ea 	bl	1b15ab0 <TObjectNameList::$Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)>
        12f704:	e28dd008 	add	sp, sp, #8	; 0x8
        12f708:	e3a070ac 	mov	r7, #172	; 0xac
        12f70c:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        12f710:	e3300000 	teq	r0, #0	; 0x0
        12f714:	1a000011 	bne	12f760 <TNameServer::RegisterName(unsigned long, unsigned long)+0xa8>
        12f718:	e1a03005 	mov	r3, r5
        12f71c:	e92d0008 	stmdb	sp!, {r3}
        12f720:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f724:	e1a00004 	mov	r0, r4
        12f728:	eb673196 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f72c:	e0800100 	add	r0, r0, r0, lsl #2
        12f730:	e0840100 	add	r0, r4, r0, lsl #2
        12f734:	e2800068 	add	r0, r0, #104	; 0x68
        12f738:	e1a03006 	mov	r3, r6
        12f73c:	e2842060 	add	r2, r4, #96	; 0x60
        12f740:	e8920006 	ldmia	r2, {r1, r2}
        12f744:	eb670861 	bl	1af18d0 <TObjectNameList::$Add(char *, char *, unsigned long, unsigned long)>
        12f748:	e28dd004 	add	sp, sp, #4	; 0x4
        12f74c:	e3300000 	teq	r0, #0	; 0x0
        12f750:	13a00000 	movne	r0, #0	; 0x0
        12f754:	15840060 	strne	r0, [r4, #96]	; fField96
        12f758:	15a40064 	strne	r0, [r4, #100]!	; fField100
        12f75c:	1a000000 	bne	12f764 <TNameServer::RegisterName(unsigned long, unsigned long)+0xac>
        12f760:	e1a00007 	mov	r0, r7
        12f764:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::UnRegisterName(void)
 * Address: 0012f768
 */
NewtonErr		TNameServer::UnRegisterName(char* name, char* type) {
    /*
        12f768:	e1a0c00d 	mov	ip, sp
        12f76c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f770:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f774:	e1a04000 	mov	r4, r0
        12f778:	e24dd004 	sub	sp, sp, #4	; 0x4
        12f77c:	e3a03000 	mov	r3, #0	; 0x0
        12f780:	e1a0200d 	mov	r2, sp
        12f784:	e92d000c 	stmdb	sp!, {r2, r3}
        12f788:	e5901060 	ldr	r1, [r0, #96]	; fField96
        12f78c:	eb67317d 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f790:	e0800100 	add	r0, r0, r0, lsl #2
        12f794:	e0840100 	add	r0, r4, r0, lsl #2
        12f798:	e2800068 	add	r0, r0, #104	; 0x68
        12f79c:	e28d3008 	add	r3, sp, #8	; 0x8
        12f7a0:	e2842060 	add	r2, r4, #96	; 0x60
        12f7a4:	e8920006 	ldmia	r2, {r1, r2}
        12f7a8:	eb6798c0 	bl	1b15ab0 <TObjectNameList::$Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)>
        12f7ac:	e28dd008 	add	sp, sp, #8	; 0x8
        12f7b0:	e3a050ad 	mov	r5, #173	; 0xad
        12f7b4:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        12f7b8:	e3300000 	teq	r0, #0	; 0x0
        12f7bc:	0a00000b 	beq	12f7f0 <TNameServer::UnRegisterName(void)+0x88>
        12f7c0:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f7c4:	e1a00004 	mov	r0, r4
        12f7c8:	eb67316e 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f7cc:	e0800100 	add	r0, r0, r0, lsl #2
        12f7d0:	e0840100 	add	r0, r4, r0, lsl #2
        12f7d4:	e2800068 	add	r0, r0, #104	; 0x68
        12f7d8:	e284405c 	add	r4, r4, #92	; 0x5c
        12f7dc:	e9b40006 	ldmib	r4!, {r1, r2}
        12f7e0:	eb674e7f 	bl	1b031e4 <TObjectNameList::$Remove(char *, char *)>
        12f7e4:	e3300000 	teq	r0, #0	; 0x0
        12f7e8:	13a00000 	movne	r0, #0	; 0x0
        12f7ec:	1a000000 	bne	12f7f4 <TNameServer::UnRegisterName(void)+0x8c>
        12f7f0:	e1a00005 	mov	r0, r5
        12f7f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::QueueForRegister(TUMsgToken *)
 * Address: 0012f7f8
 */
TNameServer::QueueForRegister(TUMsgToken *) {
    /*
        12f7f8:	e1a0c00d 	mov	ip, sp
        12f7fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12f800:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f804:	e1a04000 	mov	r4, r0
        12f808:	e1a05001 	mov	r5, r1
        12f80c:	e24dd008 	sub	sp, sp, #8	; 0x8
        12f810:	e1a0200d 	mov	r2, sp
        12f814:	e28d1004 	add	r1, sp, #4	; 0x4
        12f818:	eb673dd5 	bl	1afef74 <TNameServer::$Lookup(unsigned long *, unsigned long *)>
        12f81c:	e3a07000 	mov	r7, #0	; 0x0
        12f820:	e3300000 	teq	r0, #0	; 0x0
        12f824:	1a00000d 	bne	12f860 <TNameServer::QueueForRegister(TUMsgToken *)+0x68>
        12f828:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12f82c:	e1a0000d 	mov	r0, sp
        12f830:	eb678c47 	bl	1b12954 <TNameServerReply::$__ct(void)>
        12f834:	e59d0010 	ldr	r0, [sp, #16]	; fMsgType
        12f838:	e58d0000 	str	r0, [sp]
        12f83c:	e59d000c 	ldr	r0, [sp, #12]	; fMsgName
        12f840:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        12f844:	e1a0100d 	mov	r1, sp
        12f848:	e1a00005 	mov	r0, r5
        12f84c:	e3a03000 	mov	r3, #0	; 0x0
        12f850:	e3a0200c 	mov	r2, #12	; 0xc
        12f854:	eb6aa924 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12f858:	e28dd00c 	add	sp, sp, #12	; 0xc
        12f85c:	ea000024 	b	12f8f4 <TNameServer::QueueForRegister(TUMsgToken *)+0xfc>
        12f860:	e3a0001c 	mov	r0, #28	; 0x1c
        12f864:	eb6a7bb3 	bl	1bce738 <$__nw(unsigned int)>
        12f868:	e3500000 	cmp	r0, #0	; 0x0
        12f86c:	0a000006 	beq	12f88c <TNameServer::QueueForRegister(TUMsgToken *)+0x94>
        12f870:	e5807004 	str	r7, [r0, #4]	; fNameServerPort
        12f874:	e5807010 	str	r7, [r0, #16]	; fMsgType
        12f878:	e5807008 	str	r7, [r0, #8]	; fField8
        12f87c:	e580700c 	str	r7, [r0, #12]	; fMsgName
        12f880:	e5807000 	str	r7, [r0]
        12f884:	e5807014 	str	r7, [r0, #20]	; fField20
        12f888:	e5807018 	str	r7, [r0, #24]	; fField24
        12f88c:	e1a06000 	mov	r6, r0
        12f890:	03a000e9 	moveq	r0, #233	; 0xe9
        12f894:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        12f898:	0a000016 	beq	12f8f8 <TNameServer::QueueForRegister(TUMsgToken *)+0x100>
        12f89c:	e5940060 	ldr	r0, [r4, #96]	; fField96
        12f8a0:	e5860014 	str	r0, [r6, #20]	; fField20
        12f8a4:	e5940064 	ldr	r0, [r4, #100]	; fField100
        12f8a8:	e5860018 	str	r0, [r6, #24]	; fField24
        12f8ac:	e2860004 	add	r0, r6, #4	; 0x4
        12f8b0:	e8955028 	ldmia	r5, {r3, r5, ip, lr}
        12f8b4:	e8805028 	stmia	r0, {r3, r5, ip, lr}
        12f8b8:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f8bc:	e1a00004 	mov	r0, r4
        12f8c0:	eb673130 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f8c4:	e0800100 	add	r0, r0, r0, lsl #2
        12f8c8:	e0840100 	add	r0, r4, r0, lsl #2
        12f8cc:	e5900068 	ldr	r0, [r0, #104]
        12f8d0:	e5860000 	str	r0, [r6]
        12f8d4:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f8d8:	e1a00004 	mov	r0, r4
        12f8dc:	eb673129 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f8e0:	e0800100 	add	r0, r0, r0, lsl #2
        12f8e4:	e0840100 	add	r0, r4, r0, lsl #2
        12f8e8:	e5a06068 	str	r6, [r0, #104]!
        12f8ec:	e5847060 	str	r7, [r4, #96]	; fField96
        12f8f0:	e5a47064 	str	r7, [r4, #100]!	; fField100
        12f8f4:	e1a00007 	mov	r0, r7
        12f8f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::QueueForUnregister(TUMsgToken *)
 * Address: 0012f8fc
 */
TNameServer::QueueForUnregister(TUMsgToken *) {
    /*
        12f8fc:	e1a0c00d 	mov	ip, sp
        12f900:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12f904:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f908:	e1a04000 	mov	r4, r0
        12f90c:	e1a05001 	mov	r5, r1
        12f910:	e24dd008 	sub	sp, sp, #8	; 0x8
        12f914:	e1a0200d 	mov	r2, sp
        12f918:	e28d1004 	add	r1, sp, #4	; 0x4
        12f91c:	eb673d94 	bl	1afef74 <TNameServer::$Lookup(unsigned long *, unsigned long *)>
        12f920:	e3a07000 	mov	r7, #0	; 0x0
        12f924:	e3300000 	teq	r0, #0	; 0x0
        12f928:	0a000006 	beq	12f948 <TNameServer::QueueForUnregister(TUMsgToken *)+0x4c>
        12f92c:	e1a00005 	mov	r0, r5
        12f930:	e3a030ad 	mov	r3, #173	; 0xad
        12f934:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        12f938:	e3a02000 	mov	r2, #0	; 0x0
        12f93c:	e3a01000 	mov	r1, #0	; 0x0
        12f940:	eb6aa8e9 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12f944:	ea000024 	b	12f9dc <TNameServer::QueueForUnregister(TUMsgToken *)+0xe0>
        12f948:	e3a0001c 	mov	r0, #28	; 0x1c
        12f94c:	eb6a7b79 	bl	1bce738 <$__nw(unsigned int)>
        12f950:	e3500000 	cmp	r0, #0	; 0x0
        12f954:	0a000006 	beq	12f974 <TNameServer::QueueForUnregister(TUMsgToken *)+0x78>
        12f958:	e5807004 	str	r7, [r0, #4]	; fNameServerPort
        12f95c:	e5807010 	str	r7, [r0, #16]	; fMsgType
        12f960:	e5807008 	str	r7, [r0, #8]	; fField8
        12f964:	e580700c 	str	r7, [r0, #12]	; fMsgName
        12f968:	e5807000 	str	r7, [r0]
        12f96c:	e5807014 	str	r7, [r0, #20]	; fField20
        12f970:	e5807018 	str	r7, [r0, #24]	; fField24
        12f974:	e1a06000 	mov	r6, r0
        12f978:	03a000e9 	moveq	r0, #233	; 0xe9
        12f97c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        12f980:	0a000016 	beq	12f9e0 <TNameServer::QueueForUnregister(TUMsgToken *)+0xe4>
        12f984:	e5940060 	ldr	r0, [r4, #96]	; fField96
        12f988:	e5860014 	str	r0, [r6, #20]	; fField20
        12f98c:	e5940064 	ldr	r0, [r4, #100]	; fField100
        12f990:	e5860018 	str	r0, [r6, #24]	; fField24
        12f994:	e2860004 	add	r0, r6, #4	; 0x4
        12f998:	e8955028 	ldmia	r5, {r3, r5, ip, lr}
        12f99c:	e8805028 	stmia	r0, {r3, r5, ip, lr}
        12f9a0:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f9a4:	e1a00004 	mov	r0, r4
        12f9a8:	eb6730f6 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f9ac:	e0800100 	add	r0, r0, r0, lsl #2
        12f9b0:	e0840100 	add	r0, r4, r0, lsl #2
        12f9b4:	e590006c 	ldr	r0, [r0, #108]
        12f9b8:	e5860000 	str	r0, [r6]
        12f9bc:	e5941060 	ldr	r1, [r4, #96]	; fField96
        12f9c0:	e1a00004 	mov	r0, r4
        12f9c4:	eb6730ef 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12f9c8:	e0800100 	add	r0, r0, r0, lsl #2
        12f9cc:	e0840100 	add	r0, r4, r0, lsl #2
        12f9d0:	e5a0606c 	str	r6, [r0, #108]!
        12f9d4:	e5847060 	str	r7, [r4, #96]	; fField96
        12f9d8:	e5a47064 	str	r7, [r4, #100]!	; fField100
        12f9dc:	e1a00007 	mov	r0, r7
        12f9e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::Lookup(unsigned long *, unsigned long *)
 * Address: 0012f9e4
 */
NewtonErr		TNameServer::Lookup(char* name, char* type, ULong* thing, ULong* spec) {
    /*
        12f9e4:	e1a0c00d 	mov	ip, sp
        12f9e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f9ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f9f0:	e1a04000 	mov	r4, r0
        12f9f4:	e1a05001 	mov	r5, r1
        12f9f8:	e3a03000 	mov	r3, #0	; 0x0
        12f9fc:	e92d000c 	stmdb	sp!, {r2, r3}
        12fa00:	e5901060 	ldr	r1, [r0, #96]	; fField96
        12fa04:	eb6730df 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12fa08:	e0800100 	add	r0, r0, r0, lsl #2
        12fa0c:	e0840100 	add	r0, r4, r0, lsl #2
        12fa10:	e2800068 	add	r0, r0, #104	; 0x68
        12fa14:	e1a03005 	mov	r3, r5
        12fa18:	e284405c 	add	r4, r4, #92	; 0x5c
        12fa1c:	e9b40006 	ldmib	r4!, {r1, r2}
        12fa20:	eb679822 	bl	1b15ab0 <TObjectNameList::$Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)>
        12fa24:	e28dd008 	add	sp, sp, #8	; 0x8
        12fa28:	e3300000 	teq	r0, #0	; 0x0
        12fa2c:	13a00000 	movne	r0, #0	; 0x0
        12fa30:	03a000ad 	moveq	r0, #173	; 0xad
        12fa34:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        12fa38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)
 * Address: 0012fa3c
 */
TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *) {
    /*
        12fa3c:	e1a0c00d 	mov	ip, sp
        12fa40:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12fa44:	e24cb004 	sub	fp, ip, #4	; 0x4
        12fa48:	e1a08000 	mov	r8, r0
        12fa4c:	e1a05001 	mov	r5, r1
        12fa50:	e1a04002 	mov	r4, r2
        12fa54:	e24dd018 	sub	sp, sp, #24	; 0x18
        12fa58:	e28d0008 	add	r0, sp, #8	; 0x8
        12fa5c:	eb678bbc 	bl	1b12954 <TNameServerReply::$__ct(void)>
        12fa60:	e3a09000 	mov	r9, #0	; 0x0
        12fa64:	e28d3014 	add	r3, sp, #20	; 0x14
        12fa68:	e1a0200d 	mov	r2, sp
        12fa6c:	e92d000c 	stmdb	sp!, {r2, r3}
        12fa70:	e5981060 	ldr	r1, [r8, #96]	; fField96
        12fa74:	e1a00008 	mov	r0, r8
        12fa78:	eb6730c2 	bl	1afbd88 <TNameServer::$Hash(char *)>
        12fa7c:	e0800100 	add	r0, r0, r0, lsl #2
        12fa80:	e0880100 	add	r0, r8, r0, lsl #2
        12fa84:	e2800068 	add	r0, r0, #104	; 0x68
        12fa88:	e28d300c 	add	r3, sp, #12	; 0xc
        12fa8c:	e2882060 	add	r2, r8, #96	; 0x60
        12fa90:	e8920006 	ldmia	r2, {r1, r2}
        12fa94:	eb679805 	bl	1b15ab0 <TObjectNameList::$Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)>
        12fa98:	e28dd008 	add	sp, sp, #8	; 0x8
        12fa9c:	e3300000 	teq	r0, #0	; 0x0
        12faa0:	03a090ad 	moveq	r9, #173	; 0xad
        12faa4:	02499b0a 	subeq	r9, r9, #10240	; 0x2800
        12faa8:	0a00009e 	beq	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12faac:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        12fab0:	e5916014 	ldr	r6, [r1, #20]	; fField20
        12fab4:	e3a07000 	mov	r7, #0	; 0x0
        12fab8:	e3a000a2 	mov	r0, #162	; 0xa2
        12fabc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        12fac0:	e594201c 	ldr	r2, [r4, #28]	; fField28
        12fac4:	e3320001 	teq	r2, #1	; 0x1
        12fac8:	0a000012 	beq	12fb18 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0xdc>
        12facc:	e3320002 	teq	r2, #2	; 0x2
        12fad0:	0a00005d 	beq	12fc4c <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x210>
        12fad4:	e3320003 	teq	r2, #3	; 0x3
        12fad8:	0a00006b 	beq	12fc8c <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x250>
        12fadc:	e3320004 	teq	r2, #4	; 0x4
        12fae0:	1a00008a 	bne	12fd10 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d4>
        12fae4:	e3360000 	teq	r6, #0	; 0x0
        12fae8:	0a00008e 	beq	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12faec:	e2861004 	add	r1, r6, #4	; 0x4
        12faf0:	e1a00008 	mov	r0, r8
        12faf4:	eb6793d1 	bl	1b14a40 <TNameServer::$ResArbDeleteResOwnerInfo(TResOwnerInfo *&)>
        12faf8:	e5867004 	str	r7, [r6, #4]	; fNameServerPort
        12fafc:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        12fb00:	e3300000 	teq	r0, #0	; 0x0
        12fb04:	1a000087 	bne	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fb08:	e1a00008 	mov	r0, r8
        12fb0c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        12fb10:	eb6793c9 	bl	1b14a3c <TNameServer::$ResArbDeleteResArbInfo(TObjectNameEntry *)>
        12fb14:	ea000083 	b	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fb18:	e3360000 	teq	r6, #0	; 0x0
        12fb1c:	0a00003c 	beq	12fc14 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x1d8>
        12fb20:	e5961000 	ldr	r1, [r6]
        12fb24:	e3110001 	tst	r1, #1	; 0x1
        12fb28:	1a00005e 	bne	12fca8 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x26c>
        12fb2c:	e596c008 	ldr	ip, [r6, #8]	; fField8
        12fb30:	e33c0000 	teq	ip, #0	; 0x0
        12fb34:	0596c004 	ldreq	ip, [r6, #4]	; fNameServerPort
        12fb38:	033c0000 	teqeq	ip, #0	; 0x0
        12fb3c:	0a00002c 	beq	12fbf4 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x1b8>
        12fb40:	e33c0000 	teq	ip, #0	; 0x0
        12fb44:	0a00002a 	beq	12fbf4 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x1b8>
        12fb48:	e3a00001 	mov	r0, #1	; 0x1
        12fb4c:	e5860014 	str	r0, [r6, #20]	; fField20
        12fb50:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        12fb54:	e590000c 	ldr	r0, [r0, #12]	; fMsgName
        12fb58:	e5860018 	str	r0, [r6, #24]	; fField24
        12fb5c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        12fb60:	e5900010 	ldr	r0, [r0, #16]	; fMsgType
        12fb64:	e586001c 	str	r0, [r6, #28]	; fField28
        12fb68:	e286e020 	add	lr, r6, #32	; 0x20
        12fb6c:	e286800c 	add	r8, r6, #12	; 0xc
        12fb70:	e2860030 	add	r0, r6, #48	; 0x30
        12fb74:	e3a01010 	mov	r1, #16	; 0x10
        12fb78:	e3a0295e 	mov	r2, #1540096	; 0x178000
        12fb7c:	e282251a 	add	r2, r2, #109051904	; 0x6800000
        12fb80:	e3a03000 	mov	r3, #0	; 0x0
        12fb84:	e3a09040 	mov	r9, #64	; 0x40
        12fb88:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12fb8c:	e1a03007 	mov	r3, r7
        12fb90:	e3a02001 	mov	r2, #1	; 0x1
        12fb94:	e1a01009 	mov	r1, r9
        12fb98:	e3a00014 	mov	r0, #20	; 0x14
        12fb9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12fba0:	e1a03008 	mov	r3, r8
        12fba4:	e92d0008 	stmdb	sp!, {r3}
        12fba8:	e1a0000c 	mov	r0, ip
        12fbac:	e3a03000 	mov	r3, #0	; 0x0
        12fbb0:	e49e1008 	ldr	r1, [lr], #8	; fField8
        12fbb4:	e59e2000 	ldr	r2, [lr]
        12fbb8:	eb6aac63 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        12fbbc:	e28dd024 	add	sp, sp, #36	; 0x24
        12fbc0:	e1b09000 	movs	r9, r0
        12fbc4:	1a000057 	bne	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fbc8:	e2860040 	add	r0, r6, #64	; 0x40
        12fbcc:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        12fbd0:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        12fbd4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12fbd8:	e5860050 	str	r0, [r6, #80]
        12fbdc:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        12fbe0:	e5860054 	str	r0, [r6, #84]
        12fbe4:	e5960000 	ldr	r0, [r6]
        12fbe8:	e3800001 	orr	r0, r0, #1	; 0x1
        12fbec:	e5860000 	str	r0, [r6]
        12fbf0:	ea000046 	b	12fd10 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d4>
        12fbf4:	e2861008 	add	r1, r6, #8	; 0x8
        12fbf8:	e1a00008 	mov	r0, r8
        12fbfc:	e5b43020 	ldr	r3, [r4, #32]!	; fField32
        12fc00:	e5942004 	ldr	r2, [r4, #4]	; fNameServerPort
        12fc04:	eb67938b 	bl	1b14a38 <TNameServer::$ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)>
        12fc08:	e1b09000 	movs	r9, r0
        12fc0c:	0a000045 	beq	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fc10:	ea00003f 	b	12fd14 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d8>
        12fc14:	e1a00008 	mov	r0, r8
        12fc18:	eb679385 	bl	1b14a34 <TNameServer::$ResArbBuildResArbInfo(TObjectNameEntry *)>
        12fc1c:	e1b09000 	movs	r9, r0
        12fc20:	1a000040 	bne	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fc24:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        12fc28:	e5b06014 	ldr	r6, [r0, #20]!	; fField20
        12fc2c:	e2861008 	add	r1, r6, #8	; 0x8
        12fc30:	e1a00008 	mov	r0, r8
        12fc34:	e5b43020 	ldr	r3, [r4, #32]!	; fField32
        12fc38:	e5942004 	ldr	r2, [r4, #4]	; fNameServerPort
        12fc3c:	eb67937d 	bl	1b14a38 <TNameServer::$ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)>
        12fc40:	e1b09000 	movs	r9, r0
        12fc44:	0a000037 	beq	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fc48:	ea000031 	b	12fd14 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d8>
        12fc4c:	e3360000 	teq	r6, #0	; 0x0
        12fc50:	0a00000b 	beq	12fc84 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x248>
        12fc54:	e2861008 	add	r1, r6, #8	; 0x8
        12fc58:	e1a00008 	mov	r0, r8
        12fc5c:	eb679377 	bl	1b14a40 <TNameServer::$ResArbDeleteResOwnerInfo(TResOwnerInfo *&)>
        12fc60:	e5867008 	str	r7, [r6, #8]	; fField8
        12fc64:	e5b60004 	ldr	r0, [r6, #4]!	; fNameServerPort
        12fc68:	e3300000 	teq	r0, #0	; 0x0
        12fc6c:	e1a00008 	mov	r0, r8
        12fc70:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        12fc74:	0a000001 	beq	12fc80 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x244>
        12fc78:	eb679372 	bl	1b14a48 <TNameServer::$ResArbSendClaimNotification(TObjectNameEntry *)>
        12fc7c:	ea000000 	b	12fc84 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x248>
        12fc80:	eb67936d 	bl	1b14a3c <TNameServer::$ResArbDeleteResArbInfo(TObjectNameEntry *)>
        12fc84:	e3a09000 	mov	r9, #0	; 0x0
        12fc88:	ea000026 	b	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fc8c:	e3360000 	teq	r6, #0	; 0x0
        12fc90:	0a000008 	beq	12fcb8 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x27c>
        12fc94:	e5962004 	ldr	r2, [r6, #4]	; fNameServerPort
        12fc98:	e3320000 	teq	r2, #0	; 0x0
        12fc9c:	05962008 	ldreq	r2, [r6, #8]	; fField8
        12fca0:	03320000 	teqeq	r2, #0	; 0x0
        12fca4:	0a000001 	beq	12fcb0 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x274>
        12fca8:	e1a09000 	mov	r9, r0
        12fcac:	ea00001d 	b	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fcb0:	e3360000 	teq	r6, #0	; 0x0
        12fcb4:	1a000005 	bne	12fcd0 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x294>
        12fcb8:	e1a00008 	mov	r0, r8
        12fcbc:	eb67935c 	bl	1b14a34 <TNameServer::$ResArbBuildResArbInfo(TObjectNameEntry *)>
        12fcc0:	e1b09000 	movs	r9, r0
        12fcc4:	1a000017 	bne	12fd28 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2ec>
        12fcc8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        12fccc:	e5b06014 	ldr	r6, [r0, #20]!	; fField20
        12fcd0:	e2861004 	add	r1, r6, #4	; 0x4
        12fcd4:	e1a00008 	mov	r0, r8
        12fcd8:	e5b43020 	ldr	r3, [r4, #32]!	; fField32
        12fcdc:	e5942004 	ldr	r2, [r4, #4]	; fNameServerPort
        12fce0:	eb679354 	bl	1b14a38 <TNameServer::$ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)>
        12fce4:	e1b09000 	movs	r9, r0
        12fce8:	1a000009 	bne	12fd14 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d8>
        12fcec:	e58d7010 	str	r7, [sp, #16]	; fMsgType
        12fcf0:	e28d1008 	add	r1, sp, #8	; 0x8
        12fcf4:	e1a00005 	mov	r0, r5
        12fcf8:	e3a03000 	mov	r3, #0	; 0x0
        12fcfc:	e3a0200c 	mov	r2, #12	; 0xc
        12fd00:	eb6aa7f9 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12fd04:	e1a00008 	mov	r0, r8
        12fd08:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        12fd0c:	eb67934d 	bl	1b14a48 <TNameServer::$ResArbSendClaimNotification(TObjectNameEntry *)>
        12fd10:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        12fd14:	e5960004 	ldr	r0, [r6, #4]	; fNameServerPort
        12fd18:	e3300000 	teq	r0, #0	; 0x0
        12fd1c:	05b60008 	ldreq	r0, [r6, #8]!	; fField8
        12fd20:	03300000 	teqeq	r0, #0	; 0x0
        12fd24:	0affff77 	beq	12fb08 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0xcc>
        12fd28:	e58d9010 	str	r9, [sp, #16]	; fMsgType
        12fd2c:	e28d1008 	add	r1, sp, #8	; 0x8
        12fd30:	e1a00005 	mov	r0, r5
        12fd34:	e3a03000 	mov	r3, #0	; 0x0
        12fd38:	e3a0200c 	mov	r2, #12	; 0xc
        12fd3c:	eb6aa7ea 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12fd40:	eafffff2 	b	12fd10 <TNameServer::ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)+0x2d4>
    */
}

/**
 * Symbol: TNameServer::ResArbBuildResArbInfo(TObjectNameEntry *)
 * Address: 0012fd44
 */
TNameServer::ResArbBuildResArbInfo(TObjectNameEntry *) {
    /*
        12fd44:	e1a0c00d 	mov	ip, sp
        12fd48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12fd4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12fd50:	e1a05000 	mov	r5, r0
        12fd54:	e1a04001 	mov	r4, r1
        12fd58:	e3a00000 	mov	r0, #0	; 0x0
        12fd5c:	eb679756 	bl	1b15abc <TResArbitrationInfo::$__ct(void)>
        12fd60:	e5840014 	str	r0, [r4, #20]	; fField20
        12fd64:	e3300000 	teq	r0, #0	; 0x0
        12fd68:	1a000001 	bne	12fd74 <TNameServer::ResArbBuildResArbInfo(TObjectNameEntry *)+0x30>
        12fd6c:	eb6ac8eb 	bl	1be2120 <$MemError>
        12fd70:	ea000001 	b	12fd7c <TNameServer::ResArbBuildResArbInfo(TObjectNameEntry *)+0x38>
        12fd74:	e2851018 	add	r1, r5, #24	; 0x18
        12fd78:	eb679751 	bl	1b15ac4 <TResArbitrationInfo::$Init(TUPort *)>
        12fd7c:	e1b05000 	movs	r5, r0
        12fd80:	0a000005 	beq	12fd9c <TNameServer::ResArbBuildResArbInfo(TObjectNameEntry *)+0x58>
        12fd84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12fd88:	e3300000 	teq	r0, #0	; 0x0
        12fd8c:	13a01001 	movne	r1, #1	; 0x1
        12fd90:	1b67974a 	blne	1b15ac0 <TResArbitrationInfo::$__dt(void)>
        12fd94:	e3a00000 	mov	r0, #0	; 0x0
        12fd98:	e5a40014 	str	r0, [r4, #20]!	; fField20
        12fd9c:	e1a00005 	mov	r0, r5
        12fda0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResArbDeleteResArbInfo(TObjectNameEntry *)
 * Address: 0012fda4
 */
TNameServer::ResArbDeleteResArbInfo(TObjectNameEntry *) {
    /*
        12fda4:	e1a0c00d 	mov	ip, sp
        12fda8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12fdac:	e24cb004 	sub	fp, ip, #4	; 0x4
        12fdb0:	e1a04001 	mov	r4, r1
        12fdb4:	e5910014 	ldr	r0, [r1, #20]	; fField20
        12fdb8:	e3300000 	teq	r0, #0	; 0x0
        12fdbc:	13a01001 	movne	r1, #1	; 0x1
        12fdc0:	1b67973e 	blne	1b15ac0 <TResArbitrationInfo::$__dt(void)>
        12fdc4:	e3a00000 	mov	r0, #0	; 0x0
        12fdc8:	e5a40014 	str	r0, [r4, #20]!	; fField20
        12fdcc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)
 * Address: 0012fdd0
 */
TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long) {
    /*
        12fdd0:	e1a0c00d 	mov	ip, sp
        12fdd4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        12fdd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12fddc:	e1a04001 	mov	r4, r1
        12fde0:	e1a05002 	mov	r5, r2
        12fde4:	e1a06003 	mov	r6, r3
        12fde8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12fdec:	e3a07000 	mov	r7, #0	; 0x0
        12fdf0:	e3a08000 	mov	r8, #0	; 0x0
        12fdf4:	e5cd8008 	strb	r8, [sp, #8]	; fField8
        12fdf8:	e3a00000 	mov	r0, #0	; 0x0
        12fdfc:	e58d8004 	str	r8, [sp, #4]	; fNameServerPort
        12fe00:	eb679730 	bl	1b15ac8 <TResOwnerInfo::$__ct(void)>
        12fe04:	e5840000 	str	r0, [r4]
        12fe08:	e1b01000 	movs	r1, r0
        12fe0c:	1a000002 	bne	12fe1c <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0x4c>
        12fe10:	eb6ac8c2 	bl	1be2120 <$MemError>
        12fe14:	e1a07000 	mov	r7, r0
        12fe18:	ea000026 	b	12feb8 <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xe8>
        12fe1c:	e1a00001 	mov	r0, r1
        12fe20:	e1a01006 	mov	r1, r6
        12fe24:	eb6a8287 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        12fe28:	e3350000 	teq	r5, #0	; 0x0
        12fe2c:	0a000021 	beq	12feb8 <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xe8>
        12fe30:	e1a01005 	mov	r1, r5
        12fe34:	e28d0004 	add	r0, sp, #4	; 0x4
        12fe38:	eb6a8282 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        12fe3c:	e1a0100d 	mov	r1, sp
        12fe40:	e28d0004 	add	r0, sp, #4	; 0x4
        12fe44:	e3a02000 	mov	r2, #0	; 0x0
        12fe48:	eb6a92fa 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        12fe4c:	e1b07000 	movs	r7, r0
        12fe50:	1a000011 	bne	12fe9c <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xcc>
        12fe54:	e59d0000 	ldr	r0, [sp]
        12fe58:	eb6ac8b8 	bl	1be2140 <$NewPtr>
        12fe5c:	e5941000 	ldr	r1, [r4]
        12fe60:	e5a10008 	str	r0, [r1, #8]!	; fField8
        12fe64:	e3300000 	teq	r0, #0	; 0x0
        12fe68:	1a000001 	bne	12fe74 <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xa4>
        12fe6c:	eb6ac8ab 	bl	1be2120 <$MemError>
        12fe70:	ea000008 	b	12fe98 <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xc8>
        12fe74:	e3a03000 	mov	r3, #0	; 0x0
        12fe78:	e3a02000 	mov	r2, #0	; 0x0
        12fe7c:	e92d000c 	stmdb	sp!, {r2, r3}
        12fe80:	e1a02000 	mov	r2, r0
        12fe84:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        12fe88:	e28d1008 	add	r1, sp, #8	; 0x8
        12fe8c:	e28d000c 	add	r0, sp, #12	; 0xc
        12fe90:	eb6a8269 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        12fe94:	e28dd008 	add	sp, sp, #8	; 0x8
        12fe98:	e1a07000 	mov	r7, r0
        12fe9c:	e3370000 	teq	r7, #0	; 0x0
        12fea0:	0a000004 	beq	12feb8 <TNameServer::ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)+0xe8>
        12fea4:	e5940000 	ldr	r0, [r4]
        12fea8:	e3300000 	teq	r0, #0	; 0x0
        12feac:	13a01001 	movne	r1, #1	; 0x1
        12feb0:	1b679705 	blne	1b15acc <TResOwnerInfo::$__dt(void)>
        12feb4:	e5848000 	str	r8, [r4]
        12feb8:	e28d0004 	add	r0, sp, #4	; 0x4
        12febc:	e3a01000 	mov	r1, #0	; 0x0
        12fec0:	eb6a7a17 	bl	1bce724 <TUObject::$__dt(void)>
        12fec4:	e1a00007 	mov	r0, r7
        12fec8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResArbDeleteResOwnerInfo(TResOwnerInfo *&)
 * Address: 0012fecc
 */
TNameServer::ResArbDeleteResOwnerInfo(TResOwnerInfo *&) {
    /*
        12fecc:	e1a0c00d 	mov	ip, sp
        12fed0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12fed4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12fed8:	e1a04001 	mov	r4, r1
        12fedc:	e5910000 	ldr	r0, [r1]
        12fee0:	e3300000 	teq	r0, #0	; 0x0
        12fee4:	13a01001 	movne	r1, #1	; 0x1
        12fee8:	1b6796f7 	blne	1b15acc <TResOwnerInfo::$__dt(void)>
        12feec:	e3a00000 	mov	r0, #0	; 0x0
        12fef0:	e5840000 	str	r0, [r4]
        12fef4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResArbSendClaimNotification(TObjectNameEntry *)
 * Address: 0012ff80
 */
TNameServer::ResArbSendClaimNotification(TObjectNameEntry *) {
    /*
        12ff80:	e1a0c00d 	mov	ip, sp
        12ff84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12ff88:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ff8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        12ff90:	e3a00002 	mov	r0, #2	; 0x2
        12ff94:	e5914014 	ldr	r4, [r1, #20]	; fField20
        12ff98:	e5840014 	str	r0, [r4, #20]	; fField20
        12ff9c:	e591000c 	ldr	r0, [r1, #12]	; fMsgName
        12ffa0:	e5840018 	str	r0, [r4, #24]	; fField24
        12ffa4:	e5b10010 	ldr	r0, [r1, #16]!	; fMsgType
        12ffa8:	e584001c 	str	r0, [r4, #28]	; fField28
        12ffac:	e594c004 	ldr	ip, [r4, #4]	; fNameServerPort
        12ffb0:	e284e00c 	add	lr, r4, #12	; 0xc
        12ffb4:	e2840030 	add	r0, r4, #48	; 0x30
        12ffb8:	e3a01010 	mov	r1, #16	; 0x10
        12ffbc:	e3a0295e 	mov	r2, #1540096	; 0x178000
        12ffc0:	e282251a 	add	r2, r2, #109051904	; 0x6800000
        12ffc4:	e3a05040 	mov	r5, #64	; 0x40
        12ffc8:	e3a06000 	mov	r6, #0	; 0x0
        12ffcc:	e3a03000 	mov	r3, #0	; 0x0
        12ffd0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ffd4:	e1a03006 	mov	r3, r6
        12ffd8:	e3a02000 	mov	r2, #0	; 0x0
        12ffdc:	e1a01005 	mov	r1, r5
        12ffe0:	e3a00014 	mov	r0, #20	; 0x14
        12ffe4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ffe8:	e1a0300e 	mov	r3, lr
        12ffec:	e92d0008 	stmdb	sp!, {r3}
        12fff0:	e28d3024 	add	r3, sp, #36	; 0x24
        12fff4:	e1a0000c 	mov	r0, ip
        12fff8:	e3a02002 	mov	r2, #2	; 0x2
        12fffc:	e3a01001 	mov	r1, #1	; 0x1
        130000:	eb6aab51 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130004:	e28dd024 	add	sp, sp, #36	; 0x24
        130008:	e3300000 	teq	r0, #0	; 0x0
        13000c:	05b40038 	ldreq	r0, [r4, #56]!	; fField56
        130010:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::ResArbHandleReply(TResArbitrationInfo *)
 * Address: 00130014
 */
TNameServer::ResArbHandleReply(TResArbitrationInfo *) {
    /*
        130014:	e1a0c00d 	mov	ip, sp
        130018:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13001c:	e24cb004 	sub	fp, ip, #4	; 0x4
        130020:	e1a05000 	mov	r5, r0
        130024:	e1a04001 	mov	r4, r1
        130028:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13002c:	e1a0000d 	mov	r0, sp
        130030:	eb678a47 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130034:	e5940000 	ldr	r0, [r4]
        130038:	e3100002 	tst	r0, #2	; 0x2
        13003c:	e2847040 	add	r7, r4, #64	; 0x40
        130040:	0a000012 	beq	130090 <TNameServer::ResArbHandleReply(TResArbitrationInfo *)+0x7c>
        130044:	e3a00000 	mov	r0, #0	; 0x0
        130048:	e52d0018 	str	r0, [sp, -#24]!	; fField24
        13004c:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130050:	e58d0010 	str	r0, [sp, #16]	; fMsgType
        130054:	e58d0014 	str	r0, [sp, #20]	; fField20
        130058:	e3a000ad 	mov	r0, #173	; 0xad
        13005c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        130060:	e58d0020 	str	r0, [sp, #32]	; fField32
        130064:	e1a00007 	mov	r0, r7
        130068:	e28d1018 	add	r1, sp, #24	; 0x18
        13006c:	e3a03000 	mov	r3, #0	; 0x0
        130070:	e3a0200c 	mov	r2, #12	; 0xc
        130074:	eb6aa71c 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        130078:	e58d4014 	str	r4, [sp, #20]	; fField20
        13007c:	e1a0100d 	mov	r1, sp
        130080:	e1a00005 	mov	r0, r5
        130084:	eb67926c 	bl	1b14a3c <TNameServer::$ResArbDeleteResArbInfo(TObjectNameEntry *)>
        130088:	e28dd018 	add	sp, sp, #24	; 0x18
        13008c:	ea000017 	b	1300f0 <TNameServer::ResArbHandleReply(TResArbitrationInfo *)+0xdc>
        130090:	e3100001 	tst	r0, #1	; 0x1
        130094:	0a000015 	beq	1300f0 <TNameServer::ResArbHandleReply(TResArbitrationInfo *)+0xdc>
        130098:	e3c00001 	bic	r0, r0, #1	; 0x1
        13009c:	e5840000 	str	r0, [r4]
        1300a0:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1300a4:	e3300000 	teq	r0, #0	; 0x0
        1300a8:	1a00000a 	bne	1300d8 <TNameServer::ResArbHandleReply(TResArbitrationInfo *)+0xc4>
        1300ac:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1300b0:	e2846008 	add	r6, r4, #8	; 0x8
        1300b4:	e3300000 	teq	r0, #0	; 0x0
        1300b8:	11a01006 	movne	r1, r6
        1300bc:	11a00005 	movne	r0, r5
        1300c0:	1b67925e 	blne	1b14a40 <TNameServer::$ResArbDeleteResOwnerInfo(TResOwnerInfo *&)>
        1300c4:	e1a01006 	mov	r1, r6
        1300c8:	e1a00005 	mov	r0, r5
        1300cc:	e5b43050 	ldr	r3, [r4, #80]!
        1300d0:	e5942004 	ldr	r2, [r4, #4]	; fNameServerPort
        1300d4:	eb679257 	bl	1b14a38 <TNameServer::$ResArbBuildResOwnerInfo(TResOwnerInfo *&, unsigned long, unsigned long)>
        1300d8:	e58d0008 	str	r0, [sp, #8]	; fField8
        1300dc:	e1a00007 	mov	r0, r7
        1300e0:	e1a0100d 	mov	r1, sp
        1300e4:	e3a03000 	mov	r3, #0	; 0x0
        1300e8:	e3a0200c 	mov	r2, #12	; 0xc
        1300ec:	eb6aa6fe 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        1300f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::TaskConstructor(void)
 * Address: 001300f4
 */
TNameServer::TaskConstructor(void) {
    /*
        1300f4:	e1a0c00d 	mov	ip, sp
        1300f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1300fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        130100:	e1a04000 	mov	r4, r0
        130104:	e3a06000 	mov	r6, #0	; 0x0
        130108:	e5806024 	str	r6, [r0, #36]	; fField36
        13010c:	e5806020 	str	r6, [r0, #32]	; fField32
        130110:	e3a00002 	mov	r0, #2	; 0x2
        130114:	e5840038 	str	r0, [r4, #56]	; fField56
        130118:	e2840018 	add	r0, r4, #24	; 0x18
        13011c:	e1a05000 	mov	r5, r0
        130120:	eb6a9666 	bl	1bd5ac0 <TUPort::$Init(void)>
        130124:	e3300000 	teq	r0, #0	; 0x0
        130128:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        13012c:	e2840058 	add	r0, r4, #88	; 0x58
        130130:	eb6a9251 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        130134:	e3300000 	teq	r0, #0	; 0x0
        130138:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        13013c:	e59f0020 	ldr	r0, [pc, #20]	; 130164 <TNameServer::TaskConstructor(void)+0x70>	; fField20
        130140:	e5805000 	str	r5, [r0]
        130144:	e3a00000 	mov	r0, #0	; 0x0
        130148:	eb6ad037 	bl	1be422c <CList::$__ct(void)>
        13014c:	e5a40020 	str	r0, [r4, #32]!	; fField32
        130150:	e3300000 	teq	r0, #0	; 0x0
        130154:	11a00006 	movne	r0, r6
        130158:	03a000e9 	moveq	r0, #233	; 0xe9
        13015c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130160:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        130164:	0c101564 	ldceq	5, cr1, [r0], -#400
    */
}

/**
 * Symbol: TNameServer::TaskMain(void)
 * Address: 00130168
 */
TNameServer::TaskMain(void) {
    /*
        130168:	e1a0c00d 	mov	ip, sp
        13016c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        130170:	e24cb004 	sub	fp, ip, #4	; 0x4
        130174:	e1a04000 	mov	r4, r0
        130178:	e24dd060 	sub	sp, sp, #96	; 0x60
        13017c:	e28d6028 	add	r6, sp, #40	; 0x28
        130180:	e28d5028 	add	r5, sp, #40	; 0x28
        130184:	e28d001c 	add	r0, sp, #28	; 0x1c
        130188:	eb6789f1 	bl	1b12954 <TNameServerReply::$__ct(void)>
        13018c:	e3a01000 	mov	r1, #0	; 0x0
        130190:	e58d1008 	str	r1, [sp, #8]	; fField8
        130194:	e58d1014 	str	r1, [sp, #20]	; fField20
        130198:	e58d100c 	str	r1, [sp, #12]	; fMsgName
        13019c:	e3a0200c 	mov	r2, #12	; 0xc
        1301a0:	e2849018 	add	r9, r4, #24	; 0x18
        1301a4:	e284e028 	add	lr, r4, #40	; 0x28
        1301a8:	e58d2004 	str	r2, [sp, #4]	; fNameServerPort
        1301ac:	e58de05c 	str	lr, [sp, #92]
        1301b0:	e28e2008 	add	r2, lr, #8	; 0x8
        1301b4:	e58d1010 	str	r1, [sp, #16]	; fMsgType
        1301b8:	e2841048 	add	r1, r4, #72	; 0x48
        1301bc:	e58d1054 	str	r1, [sp, #84]
        1301c0:	e58d2058 	str	r2, [sp, #88]	; fField88
        1301c4:	e28d2020 	add	r2, sp, #32	; 0x20
        1301c8:	e2848040 	add	r8, r4, #64	; 0x40
        1301cc:	e58d2050 	str	r2, [sp, #80]
        1301d0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1301d4:	e3300000 	teq	r0, #0	; 0x0
        1301d8:	03e01000 	mvneq	r1, #0	; 0x0
        1301dc:	13e01001 	mvnne	r1, #1	; 0x1
        1301e0:	e3a03000 	mov	r3, #0	; 0x0
        1301e4:	e3a02000 	mov	r2, #0	; 0x0
        1301e8:	e3a00000 	mov	r0, #0	; 0x0
        1301ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1301f0:	e28d3010 	add	r3, sp, #16	; 0x10
        1301f4:	e28d2018 	add	r2, sp, #24	; 0x18
        1301f8:	e92d000c 	stmdb	sp!, {r2, r3}
        1301fc:	e1a00009 	mov	r0, r9
        130200:	e28d2040 	add	r2, sp, #64	; 0x40
        130204:	e28d1030 	add	r1, sp, #48	; 0x30
        130208:	e3a03028 	mov	r3, #40	; 0x28
        13020c:	eb6aa289 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        130210:	e5bd1018 	ldr	r1, [sp, #24]!	; fField24
        130214:	e3110402 	tst	r1, #33554432	; 0x2000000
        130218:	0a000042 	beq	130328 <TNameServer::TaskMain(void)+0x1c0>
        13021c:	e24dd004 	sub	sp, sp, #4	; 0x4
        130220:	e1a0100d 	mov	r1, sp
        130224:	e28d000c 	add	r0, sp, #12	; 0xc
        130228:	eb6a9208 	bl	1bd4a50 <TUMsgToken::$GetUserRefCon(unsigned long *)>
        13022c:	e59d0000 	ldr	r0, [sp]
        130230:	e5901000 	ldr	r1, [r0]
        130234:	e3310001 	teq	r1, #1	; 0x1
        130238:	0a000006 	beq	130258 <TNameServer::TaskMain(void)+0xf0>
        13023c:	e3310002 	teq	r1, #2	; 0x2
        130240:	1a000036 	bne	130320 <TNameServer::TaskMain(void)+0x1b8>
        130244:	e5940024 	ldr	r0, [r4, #36]	; fField36
        130248:	eb6aecd4 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        13024c:	e1b07000 	movs	r7, r0
        130250:	0a000023 	beq	1302e4 <TNameServer::TaskMain(void)+0x17c>
        130254:	ea000003 	b	130268 <TNameServer::TaskMain(void)+0x100>
        130258:	e5b01004 	ldr	r1, [r0, #4]!	; fNameServerPort
        13025c:	e1a00004 	mov	r0, r4
        130260:	eb6791f7 	bl	1b14a44 <TNameServer::$ResArbHandleReply(TResArbitrationInfo *)>
        130264:	ea00002d 	b	130320 <TNameServer::TaskMain(void)+0x1b8>
        130268:	e1a00008 	mov	r0, r8
        13026c:	e5971000 	ldr	r1, [r7]
        130270:	eb6a8174 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        130274:	e1a0c008 	mov	ip, r8
        130278:	e3a00000 	mov	r0, #0	; 0x0
        13027c:	e3a01000 	mov	r1, #0	; 0x0
        130280:	e59de060 	ldr	lr, [sp, #96]	; fField96
        130284:	e3a03000 	mov	r3, #0	; 0x0
        130288:	e9970404 	ldmib	r7, {r2, sl}
        13028c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130290:	e3a02001 	mov	r2, #1	; 0x1
        130294:	e1a0100a 	mov	r1, sl
        130298:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13029c:	e3e03000 	mvn	r3, #0	; 0x0
        1302a0:	e92d0008 	stmdb	sp!, {r3}
        1302a4:	e59d0080 	ldr	r0, [sp, #128]
        1302a8:	e5902000 	ldr	r2, [r0]
        1302ac:	e1a0000c 	mov	r0, ip
        1302b0:	e3a03000 	mov	r3, #0	; 0x0
        1302b4:	e59e1000 	ldr	r1, [lr]
        1302b8:	eb6aaaa3 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1302bc:	e28dd024 	add	sp, sp, #36	; 0x24
        1302c0:	e3300000 	teq	r0, #0	; 0x0
        1302c4:	0a000004 	beq	1302dc <TNameServer::TaskMain(void)+0x174>
        1302c8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1302cc:	eb6aecb3 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        1302d0:	e1b07000 	movs	r7, r0
        1302d4:	1affffe3 	bne	130268 <TNameServer::TaskMain(void)+0x100>
        1302d8:	ea000001 	b	1302e4 <TNameServer::TaskMain(void)+0x17c>
        1302dc:	e3370000 	teq	r7, #0	; 0x0
        1302e0:	1a00000e 	bne	130320 <TNameServer::TaskMain(void)+0x1b8>
        1302e4:	e5947024 	ldr	r7, [r4, #36]	; fField36
        1302e8:	e3370000 	teq	r7, #0	; 0x0
        1302ec:	0a000004 	beq	130304 <TNameServer::TaskMain(void)+0x19c>
        1302f0:	e1a00007 	mov	r0, r7
        1302f4:	e3a01000 	mov	r1, #0	; 0x0
        1302f8:	eb6acfda 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1302fc:	e1a00007 	mov	r0, r7
        130300:	eb6a74f6 	bl	1bcd6e0 <$__dl(void *)>
        130304:	e3a00000 	mov	r0, #0	; 0x0
        130308:	e5840024 	str	r0, [r4, #36]	; fField36
        13030c:	e3a03000 	mov	r3, #0	; 0x0
        130310:	e3a02000 	mov	r2, #0	; 0x0
        130314:	e3e01000 	mvn	r1, #0	; 0x0
        130318:	e59d0058 	ldr	r0, [sp, #88]	; fField88
        13031c:	eb6aa672 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        130320:	e28dd004 	add	sp, sp, #4	; 0x4
        130324:	eaffffa9 	b	1301d0 <TNameServer::TaskMain(void)+0x68>
        130328:	e3300000 	teq	r0, #0	; 0x0
        13032c:	1affffa7 	bne	1301d0 <TNameServer::TaskMain(void)+0x68>
        130330:	e3a0a001 	mov	sl, #1	; 0x1
        130334:	e5950000 	ldr	r0, [r5]
        130338:	e3300007 	teq	r0, #7	; 0x7
        13033c:	0a00000d 	beq	130378 <TNameServer::TaskMain(void)+0x210>
        130340:	e3300008 	teq	r0, #8	; 0x8
        130344:	0a000012 	beq	130394 <TNameServer::TaskMain(void)+0x22c>
        130348:	e3300009 	teq	r0, #9	; 0x9
        13034c:	1a000015 	bne	1303a8 <TNameServer::TaskMain(void)+0x240>
        130350:	e59d0054 	ldr	r0, [sp, #84]
        130354:	e28d1008 	add	r1, sp, #8	; 0x8
        130358:	e891500a 	ldmia	r1, {r1, r3, ip, lr}
        13035c:	e880500a 	stmia	r0, {r1, r3, ip, lr}
        130360:	e1a00004 	mov	r0, r4
        130364:	e9950006 	ldmib	r5, {r1, r2}
        130368:	eb6753d6 	bl	1b052c8 <TNameServer::$SendSystemEvent(unsigned long, unsigned long)>
        13036c:	e1b07000 	movs	r7, r0
        130370:	03a0a000 	moveq	sl, #0	; 0x0
        130374:	ea000049 	b	1304a0 <TNameServer::TaskMain(void)+0x338>
        130378:	e5953010 	ldr	r3, [r5, #16]	; fMsgType
        13037c:	e92d0008 	stmdb	sp!, {r3}
        130380:	e1a00004 	mov	r0, r4
        130384:	e995000e 	ldmib	r5, {r1, r2, r3}
        130388:	eb674b7d 	bl	1b03184 <TNameServer::$RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)>
        13038c:	e28dd004 	add	sp, sp, #4	; 0x4
        130390:	ea000002 	b	1303a0 <TNameServer::TaskMain(void)+0x238>
        130394:	e1a00004 	mov	r0, r4
        130398:	e9950006 	ldmib	r5, {r1, r2}
        13039c:	eb676438 	bl	1b09484 <TNameServer::$UnRegisterForSystemEvent(unsigned long, unsigned long)>
        1303a0:	e1a07000 	mov	r7, r0
        1303a4:	ea00003f 	b	1304a8 <TNameServer::TaskMain(void)+0x340>
        1303a8:	e59d0028 	ldr	r0, [sp, #40]
        1303ac:	e330000a 	teq	r0, #10	; 0xa
        1303b0:	1a000004 	bne	1303c8 <TNameServer::TaskMain(void)+0x260>
        1303b4:	e59d102c 	ldr	r1, [sp, #44]
        1303b8:	e28d2008 	add	r2, sp, #8	; 0x8
        1303bc:	e1a00004 	mov	r0, r4
        1303c0:	eb67263c 	bl	1af9cb8 <TNameServer::$Gestalt(unsigned long, TUMsgToken *)>
        1303c4:	eaffff81 	b	1301d0 <TNameServer::TaskMain(void)+0x68>
        1303c8:	e1a00004 	mov	r0, r4
        1303cc:	e2862014 	add	r2, r6, #20	; 0x14
        1303d0:	e8920006 	ldmia	r2, {r1, r2}
        1303d4:	eb670d83 	bl	1af39e8 <TNameServer::$BuildNameAndType(unsigned long, unsigned long)>
        1303d8:	e1b07000 	movs	r7, r0
        1303dc:	1a00002d 	bne	130498 <TNameServer::TaskMain(void)+0x330>
        1303e0:	e5960000 	ldr	r0, [r6]
        1303e4:	e350000b 	cmp	r0, #11	; 0xb
        1303e8:	908ff100 	addls	pc, pc, r0, lsl #2
        1303ec:	ea000027 	b	130490 <TNameServer::TaskMain(void)+0x328>
        1303f0:	ea000026 	b	130490 <TNameServer::TaskMain(void)+0x328>
        1303f4:	ea00000e 	b	130434 <TNameServer::TaskMain(void)+0x2cc>
        1303f8:	ea000011 	b	130444 <TNameServer::TaskMain(void)+0x2dc>
        1303fc:	ea000013 	b	130450 <TNameServer::TaskMain(void)+0x2e8>
        130400:	ea000016 	b	130460 <TNameServer::TaskMain(void)+0x2f8>
        130404:	ea00001b 	b	130478 <TNameServer::TaskMain(void)+0x310>
        130408:	ea000020 	b	130490 <TNameServer::TaskMain(void)+0x328>
        13040c:	ea00001f 	b	130490 <TNameServer::TaskMain(void)+0x328>
        130410:	ea00001e 	b	130490 <TNameServer::TaskMain(void)+0x328>
        130414:	ea00001d 	b	130490 <TNameServer::TaskMain(void)+0x328>
        130418:	ea00001c 	b	130490 <TNameServer::TaskMain(void)+0x328>
        13041c:	e3a0a000 	mov	sl, #0	; 0x0
        130420:	e28d2028 	add	r2, sp, #40	; 0x28
        130424:	e28d1008 	add	r1, sp, #8	; 0x8
        130428:	e1a00004 	mov	r0, r4
        13042c:	eb679186 	bl	1b14a4c <TNameServer::$ResourceArbitration(TUMsgToken &, TResArbitrationRequest *)>
        130430:	ea000018 	b	130498 <TNameServer::TaskMain(void)+0x330>
        130434:	e1a00004 	mov	r0, r4
        130438:	e9960006 	ldmib	r6, {r1, r2}
        13043c:	eb674b51 	bl	1b03188 <TNameServer::$RegisterName(unsigned long, unsigned long)>
        130440:	ea000010 	b	130488 <TNameServer::TaskMain(void)+0x320>
        130444:	e1a00004 	mov	r0, r4
        130448:	eb67640e 	bl	1b09488 <TNameServer::$UnRegisterName(void)>
        13044c:	ea00000d 	b	130488 <TNameServer::TaskMain(void)+0x320>
        130450:	e28d1008 	add	r1, sp, #8	; 0x8
        130454:	e1a00004 	mov	r0, r4
        130458:	eb67472d 	bl	1b02114 <TNameServer::$QueueForRegister(TUMsgToken *)>
        13045c:	ea000002 	b	13046c <TNameServer::TaskMain(void)+0x304>
        130460:	e28d1008 	add	r1, sp, #8	; 0x8
        130464:	e1a00004 	mov	r0, r4
        130468:	eb67472a 	bl	1b02118 <TNameServer::$QueueForUnregister(TUMsgToken *)>
        13046c:	e1a07000 	mov	r7, r0
        130470:	e3a0a000 	mov	sl, #0	; 0x0
        130474:	ea000007 	b	130498 <TNameServer::TaskMain(void)+0x330>
        130478:	e59d2050 	ldr	r2, [sp, #80]
        13047c:	e28d101c 	add	r1, sp, #28	; 0x1c
        130480:	e1a00004 	mov	r0, r4
        130484:	eb673aba 	bl	1afef74 <TNameServer::$Lookup(unsigned long *, unsigned long *)>
        130488:	e1a07000 	mov	r7, r0
        13048c:	ea000001 	b	130498 <TNameServer::TaskMain(void)+0x330>
        130490:	e3a070ea 	mov	r7, #234	; 0xea
        130494:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        130498:	e1a00004 	mov	r0, r4
        13049c:	eb6719a1 	bl	1af6b28 <TNameServer::$DeleteNameAndType(void)>
        1304a0:	e33a0000 	teq	sl, #0	; 0x0
        1304a4:	0affff49 	beq	1301d0 <TNameServer::TaskMain(void)+0x68>
        1304a8:	e1a03007 	mov	r3, r7
        1304ac:	e59d2004 	ldr	r2, [sp, #4]	; fNameServerPort
        1304b0:	e28d101c 	add	r1, sp, #28	; 0x1c
        1304b4:	e28d0008 	add	r0, sp, #8	; 0x8
        1304b8:	eb6aa60b 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        1304bc:	eaffff43 	b	1301d0 <TNameServer::TaskMain(void)+0x68>
    */
}

/**
 * Symbol: TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00131030
 */
TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        131030:	e1a0c00d 	mov	ip, sp
        131034:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        131038:	e24cb004 	sub	fp, ip, #4	; 0x4
        13103c:	e1a04000 	mov	r4, r0
        131040:	e1a05001 	mov	r5, r1
        131044:	e1a07002 	mov	r7, r2
        131048:	e1a06003 	mov	r6, r3
        13104c:	e59ba004 	ldr	sl, [fp, #4]	; fNameServerPort
        131050:	e24dd00c 	sub	sp, sp, #12	; 0xc
        131054:	e28d0004 	add	r0, sp, #4	; 0x4
        131058:	eb66f9e6 	bl	1aef7f8 <SysEventTester::$__ct(unsigned long)>
        13105c:	e3a09000 	mov	r9, #0	; 0x0
        131060:	e1a0200d 	mov	r2, sp
        131064:	e28d1004 	add	r1, sp, #4	; 0x4
        131068:	e5940020 	ldr	r0, [r4, #32]	; fField32
        13106c:	eb6af18a 	bl	1bed69c <CList::$Search(CItemTester *, long &)>
        131070:	e1b08000 	movs	r8, r0
        131074:	1a000018 	bne	1310dc <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0xac>
        131078:	e3a00014 	mov	r0, #20	; 0x14
        13107c:	eb6a75ad 	bl	1bce738 <$__nw(unsigned int)>
        131080:	e1b08000 	movs	r8, r0
        131084:	0a000005 	beq	1310a0 <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x70>
        131088:	e2880004 	add	r0, r8, #4	; 0x4
        13108c:	eb6ac853 	bl	1be31e0 <CItemComparer::$__ct(void)>
        131090:	e59f00b8 	ldr	r0, [pc, #b8]	; 131150 <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x120>
        131094:	e5880004 	str	r0, [r8, #4]	; fNameServerPort
        131098:	e3a00000 	mov	r0, #0	; 0x0
        13109c:	e5880010 	str	r0, [r8, #16]	; fMsgType
        1310a0:	e3380000 	teq	r8, #0	; 0x0
        1310a4:	03a000e9 	moveq	r0, #233	; 0xe9
        1310a8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1310ac:	0a000026 	beq	13114c <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x11c>
        1310b0:	e1a00008 	mov	r0, r8
        1310b4:	eb672f59 	bl	1afce20 <EventMasterListItem::$Init(void)>
        1310b8:	e1b09000 	movs	r9, r0
        1310bc:	1a00001e 	bne	13113c <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x10c>
        1310c0:	e5885000 	str	r5, [r8]
        1310c4:	e1a02008 	mov	r2, r8
        1310c8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1310cc:	e5901000 	ldr	r1, [r0]
        1310d0:	eb6ae105 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1310d4:	e1b09000 	movs	r9, r0
        1310d8:	1a000017 	bne	13113c <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x10c>
        1310dc:	e3a0000c 	mov	r0, #12	; 0xc
        1310e0:	eb6a7594 	bl	1bce738 <$__nw(unsigned int)>
        1310e4:	e1b05000 	movs	r5, r0
        1310e8:	03a090e9 	moveq	r9, #233	; 0xe9
        1310ec:	02499b0a 	subeq	r9, r9, #10240	; 0x2800
        1310f0:	0a00000a 	beq	131120 <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0xf0>
        1310f4:	e9850440 	stmib	r5, {r6, sl}
        1310f8:	e5857000 	str	r7, [r5]
        1310fc:	e1a01005 	mov	r1, r5
        131100:	e5980010 	ldr	r0, [r8, #16]	; fMsgType
        131104:	eb6ae4ff 	bl	1bea508 <CSortedList::$InsertUnique(void *)>
        131108:	e3300000 	teq	r0, #0	; 0x0
        13110c:	1a00000d 	bne	131148 <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x118>
        131110:	e1a00005 	mov	r0, r5
        131114:	eb6a7171 	bl	1bcd6e0 <$__dl(void *)>
        131118:	e3a090ac 	mov	r9, #172	; 0xac
        13111c:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        131120:	e5980010 	ldr	r0, [r8, #16]	; fMsgType
        131124:	e5900000 	ldr	r0, [r0]
        131128:	e3300000 	teq	r0, #0	; 0x0
        13112c:	1a000005 	bne	131148 <TNameServer::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long, unsigned long)+0x118>
        131130:	e1a01008 	mov	r1, r8
        131134:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        131138:	eb6aed3a 	bl	1bec628 <CList::$Remove(void *)>
        13113c:	e1a00008 	mov	r0, r8
        131140:	e3a01001 	mov	r1, #1	; 0x1
        131144:	eb66fdcc 	bl	1af087c <EventMasterListItem::$__dt(void)>
        131148:	e1a00009 	mov	r0, r9
        13114c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        131150:	0001efd8 	ldreqd	lr, [r1], -r8
    */
}

/**
 * Symbol: TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long)
 * Address: 00131154
 */
TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long) {
    /*
        131154:	e1a0c00d 	mov	ip, sp
        131158:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13115c:	e24cb004 	sub	fp, ip, #4	; 0x4
        131160:	e1a04000 	mov	r4, r0
        131164:	e1a05002 	mov	r5, r2
        131168:	e24dd018 	sub	sp, sp, #24	; 0x18
        13116c:	e28d0004 	add	r0, sp, #4	; 0x4
        131170:	eb66f9a0 	bl	1aef7f8 <SysEventTester::$__ct(unsigned long)>
        131174:	e1a0200d 	mov	r2, sp
        131178:	e28d1004 	add	r1, sp, #4	; 0x4
        13117c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        131180:	eb6af145 	bl	1bed69c <CList::$Search(CItemTester *, long &)>
        131184:	e1b06000 	movs	r6, r0
        131188:	e3a070ad 	mov	r7, #173	; 0xad
        13118c:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        131190:	0a000009 	beq	1311bc <TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long)+0x68>
        131194:	e2860004 	add	r0, r6, #4	; 0x4
        131198:	e1a01000 	mov	r1, r0
        13119c:	e58d500c 	str	r5, [sp, #12]	; fMsgName
        1311a0:	e28d200c 	add	r2, sp, #12	; 0xc
        1311a4:	e5a02004 	str	r2, [r0, #4]!	; fNameServerPort
        1311a8:	e1a0200d 	mov	r2, sp
        1311ac:	e5960010 	ldr	r0, [r6, #16]	; fMsgType
        1311b0:	eb6af138 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        1311b4:	e1b05000 	movs	r5, r0
        1311b8:	1a000001 	bne	1311c4 <TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long)+0x70>
        1311bc:	e1a00007 	mov	r0, r7
        1311c0:	ea000010 	b	131208 <TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long)+0xb4>
        1311c4:	e1a01005 	mov	r1, r5
        1311c8:	e5960010 	ldr	r0, [r6, #16]	; fMsgType
        1311cc:	eb6aed15 	bl	1bec628 <CList::$Remove(void *)>
        1311d0:	e1a07000 	mov	r7, r0
        1311d4:	e1a00005 	mov	r0, r5
        1311d8:	eb6a7140 	bl	1bcd6e0 <$__dl(void *)>
        1311dc:	e5960010 	ldr	r0, [r6, #16]	; fMsgType
        1311e0:	e5900000 	ldr	r0, [r0]
        1311e4:	e3300000 	teq	r0, #0	; 0x0
        1311e8:	1a000005 	bne	131204 <TNameServer::UnRegisterForSystemEvent(unsigned long, unsigned long)+0xb0>
        1311ec:	e1a01006 	mov	r1, r6
        1311f0:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        1311f4:	eb6aed0b 	bl	1bec628 <CList::$Remove(void *)>
        1311f8:	e1a00006 	mov	r0, r6
        1311fc:	e3a01001 	mov	r1, #1	; 0x1
        131200:	eb66fd9d 	bl	1af087c <EventMasterListItem::$__dt(void)>
        131204:	e1a00007 	mov	r0, r7
        131208:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::SendSystemEvent(unsigned long, unsigned long)
 * Address: 0013120c
 */
TNameServer::SendSystemEvent(unsigned long, unsigned long) {
    /*
        13120c:	e1a0c00d 	mov	ip, sp
        131210:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        131214:	e24cb004 	sub	fp, ip, #4	; 0x4
        131218:	e1a04000 	mov	r4, r0
        13121c:	e1a05002 	mov	r5, r2
        131220:	e24dd00c 	sub	sp, sp, #12	; 0xc
        131224:	e28d0004 	add	r0, sp, #4	; 0x4
        131228:	eb66f972 	bl	1aef7f8 <SysEventTester::$__ct(unsigned long)>
        13122c:	e1a0200d 	mov	r2, sp
        131230:	e28d1004 	add	r1, sp, #4	; 0x4
        131234:	e5940020 	ldr	r0, [r4, #32]	; fField32
        131238:	eb6af117 	bl	1bed69c <CList::$Search(CItemTester *, long &)>
        13123c:	e3300000 	teq	r0, #0	; 0x0
        131240:	15900010 	ldrne	r0, [r0, #16]	; fMsgType
        131244:	11a01000 	movne	r1, r0
        131248:	15900000 	ldrne	r0, [r0]
        13124c:	13300000 	teqne	r0, #0	; 0x0
        131250:	03a000ad 	moveq	r0, #173	; 0xad
        131254:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        131258:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13125c:	e3a0a000 	mov	sl, #0	; 0x0
        131260:	e3a00000 	mov	r0, #0	; 0x0
        131264:	eb6ac7de 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        131268:	e5840024 	str	r0, [r4, #36]	; fField36
        13126c:	e24dd010 	sub	sp, sp, #16	; 0x10
        131270:	e3300000 	teq	r0, #0	; 0x0
        131274:	03a000e9 	moveq	r0, #233	; 0xe9
        131278:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13127c:	0a000046 	beq	13139c <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x190>
        131280:	e2846028 	add	r6, r4, #40	; 0x28
        131284:	e1a07006 	mov	r7, r6
        131288:	e1a01005 	mov	r1, r5
        13128c:	e1a0000d 	mov	r0, sp
        131290:	e5942058 	ldr	r2, [r4, #88]	; fField88
        131294:	eb6a7103 	bl	1bcd6a8 <TUAsyncMessage::$__ct(unsigned long, unsigned long)>
        131298:	e1a00007 	mov	r0, r7
        13129c:	e59d1000 	ldr	r1, [sp]
        1312a0:	eb6a7d68 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1312a4:	e2870008 	add	r0, r7, #8	; 0x8
        1312a8:	e1a08000 	mov	r8, r0
        1312ac:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1312b0:	eb6a7d64 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1312b4:	e1a0000d 	mov	r0, sp
        1312b8:	e3a01000 	mov	r1, #0	; 0x0
        1312bc:	eb6a7513 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1312c0:	e1a00006 	mov	r0, r6
        1312c4:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1312c8:	eb6aaab0 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1312cc:	e1a00006 	mov	r0, r6
        1312d0:	e2841038 	add	r1, r4, #56	; 0x38
        1312d4:	eb6aaecd 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        1312d8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1312dc:	eb6ad845 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        1312e0:	e1b05000 	movs	r5, r0
        1312e4:	e2847040 	add	r7, r4, #64	; 0x40
        1312e8:	0a000020 	beq	131370 <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x164>
        1312ec:	e1a00007 	mov	r0, r7
        1312f0:	e5951000 	ldr	r1, [r5]
        1312f4:	eb6a7d53 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1312f8:	e1a0c007 	mov	ip, r7
        1312fc:	e1a0e006 	mov	lr, r6
        131300:	e3a00000 	mov	r0, #0	; 0x0
        131304:	e3a01000 	mov	r1, #0	; 0x0
        131308:	e3a03000 	mov	r3, #0	; 0x0
        13130c:	e9950204 	ldmib	r5, {r2, r9}
        131310:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        131314:	e1a0300a 	mov	r3, sl
        131318:	e3a02001 	mov	r2, #1	; 0x1
        13131c:	e1a01009 	mov	r1, r9
        131320:	e1a0000a 	mov	r0, sl
        131324:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        131328:	e3e03000 	mvn	r3, #0	; 0x0
        13132c:	e92d0008 	stmdb	sp!, {r3}
        131330:	e5982000 	ldr	r2, [r8]
        131334:	e1a0000c 	mov	r0, ip
        131338:	e3a03000 	mov	r3, #0	; 0x0
        13133c:	e59e1000 	ldr	r1, [lr]
        131340:	eb6aa681 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        131344:	e28dd024 	add	sp, sp, #36	; 0x24
        131348:	e3300000 	teq	r0, #0	; 0x0
        13134c:	0a000004 	beq	131364 <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x158>
        131350:	e5940024 	ldr	r0, [r4, #36]	; fField36
        131354:	eb6ae891 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        131358:	e1b05000 	movs	r5, r0
        13135c:	1affffe2 	bne	1312ec <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0xe0>
        131360:	ea000002 	b	131370 <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x164>
        131364:	e3350000 	teq	r5, #0	; 0x0
        131368:	11a0000a 	movne	r0, sl
        13136c:	1a00000a 	bne	13139c <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x190>
        131370:	e5945024 	ldr	r5, [r4, #36]	; fField36
        131374:	e3350000 	teq	r5, #0	; 0x0
        131378:	0a000004 	beq	131390 <TNameServer::SendSystemEvent(unsigned long, unsigned long)+0x184>
        13137c:	e1a00005 	mov	r0, r5
        131380:	e3a01000 	mov	r1, #0	; 0x0
        131384:	eb6acbb7 	bl	1be4268 <CArrayIterator::$__dt(void)>
        131388:	e1a00005 	mov	r0, r5
        13138c:	eb6a70d3 	bl	1bcd6e0 <$__dl(void *)>
        131390:	e3a000ad 	mov	r0, #173	; 0xad
        131394:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        131398:	e5a4a024 	str	sl, [r4, #36]!	; fField36
        13139c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNameServer::Gestalt(unsigned long, TUMsgToken *)
 * Address: 00131b54
 */
TNameServer::Gestalt(unsigned long, TUMsgToken *) {
    /*
        131b54:	e1a0c00d 	mov	ip, sp
        131b58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        131b5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        131b60:	e1a04002 	mov	r4, r2
        131b64:	e24dd0a4 	sub	sp, sp, #164	; 0xa4
        131b68:	e3a06000 	mov	r6, #0	; 0x0
        131b6c:	e2411002 	sub	r1, r1, #2	; 0x2
        131b70:	e28114ff 	add	r1, r1, #-16777216	; 0xff000000
        131b74:	e3a05000 	mov	r5, #0	; 0x0
        131b78:	e59f00bc 	ldr	r0, [pc, #bc]	; 131c3c <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0xe8>
        131b7c:	e3510007 	cmp	r1, #7	; 0x7
        131b80:	908ff101 	addls	pc, pc, r1, lsl #2
        131b84:	ea0000a1 	b	131e10 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2bc>
        131b88:	ea00002c 	b	131c40 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0xec>
        131b8c:	ea00002f 	b	131c50 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0xfc>
        131b90:	ea000073 	b	131d64 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x210>
        131b94:	ea000078 	b	131d7c <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x228>
        131b98:	ea00007e 	b	131d98 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x244>
        131b9c:	ea00009b 	b	131e10 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2bc>
        131ba0:	ea000092 	b	131df0 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x29c>
        131ba4:	e24dd008 	sub	sp, sp, #8	; 0x8
        131ba8:	e28d000c 	add	r0, sp, #12	; 0xc
        131bac:	e3a010a0 	mov	r1, #160	; 0xa0
        131bb0:	eb6ab919 	bl	1be001c <$ZeroBytes>
        131bb4:	e3a05000 	mov	r5, #0	; 0x0
        131bb8:	e1a00005 	mov	r0, r5
        131bbc:	eb6b3d34 	bl	1c01094 <$GetRExPtr>
        131bc0:	e3300000 	teq	r0, #0	; 0x0
        131bc4:	0a000017 	beq	131c28 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0xd4>
        131bc8:	e0851105 	add	r1, r5, r5, lsl #2
        131bcc:	e28d200c 	add	r2, sp, #12	; 0xc
        131bd0:	e5903000 	ldr	r3, [r0]
        131bd4:	e7823181 	str	r3, [r2, r1, lsl #3]
        131bd8:	e28d300c 	add	r3, sp, #12	; 0xc
        131bdc:	e0831181 	add	r1, r3, r1, lsl #3
        131be0:	e5902004 	ldr	r2, [r0, #4]	; fNameServerPort
        131be4:	e5812004 	str	r2, [r1, #4]	; fNameServerPort
        131be8:	e5902008 	ldr	r2, [r0, #8]	; fField8
        131bec:	e5812008 	str	r2, [r1, #8]	; fField8
        131bf0:	e590200c 	ldr	r2, [r0, #12]	; fMsgName
        131bf4:	e581200c 	str	r2, [r1, #12]	; fMsgName
        131bf8:	e5902010 	ldr	r2, [r0, #16]	; fMsgType
        131bfc:	e5812010 	str	r2, [r1, #16]	; fMsgType
        131c00:	e5902014 	ldr	r2, [r0, #20]	; fField20
        131c04:	e5812014 	str	r2, [r1, #20]	; fField20
        131c08:	e5902018 	ldr	r2, [r0, #24]	; fField24
        131c0c:	e5812018 	str	r2, [r1, #24]	; fField24
        131c10:	e590201c 	ldr	r2, [r0, #28]	; fField28
        131c14:	e581201c 	str	r2, [r1, #28]	; fField28
        131c18:	e5902020 	ldr	r2, [r0, #32]	; fField32
        131c1c:	e5812020 	str	r2, [r1, #32]	; fField32
        131c20:	e5900024 	ldr	r0, [r0, #36]	; fField36
        131c24:	e5a10024 	str	r0, [r1, #36]!	; fField36
        131c28:	e2855001 	add	r5, r5, #1	; 0x1
        131c2c:	e3550004 	cmp	r5, #4	; 0x4
        131c30:	3affffe0 	bcc	131bb8 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x64>
        131c34:	e3a020a0 	mov	r2, #160	; 0xa0
        131c38:	ea000078 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131c3c:	0c1061c4 	ldfeqs	f6, [r0], -#784
        131c40:	e3a00001 	mov	r0, #1	; 0x1
        131c44:	e3a02004 	mov	r2, #4	; 0x4
        131c48:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        131c4c:	ea000074 	b	131e24 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2d0>
        131c50:	e59f00f0 	ldr	r0, [pc, #f0]	; 131d48 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x1f4>
        131c54:	e5900000 	ldr	r0, [r0]
        131c58:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        131c5c:	e59f00e8 	ldr	r0, [pc, #e8]	; 131d4c <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x1f8>
        131c60:	e5900000 	ldr	r0, [r0]
        131c64:	e58d0008 	str	r0, [sp, #8]	; fField8
        131c68:	e59f00e0 	ldr	r0, [pc, #e0]	; 131d50 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x1fc>
        131c6c:	e5900000 	ldr	r0, [r0]
        131c70:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        131c74:	e59f00d8 	ldr	r0, [pc, #d8]	; 131d54 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x200>
        131c78:	e5900000 	ldr	r0, [r0]
        131c7c:	e58d0010 	str	r0, [sp, #16]	; fMsgType
        131c80:	e59f00d0 	ldr	r0, [pc, #d0]	; 131d58 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x204>
        131c84:	e5900000 	ldr	r0, [r0]
        131c88:	e58d0034 	str	r0, [sp, #52]
        131c8c:	e59f00c8 	ldr	r0, [pc, #c8]	; 131d5c <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x208>
        131c90:	e5900000 	ldr	r0, [r0]
        131c94:	e58d003c 	str	r0, [sp, #60]
        131c98:	e59f00c0 	ldr	r0, [pc, #c0]	; 131d60 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x20c>
        131c9c:	e5900000 	ldr	r0, [r0]
        131ca0:	e3a01000 	mov	r1, #0	; 0x0
        131ca4:	e58d0038 	str	r0, [sp, #56]	; fField56
        131ca8:	e3e00000 	mvn	r0, #0	; 0x0
        131cac:	eb6b3cfb 	bl	1c010a0 <$InternalRAMInfo>
        131cb0:	e58d0014 	str	r0, [sp, #20]	; fField20
        131cb4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        131cb8:	e1a0100d 	mov	r1, sp
        131cbc:	e3a00000 	mov	r0, #0	; 0x0
        131cc0:	eb6afef4 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        131cc4:	e59d000c 	ldr	r0, [sp, #12]	; fMsgName
        131cc8:	e1a00840 	mov	r0, r0, asr #16
        131ccc:	e58d0038 	str	r0, [sp, #56]	; fField56
        131cd0:	e59d000e 	ldr	r0, [sp, #14]
        131cd4:	e1a00840 	mov	r0, r0, asr #16
        131cd8:	e58d0034 	str	r0, [sp, #52]
        131cdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        131ce0:	e1a0100d 	mov	r1, sp
        131ce4:	e3a00001 	mov	r0, #1	; 0x1
        131ce8:	eb6afeea 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        131cec:	e49d0004 	ldr	r0, [sp], #4	; fNameServerPort
        131cf0:	e58d0040 	str	r0, [sp, #64]
        131cf4:	e59d0010 	ldr	r0, [sp, #16]	; fMsgType
        131cf8:	e20000ff 	and	r0, r0, #255	; 0xff
        131cfc:	e58d0044 	str	r0, [sp, #68]
        131d00:	e28dd014 	add	sp, sp, #20	; 0x14
        131d04:	e1a0100d 	mov	r1, sp
        131d08:	e28d0004 	add	r0, sp, #4	; 0x4
        131d0c:	eb66e622 	bl	1aeb59c <$GetTabletResolution__FPlT1>
        131d10:	e59d0004 	ldr	r0, [sp, #4]	; fNameServerPort
        131d14:	e58d0034 	str	r0, [sp, #52]
        131d18:	e59d0000 	ldr	r0, [sp]
        131d1c:	e58d0038 	str	r0, [sp, #56]	; fField56
        131d20:	e58d5028 	str	r5, [sp, #40]
        131d24:	e28d0028 	add	r0, sp, #40	; 0x28
        131d28:	e28d1008 	add	r1, sp, #8	; 0x8
        131d2c:	eb6a8b36 	bl	1bd4a0c <$GetPatchInfo__FPUlT1>
        131d30:	e1a06000 	mov	r6, r0
        131d34:	e59d0028 	ldr	r0, [sp, #40]
        131d38:	e1a00820 	mov	r0, r0, lsr #16
        131d3c:	e3a0203c 	mov	r2, #60	; 0x3c
        131d40:	e58d0028 	str	r0, [sp, #40]
        131d44:	ea000035 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131d48:	000013f0 	streqd	r1, [r0], -r0
        131d4c:	000013ec 	andeq	r1, r0, ip, ror #7
        131d50:	000013dc 	ldreqd	r1, [r0], -ip
        131d54:	000013e0 	andeq	r1, r0, r0, ror #7
        131d58:	0c1008dc 	ldceq	8, cr0, [r0], -#880
        131d5c:	0c1008e4 	ldceq	8, cr0, [r0], -#912
        131d60:	0c1008e0 	ldceq	8, cr0, [r0], -#896
        131d64:	e24dd008 	sub	sp, sp, #8	; 0x8
        131d68:	e5900014 	ldr	r0, [r0, #20]	; fField20
        131d6c:	e3a02008 	mov	r2, #8	; 0x8
        131d70:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        131d74:	e58d5010 	str	r5, [sp, #16]	; fMsgType
        131d78:	ea000028 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131d7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        131d80:	e59f000c 	ldr	r0, [pc, #c]	; 131d94 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x240>
        131d84:	e5900000 	ldr	r0, [r0]
        131d88:	e3a02004 	mov	r2, #4	; 0x4
        131d8c:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        131d90:	ea000022 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131d94:	0037aecc 	eoreqs	sl, r7, ip, asr #29
        131d98:	e24dd008 	sub	sp, sp, #8	; 0x8
        131d9c:	e5901022 	ldr	r1, [r0, #34]	; fField34
        131da0:	e1a01821 	mov	r1, r1, lsr #16
        131da4:	e58d100c 	str	r1, [sp, #12]	; fMsgName
        131da8:	e3a01000 	mov	r1, #0	; 0x0
        131dac:	e0612181 	rsb	r2, r1, r1, lsl #3
        131db0:	e0803102 	add	r3, r0, r2, lsl #2
        131db4:	e28d200c 	add	r2, sp, #12	; 0xc
        131db8:	e0822201 	add	r2, r2, r1, lsl #4
        131dbc:	e593c024 	ldr	ip, [r3, #36]	; fField36
        131dc0:	e582c004 	str	ip, [r2, #4]	; fNameServerPort
        131dc4:	e593c028 	ldr	ip, [r3, #40]
        131dc8:	e582c008 	str	ip, [r2, #8]	; fField8
        131dcc:	e593c02c 	ldr	ip, [r3, #44]
        131dd0:	e582c00c 	str	ip, [r2, #12]	; fMsgName
        131dd4:	e5933030 	ldr	r3, [r3, #48]
        131dd8:	e2811001 	add	r1, r1, #1	; 0x1
        131ddc:	e3510005 	cmp	r1, #5	; 0x5
        131de0:	e5a23010 	str	r3, [r2, #16]!	; fMsgType
        131de4:	bafffff0 	blt	131dac <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x258>
        131de8:	e3a02054 	mov	r2, #84	; 0x54
        131dec:	ea00000b 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131df0:	e24dd008 	sub	sp, sp, #8	; 0x8
        131df4:	e28d000c 	add	r0, sp, #12	; 0xc
        131df8:	e3a01020 	mov	r1, #32	; 0x20
        131dfc:	eb6ab886 	bl	1be001c <$ZeroBytes>
        131e00:	e3a0000f 	mov	r0, #15	; 0xf
        131e04:	e3a02020 	mov	r2, #32	; 0x20
        131e08:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        131e0c:	ea000003 	b	131e20 <TNameServer::Gestalt(unsigned long, TUMsgToken *)+0x2cc>
        131e10:	e24dd008 	sub	sp, sp, #8	; 0x8
        131e14:	e3a060ea 	mov	r6, #234	; 0xea
        131e18:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        131e1c:	e3a02000 	mov	r2, #0	; 0x0
        131e20:	e28dd008 	add	sp, sp, #8	; 0x8
        131e24:	e1a03006 	mov	r3, r6
        131e28:	e28d1004 	add	r1, sp, #4	; 0x4
        131e2c:	e1a00004 	mov	r0, r4
        131e30:	eb6a9fad 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        131e34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

