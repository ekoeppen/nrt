#include "include/TNTKTask.h"

/**
 * Symbol: TNTKTask::__ct(void)
 * Address: 0012c6dc
 */
TNTKTask::TNTKTask(void) {
    /*
        12c6dc:	e1a0c00d 	mov	ip, sp
        12c6e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12c6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c6e8:	e1b04000 	movs	r4, r0
        12c6ec:	1a000003 	bne	12c700 <TNTKTask::__ct(void)+0x24>
        12c6f0:	e3a0008c 	mov	r0, #140	; 0x8c
        12c6f4:	eb6a880f 	bl	1bce738 <$__nw(unsigned int)>
        12c6f8:	e1b04000 	movs	r4, r0
        12c6fc:	0a00000b 	beq	12c730 <TNTKTask::__ct(void)+0x54>
        12c700:	e1a00004 	mov	r0, r4
        12c704:	eb6adece 	bl	1be4244 <TAppWorld::$__ct(void)>
        12c708:	e59f0028 	ldr	r0, [pc, #28]	; 12c738 <TNTKTask::__ct(void)+0x5c>
        12c70c:	e5840000 	str	r0, [r4]
        12c710:	e3a00000 	mov	r0, #0	; 0x0
        12c714:	e5840070 	str	r0, [r4, #112]	; fField112
        12c718:	e5840074 	str	r0, [r4, #116]
        12c71c:	e5840078 	str	r0, [r4, #120]
        12c720:	e584007c 	str	r0, [r4, #124]
        12c724:	e5840080 	str	r0, [r4, #128]
        12c728:	e5840084 	str	r0, [r4, #132]
        12c72c:	e5840088 	str	r0, [r4, #136]
        12c730:	e1a00004 	mov	r0, r4
        12c734:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12c738:	000201a4 	andeq	r0, r2, r4, lsr #3
    */
}

/**
 * Symbol: TNTKTask::__dt(void)
 * Address: 0012c73c
 */
TNTKTask::~TNTKTask(void) {
    /*
        12c73c:	e1a0c00d 	mov	ip, sp
        12c740:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12c744:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c748:	e1a04000 	mov	r4, r0
        12c74c:	e1a05001 	mov	r5, r1
        12c750:	e59f0020 	ldr	r0, [pc, #20]	; 12c778 <TNTKTask::__dt(void)+0x3c>
        12c754:	e5840000 	str	r0, [r4]
        12c758:	e1a00004 	mov	r0, r4
        12c75c:	e3a01000 	mov	r1, #0	; 0x0
        12c760:	eb6ae2cc 	bl	1be5298 <TAppWorld::$__dt(void)>
        12c764:	e3150001 	tst	r5, #1	; 0x1
        12c768:	11a00004 	movne	r0, r4
        12c76c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12c770:	1a6a83da 	bne	1bcd6e0 <$__dl(void *)>
        12c774:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12c778:	000201a4 	andeq	r0, r2, r4, lsr #3
    */
}

/**
 * Symbol: TNTKTask::InitNTK(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)
 * Address: 0012c77c
 */
TNTKTask::InitNTK(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long) {
    /*
        12c77c:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        12c780:	e28de010 	add	lr, sp, #16	; 0x10
        12c784:	e89e4010 	ldmia	lr, {r4, lr}
        12c788:	e59d500c 	ldr	r5, [sp, #12]
        12c78c:	e59dc018 	ldr	ip, [sp, #24]
        12c790:	e2800080 	add	r0, r0, #128	; 0x80
        12c794:	e880000e 	stmia	r0, {r1, r2, r3}
        12c798:	e3a03e77 	mov	r3, #1904	; 0x770
        12c79c:	e2833a01 	add	r3, r3, #4096	; 0x1000
        12c7a0:	e3a02001 	mov	r2, #1	; 0x1
        12c7a4:	e520c004 	str	ip, [r0, -#4]!	; fField4
        12c7a8:	e9204030 	stmdb	r0!, {r4, r5, lr}
        12c7ac:	e2400070 	sub	r0, r0, #112	; 0x70
        12c7b0:	e59f1004 	ldr	r1, [pc, #4]	; 12c7bc <TNTKTask::InitNTK(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0x40>	; fField4
        12c7b4:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        12c7b8:	ea6af345 	b	1be94d4 <TAppWorld::$Init(unsigned long, unsigned char, unsigned long)>
        12c7bc:	6e746b20 	cdpvs	11, 7, cr6, cr4, cr0, {1}
    */
}

/**
 * Symbol: TNTKTask::MainConstructor(void)
 * Address: 0012c7c0
 */
TNTKTask::MainConstructor(void) {
    /*
        12c7c0:	e1a0c00d 	mov	ip, sp
        12c7c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12c7c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c7cc:	e1a04000 	mov	r4, r0
        12c7d0:	e3a01000 	mov	r1, #0	; 0x0
        12c7d4:	eb69ffa8 	bl	1bac67c <TForkWorld::$EnableForking(unsigned char)>
        12c7d8:	e1a00004 	mov	r0, r4
        12c7dc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        12c7e0:	ea6a03c5 	b	1bad6fc <TAppWorld::$MainConstructor(void)>
    */
}

/**
 * Symbol: TNTKTask::MainDestructor(void)
 * Address: 0012c7e4
 */
TNTKTask::MainDestructor(void) {
    /*
        12c7e4:	ea6a07c6 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TNTKTask::GetSizeOf(void)
 * Address: 0012c7e8
 */
TNTKTask::GetSizeOf(void) {
    /*
        12c7e8:	e3a0008c 	mov	r0, #140	; 0x8c
        12c7ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNTKTask::PreMain(void)
 * Address: 0012c7f0
 */
TNTKTask::PreMain(void) {
    /*
        12c7f0:	e1a0c00d 	mov	ip, sp
        12c7f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12c7f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c7fc:	e1a04000 	mov	r4, r0
        12c800:	e3a06000 	mov	r6, #0	; 0x0
        12c804:	e3a00000 	mov	r0, #0	; 0x0
        12c808:	eb667748 	bl	1aca530 <TNTKEndpointClient::$__ct(void)>
        12c80c:	e1b05000 	movs	r5, r0
        12c810:	0a000004 	beq	12c828 <TNTKTask::PreMain(void)+0x38>
        12c814:	e1a01005 	mov	r1, r5
        12c818:	e3a00000 	mov	r0, #0	; 0x0
        12c81c:	eb667742 	bl	1aca52c <TKillEventHandler::$__ct(TNTKEndpointClient *)>
        12c820:	e1b06000 	movs	r6, r0
        12c824:	1a000002 	bne	12c834 <TNTKTask::PreMain(void)+0x44>
        12c828:	eb6ad63c 	bl	1be2120 <$MemError>
        12c82c:	e1a04000 	mov	r4, r0
        12c830:	ea00000c 	b	12c868 <TNTKTask::PreMain(void)+0x78>
        12c834:	e1a00006 	mov	r0, r6
        12c838:	eb666ae9 	bl	1ac73e4 <TKillEventHandler::$Init(void)>
        12c83c:	e2843074 	add	r3, r4, #116	; 0x74
        12c840:	e893000d 	ldmia	r3, {r0, r2, r3}
        12c844:	e5941070 	ldr	r1, [r4, #112]	; fField112
        12c848:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12c84c:	e1a00005 	mov	r0, r5
        12c850:	e284407c 	add	r4, r4, #124	; 0x7c
        12c854:	e9b4000e 	ldmib	r4!, {r1, r2, r3}
        12c858:	eb666ae2 	bl	1ac73e8 <TNTKEndpointClient::$Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)>
        12c85c:	e28dd010 	add	sp, sp, #16	; 0x10
        12c860:	e1b04000 	movs	r4, r0
        12c864:	0a00000b 	beq	12c898 <TNTKTask::PreMain(void)+0xa8>
        12c868:	e3340000 	teq	r4, #0	; 0x0
        12c86c:	0a000009 	beq	12c898 <TNTKTask::PreMain(void)+0xa8>
        12c870:	e1b00006 	movs	r0, r6
        12c874:	0a000002 	beq	12c884 <TNTKTask::PreMain(void)+0x94>
        12c878:	e3a01001 	mov	r1, #1	; 0x1
        12c87c:	e1a0e00f 	mov	lr, pc
        12c880:	e590f000 	ldr	pc, [r0]
        12c884:	e1b00005 	movs	r0, r5
        12c888:	0a000002 	beq	12c898 <TNTKTask::PreMain(void)+0xa8>
        12c88c:	e3a01001 	mov	r1, #1	; 0x1
        12c890:	e1a0e00f 	mov	lr, pc
        12c894:	e590f000 	ldr	pc, [r0]
        12c898:	e1a00004 	mov	r0, r4
        12c89c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKTask::PostMain(void)
 * Address: 0012c8a0
 */
TNTKTask::PostMain(void) {
    /*
        12c8a0:	e1a0f00e 	mov	pc, lr
    */
}

