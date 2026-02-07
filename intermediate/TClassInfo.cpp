#include "DDKIncludes/OS600/Protocols.h"

/**
 * Symbol: TClassInfo::Size( const(void))
 * Address: 0005c5c4
 */
size_t			TClassInfo::Size()					const;	// instance size {
    /*
         5c5c4:	ea000177 	b	5cba8 <PrivateClassInfoSize(TClassInfo const *)>
    */
}

/**
 * Symbol: TClassInfo::AllocProc( const(void))
 * Address: 0005c5c8
 */
const void *	TClassInfo::AllocProc()				const;	// return address of OperatorNew() proc, or nil {
    /*
         5c5c8:	e590101c 	ldr	r1, [r0, #28]	; fField28
         5c5cc:	e3310000 	teq	r1, #0	; 0x0
         5c5d0:	03a00000 	moveq	r0, #0	; 0x0
         5c5d4:	1280001c 	addne	r0, r0, #28	; 0x1c
         5c5d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfo::FreeProc( const(void))
 * Address: 0005c5dc
 */
const void *	TClassInfo::FreeProc()				const;	// return address of OperatorDelete() proc, or nil {
    /*
         5c5dc:	e5901020 	ldr	r1, [r0, #32]	; fField32
         5c5e0:	e3310000 	teq	r1, #0	; 0x0
         5c5e4:	03a00000 	moveq	r0, #0	; 0x0
         5c5e8:	12800020 	addne	r0, r0, #32	; 0x20
         5c5ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfo::MakeAt( const(void const *))
 * Address: 0005c5f0
 */
void			TClassInfo::MakeAt(const void*)		const;	// construct an instance at the address {
    /*
         5c5f0:	ea00016d 	b	5cbac <PrivateClassInfoMakeAt(TClassInfo const *, void const *)>
    */
}

/**
 * Symbol: TClassInfo::EntryProc( const(void))
 * Address: 0005c5f4
 */
const void *	TClassInfo::EntryProc()				const;	// return address of monitor entry proc {
    /*
         5c5f4:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         5c5f8:	e0800001 	add	r0, r0, r1
         5c5fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfo::Version( const(void))
 * Address: 0005c600
 */
unsigned long	TClassInfo::Version()				const;	// implementation version {
    /*
         5c600:	e590002c 	ldr	r0, [r0, #44]	; fField44
         5c604:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfo::Register( const(void))
 * Address: 0005c608
 */
long			TClassInfo::Register()				const;	// register with protocol-server {
    /*
         5c608:	e1a01000 	mov	r1, r0
         5c60c:	e59f0008 	ldr	r0, [pc, #8]	; 5c61c <TClassInfo::Register( const(void))+0x14>	; TClassInfoRegistry
         5c610:	e5900000 	ldr	r0, [r0]
         5c614:	e3a02000 	mov	r2, #0	; 0x0
         5c618:	ea6df18b 	b	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
         5c61c:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TClassInfo::DeRegister( const(void))
 * Address: 0005c620
 */
long			TClassInfo::DeRegister()			const;	// de-register with protocol-server {
    /*
         5c620:	e1a01000 	mov	r1, r0
         5c624:	e59f0008 	ldr	r0, [pc, #8]	; 5c634 <TClassInfo::DeRegister( const(void))+0x14>	; TClassInfoRegistry
         5c628:	e5900000 	ldr	r0, [r0]
         5c62c:	e3a02001 	mov	r2, #1	; 0x1
         5c630:	ea6dd493 	b	1bd1884 <TClassInfoRegistry::$DeRegister(TClassInfo const *, unsigned char)>
         5c634:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TClassInfo::New( const(void))
 * Address: 0005c638
 */
TProtocol *		TClassInfo::New()					const;	// make an instance {
    /*
         5c638:	e1a0c00d 	mov	ip, sp
         5c63c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5c640:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c644:	e1a04000 	mov	r4, r0
         5c648:	eb6dcc56 	bl	1bcf7a8 <TClassInfo::$AllocProc( const(void))>
         5c64c:	e3300000 	teq	r0, #0	; 0x0
         5c650:	0a000002 	beq	5c660 <TClassInfo::New( const(void))+0x28>
         5c654:	e1a0e00f 	mov	lr, pc
         5c658:	e1a0f000 	mov	pc, r0
         5c65c:	ea000002 	b	5c66c <TClassInfo::New( const(void))+0x34>
         5c660:	e1a00004 	mov	r0, r4
         5c664:	eb6e01ec 	bl	1bdce1c <TClassInfo::$Size( const(void))>
         5c668:	eb6de93e 	bl	1bd6b68 <$malloc>
         5c66c:	e1b05000 	movs	r5, r0
         5c670:	0a00000b 	beq	5c6a4 <TClassInfo::New( const(void))+0x6c>
         5c674:	e1a01005 	mov	r1, r5
         5c678:	e1a00004 	mov	r0, r4
         5c67c:	eb6de937 	bl	1bd6b60 <TClassInfo::$MakeAt( const(void const *))>
         5c680:	e1a00005 	mov	r0, r5
         5c684:	e1a0e00f 	mov	lr, pc
         5c688:	e284f024 	add	pc, r4, #36	; 0x24
         5c68c:	e59f0018 	ldr	r0, [pc, #18]	; 5c6ac <TClassInfo::New( const(void))+0x74>
         5c690:	e5900000 	ldr	r0, [r0]
         5c694:	e3300000 	teq	r0, #0	; 0x0
         5c698:	11a01004 	movne	r1, r4
         5c69c:	13a02001 	movne	r2, #1	; 0x1
         5c6a0:	1b0ca660 	blne	386028 <TClassInfoRegistry::UpdateInstanceCount(TClassInfo const *, long)>
         5c6a4:	e1a00005 	mov	r0, r5
         5c6a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5c6ac:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TClassInfo::Destroy( const(TProtocol *))
 * Address: 0005c6b0
 */
void			TClassInfo::Destroy(TProtocol *)	const;	// destroy an instance at the address {
    /*
         5c6b0:	e1a0c00d 	mov	ip, sp
         5c6b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5c6b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c6bc:	e1a05000 	mov	r5, r0
         5c6c0:	e1a04001 	mov	r4, r1
         5c6c4:	eb6dd8a7 	bl	1bd2968 <TClassInfo::$FreeProc( const(void))>
         5c6c8:	e1b01000 	movs	r1, r0
         5c6cc:	e1a00004 	mov	r0, r4
         5c6d0:	0a000002 	beq	5c6e0 <TClassInfo::Destroy( const(TProtocol *))+0x30>
         5c6d4:	e1a0e00f 	mov	lr, pc
         5c6d8:	e1a0f001 	mov	pc, r1
         5c6dc:	ea000000 	b	5c6e4 <TClassInfo::Destroy( const(TProtocol *))+0x34>
         5c6e0:	eb6dd89c 	bl	1bd2958 <$free>
         5c6e4:	e59f0018 	ldr	r0, [pc, #18]	; 5c704 <TClassInfo::Destroy( const(TProtocol *))+0x54>
         5c6e8:	e5900000 	ldr	r0, [r0]
         5c6ec:	e3300000 	teq	r0, #0	; 0x0
         5c6f0:	11a01005 	movne	r1, r5
         5c6f4:	13e02000 	mvnne	r2, #0	; 0x0
         5c6f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         5c6fc:	1a0ca649 	bne	386028 <TClassInfoRegistry::UpdateInstanceCount(TClassInfo const *, long)>
         5c700:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5c704:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TClassInfo::Selector( const(void))
 * Address: 0005c710
 */
CodeProcPtr		TClassInfo::Selector()				const;	// return address of selector proc {
    /*
         5c710:	e2800020 	add	r0, r0, #32	; 0x20
         5c714:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfo::GetCapability( const(char const *))
 * Address: 0005c718
 */
const char *	TClassInfo::GetCapability(long)	const;		// test if protocol has a specific capability, return it {
    /*
         5c718:	e1a0c00d 	mov	ip, sp
         5c71c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5c720:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c724:	e1a04001 	mov	r4, r1
         5c728:	eb6e01ba 	bl	1bdce18 <TClassInfo::$Signature( const(void))>
         5c72c:	e1a05000 	mov	r5, r0
         5c730:	ea000013 	b	5c784 <TClassInfo::GetCapability( const(char const *))+0x6c>
         5c734:	e3340000 	teq	r4, #0	; 0x0
         5c738:	0a000004 	beq	5c750 <TClassInfo::GetCapability( const(char const *))+0x38>
         5c73c:	e1a01004 	mov	r1, r4
         5c740:	e1a00005 	mov	r0, r5
         5c744:	eb6d64d7 	bl	1bb5aa8 <$strcmp>
         5c748:	e3300000 	teq	r0, #0	; 0x0
         5c74c:	1a000004 	bne	5c764 <TClassInfo::GetCapability( const(char const *))+0x4c>
         5c750:	e1a00005 	mov	r0, r5
         5c754:	eb6d64d5 	bl	1bb5ab0 <$strlen>
         5c758:	e0800005 	add	r0, r0, r5
         5c75c:	e2800001 	add	r0, r0, #1	; 0x1
         5c760:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5c764:	e1a00005 	mov	r0, r5
         5c768:	eb6d64d0 	bl	1bb5ab0 <$strlen>
         5c76c:	e0800005 	add	r0, r0, r5
         5c770:	e2800001 	add	r0, r0, #1	; 0x1
         5c774:	e1a05000 	mov	r5, r0
         5c778:	eb6d64cc 	bl	1bb5ab0 <$strlen>
         5c77c:	e0800005 	add	r0, r0, r5
         5c780:	e2805001 	add	r5, r0, #1	; 0x1
         5c784:	e3350000 	teq	r5, #0	; 0x0
         5c788:	15d50000 	ldrneb	r0, [r5]
         5c78c:	13300000 	teqne	r0, #0	; 0x0
         5c790:	1affffe7 	bne	5c734 <TClassInfo::GetCapability( const(char const *))+0x1c>
         5c794:	e3a00000 	mov	r0, #0	; 0x0
         5c798:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfo::GetCapability( const(long))
 * Address: 0005c79c
 */
const char *	TClassInfo::GetCapability(long)	const;		// test if protocol has a specific capability, return it {
    /*
         5c79c:	e1a0c00d 	mov	ip, sp
         5c7a0:	e92dd833 	stmdb	sp!, {r0, r1, r4, r5, fp, ip, lr, pc}
         5c7a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c7a8:	e24dd008 	sub	sp, sp, #8	; 0x8
         5c7ac:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         5c7b0:	eb6e0198 	bl	1bdce18 <TClassInfo::$Signature( const(void))>
         5c7b4:	e1a04000 	mov	r4, r0
         5c7b8:	e3a05000 	mov	r5, #0	; 0x0
         5c7bc:	e5cd5004 	strb	r5, [sp, #4]	; TClassInfo
         5c7c0:	e1a0100d 	mov	r1, sp
         5c7c4:	e24b0018 	sub	r0, fp, #24	; 0x18
         5c7c8:	e3a02004 	mov	r2, #4	; 0x4
         5c7cc:	eb6e09e0 	bl	1bdef54 <$BlockMove>
         5c7d0:	ea000010 	b	5c818 <TClassInfo::GetCapability( const(long))+0x7c>
         5c7d4:	e1a0100d 	mov	r1, sp
         5c7d8:	e1a00004 	mov	r0, r4
         5c7dc:	eb6d64b1 	bl	1bb5aa8 <$strcmp>
         5c7e0:	e3300000 	teq	r0, #0	; 0x0
         5c7e4:	e1a00004 	mov	r0, r4
         5c7e8:	1a000003 	bne	5c7fc <TClassInfo::GetCapability( const(long))+0x60>
         5c7ec:	eb6d64af 	bl	1bb5ab0 <$strlen>
         5c7f0:	e0800004 	add	r0, r0, r4
         5c7f4:	e2800001 	add	r0, r0, #1	; 0x1
         5c7f8:	ea00000b 	b	5c82c <TClassInfo::GetCapability( const(long))+0x90>
         5c7fc:	eb6d64ab 	bl	1bb5ab0 <$strlen>
         5c800:	e0800004 	add	r0, r0, r4
         5c804:	e2800001 	add	r0, r0, #1	; 0x1
         5c808:	e1a04000 	mov	r4, r0
         5c80c:	eb6d64a7 	bl	1bb5ab0 <$strlen>
         5c810:	e0800004 	add	r0, r0, r4
         5c814:	e2804001 	add	r4, r0, #1	; 0x1
         5c818:	e3340000 	teq	r4, #0	; 0x0
         5c81c:	15d40000 	ldrneb	r0, [r4]
         5c820:	13300000 	teqne	r0, #0	; 0x0
         5c824:	1affffea 	bne	5c7d4 <TClassInfo::GetCapability( const(long))+0x38>
         5c828:	e1a00005 	mov	r0, r5
         5c82c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfo::HasInstances( const(long *))
 * Address: 0005c830
 */
Boolean			TClassInfo::HasInstances(long *count) const; 	// return true is instances of this protocol exist, count = number of them {
    /*
         5c830:	e1a0c00d 	mov	ip, sp
         5c834:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5c838:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c83c:	e1a04001 	mov	r4, r1
         5c840:	e3a01000 	mov	r1, #0	; 0x0
         5c844:	e5841000 	str	r1, [r4]
         5c848:	e59f1030 	ldr	r1, [pc, #30]	; 5c880 <TClassInfo::HasInstances( const(long *))+0x50>
         5c84c:	e5912000 	ldr	r2, [r1]
         5c850:	e3320000 	teq	r2, #0	; 0x0
         5c854:	0a000006 	beq	5c874 <TClassInfo::HasInstances( const(long *))+0x44>
         5c858:	e1a01000 	mov	r1, r0
         5c85c:	e1a00002 	mov	r0, r2
         5c860:	eb6eaad5 	bl	1c073bc <TClassInfoRegistry::$GetInstanceCount(TClassInfo const *)>
         5c864:	e5840000 	str	r0, [r4]
         5c868:	e3300000 	teq	r0, #0	; 0x0
         5c86c:	13a00001 	movne	r0, #1	; 0x1
         5c870:	1a000000 	bne	5c878 <TClassInfo::HasInstances( const(long *))+0x48>
         5c874:	e3a00000 	mov	r0, #0	; 0x0
         5c878:	e20000ff 	and	r0, r0, #255	; 0xff
         5c87c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5c880:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TClassInfo::ImplementationName( const(void))
 * Address: 0005cccc
 */
const char *	TClassInfo::ImplementationName()	const;	// implementation name {
    /*
         5cccc:	eaffffc1 	b	5cbd8 <PrivateClassInfoImplementationName(TClassInfo const *)>
    */
}

/**
 * Symbol: TClassInfo::InterfaceName( const(void))
 * Address: 0005ccd0
 */
const char *	TClassInfo::InterfaceName()			const;	// name of public interface {
    /*
         5ccd0:	eaffffbd 	b	5cbcc <PrivateClassInfoInterfaceName(TClassInfo const *)>
    */
}

/**
 * Symbol: TClassInfo::Signature( const(void))
 * Address: 0005ccd4
 */
const char *	TClassInfo::Signature()				const;	// signature (actually, capability list) {
    /*
         5ccd4:	e5b0100c 	ldr	r1, [r0, #12]!	; TClassInfo
         5ccd8:	e0800001 	add	r0, r0, r1
         5ccdc:	e1a0f00e 	mov	pc, lr
    */
}

