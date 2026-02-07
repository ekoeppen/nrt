#include "include/PipeCallBack.h"

/**
 * Symbol: PipeCallBack::__ct(void)
 * Address: 0018a694
 */
PipeCallBack::PipeCallBack(void) {
    /*
        18a694:	e1a0c00d 	mov	ip, sp
        18a698:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18a69c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a6a0:	e3300000 	teq	r0, #0	; 0x0
        18a6a4:	1a000003 	bne	18a6b8 <PipeCallBack::__ct(void)+0x24>
        18a6a8:	e3a0000c 	mov	r0, #12	; 0xc
        18a6ac:	eb691021 	bl	1bce738 <$__nw(unsigned int)>
        18a6b0:	e3300000 	teq	r0, #0	; 0x0
        18a6b4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        18a6b8:	e59f1010 	ldr	r1, [pc, #10]	; 18a6d0 <PipeCallBack::__ct(void)+0x3c>
        18a6bc:	e5801000 	str	r1, [r0]
        18a6c0:	e3e01000 	mvn	r1, #0	; 0x0
        18a6c4:	e5801004 	str	r1, [r0, #4]	; fField4
        18a6c8:	e5801008 	str	r1, [r0, #8]	; fField8
        18a6cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        18a6d0:	0001b954 	andeq	fp, r1, r4, asr r9
    */
}

/**
 * Symbol: PipeCallBack::__dt(void)
 * Address: 0018a6d4
 */
PipeCallBack::~PipeCallBack(void) {
    /*
        18a6d4:	e59f200c 	ldr	r2, [pc, #c]	; 18a6e8 <PipeCallBack::__dt(void)+0x14>
        18a6d8:	e3110001 	tst	r1, #1	; 0x1
        18a6dc:	e5802000 	str	r2, [r0]
        18a6e0:	1a690bfe 	bne	1bcd6e0 <$__dl(void *)>
        18a6e4:	e1a0f00e 	mov	pc, lr
        18a6e8:	0001b954 	andeq	fp, r1, r4, asr r9
        18a6ec:	e1a0c00d 	mov	ip, sp
        18a6f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a6f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a6f8:	e1a04000 	mov	r4, r0
        18a6fc:	e3a00001 	mov	r0, #1	; 0x1
        18a700:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a704:	e28d3004 	add	r3, sp, #4	; 0x4
        18a708:	e1a0200d 	mov	r2, sp
        18a70c:	e1a00004 	mov	r0, r4
        18a710:	e594c000 	ldr	ip, [r4]
        18a714:	e1a0e00f 	mov	lr, pc
        18a718:	e28cf014 	add	pc, ip, #20	; 0x14
        18a71c:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a720:	e3300000 	teq	r0, #0	; 0x0
        18a724:	0a000007 	beq	18a748 <CPipe::operator>>(char &)+0x5c>
        18a728:	e59d0000 	ldr	r0, [sp]
        18a72c:	e3500001 	cmp	r0, #1	; 0x1
        18a730:	2a000004 	bcs	18a748 <CPipe::operator>>(char &)+0x5c>
        18a734:	e59f0014 	ldr	r0, [pc, #14]	; 18a750 <CPipe::operator>>(char &)+0x64>
        18a738:	e5900000 	ldr	r0, [r0]
        18a73c:	e3a02000 	mov	r2, #0	; 0x0
        18a740:	e3e01001 	mvn	r1, #1	; 0x1
        18a744:	eb696294 	bl	1be319c <$Throw>
        18a748:	e1a00004 	mov	r0, r4
        18a74c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a750:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a754:	e1a0c00d 	mov	ip, sp
        18a758:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a75c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a760:	e1a04000 	mov	r4, r0
        18a764:	e3a00001 	mov	r0, #1	; 0x1
        18a768:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a76c:	e28d3004 	add	r3, sp, #4	; 0x4
        18a770:	e1a0200d 	mov	r2, sp
        18a774:	e1a00004 	mov	r0, r4
        18a778:	e594c000 	ldr	ip, [r4]
        18a77c:	e1a0e00f 	mov	lr, pc
        18a780:	e28cf014 	add	pc, ip, #20	; 0x14
        18a784:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a788:	e3300000 	teq	r0, #0	; 0x0
        18a78c:	0a000007 	beq	18a7b0 <CPipe::operator>>(signed char &)+0x5c>
        18a790:	e59d0000 	ldr	r0, [sp]
        18a794:	e3500001 	cmp	r0, #1	; 0x1
        18a798:	2a000004 	bcs	18a7b0 <CPipe::operator>>(signed char &)+0x5c>
        18a79c:	e59f0014 	ldr	r0, [pc, #14]	; 18a7b8 <CPipe::operator>>(signed char &)+0x64>
        18a7a0:	e5900000 	ldr	r0, [r0]
        18a7a4:	e3a02000 	mov	r2, #0	; 0x0
        18a7a8:	e3e01001 	mvn	r1, #1	; 0x1
        18a7ac:	eb69627a 	bl	1be319c <$Throw>
        18a7b0:	e1a00004 	mov	r0, r4
        18a7b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a7b8:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a7bc:	e1a0c00d 	mov	ip, sp
        18a7c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a7c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a7c8:	e1a04000 	mov	r4, r0
        18a7cc:	e3a00001 	mov	r0, #1	; 0x1
        18a7d0:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a7d4:	e28d3004 	add	r3, sp, #4	; 0x4
        18a7d8:	e1a0200d 	mov	r2, sp
        18a7dc:	e1a00004 	mov	r0, r4
        18a7e0:	e594c000 	ldr	ip, [r4]
        18a7e4:	e1a0e00f 	mov	lr, pc
        18a7e8:	e28cf014 	add	pc, ip, #20	; 0x14
        18a7ec:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a7f0:	e3300000 	teq	r0, #0	; 0x0
        18a7f4:	0a000007 	beq	18a818 <CPipe::operator>>(unsigned char &)+0x5c>
        18a7f8:	e59d0000 	ldr	r0, [sp]
        18a7fc:	e3500001 	cmp	r0, #1	; 0x1
        18a800:	2a000004 	bcs	18a818 <CPipe::operator>>(unsigned char &)+0x5c>
        18a804:	e59f0014 	ldr	r0, [pc, #14]	; 18a820 <CPipe::operator>>(unsigned char &)+0x64>
        18a808:	e5900000 	ldr	r0, [r0]
        18a80c:	e3a02000 	mov	r2, #0	; 0x0
        18a810:	e3e01001 	mvn	r1, #1	; 0x1
        18a814:	eb696260 	bl	1be319c <$Throw>
        18a818:	e1a00004 	mov	r0, r4
        18a81c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a820:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a824:	e1a0c00d 	mov	ip, sp
        18a828:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a82c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a830:	e1a04000 	mov	r4, r0
        18a834:	e3a00002 	mov	r0, #2	; 0x2
        18a838:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a83c:	e28d3004 	add	r3, sp, #4	; 0x4
        18a840:	e1a0200d 	mov	r2, sp
        18a844:	e1a00004 	mov	r0, r4
        18a848:	e594c000 	ldr	ip, [r4]
        18a84c:	e1a0e00f 	mov	lr, pc
        18a850:	e28cf014 	add	pc, ip, #20	; 0x14
        18a854:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a858:	e3300000 	teq	r0, #0	; 0x0
        18a85c:	0a000007 	beq	18a880 <CPipe::operator>>(short &)+0x5c>
        18a860:	e59d0000 	ldr	r0, [sp]
        18a864:	e3500002 	cmp	r0, #2	; 0x2
        18a868:	2a000004 	bcs	18a880 <CPipe::operator>>(short &)+0x5c>
        18a86c:	e59f0014 	ldr	r0, [pc, #14]	; 18a888 <CPipe::operator>>(short &)+0x64>
        18a870:	e5900000 	ldr	r0, [r0]
        18a874:	e3a02000 	mov	r2, #0	; 0x0
        18a878:	e3e01001 	mvn	r1, #1	; 0x1
        18a87c:	eb696246 	bl	1be319c <$Throw>
        18a880:	e1a00004 	mov	r0, r4
        18a884:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a888:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a88c:	e1a0c00d 	mov	ip, sp
        18a890:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a894:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a898:	e1a04000 	mov	r4, r0
        18a89c:	e3a00002 	mov	r0, #2	; 0x2
        18a8a0:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a8a4:	e28d3004 	add	r3, sp, #4	; 0x4
        18a8a8:	e1a0200d 	mov	r2, sp
        18a8ac:	e1a00004 	mov	r0, r4
        18a8b0:	e594c000 	ldr	ip, [r4]
        18a8b4:	e1a0e00f 	mov	lr, pc
        18a8b8:	e28cf014 	add	pc, ip, #20	; 0x14
        18a8bc:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a8c0:	e3300000 	teq	r0, #0	; 0x0
        18a8c4:	0a000007 	beq	18a8e8 <CPipe::operator>>(unsigned short &)+0x5c>
        18a8c8:	e59d0000 	ldr	r0, [sp]
        18a8cc:	e3500002 	cmp	r0, #2	; 0x2
        18a8d0:	2a000004 	bcs	18a8e8 <CPipe::operator>>(unsigned short &)+0x5c>
        18a8d4:	e59f0014 	ldr	r0, [pc, #14]	; 18a8f0 <CPipe::operator>>(unsigned short &)+0x64>
        18a8d8:	e5900000 	ldr	r0, [r0]
        18a8dc:	e3a02000 	mov	r2, #0	; 0x0
        18a8e0:	e3e01001 	mvn	r1, #1	; 0x1
        18a8e4:	eb69622c 	bl	1be319c <$Throw>
        18a8e8:	e1a00004 	mov	r0, r4
        18a8ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a8f0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a8f4:	e1a0c00d 	mov	ip, sp
        18a8f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a900:	e1a04000 	mov	r4, r0
        18a904:	e3a00004 	mov	r0, #4	; 0x4
        18a908:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        18a90c:	e08d3000 	add	r3, sp, r0
        18a910:	e1a0200d 	mov	r2, sp
        18a914:	e1a00004 	mov	r0, r4
        18a918:	e594c000 	ldr	ip, [r4]
        18a91c:	e1a0e00f 	mov	lr, pc
        18a920:	e28cf014 	add	pc, ip, #20	; 0x14
        18a924:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18a928:	e3300000 	teq	r0, #0	; 0x0
        18a92c:	0a000007 	beq	18a950 <CPipe::operator>>(long &)+0x5c>
        18a930:	e59d0000 	ldr	r0, [sp]
        18a934:	e3500004 	cmp	r0, #4	; 0x4
        18a938:	2a000004 	bcs	18a950 <CPipe::operator>>(long &)+0x5c>
        18a93c:	e59f0014 	ldr	r0, [pc, #14]	; 18a958 <CPipe::operator>>(long &)+0x64>
        18a940:	e5900000 	ldr	r0, [r0]
        18a944:	e3a02000 	mov	r2, #0	; 0x0
        18a948:	e3e01001 	mvn	r1, #1	; 0x1
        18a94c:	eb696212 	bl	1be319c <$Throw>
        18a950:	e1a00004 	mov	r0, r4
        18a954:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a958:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

