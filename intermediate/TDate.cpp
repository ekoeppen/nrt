#include "include/TDate.h"

/**
 * Symbol: TDate::__ct(void)
 * Address: 00089ad0
 */
TDate::TDate(void) {
    /*
         89ad0:	e1a0c00d 	mov	ip, sp
         89ad4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         89ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
         89adc:	e1b04000 	movs	r4, r0
         89ae0:	1a000003 	bne	89af4 <TDate::__ct(void)+0x24>
         89ae4:	e3a00028 	mov	r0, #40	; 0x28
         89ae8:	eb6d1312 	bl	1bce738 <$__nw(unsigned int)>
         89aec:	e1b04000 	movs	r4, r0
         89af0:	0a000013 	beq	89b44 <TDate::__ct(void)+0x74>
         89af4:	e3a00002 	mov	r0, #2	; 0x2
         89af8:	eb6ce193 	bl	1bc214c <$AllocateRefHandle(long)>
         89afc:	e3a05000 	mov	r5, #0	; 0x0
         89b00:	e584001c 	str	r0, [r4, #28]	; fField28
         89b04:	e5a05004 	str	r5, [r0, #4]!	; fField4
         89b08:	e3a00002 	mov	r0, #2	; 0x2
         89b0c:	eb6ce18e 	bl	1bc214c <$AllocateRefHandle(long)>
         89b10:	e5840020 	str	r0, [r4, #32]	; fField32
         89b14:	e5a05004 	str	r5, [r0, #4]!	; fField4
         89b18:	e3a00002 	mov	r0, #2	; 0x2
         89b1c:	eb6ce18a 	bl	1bc214c <$AllocateRefHandle(long)>
         89b20:	e5840024 	str	r0, [r4, #36]	; fField36
         89b24:	e5a05004 	str	r5, [r0, #4]!	; fField4
         89b28:	e5845018 	str	r5, [r4, #24]	; fField24
         89b2c:	e5845014 	str	r5, [r4, #20]	; fField20
         89b30:	e5845010 	str	r5, [r4, #16]	; fField16
         89b34:	e584500c 	str	r5, [r4, #12]	; fField12
         89b38:	e5845008 	str	r5, [r4, #8]	; fField8
         89b3c:	e5845004 	str	r5, [r4, #4]	; fField4
         89b40:	e5845000 	str	r5, [r4]
         89b44:	e1a00004 	mov	r0, r4
         89b48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::__ct(unsigned long)
 * Address: 0008c6c4
 */
TDate::TDate(unsigned long) {
    /*
         8c6c4:	e1a0c00d 	mov	ip, sp
         8c6c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         8c6cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c6d0:	e1b04000 	movs	r4, r0
         8c6d4:	e1a05001 	mov	r5, r1
         8c6d8:	1a000003 	bne	8c6ec <TDate::__ct(unsigned long)+0x28>
         8c6dc:	e3a00028 	mov	r0, #40	; 0x28
         8c6e0:	eb6d0814 	bl	1bce738 <$__nw(unsigned int)>
         8c6e4:	e1b04000 	movs	r4, r0
         8c6e8:	0a00000f 	beq	8c72c <TDate::__ct(unsigned long)+0x68>
         8c6ec:	e3a00002 	mov	r0, #2	; 0x2
         8c6f0:	eb6cd695 	bl	1bc214c <$AllocateRefHandle(long)>
         8c6f4:	e3a06000 	mov	r6, #0	; 0x0
         8c6f8:	e584001c 	str	r0, [r4, #28]	; fField28
         8c6fc:	e5a06004 	str	r6, [r0, #4]!	; fField4
         8c700:	e3a00002 	mov	r0, #2	; 0x2
         8c704:	eb6cd690 	bl	1bc214c <$AllocateRefHandle(long)>
         8c708:	e5840020 	str	r0, [r4, #32]	; fField32
         8c70c:	e5a06004 	str	r6, [r0, #4]!	; fField4
         8c710:	e3a00002 	mov	r0, #2	; 0x2
         8c714:	eb6cd68c 	bl	1bc214c <$AllocateRefHandle(long)>
         8c718:	e5840024 	str	r0, [r4, #36]	; fField36
         8c71c:	e1a01005 	mov	r1, r5
         8c720:	e5a06004 	str	r6, [r0, #4]!	; fField4
         8c724:	e1a00004 	mov	r0, r4
         8c728:	eb6dca08 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         8c72c:	e1a00004 	mov	r0, r4
         8c730:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::TotalSeconds( const(void))
 * Address: 0008c734
 */
TDate::TotalSeconds( const(void)) {
    /*
         8c734:	e1a0c00d 	mov	ip, sp
         8c738:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8c73c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c740:	e5902010 	ldr	r2, [r0, #16]	; fField16
         8c744:	e0622202 	rsb	r2, r2, r2, lsl #4
         8c748:	e5901014 	ldr	r1, [r0, #20]	; fField20
         8c74c:	e0811102 	add	r1, r1, r2, lsl #2
         8c750:	e590200c 	ldr	r2, [r0, #12]	; fField12
         8c754:	e062c282 	rsb	ip, r2, r2, lsl #5
         8c758:	e06c2402 	rsb	r2, ip, r2, lsl #8
         8c75c:	e0814202 	add	r4, r1, r2, lsl #4
         8c760:	eb6dce09 	bl	1bfff8c <TDate::$TotalDays( const(void))>
         8c764:	e0600200 	rsb	r0, r0, r0, lsl #4
         8c768:	e0800080 	add	r0, r0, r0, lsl #1
         8c76c:	e0600200 	rsb	r0, r0, r0, lsl #4
         8c770:	e0840380 	add	r0, r4, r0, lsl #7
         8c774:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::DaysInMonth( const(void))
 * Address: 0008c778
 */
TDate::DaysInMonth( const(void)) {
    /*
         8c778:	e1a0c00d 	mov	ip, sp
         8c77c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8c780:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c784:	e3a01000 	mov	r1, #0	; 0x0
         8c788:	e5902004 	ldr	r2, [r0, #4]	; fField4
         8c78c:	e352000c 	cmp	r2, #12	; 0xc
         8c790:	908ff102 	addls	pc, pc, r2, lsl #2
         8c794:	ea00002a 	b	8c844 <TDate::DaysInMonth( const(void))+0xcc>
         8c798:	ea000029 	b	8c844 <TDate::DaysInMonth( const(void))+0xcc>
         8c79c:	ea000009 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7a0:	ea00000c 	b	8c7d8 <TDate::DaysInMonth( const(void))+0x60>
         8c7a4:	ea000007 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7a8:	ea000008 	b	8c7d0 <TDate::DaysInMonth( const(void))+0x58>
         8c7ac:	ea000005 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7b0:	ea000006 	b	8c7d0 <TDate::DaysInMonth( const(void))+0x58>
         8c7b4:	ea000003 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7b8:	ea000002 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7bc:	ea000003 	b	8c7d0 <TDate::DaysInMonth( const(void))+0x58>
         8c7c0:	ea000000 	b	8c7c8 <TDate::DaysInMonth( const(void))+0x50>
         8c7c4:	ea000001 	b	8c7d0 <TDate::DaysInMonth( const(void))+0x58>
         8c7c8:	e3a0001f 	mov	r0, #31	; 0x1f
         8c7cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         8c7d0:	e3a0001e 	mov	r0, #30	; 0x1e
         8c7d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         8c7d8:	e5900000 	ldr	r0, [r0]
         8c7dc:	e1a04000 	mov	r4, r0
         8c7e0:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8c7e4:	235c0008 	cmpcs	ip, #8	; 0x8
         8c7e8:	2a000011 	bcs	8c834 <TDate::DaysInMonth( const(void))+0xbc>
         8c7ec:	e3700001 	cmn	r0, #1	; 0x1
         8c7f0:	0a00000f 	beq	8c834 <TDate::DaysInMonth( const(void))+0xbc>
         8c7f4:	e1b00004 	movs	r0, r4
         8c7f8:	42600000 	rsbmi	r0, r0, #0	; 0x0
         8c7fc:	e2000003 	and	r0, r0, #3	; 0x3
         8c800:	42600000 	rsbmi	r0, r0, #0	; 0x0
         8c804:	e3300000 	teq	r0, #0	; 0x0
         8c808:	1a00000b 	bne	8c83c <TDate::DaysInMonth( const(void))+0xc4>
         8c80c:	e1a01004 	mov	r1, r4
         8c810:	e3a00064 	mov	r0, #100	; 0x64
         8c814:	eb6c9849 	bl	1bb2940 <$__rt_sdiv>
         8c818:	e3310000 	teq	r1, #0	; 0x0
         8c81c:	1a000004 	bne	8c834 <TDate::DaysInMonth( const(void))+0xbc>
         8c820:	e1a01004 	mov	r1, r4
         8c824:	e3a00e19 	mov	r0, #400	; 0x190
         8c828:	eb6c9844 	bl	1bb2940 <$__rt_sdiv>
         8c82c:	e3310000 	teq	r1, #0	; 0x0
         8c830:	1a000001 	bne	8c83c <TDate::DaysInMonth( const(void))+0xc4>
         8c834:	e3a0001d 	mov	r0, #29	; 0x1d
         8c838:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         8c83c:	e3a0001c 	mov	r0, #28	; 0x1c
         8c840:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         8c844:	e1a00001 	mov	r0, r1
         8c848:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::DaysInYear( const(void))
 * Address: 0008c84c
 */
TDate::DaysInYear( const(void)) {
    /*
         8c84c:	e1a0c00d 	mov	ip, sp
         8c850:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         8c854:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c858:	e1a04000 	mov	r4, r0
         8c85c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         8c860:	e350000c 	cmp	r0, #12	; 0xc
         8c864:	908ff100 	addls	pc, pc, r0, lsl #2
         8c868:	ea000025 	b	8c904 <TDate::DaysInYear( const(void))+0xb8>
         8c86c:	ea000024 	b	8c904 <TDate::DaysInYear( const(void))+0xb8>
         8c870:	ea00000c 	b	8c8a8 <TDate::DaysInYear( const(void))+0x5c>
         8c874:	ea00000d 	b	8c8b0 <TDate::DaysInYear( const(void))+0x64>
         8c878:	ea00000e 	b	8c8b8 <TDate::DaysInYear( const(void))+0x6c>
         8c87c:	ea00000f 	b	8c8c0 <TDate::DaysInYear( const(void))+0x74>
         8c880:	ea000010 	b	8c8c8 <TDate::DaysInYear( const(void))+0x7c>
         8c884:	ea000011 	b	8c8d0 <TDate::DaysInYear( const(void))+0x84>
         8c888:	ea000012 	b	8c8d8 <TDate::DaysInYear( const(void))+0x8c>
         8c88c:	ea000013 	b	8c8e0 <TDate::DaysInYear( const(void))+0x94>
         8c890:	ea000014 	b	8c8e8 <TDate::DaysInYear( const(void))+0x9c>
         8c894:	ea000015 	b	8c8f0 <TDate::DaysInYear( const(void))+0xa4>
         8c898:	ea000017 	b	8c8fc <TDate::DaysInYear( const(void))+0xb0>
         8c89c:	e3a0504e 	mov	r5, #78	; 0x4e
         8c8a0:	e2855c01 	add	r5, r5, #256	; 0x100
         8c8a4:	ea000018 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8a8:	e3a05000 	mov	r5, #0	; 0x0
         8c8ac:	ea00002e 	b	8c96c <TDate::DaysInYear( const(void))+0x120>
         8c8b0:	e3a0501f 	mov	r5, #31	; 0x1f
         8c8b4:	ea00002c 	b	8c96c <TDate::DaysInYear( const(void))+0x120>
         8c8b8:	e3a0503b 	mov	r5, #59	; 0x3b
         8c8bc:	ea000012 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8c0:	e3a0505a 	mov	r5, #90	; 0x5a
         8c8c4:	ea000010 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8c8:	e3a05078 	mov	r5, #120	; 0x78
         8c8cc:	ea00000e 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8d0:	e3a05097 	mov	r5, #151	; 0x97
         8c8d4:	ea00000c 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8d8:	e3a050b5 	mov	r5, #181	; 0xb5
         8c8dc:	ea00000a 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8e0:	e3a050d4 	mov	r5, #212	; 0xd4
         8c8e4:	ea000008 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8e8:	e3a050f3 	mov	r5, #243	; 0xf3
         8c8ec:	ea000006 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8f0:	e3a05011 	mov	r5, #17	; 0x11
         8c8f4:	e2855c01 	add	r5, r5, #256	; 0x100
         8c8f8:	ea000003 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c8fc:	e3a05e13 	mov	r5, #304	; 0x130
         8c900:	ea000001 	b	8c90c <TDate::DaysInYear( const(void))+0xc0>
         8c904:	e3500003 	cmp	r0, #3	; 0x3
         8c908:	3a000017 	bcc	8c96c <TDate::DaysInYear( const(void))+0x120>
         8c90c:	e5940000 	ldr	r0, [r4]
         8c910:	e1a06000 	mov	r6, r0
         8c914:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8c918:	235c0008 	cmpcs	ip, #8	; 0x8
         8c91c:	2a000011 	bcs	8c968 <TDate::DaysInYear( const(void))+0x11c>
         8c920:	e3700001 	cmn	r0, #1	; 0x1
         8c924:	0a00000f 	beq	8c968 <TDate::DaysInYear( const(void))+0x11c>
         8c928:	e1b00006 	movs	r0, r6
         8c92c:	42600000 	rsbmi	r0, r0, #0	; 0x0
         8c930:	e2000003 	and	r0, r0, #3	; 0x3
         8c934:	42600000 	rsbmi	r0, r0, #0	; 0x0
         8c938:	e3300000 	teq	r0, #0	; 0x0
         8c93c:	1a00000a 	bne	8c96c <TDate::DaysInYear( const(void))+0x120>
         8c940:	e1a01006 	mov	r1, r6
         8c944:	e3a00064 	mov	r0, #100	; 0x64
         8c948:	eb6c97fc 	bl	1bb2940 <$__rt_sdiv>
         8c94c:	e3310000 	teq	r1, #0	; 0x0
         8c950:	1a000004 	bne	8c968 <TDate::DaysInYear( const(void))+0x11c>
         8c954:	e1a01006 	mov	r1, r6
         8c958:	e3a00e19 	mov	r0, #400	; 0x190
         8c95c:	eb6c97f7 	bl	1bb2940 <$__rt_sdiv>
         8c960:	e3310000 	teq	r1, #0	; 0x0
         8c964:	1a000000 	bne	8c96c <TDate::DaysInYear( const(void))+0x120>
         8c968:	e2855001 	add	r5, r5, #1	; 0x1
         8c96c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         8c970:	e0800005 	add	r0, r0, r5
         8c974:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::IsValidDate( const(void))
 * Address: 0008c978
 */
TDate::IsValidDate( const(void)) {
    /*
         8c978:	e1a0c00d 	mov	ip, sp
         8c97c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8c980:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c984:	e1a04000 	mov	r4, r0
         8c988:	e5900004 	ldr	r0, [r0, #4]	; fField4
         8c98c:	e3700001 	cmn	r0, #1	; 0x1
         8c990:	15941008 	ldrne	r1, [r4, #8]	; fField8
         8c994:	13710001 	cmnne	r1, #1	; 0x1
         8c998:	0a000007 	beq	8c9bc <TDate::IsValidDate( const(void))+0x44>
         8c99c:	e350000c 	cmp	r0, #12	; 0xc
         8c9a0:	8a000005 	bhi	8c9bc <TDate::IsValidDate( const(void))+0x44>
         8c9a4:	e1a00004 	mov	r0, r4
         8c9a8:	eb6dc966 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8c9ac:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
         8c9b0:	e1500001 	cmp	r0, r1
         8c9b4:	23a00001 	movcs	r0, #1	; 0x1
         8c9b8:	2a000000 	bcs	8c9c0 <TDate::IsValidDate( const(void))+0x48>
         8c9bc:	e3a00000 	mov	r0, #0	; 0x0
         8c9c0:	e20000ff 	and	r0, r0, #255	; 0xff
         8c9c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::CleanUpFields(void)
 * Address: 0008c9c8
 */
TDate::CleanUpFields(void) {
    /*
         8c9c8:	e1a0c00d 	mov	ip, sp
         8c9cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8c9d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c9d4:	e1a04000 	mov	r4, r0
         8c9d8:	eb6dcd6c 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8c9dc:	e1a01000 	mov	r1, r0
         8c9e0:	e1a00004 	mov	r0, r4
         8c9e4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         8c9e8:	ea6dc958 	b	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
    */
}

/**
 * Symbol: TDate::IncrementMonth(long)
 * Address: 0008c9ec
 */
TDate::IncrementMonth(long) {
    /*
         8c9ec:	e1a0c00d 	mov	ip, sp
         8c9f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8c9f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c9f8:	e1a04000 	mov	r4, r0
         8c9fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
         8ca00:	e0806001 	add	r6, r0, r1
         8ca04:	e5947000 	ldr	r7, [r4]
         8ca08:	e3370e77 	teq	r7, #1904	; 0x770
         8ca0c:	1a000002 	bne	8ca1c <TDate::IncrementMonth(long)+0x30>
         8ca10:	e3560000 	cmp	r6, #0	; 0x0
         8ca14:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8ca18:	ea000004 	b	8ca30 <TDate::IncrementMonth(long)+0x44>
         8ca1c:	e257ceb6 	subs	ip, r7, #2912	; 0xb60
         8ca20:	235c0007 	cmpcs	ip, #7	; 0x7
         8ca24:	3a000001 	bcc	8ca30 <TDate::IncrementMonth(long)+0x44>
         8ca28:	e356000c 	cmp	r6, #12	; 0xc
         8ca2c:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8ca30:	e2461001 	sub	r1, r6, #1	; 0x1
         8ca34:	e3a0000c 	mov	r0, #12	; 0xc
         8ca38:	eb6c97c0 	bl	1bb2940 <$__rt_sdiv>
         8ca3c:	e1a05000 	mov	r5, r0
         8ca40:	e281100c 	add	r1, r1, #12	; 0xc
         8ca44:	e3a0000c 	mov	r0, #12	; 0xc
         8ca48:	eb6c97be 	bl	1bb2948 <$__rt_udiv>
         8ca4c:	e2810001 	add	r0, r1, #1	; 0x1
         8ca50:	e5840004 	str	r0, [r4, #4]	; fField4
         8ca54:	e1a00007 	mov	r0, r7
         8ca58:	e257ceb6 	subs	ip, r7, #2912	; 0xb60
         8ca5c:	235c0008 	cmpcs	ip, #8	; 0x8
         8ca60:	2a00000a 	bcs	8ca90 <TDate::IncrementMonth(long)+0xa4>
         8ca64:	e3700001 	cmn	r0, #1	; 0x1
         8ca68:	0a000008 	beq	8ca90 <TDate::IncrementMonth(long)+0xa4>
         8ca6c:	e3560000 	cmp	r6, #0	; 0x0
         8ca70:	c1a00005 	movgt	r0, r5
         8ca74:	ca000003 	bgt	8ca88 <TDate::IncrementMonth(long)+0x9c>
         8ca78:	e1a01006 	mov	r1, r6
         8ca7c:	e3a0000c 	mov	r0, #12	; 0xc
         8ca80:	eb6c97ae 	bl	1bb2940 <$__rt_sdiv>
         8ca84:	e2400001 	sub	r0, r0, #1	; 0x1
         8ca88:	e0800007 	add	r0, r0, r7
         8ca8c:	e5840000 	str	r0, [r4]
         8ca90:	e1a00004 	mov	r0, r4
         8ca94:	eb6dc92b 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8ca98:	e5941008 	ldr	r1, [r4, #8]	; fField8
         8ca9c:	e1510000 	cmp	r1, r0
         8caa0:	85a40008 	strhi	r0, [r4, #8]!	; fField8
         8caa4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::SetFormatResource(RefVar const &)
 * Address: 0008cb50
 */
TDate::SetFormatResource(RefVar const &) {
    /*
         8cb50:	e1a0c00d 	mov	ip, sp
         8cb54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8cb58:	e24cb004 	sub	fp, ip, #4	; 0x4
         8cb5c:	e1a04000 	mov	r4, r0
         8cb60:	e1a05001 	mov	r5, r1
         8cb64:	e5910000 	ldr	r0, [r1]
         8cb68:	e5900000 	ldr	r0, [r0]
         8cb6c:	e3300002 	teq	r0, #2	; 0x2
         8cb70:	0a000027 	beq	8cc14 <TDate::SetFormatResource(RefVar const &)+0xc4>
         8cb74:	e284001c 	add	r0, r4, #28	; 0x1c
         8cb78:	e1a06000 	mov	r6, r0
         8cb7c:	e5900000 	ldr	r0, [r0]
         8cb80:	e5900000 	ldr	r0, [r0]
         8cb84:	e3300002 	teq	r0, #2	; 0x2
         8cb88:	1a000005 	bne	8cba4 <TDate::SetFormatResource(RefVar const &)+0x54>
         8cb8c:	e59f1074 	ldr	r1, [pc, #74]	; 8cc08 <TDate::SetFormatResource(RefVar const &)+0xb8>
         8cb90:	e1a00005 	mov	r0, r5
         8cb94:	e3a02000 	mov	r2, #0	; 0x0
         8cb98:	eb6cddb2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cb9c:	e5961000 	ldr	r1, [r6]
         8cba0:	e5810000 	str	r0, [r1]
         8cba4:	e2840020 	add	r0, r4, #32	; 0x20
         8cba8:	e1a06000 	mov	r6, r0
         8cbac:	e5900000 	ldr	r0, [r0]
         8cbb0:	e5900000 	ldr	r0, [r0]
         8cbb4:	e3300002 	teq	r0, #2	; 0x2
         8cbb8:	1a000005 	bne	8cbd4 <TDate::SetFormatResource(RefVar const &)+0x84>
         8cbbc:	e59f1048 	ldr	r1, [pc, #48]	; 8cc0c <TDate::SetFormatResource(RefVar const &)+0xbc>
         8cbc0:	e1a00005 	mov	r0, r5
         8cbc4:	e3a02000 	mov	r2, #0	; 0x0
         8cbc8:	eb6cdda6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cbcc:	e5961000 	ldr	r1, [r6]
         8cbd0:	e5810000 	str	r0, [r1]
         8cbd4:	e2840024 	add	r0, r4, #36	; 0x24
         8cbd8:	e1a04000 	mov	r4, r0
         8cbdc:	e5900000 	ldr	r0, [r0]
         8cbe0:	e5900000 	ldr	r0, [r0]
         8cbe4:	e3300002 	teq	r0, #2	; 0x2
         8cbe8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8cbec:	e59f101c 	ldr	r1, [pc, #1c]	; 8cc10 <TDate::SetFormatResource(RefVar const &)+0xc0>
         8cbf0:	e1a00005 	mov	r0, r5
         8cbf4:	e3a02000 	mov	r2, #0	; 0x0
         8cbf8:	eb6cdd9a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cbfc:	e5941000 	ldr	r1, [r4]
         8cc00:	e5810000 	str	r0, [r1]
         8cc04:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8cc08:	00683640 	rsbeq	r3, r8, r0, asr #12
         8cc0c:	00684618 	rsbeq	r4, r8, r8, lsl r6
         8cc10:	00684b58 	rsbeq	r4, r8, r8, asr fp
         8cc14:	e24dd00c 	sub	sp, sp, #12	; 0xc
         8cc18:	e3a07002 	mov	r7, #2	; 0x2
         8cc1c:	e1a00007 	mov	r0, r7
         8cc20:	eb6cd549 	bl	1bc214c <$AllocateRefHandle(long)>
         8cc24:	e58d0000 	str	r0, [sp]
         8cc28:	e1a0600d 	mov	r6, sp
         8cc2c:	e1a00007 	mov	r0, r7
         8cc30:	eb6cd545 	bl	1bc214c <$AllocateRefHandle(long)>
         8cc34:	e58d0004 	str	r0, [sp, #4]	; fField4
         8cc38:	e28d5004 	add	r5, sp, #4	; 0x4
         8cc3c:	e1a00007 	mov	r0, r7
         8cc40:	eb6cd541 	bl	1bc214c <$AllocateRefHandle(long)>
         8cc44:	e58d0008 	str	r0, [sp, #8]	; fField8
         8cc48:	e28d1008 	add	r1, sp, #8	; 0x8
         8cc4c:	e1a00004 	mov	r0, r4
         8cc50:	e1a02005 	mov	r2, r5
         8cc54:	e1a03006 	mov	r3, r6
         8cc58:	eb6dc8c5 	bl	1bfef74 <TDate::$SetFormatResource(RefVar const &, RefVar const &, RefVar const &)>
         8cc5c:	e59d0000 	ldr	r0, [sp]
         8cc60:	eb6cd955 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8cc64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8cc68:	eb6cd953 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8cc6c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         8cc70:	eb6cd951 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8cc74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)
 * Address: 0008cc78
 */
TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &) {
    /*
         8cc78:	e1a0c00d 	mov	ip, sp
         8cc7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         8cc80:	e24cb004 	sub	fp, ip, #4	; 0x4
         8cc84:	e280c01c 	add	ip, r0, #28	; 0x1c
         8cc88:	e1a0600c 	mov	r6, ip
         8cc8c:	e5911000 	ldr	r1, [r1]
         8cc90:	e5911000 	ldr	r1, [r1]
         8cc94:	e59cc000 	ldr	ip, [ip]
         8cc98:	e58c1000 	str	r1, [ip]
         8cc9c:	e2801020 	add	r1, r0, #32	; 0x20
         8cca0:	e1a05001 	mov	r5, r1
         8cca4:	e5922000 	ldr	r2, [r2]
         8cca8:	e5922000 	ldr	r2, [r2]
         8ccac:	e5911000 	ldr	r1, [r1]
         8ccb0:	e2800024 	add	r0, r0, #36	; 0x24
         8ccb4:	e1a04000 	mov	r4, r0
         8ccb8:	e5812000 	str	r2, [r1]
         8ccbc:	e5931000 	ldr	r1, [r3]
         8ccc0:	e5911000 	ldr	r1, [r1]
         8ccc4:	e5900000 	ldr	r0, [r0]
         8ccc8:	e5801000 	str	r1, [r0]
         8cccc:	e5960000 	ldr	r0, [r6]
         8ccd0:	e5900000 	ldr	r0, [r0]
         8ccd4:	e3300002 	teq	r0, #2	; 0x2
         8ccd8:	15950000 	ldrne	r0, [r5]
         8ccdc:	15900000 	ldrne	r0, [r0]
         8cce0:	13300002 	teqne	r0, #2	; 0x2
         8cce4:	15940000 	ldrne	r0, [r4]
         8cce8:	15900000 	ldrne	r0, [r0]
         8ccec:	13300002 	teqne	r0, #2	; 0x2
         8ccf0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         8ccf4:	e24dd004 	sub	sp, sp, #4	; 0x4
         8ccf8:	eb68236b 	bl	1a95aac <$GetCurrentLocale(void)>
         8ccfc:	eb6cd512 	bl	1bc214c <$AllocateRefHandle(long)>
         8cd00:	e58d0000 	str	r0, [sp]
         8cd04:	e5960000 	ldr	r0, [r6]
         8cd08:	e5900000 	ldr	r0, [r0]
         8cd0c:	e3300002 	teq	r0, #2	; 0x2
         8cd10:	1a000005 	bne	8cd2c <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0xb4>
         8cd14:	e59f106c 	ldr	r1, [pc, #6c]	; 8cd88 <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0x110>
         8cd18:	e1a0000d 	mov	r0, sp
         8cd1c:	e3a02000 	mov	r2, #0	; 0x0
         8cd20:	eb6cdd50 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cd24:	e5961000 	ldr	r1, [r6]
         8cd28:	e5810000 	str	r0, [r1]
         8cd2c:	e5950000 	ldr	r0, [r5]
         8cd30:	e5900000 	ldr	r0, [r0]
         8cd34:	e3300002 	teq	r0, #2	; 0x2
         8cd38:	1a000005 	bne	8cd54 <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0xdc>
         8cd3c:	e59f1048 	ldr	r1, [pc, #48]	; 8cd8c <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0x114>
         8cd40:	e1a0000d 	mov	r0, sp
         8cd44:	e3a02000 	mov	r2, #0	; 0x0
         8cd48:	eb6cdd46 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cd4c:	e5951000 	ldr	r1, [r5]
         8cd50:	e5810000 	str	r0, [r1]
         8cd54:	e5940000 	ldr	r0, [r4]
         8cd58:	e5900000 	ldr	r0, [r0]
         8cd5c:	e3300002 	teq	r0, #2	; 0x2
         8cd60:	1a000005 	bne	8cd7c <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0x104>
         8cd64:	e59f1024 	ldr	r1, [pc, #24]	; 8cd90 <TDate::SetFormatResource(RefVar const &, RefVar const &, RefVar const &)+0x118>	; fField24
         8cd68:	e1a0000d 	mov	r0, sp
         8cd6c:	e3a02000 	mov	r2, #0	; 0x0
         8cd70:	eb6cdd3c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cd74:	e5941000 	ldr	r1, [r4]
         8cd78:	e5810000 	str	r0, [r1]
         8cd7c:	e59d0000 	ldr	r0, [sp]
         8cd80:	eb6cd90d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8cd84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         8cd88:	00683640 	rsbeq	r3, r8, r0, asr #12
         8cd8c:	00684618 	rsbeq	r4, r8, r8, lsl r6
         8cd90:	00684b58 	rsbeq	r4, r8, r8, asr fp
    */
}

/**
 * Symbol: TDate::__ct(unsigned short const *, unsigned long *, unsigned long)
 * Address: 0008cda8
 */
TDate::TDate(unsigned short const *, unsigned long *, unsigned long) {
    /*
         8cda8:	e1a0c00d 	mov	ip, sp
         8cdac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         8cdb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         8cdb4:	e1b04000 	movs	r4, r0
         8cdb8:	e1a07001 	mov	r7, r1
         8cdbc:	e1a06002 	mov	r6, r2
         8cdc0:	e1a05003 	mov	r5, r3
         8cdc4:	1a000003 	bne	8cdd8 <TDate::__ct(unsigned short const *, unsigned long *, unsigned long)+0x30>
         8cdc8:	e3a00028 	mov	r0, #40	; 0x28
         8cdcc:	eb6d0659 	bl	1bce738 <$__nw(unsigned int)>
         8cdd0:	e1b04000 	movs	r4, r0
         8cdd4:	0a000011 	beq	8ce20 <TDate::__ct(unsigned short const *, unsigned long *, unsigned long)+0x78>
         8cdd8:	e3a00002 	mov	r0, #2	; 0x2
         8cddc:	eb6cd4da 	bl	1bc214c <$AllocateRefHandle(long)>
         8cde0:	e3a08000 	mov	r8, #0	; 0x0
         8cde4:	e584001c 	str	r0, [r4, #28]	; fField28
         8cde8:	e5a08004 	str	r8, [r0, #4]!	; fField4
         8cdec:	e3a00002 	mov	r0, #2	; 0x2
         8cdf0:	eb6cd4d5 	bl	1bc214c <$AllocateRefHandle(long)>
         8cdf4:	e5840020 	str	r0, [r4, #32]	; fField32
         8cdf8:	e5a08004 	str	r8, [r0, #4]!	; fField4
         8cdfc:	e3a00002 	mov	r0, #2	; 0x2
         8ce00:	eb6cd4d1 	bl	1bc214c <$AllocateRefHandle(long)>
         8ce04:	e5840024 	str	r0, [r4, #36]	; fField36
         8ce08:	e1a03005 	mov	r3, r5
         8ce0c:	e1a02006 	mov	r2, r6
         8ce10:	e1a01007 	mov	r1, r7
         8ce14:	e5a08004 	str	r8, [r0, #4]!	; fField4
         8ce18:	e1a00004 	mov	r0, r4
         8ce1c:	eb6dc856 	bl	1bfef7c <TDate::$StringToDate(unsigned short const *, unsigned long *, unsigned long)>
         8ce20:	e1a00004 	mov	r0, r4
         8ce24:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::LongDateString(unsigned long, unsigned short *, unsigned long)
 * Address: 0008ce3c
 */
TDate::LongDateString(unsigned long, unsigned short *, unsigned long) {
    /*
         8ce3c:	e1a0c00d 	mov	ip, sp
         8ce40:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8ce44:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ce48:	e24dd010 	sub	sp, sp, #16	; 0x10
         8ce4c:	e3a04000 	mov	r4, #0	; 0x0
         8ce50:	e51b0038 	ldr	r0, [fp, -#56]
         8ce54:	e590001c 	ldr	r0, [r0, #28]	; fField28
         8ce58:	e5900000 	ldr	r0, [r0]
         8ce5c:	e3300002 	teq	r0, #2	; 0x2
         8ce60:	1a00000e 	bne	8cea0 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x64>
         8ce64:	e24dd004 	sub	sp, sp, #4	; 0x4
         8ce68:	eb68230f 	bl	1a95aac <$GetCurrentLocale(void)>
         8ce6c:	eb6cd4b6 	bl	1bc214c <$AllocateRefHandle(long)>
         8ce70:	e58d0000 	str	r0, [sp]
         8ce74:	e51b0038 	ldr	r0, [fp, -#56]
         8ce78:	e280501c 	add	r5, r0, #28	; 0x1c
         8ce7c:	e59f10b4 	ldr	r1, [pc, #b4]	; 8cf38 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0xfc>
         8ce80:	e1a0000d 	mov	r0, sp
         8ce84:	e3a02000 	mov	r2, #0	; 0x0
         8ce88:	eb6cdcf6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8ce8c:	e5951000 	ldr	r1, [r5]
         8ce90:	e5810000 	str	r0, [r1]
         8ce94:	e59d0000 	ldr	r0, [sp]
         8ce98:	eb6cd8c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ce9c:	e28dd004 	add	sp, sp, #4	; 0x4
         8cea0:	e24dd004 	sub	sp, sp, #4	; 0x4
         8cea4:	e51b0038 	ldr	r0, [fp, -#56]
         8cea8:	e280001c 	add	r0, r0, #28	; 0x1c
         8ceac:	e59f1088 	ldr	r1, [pc, #88]	; 8cf3c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x100>
         8ceb0:	e3a02000 	mov	r2, #0	; 0x0
         8ceb4:	eb6cdceb 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8ceb8:	eb6cd4a3 	bl	1bc214c <$AllocateRefHandle(long)>
         8cebc:	e40d0004 	str	r0, [sp], -#4	; fField4
         8cec0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8cec4:	e5900000 	ldr	r0, [r0]
         8cec8:	e3300002 	teq	r0, #2	; 0x2
         8cecc:	03a00000 	moveq	r0, #0	; 0x0
         8ced0:	0a000003 	beq	8cee4 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0xa8>
         8ced4:	e3100003 	tst	r0, #3	; 0x3
         8ced8:	01a00140 	moveq	r0, r0, asr #2
         8cedc:	0a000000 	beq	8cee4 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0xa8>
         8cee0:	eb6cd48d 	bl	1bc211c <$_RINTError(long)>
         8cee4:	e40d0044 	str	r0, [sp], -#68
         8cee8:	e51b0038 	ldr	r0, [fp, -#56]
         8ceec:	e280001c 	add	r0, r0, #28	; 0x1c
         8cef0:	e59f1048 	ldr	r1, [pc, #48]	; 8cf40 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x104>
         8cef4:	e3a02000 	mov	r2, #0	; 0x0
         8cef8:	eb6cdcda 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8cefc:	eb6cd492 	bl	1bc214c <$AllocateRefHandle(long)>
         8cf00:	e58d0040 	str	r0, [sp, #64]
         8cf04:	e51b0034 	ldr	r0, [fp, -#52]
         8cf08:	e3300000 	teq	r0, #0	; 0x0
         8cf0c:	1a00000c 	bne	8cf44 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x108>
         8cf10:	e3a05001 	mov	r5, #1	; 0x1
         8cf14:	e58d5050 	str	r5, [sp, #80]
         8cf18:	e58d5054 	str	r5, [sp, #84]
         8cf1c:	e3a06000 	mov	r6, #0	; 0x0
         8cf20:	e1a07006 	mov	r7, r6
         8cf24:	e1a08006 	mov	r8, r6
         8cf28:	e1a09006 	mov	r9, r6
         8cf2c:	e3a04004 	mov	r4, #4	; 0x4
         8cf30:	e58d5058 	str	r5, [sp, #88]
         8cf34:	ea000018 	b	8cf9c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x160>
         8cf38:	00683640 	rsbeq	r3, r8, r0, asr #12
         8cf3c:	00683648 	rsbeq	r3, r8, r8, asr #12
         8cf40:	00683638 	rsbeq	r3, r8, r8, lsr r6
         8cf44:	e3a05000 	mov	r5, #0	; 0x0
         8cf48:	e58d5050 	str	r5, [sp, #80]
         8cf4c:	e58d5054 	str	r5, [sp, #84]
         8cf50:	e58d5058 	str	r5, [sp, #88]
         8cf54:	e24b0034 	sub	r0, fp, #52	; 0x34
         8cf58:	eb6822e6 	bl	1a95af8 <$GetNextElementType(unsigned long *)>
         8cf5c:	e1a0a000 	mov	sl, r0
         8cf60:	e24b0034 	sub	r0, fp, #52	; 0x34
         8cf64:	eb6822e2 	bl	1a95af4 <$GetNextElementFormat(unsigned long *)>
         8cf68:	e2844001 	add	r4, r4, #1	; 0x1
         8cf6c:	e35a0004 	cmp	sl, #4	; 0x4
         8cf70:	908ff10a 	addls	pc, pc, sl, lsl #2
         8cf74:	ea000005 	b	8cf90 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x154>
         8cf78:	ea000004 	b	8cf90 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x154>
         8cf7c:	ea000027 	b	8d020 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x1e4>
         8cf80:	ea00002a 	b	8d030 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x1f4>
         8cf84:	ea00002d 	b	8d040 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x204>
         8cf88:	e3a05001 	mov	r5, #1	; 0x1
         8cf8c:	e1a09000 	mov	r9, r0
         8cf90:	e51b0034 	ldr	r0, [fp, -#52]
         8cf94:	e3300000 	teq	r0, #0	; 0x0
         8cf98:	1affffed 	bne	8cf54 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x118>
         8cf9c:	e24dd004 	sub	sp, sp, #4	; 0x4
         8cfa0:	e3350000 	teq	r5, #0	; 0x0
         8cfa4:	0a000008 	beq	8cfcc <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x190>
         8cfa8:	e51b0038 	ldr	r0, [fp, -#56]
         8cfac:	e5900000 	ldr	r0, [r0]
         8cfb0:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8cfb4:	235c0008 	cmpcs	ip, #8	; 0x8
         8cfb8:	2a000001 	bcs	8cfc4 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x188>
         8cfbc:	e3700001 	cmn	r0, #1	; 0x1
         8cfc0:	1a000001 	bne	8cfcc <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x190>
         8cfc4:	e3a05000 	mov	r5, #0	; 0x0
         8cfc8:	e2444001 	sub	r4, r4, #1	; 0x1
         8cfcc:	e59d0044 	ldr	r0, [sp, #68]
         8cfd0:	e5900000 	ldr	r0, [r0]
         8cfd4:	e3a01000 	mov	r1, #0	; 0x0
         8cfd8:	eb6cdc9d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8cfdc:	e1a01000 	mov	r1, r0
         8cfe0:	e1a0000d 	mov	r0, sp
         8cfe4:	eb6cd039 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8cfe8:	e1a0000d 	mov	r0, sp
         8cfec:	eb6cd448 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8cff0:	e1a01000 	mov	r1, r0
         8cff4:	e24b2030 	sub	r2, fp, #48	; 0x30
         8cff8:	e8920005 	ldmia	r2, {r0, r2}
         8cffc:	eb6d85d9 	bl	1bee768 <$Ustrncpy>
         8d000:	e1a0000d 	mov	r0, sp
         8d004:	e3a01000 	mov	r1, #0	; 0x0
         8d008:	eb6cd43c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d00c:	e3a0a000 	mov	sl, #0	; 0x0
         8d010:	e59d0048 	ldr	r0, [sp, #72]
         8d014:	e3300000 	teq	r0, #0	; 0x0
         8d018:	0a000057 	beq	8d17c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x340>
         8d01c:	ea00000b 	b	8d050 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x214>
         8d020:	e3a01001 	mov	r1, #1	; 0x1
         8d024:	e1a07000 	mov	r7, r0
         8d028:	e58d1054 	str	r1, [sp, #84]
         8d02c:	eaffffd7 	b	8cf90 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x154>
         8d030:	e3a01001 	mov	r1, #1	; 0x1
         8d034:	e1a06000 	mov	r6, r0
         8d038:	e58d1050 	str	r1, [sp, #80]
         8d03c:	eaffffd3 	b	8cf90 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x154>
         8d040:	e3a01001 	mov	r1, #1	; 0x1
         8d044:	e1a08000 	mov	r8, r0
         8d048:	e58d1058 	str	r1, [sp, #88]
         8d04c:	eaffffcf 	b	8cf90 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x154>
         8d050:	e28d0048 	add	r0, sp, #72	; 0x48
         8d054:	eb6822a7 	bl	1a95af8 <$GetNextElementType(unsigned long *)>
         8d058:	e58d0050 	str	r0, [sp, #80]
         8d05c:	e28d0048 	add	r0, sp, #72	; 0x48
         8d060:	eb6822a3 	bl	1a95af4 <$GetNextElementFormat(unsigned long *)>
         8d064:	e59d1050 	ldr	r1, [sp, #80]
         8d068:	e3510004 	cmp	r1, #4	; 0x4
         8d06c:	908ff101 	addls	pc, pc, r1, lsl #2
         8d070:	ea00001a 	b	8d0e0 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x2a4>
         8d074:	ea00003c 	b	8d16c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x330>
         8d078:	ea000006 	b	8d098 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x25c>
         8d07c:	ea00000b 	b	8d0b0 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x274>
         8d080:	ea000010 	b	8d0c8 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x28c>
         8d084:	e3350000 	teq	r5, #0	; 0x0
         8d088:	0a000037 	beq	8d16c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x330>
         8d08c:	e3390000 	teq	r9, #0	; 0x0
         8d090:	11a00009 	movne	r0, r9
         8d094:	ea000010 	b	8d0dc <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x2a0>
         8d098:	e59d1058 	ldr	r1, [sp, #88]
         8d09c:	e3310000 	teq	r1, #0	; 0x0
         8d0a0:	0a000031 	beq	8d16c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x330>
         8d0a4:	e3370000 	teq	r7, #0	; 0x0
         8d0a8:	11a00007 	movne	r0, r7
         8d0ac:	ea00000a 	b	8d0dc <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x2a0>
         8d0b0:	e59d1054 	ldr	r1, [sp, #84]
         8d0b4:	e3310000 	teq	r1, #0	; 0x0
         8d0b8:	0a00002b 	beq	8d16c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x330>
         8d0bc:	e3360000 	teq	r6, #0	; 0x0
         8d0c0:	11a00006 	movne	r0, r6
         8d0c4:	ea000004 	b	8d0dc <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x2a0>
         8d0c8:	e59d105c 	ldr	r1, [sp, #92]
         8d0cc:	e3310000 	teq	r1, #0	; 0x0
         8d0d0:	0a000025 	beq	8d16c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x330>
         8d0d4:	e3380000 	teq	r8, #0	; 0x0
         8d0d8:	11a00008 	movne	r0, r8
         8d0dc:	e2444001 	sub	r4, r4, #1	; 0x1
         8d0e0:	e3a03001 	mov	r3, #1	; 0x1
         8d0e4:	e3a0201f 	mov	r2, #31	; 0x1f
         8d0e8:	e92d000c 	stmdb	sp!, {r2, r3}
         8d0ec:	e28d300c 	add	r3, sp, #12	; 0xc
         8d0f0:	e1a02000 	mov	r2, r0
         8d0f4:	e59d1058 	ldr	r1, [sp, #88]
         8d0f8:	e51b0038 	ldr	r0, [fp, -#56]
         8d0fc:	eb6dc790 	bl	1bfef44 <TDate::$DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)>
         8d100:	e28dd008 	add	sp, sp, #8	; 0x8
         8d104:	e3340000 	teq	r4, #0	; 0x0
         8d108:	1a000002 	bne	8d118 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x2dc>
         8d10c:	e59d0048 	ldr	r0, [sp, #72]
         8d110:	e3300000 	teq	r0, #0	; 0x0
         8d114:	1a000010 	bne	8d15c <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x320>
         8d118:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d11c:	e28a1001 	add	r1, sl, #1	; 0x1
         8d120:	e59d0048 	ldr	r0, [sp, #72]
         8d124:	e5900000 	ldr	r0, [r0]
         8d128:	eb6cdc49 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8d12c:	e1a01000 	mov	r1, r0
         8d130:	e1a0000d 	mov	r0, sp
         8d134:	eb6ccfe5 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d138:	e1a0000d 	mov	r0, sp
         8d13c:	eb6cd3f4 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d140:	e1a01000 	mov	r1, r0
         8d144:	e28d0008 	add	r0, sp, #8	; 0x8
         8d148:	eb6d8580 	bl	1bee750 <$Ustrcat>
         8d14c:	e1a0000d 	mov	r0, sp
         8d150:	e3a01000 	mov	r1, #0	; 0x0
         8d154:	eb6cd3e9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d158:	e28dd004 	add	sp, sp, #4	; 0x4
         8d15c:	e28d1004 	add	r1, sp, #4	; 0x4
         8d160:	e24b2030 	sub	r2, fp, #48	; 0x30
         8d164:	e8920005 	ldmia	r2, {r0, r2}
         8d168:	eb6d857d 	bl	1bee764 <$Ustrncat>
         8d16c:	e28aa001 	add	sl, sl, #1	; 0x1
         8d170:	e59d0048 	ldr	r0, [sp, #72]
         8d174:	e3300000 	teq	r0, #0	; 0x0
         8d178:	1affffb4 	bne	8d050 <TDate::LongDateString(unsigned long, unsigned short *, unsigned long)+0x214>
         8d17c:	e28dd004 	add	sp, sp, #4	; 0x4
         8d180:	e59d0040 	ldr	r0, [sp, #64]
         8d184:	eb6cd80c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8d188:	e5bd0048 	ldr	r0, [sp, #72]!
         8d18c:	eb6cd80a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8d190:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)
 * Address: 0008d194
 */
TDate::ShortDateString(unsigned long, unsigned short *, unsigned long) {
    /*
         8d194:	e1a0c00d 	mov	ip, sp
         8d198:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8d19c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8d1a0:	e3a04000 	mov	r4, #0	; 0x0
         8d1a4:	e51b0038 	ldr	r0, [fp, -#56]
         8d1a8:	e5900020 	ldr	r0, [r0, #32]	; fField32
         8d1ac:	e5900000 	ldr	r0, [r0]
         8d1b0:	e3a0a000 	mov	sl, #0	; 0x0
         8d1b4:	e3300002 	teq	r0, #2	; 0x2
         8d1b8:	1a00000e 	bne	8d1f8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x64>
         8d1bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d1c0:	eb682239 	bl	1a95aac <$GetCurrentLocale(void)>
         8d1c4:	eb6cd3e0 	bl	1bc214c <$AllocateRefHandle(long)>
         8d1c8:	e58d0000 	str	r0, [sp]
         8d1cc:	e51b0038 	ldr	r0, [fp, -#56]
         8d1d0:	e2805020 	add	r5, r0, #32	; 0x20
         8d1d4:	e59f1084 	ldr	r1, [pc, #84]	; 8d260 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0xcc>
         8d1d8:	e1a0000d 	mov	r0, sp
         8d1dc:	e3a02000 	mov	r2, #0	; 0x0
         8d1e0:	eb6cdc20 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d1e4:	e5951000 	ldr	r1, [r5]
         8d1e8:	e5810000 	str	r0, [r1]
         8d1ec:	e59d0000 	ldr	r0, [sp]
         8d1f0:	eb6cd7f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8d1f4:	e28dd004 	add	sp, sp, #4	; 0x4
         8d1f8:	e24dd044 	sub	sp, sp, #68	; 0x44
         8d1fc:	e51b0038 	ldr	r0, [fp, -#56]
         8d200:	e2800020 	add	r0, r0, #32	; 0x20
         8d204:	e59f1058 	ldr	r1, [pc, #58]	; 8d264 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0xd0>
         8d208:	e3a02000 	mov	r2, #0	; 0x0
         8d20c:	eb6cdc15 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d210:	e3100003 	tst	r0, #3	; 0x3
         8d214:	01a00140 	moveq	r0, r0, asr #2
         8d218:	0a000000 	beq	8d220 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x8c>
         8d21c:	eb6cd3be 	bl	1bc211c <$_RINTError(long)>
         8d220:	e58d0040 	str	r0, [sp, #64]
         8d224:	e51b0038 	ldr	r0, [fp, -#56]
         8d228:	e2800020 	add	r0, r0, #32	; 0x20
         8d22c:	e59f1034 	ldr	r1, [pc, #34]	; 8d268 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0xd4>
         8d230:	e3a02000 	mov	r2, #0	; 0x0
         8d234:	eb6cdc0b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d238:	eb6cd3c3 	bl	1bc214c <$AllocateRefHandle(long)>
         8d23c:	e1a06000 	mov	r6, r0
         8d240:	e51b0034 	ldr	r0, [fp, -#52]
         8d244:	e3300000 	teq	r0, #0	; 0x0
         8d248:	1a000007 	bne	8d26c <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0xd8>
         8d24c:	e3a05001 	mov	r5, #1	; 0x1
         8d250:	e1a07005 	mov	r7, r5
         8d254:	e1a08005 	mov	r8, r5
         8d258:	e3a04003 	mov	r4, #3	; 0x3
         8d25c:	ea000018 	b	8d2c4 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x130>
         8d260:	00684618 	rsbeq	r4, r8, r8, lsl r6
         8d264:	00684620 	rsbeq	r4, r8, r0, lsr #12
         8d268:	00684610 	rsbeq	r4, r8, r0, lsl r6
         8d26c:	e3a05000 	mov	r5, #0	; 0x0
         8d270:	e1a07005 	mov	r7, r5
         8d274:	e1a08005 	mov	r8, r5
         8d278:	e24b0034 	sub	r0, fp, #52	; 0x34
         8d27c:	eb68221d 	bl	1a95af8 <$GetNextElementType(unsigned long *)>
         8d280:	e1a09000 	mov	r9, r0
         8d284:	e24b0034 	sub	r0, fp, #52	; 0x34
         8d288:	eb682219 	bl	1a95af4 <$GetNextElementFormat(unsigned long *)>
         8d28c:	e2844001 	add	r4, r4, #1	; 0x1
         8d290:	e3390000 	teq	r9, #0	; 0x0
         8d294:	0a000007 	beq	8d2b8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x124>
         8d298:	e3390001 	teq	r9, #1	; 0x1
         8d29c:	03a07001 	moveq	r7, #1	; 0x1
         8d2a0:	0a000004 	beq	8d2b8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x124>
         8d2a4:	e3390003 	teq	r9, #3	; 0x3
         8d2a8:	03a08001 	moveq	r8, #1	; 0x1
         8d2ac:	0a000001 	beq	8d2b8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x124>
         8d2b0:	e3390004 	teq	r9, #4	; 0x4
         8d2b4:	03a05001 	moveq	r5, #1	; 0x1
         8d2b8:	e51b0034 	ldr	r0, [fp, -#52]
         8d2bc:	e3300000 	teq	r0, #0	; 0x0
         8d2c0:	1affffec 	bne	8d278 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0xe4>
         8d2c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d2c8:	e3350000 	teq	r5, #0	; 0x0
         8d2cc:	0a000008 	beq	8d2f4 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x160>
         8d2d0:	e51b0038 	ldr	r0, [fp, -#56]
         8d2d4:	e5900000 	ldr	r0, [r0]
         8d2d8:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8d2dc:	235c0008 	cmpcs	ip, #8	; 0x8
         8d2e0:	2a000001 	bcs	8d2ec <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x158>
         8d2e4:	e3700001 	cmn	r0, #1	; 0x1
         8d2e8:	1a000001 	bne	8d2f4 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x160>
         8d2ec:	e3a05000 	mov	r5, #0	; 0x0
         8d2f0:	e2444001 	sub	r4, r4, #1	; 0x1
         8d2f4:	e1a0100a 	mov	r1, sl
         8d2f8:	e5960000 	ldr	r0, [r6]
         8d2fc:	eb6cdbd4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8d300:	e1a01000 	mov	r1, r0
         8d304:	e1a0000d 	mov	r0, sp
         8d308:	eb6ccf70 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d30c:	e1a0000d 	mov	r0, sp
         8d310:	eb6cd37f 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d314:	e1a01000 	mov	r1, r0
         8d318:	e24b2030 	sub	r2, fp, #48	; 0x30
         8d31c:	e8920005 	ldmia	r2, {r0, r2}
         8d320:	eb6d8510 	bl	1bee768 <$Ustrncpy>
         8d324:	e1a0000d 	mov	r0, sp
         8d328:	e3a01000 	mov	r1, #0	; 0x0
         8d32c:	eb6cd373 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d330:	e3a09000 	mov	r9, #0	; 0x0
         8d334:	e59d0044 	ldr	r0, [sp, #68]
         8d338:	e3300000 	teq	r0, #0	; 0x0
         8d33c:	0a000035 	beq	8d418 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x284>
         8d340:	e28d0044 	add	r0, sp, #68	; 0x44
         8d344:	eb6821eb 	bl	1a95af8 <$GetNextElementType(unsigned long *)>
         8d348:	e1a0a000 	mov	sl, r0
         8d34c:	e28d0044 	add	r0, sp, #68	; 0x44
         8d350:	eb6821e7 	bl	1a95af4 <$GetNextElementFormat(unsigned long *)>
         8d354:	e33a0000 	teq	sl, #0	; 0x0
         8d358:	0a00002a 	beq	8d408 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x274>
         8d35c:	e33a0001 	teq	sl, #1	; 0x1
         8d360:	0a000030 	beq	8d428 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x294>
         8d364:	e33a0003 	teq	sl, #3	; 0x3
         8d368:	0a000031 	beq	8d434 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x2a0>
         8d36c:	e33a0004 	teq	sl, #4	; 0x4
         8d370:	1a000002 	bne	8d380 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x1ec>
         8d374:	e3350000 	teq	r5, #0	; 0x0
         8d378:	0a000022 	beq	8d408 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x274>
         8d37c:	e2444001 	sub	r4, r4, #1	; 0x1
         8d380:	e3a03000 	mov	r3, #0	; 0x0
         8d384:	e3a0201f 	mov	r2, #31	; 0x1f
         8d388:	e92d000c 	stmdb	sp!, {r2, r3}
         8d38c:	e28d300c 	add	r3, sp, #12	; 0xc
         8d390:	e1a0100a 	mov	r1, sl
         8d394:	e3a02005 	mov	r2, #5	; 0x5
         8d398:	e51b0038 	ldr	r0, [fp, -#56]
         8d39c:	eb6dc6e8 	bl	1bfef44 <TDate::$DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)>
         8d3a0:	e28dd008 	add	sp, sp, #8	; 0x8
         8d3a4:	e3340000 	teq	r4, #0	; 0x0
         8d3a8:	1a000002 	bne	8d3b8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x224>
         8d3ac:	e59d0044 	ldr	r0, [sp, #68]
         8d3b0:	e3300000 	teq	r0, #0	; 0x0
         8d3b4:	1a00000f 	bne	8d3f8 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x264>
         8d3b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d3bc:	e2891001 	add	r1, r9, #1	; 0x1
         8d3c0:	e5960000 	ldr	r0, [r6]
         8d3c4:	eb6cdba2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8d3c8:	e1a01000 	mov	r1, r0
         8d3cc:	e1a0000d 	mov	r0, sp
         8d3d0:	eb6ccf3e 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d3d4:	e1a0000d 	mov	r0, sp
         8d3d8:	eb6cd34d 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d3dc:	e1a01000 	mov	r1, r0
         8d3e0:	e28d0008 	add	r0, sp, #8	; 0x8
         8d3e4:	eb6d84d9 	bl	1bee750 <$Ustrcat>
         8d3e8:	e1a0000d 	mov	r0, sp
         8d3ec:	e3a01000 	mov	r1, #0	; 0x0
         8d3f0:	eb6cd342 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d3f4:	e28dd004 	add	sp, sp, #4	; 0x4
         8d3f8:	e28d1004 	add	r1, sp, #4	; 0x4
         8d3fc:	e24b2030 	sub	r2, fp, #48	; 0x30
         8d400:	e8920005 	ldmia	r2, {r0, r2}
         8d404:	eb6d84d6 	bl	1bee764 <$Ustrncat>
         8d408:	e2899001 	add	r9, r9, #1	; 0x1
         8d40c:	e59d0044 	ldr	r0, [sp, #68]
         8d410:	e3300000 	teq	r0, #0	; 0x0
         8d414:	1affffc9 	bne	8d340 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x1ac>
         8d418:	e28dd004 	add	sp, sp, #4	; 0x4
         8d41c:	e1a00006 	mov	r0, r6
         8d420:	eb6cd765 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8d424:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         8d428:	e3370000 	teq	r7, #0	; 0x0
         8d42c:	0afffff5 	beq	8d408 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x274>
         8d430:	eaffffd1 	b	8d37c <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x1e8>
         8d434:	e3380000 	teq	r8, #0	; 0x0
         8d438:	0afffff2 	beq	8d408 <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x274>
         8d43c:	eaffffce 	b	8d37c <TDate::ShortDateString(unsigned long, unsigned short *, unsigned long)+0x1e8>
    */
}

/**
 * Symbol: TDate::TimeString(unsigned long, unsigned short *, unsigned long)
 * Address: 0008d440
 */
TDate::TimeString(unsigned long, unsigned short *, unsigned long) {
    /*
         8d440:	e1a0c00d 	mov	ip, sp
         8d444:	e92ddbff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         8d448:	e24cb004 	sub	fp, ip, #4	; 0x4
         8d44c:	e24dd040 	sub	sp, sp, #64	; 0x40
         8d450:	e3a00000 	mov	r0, #0	; 0x0
         8d454:	e51b102c 	ldr	r1, [fp, -#44]
         8d458:	e5c10001 	strb	r0, [r1, #1]
         8d45c:	e5c10000 	strb	r0, [r1]
         8d460:	e5cd0001 	strb	r0, [sp, #1]
         8d464:	e5cd0000 	strb	r0, [sp]
         8d468:	e51b0030 	ldr	r0, [fp, -#48]
         8d46c:	e3300000 	teq	r0, #0	; 0x0
         8d470:	1a000005 	bne	8d48c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x4c>
         8d474:	e3a04001 	mov	r4, #1	; 0x1
         8d478:	e1a07004 	mov	r7, r4
         8d47c:	e1a08004 	mov	r8, r4
         8d480:	e1a05004 	mov	r5, r4
         8d484:	e1a06004 	mov	r6, r4
         8d488:	ea000015 	b	8d4e4 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0xa4>
         8d48c:	e3a04000 	mov	r4, #0	; 0x0
         8d490:	e1a07004 	mov	r7, r4
         8d494:	e1a08004 	mov	r8, r4
         8d498:	e1a05004 	mov	r5, r4
         8d49c:	e1a06004 	mov	r6, r4
         8d4a0:	e24b0030 	sub	r0, fp, #48	; 0x30
         8d4a4:	eb682193 	bl	1a95af8 <$GetNextElementType(unsigned long *)>
         8d4a8:	e1a09000 	mov	r9, r0
         8d4ac:	e24b0030 	sub	r0, fp, #48	; 0x30
         8d4b0:	eb68218f 	bl	1a95af4 <$GetNextElementFormat(unsigned long *)>
         8d4b4:	e3590005 	cmp	r9, #5	; 0x5
         8d4b8:	908ff109 	addls	pc, pc, r9, lsl #2
         8d4bc:	ea000005 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d4c0:	ea000004 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d4c4:	ea00004c 	b	8d5fc <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1bc>
         8d4c8:	ea00004d 	b	8d604 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1c4>
         8d4cc:	ea00004e 	b	8d60c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1cc>
         8d4d0:	ea00004f 	b	8d614 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1d4>
         8d4d4:	e3a07001 	mov	r7, #1	; 0x1
         8d4d8:	e51b0030 	ldr	r0, [fp, -#48]
         8d4dc:	e3300000 	teq	r0, #0	; 0x0
         8d4e0:	1affffee 	bne	8d4a0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x60>
         8d4e4:	e51b0034 	ldr	r0, [fp, -#52]
         8d4e8:	e5900024 	ldr	r0, [r0, #36]	; fField36
         8d4ec:	e5900000 	ldr	r0, [r0]
         8d4f0:	e3300002 	teq	r0, #2	; 0x2
         8d4f4:	1a00000e 	bne	8d534 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0xf4>
         8d4f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d4fc:	eb68216a 	bl	1a95aac <$GetCurrentLocale(void)>
         8d500:	eb6cd311 	bl	1bc214c <$AllocateRefHandle(long)>
         8d504:	e58d0000 	str	r0, [sp]
         8d508:	e51b0034 	ldr	r0, [fp, -#52]
         8d50c:	e2809024 	add	r9, r0, #36	; 0x24
         8d510:	e59f10d4 	ldr	r1, [pc, #d4]	; 8d5ec <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1ac>
         8d514:	e1a0000d 	mov	r0, sp
         8d518:	e3a02000 	mov	r2, #0	; 0x0
         8d51c:	eb6cdb51 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d520:	e5991000 	ldr	r1, [r9]
         8d524:	e5810000 	str	r0, [r1]
         8d528:	e59d0000 	ldr	r0, [sp]
         8d52c:	eb6cd722 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8d530:	e28dd004 	add	sp, sp, #4	; 0x4
         8d534:	e51b0034 	ldr	r0, [fp, -#52]
         8d538:	e2800024 	add	r0, r0, #36	; 0x24
         8d53c:	e59f10ac 	ldr	r1, [pc, #ac]	; 8d5f0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1b0>
         8d540:	e3a02000 	mov	r2, #0	; 0x0
         8d544:	eb6cdb47 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d548:	e3100003 	tst	r0, #3	; 0x3
         8d54c:	01a00140 	moveq	r0, r0, asr #2
         8d550:	0a000000 	beq	8d558 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x118>
         8d554:	eb6cd2f0 	bl	1bc211c <$_RINTError(long)>
         8d558:	e3300001 	teq	r0, #1	; 0x1
         8d55c:	13a00000 	movne	r0, #0	; 0x0
         8d560:	03a00001 	moveq	r0, #1	; 0x1
         8d564:	e20000ff 	and	r0, r0, #255	; 0xff
         8d568:	e3380000 	teq	r8, #0	; 0x0
         8d56c:	13300000 	teqne	r0, #0	; 0x0
         8d570:	03a01000 	moveq	r1, #0	; 0x0
         8d574:	13a01001 	movne	r1, #1	; 0x1
         8d578:	e20180ff 	and	r8, r1, #255	; 0xff
         8d57c:	e3370000 	teq	r7, #0	; 0x0
         8d580:	0a000002 	beq	8d590 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x150>
         8d584:	e3300000 	teq	r0, #0	; 0x0
         8d588:	03a01001 	moveq	r1, #1	; 0x1
         8d58c:	0a000000 	beq	8d594 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x154>
         8d590:	e3a01000 	mov	r1, #0	; 0x0
         8d594:	e20190ff 	and	r9, r1, #255	; 0xff
         8d598:	e59f7054 	ldr	r7, [pc, #54]	; 8d5f4 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1b4>
         8d59c:	e3340000 	teq	r4, #0	; 0x0
         8d5a0:	0a00005f 	beq	8d724 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x2e4>
         8d5a4:	e51b1034 	ldr	r1, [fp, -#52]
         8d5a8:	e591400c 	ldr	r4, [r1, #12]	; fField12
         8d5ac:	e3340000 	teq	r4, #0	; 0x0
         8d5b0:	1a000019 	bne	8d61c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1dc>
         8d5b4:	e2810024 	add	r0, r1, #36	; 0x24
         8d5b8:	e59f1038 	ldr	r1, [pc, #38]	; 8d5f8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x1b8>
         8d5bc:	e3a02000 	mov	r2, #0	; 0x0
         8d5c0:	eb6cdb28 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d5c4:	e3100003 	tst	r0, #3	; 0x3
         8d5c8:	01a00140 	moveq	r0, r0, asr #2
         8d5cc:	0a000000 	beq	8d5d4 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x194>
         8d5d0:	eb6cd2d1 	bl	1bc211c <$_RINTError(long)>
         8d5d4:	e3300001 	teq	r0, #1	; 0x1
         8d5d8:	03a0400c 	moveq	r4, #12	; 0xc
         8d5dc:	0a000022 	beq	8d66c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x22c>
         8d5e0:	e3300002 	teq	r0, #2	; 0x2
         8d5e4:	03a04018 	moveq	r4, #24	; 0x18
         8d5e8:	ea00001f 	b	8d66c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x22c>
         8d5ec:	00684b58 	rsbeq	r4, r8, r8, asr fp
         8d5f0:	00684b48 	rsbeq	r4, r8, r8, asr #22
         8d5f4:	0c100f88 	ldceq	15, cr0, [r0], -#544
         8d5f8:	00683858 	rsbeq	r3, r8, r8, asr r8
         8d5fc:	e3a04001 	mov	r4, #1	; 0x1
         8d600:	eaffffb4 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d604:	e3a06001 	mov	r6, #1	; 0x1
         8d608:	eaffffb2 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d60c:	e3a05001 	mov	r5, #1	; 0x1
         8d610:	eaffffb0 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d614:	e3a08001 	mov	r8, #1	; 0x1
         8d618:	eaffffae 	b	8d4d8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x98>
         8d61c:	e334000c 	teq	r4, #12	; 0xc
         8d620:	1a00000d 	bne	8d65c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x21c>
         8d624:	e3300000 	teq	r0, #0	; 0x0
         8d628:	0a000020 	beq	8d6b0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x270>
         8d62c:	e2810024 	add	r0, r1, #36	; 0x24
         8d630:	e59f1020 	ldr	r1, [pc, #20]	; 8d658 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x218>	; fField20
         8d634:	e3a02000 	mov	r2, #0	; 0x0
         8d638:	eb6cdb0a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d63c:	e3100003 	tst	r0, #3	; 0x3
         8d640:	01a00140 	moveq	r0, r0, asr #2
         8d644:	0a000000 	beq	8d64c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x20c>
         8d648:	eb6cd2b3 	bl	1bc211c <$_RINTError(long)>
         8d64c:	e3300000 	teq	r0, #0	; 0x0
         8d650:	03a04000 	moveq	r4, #0	; 0x0
         8d654:	ea000004 	b	8d66c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x22c>
         8d658:	00683a70 	rsbeq	r3, r8, r0, ror sl
         8d65c:	e3300000 	teq	r0, #0	; 0x0
         8d660:	0a000001 	beq	8d66c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x22c>
         8d664:	e354000c 	cmp	r4, #12	; 0xc
         8d668:	8244400c 	subhi	r4, r4, #12	; 0xc
         8d66c:	e354000a 	cmp	r4, #10	; 0xa
         8d670:	2a00000e 	bcs	8d6b0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x270>
         8d674:	e51b0034 	ldr	r0, [fp, -#52]
         8d678:	e2800024 	add	r0, r0, #36	; 0x24
         8d67c:	e59f1224 	ldr	r1, [pc, #224]	; 8d8a8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x468>
         8d680:	e3a02000 	mov	r2, #0	; 0x0
         8d684:	eb6cdaf7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d688:	e3100003 	tst	r0, #3	; 0x3
         8d68c:	01a00140 	moveq	r0, r0, asr #2
         8d690:	0a000000 	beq	8d698 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x258>
         8d694:	eb6cd2a0 	bl	1bc211c <$_RINTError(long)>
         8d698:	e3300000 	teq	r0, #0	; 0x0
         8d69c:	1a000003 	bne	8d6b0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x270>
         8d6a0:	e51b2028 	ldr	r2, [fp, -#40]
         8d6a4:	e5971000 	ldr	r1, [r7]
         8d6a8:	e51b002c 	ldr	r0, [fp, -#44]
         8d6ac:	eb6d842c 	bl	1bee764 <$Ustrncat>
         8d6b0:	e1a0100d 	mov	r1, sp
         8d6b4:	e1a00004 	mov	r0, r4
         8d6b8:	eb6d7395 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8d6bc:	e1a0100d 	mov	r1, sp
         8d6c0:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d6c4:	e8920005 	ldmia	r2, {r0, r2}
         8d6c8:	eb6d8425 	bl	1bee764 <$Ustrncat>
         8d6cc:	e3360000 	teq	r6, #0	; 0x0
         8d6d0:	03350000 	teqeq	r5, #0	; 0x0
         8d6d4:	0a00005d 	beq	8d850 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x410>
         8d6d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d6dc:	e51b0034 	ldr	r0, [fp, -#52]
         8d6e0:	e2800024 	add	r0, r0, #36	; 0x24
         8d6e4:	e59f11c0 	ldr	r1, [pc, #1c0]	; 8d8ac <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x46c>
         8d6e8:	e3a02000 	mov	r2, #0	; 0x0
         8d6ec:	eb6cdadd 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d6f0:	e1a01000 	mov	r1, r0
         8d6f4:	e1a0000d 	mov	r0, sp
         8d6f8:	eb6cce74 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d6fc:	e1a0000d 	mov	r0, sp
         8d700:	eb6cd283 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d704:	e1a01000 	mov	r1, r0
         8d708:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d70c:	e8920005 	ldmia	r2, {r0, r2}
         8d710:	eb6d8413 	bl	1bee764 <$Ustrncat>
         8d714:	e1a0000d 	mov	r0, sp
         8d718:	e3a01000 	mov	r1, #0	; 0x0
         8d71c:	eb6cd277 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d720:	e28dd004 	add	sp, sp, #4	; 0x4
         8d724:	e3360000 	teq	r6, #0	; 0x0
         8d728:	0a00002d 	beq	8d7e4 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x3a4>
         8d72c:	e51b0034 	ldr	r0, [fp, -#52]
         8d730:	e5904010 	ldr	r4, [r0, #16]	; fField16
         8d734:	e354000a 	cmp	r4, #10	; 0xa
         8d738:	2a00000d 	bcs	8d774 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x334>
         8d73c:	e2800024 	add	r0, r0, #36	; 0x24
         8d740:	e59f1168 	ldr	r1, [pc, #168]	; 8d8b0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x470>
         8d744:	e3a02000 	mov	r2, #0	; 0x0
         8d748:	eb6cdac6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d74c:	e3100003 	tst	r0, #3	; 0x3
         8d750:	01a00140 	moveq	r0, r0, asr #2
         8d754:	0a000000 	beq	8d75c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x31c>
         8d758:	eb6cd26f 	bl	1bc211c <$_RINTError(long)>
         8d75c:	e3300000 	teq	r0, #0	; 0x0
         8d760:	1a000003 	bne	8d774 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x334>
         8d764:	e51b2028 	ldr	r2, [fp, -#40]
         8d768:	e5971000 	ldr	r1, [r7]
         8d76c:	e51b002c 	ldr	r0, [fp, -#44]
         8d770:	eb6d83fb 	bl	1bee764 <$Ustrncat>
         8d774:	e1a0100d 	mov	r1, sp
         8d778:	e1a00004 	mov	r0, r4
         8d77c:	eb6d7364 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8d780:	e1a0100d 	mov	r1, sp
         8d784:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d788:	e8920005 	ldmia	r2, {r0, r2}
         8d78c:	eb6d83f4 	bl	1bee764 <$Ustrncat>
         8d790:	e3350000 	teq	r5, #0	; 0x0
         8d794:	0a00002d 	beq	8d850 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x410>
         8d798:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d79c:	e51b0034 	ldr	r0, [fp, -#52]
         8d7a0:	e2800024 	add	r0, r0, #36	; 0x24
         8d7a4:	e59f1108 	ldr	r1, [pc, #108]	; 8d8b4 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x474>
         8d7a8:	e3a02000 	mov	r2, #0	; 0x0
         8d7ac:	eb6cdaad 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d7b0:	e1a01000 	mov	r1, r0
         8d7b4:	e1a0000d 	mov	r0, sp
         8d7b8:	eb6cce44 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d7bc:	e1a0000d 	mov	r0, sp
         8d7c0:	eb6cd253 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d7c4:	e1a01000 	mov	r1, r0
         8d7c8:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d7cc:	e8920005 	ldmia	r2, {r0, r2}
         8d7d0:	eb6d83e3 	bl	1bee764 <$Ustrncat>
         8d7d4:	e1a0000d 	mov	r0, sp
         8d7d8:	e3a01000 	mov	r1, #0	; 0x0
         8d7dc:	eb6cd247 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d7e0:	e28dd004 	add	sp, sp, #4	; 0x4
         8d7e4:	e3350000 	teq	r5, #0	; 0x0
         8d7e8:	0a000018 	beq	8d850 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x410>
         8d7ec:	e51b0034 	ldr	r0, [fp, -#52]
         8d7f0:	e5904014 	ldr	r4, [r0, #20]	; fField20
         8d7f4:	e354000a 	cmp	r4, #10	; 0xa
         8d7f8:	2a00000d 	bcs	8d834 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x3f4>
         8d7fc:	e2800024 	add	r0, r0, #36	; 0x24
         8d800:	e59f10b0 	ldr	r1, [pc, #b0]	; 8d8b8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x478>
         8d804:	e3a02000 	mov	r2, #0	; 0x0
         8d808:	eb6cda96 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d80c:	e3100003 	tst	r0, #3	; 0x3
         8d810:	01a00140 	moveq	r0, r0, asr #2
         8d814:	0a000000 	beq	8d81c <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x3dc>
         8d818:	eb6cd23f 	bl	1bc211c <$_RINTError(long)>
         8d81c:	e3300000 	teq	r0, #0	; 0x0
         8d820:	1a000003 	bne	8d834 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x3f4>
         8d824:	e51b2028 	ldr	r2, [fp, -#40]
         8d828:	e5971000 	ldr	r1, [r7]
         8d82c:	e51b002c 	ldr	r0, [fp, -#44]
         8d830:	eb6d83cb 	bl	1bee764 <$Ustrncat>
         8d834:	e1a0100d 	mov	r1, sp
         8d838:	e1a00004 	mov	r0, r4
         8d83c:	eb6d7334 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8d840:	e1a0100d 	mov	r1, sp
         8d844:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d848:	e8920005 	ldmia	r2, {r0, r2}
         8d84c:	eb6d83c4 	bl	1bee764 <$Ustrncat>
         8d850:	e3380000 	teq	r8, #0	; 0x0
         8d854:	0a000028 	beq	8d8fc <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x4bc>
         8d858:	e51b0034 	ldr	r0, [fp, -#52]
         8d85c:	e590100c 	ldr	r1, [r0, #12]	; fField12
         8d860:	e351000c 	cmp	r1, #12	; 0xc
         8d864:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d868:	e2800024 	add	r0, r0, #36	; 0x24
         8d86c:	2a000013 	bcs	8d8c0 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x480>
         8d870:	e59f1044 	ldr	r1, [pc, #44]	; 8d8bc <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x47c>
         8d874:	e3a02000 	mov	r2, #0	; 0x0
         8d878:	eb6cda7a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d87c:	e1a01000 	mov	r1, r0
         8d880:	e1a0000d 	mov	r0, sp
         8d884:	eb6cce11 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d888:	e1a0000d 	mov	r0, sp
         8d88c:	eb6cd220 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d890:	e1a01000 	mov	r1, r0
         8d894:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d898:	e8920005 	ldmia	r2, {r0, r2}
         8d89c:	eb6d83b0 	bl	1bee764 <$Ustrncat>
         8d8a0:	e1a0000d 	mov	r0, sp
         8d8a4:	ea000026 	b	8d944 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x504>
         8d8a8:	00683140 	rsbeq	r3, r8, r0, asr #2
         8d8ac:	00684b70 	rsbeq	r4, r8, r0, ror fp
         8d8b0:	006838a8 	rsbeq	r3, r8, r8, lsr #17
         8d8b4:	00684b78 	rsbeq	r4, r8, r8, ror fp
         8d8b8:	006844e8 	rsbeq	r4, r8, r8, ror #9
         8d8bc:	00683930 	rsbeq	r3, r8, r0, lsr r9
         8d8c0:	e59f1030 	ldr	r1, [pc, #30]	; 8d8f8 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x4b8>
         8d8c4:	e3a02000 	mov	r2, #0	; 0x0
         8d8c8:	eb6cda66 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d8cc:	e1a01000 	mov	r1, r0
         8d8d0:	e1a0000d 	mov	r0, sp
         8d8d4:	eb6ccdfd 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d8d8:	e1a0000d 	mov	r0, sp
         8d8dc:	eb6cd20c 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d8e0:	e1a01000 	mov	r1, r0
         8d8e4:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d8e8:	e8920005 	ldmia	r2, {r0, r2}
         8d8ec:	eb6d839c 	bl	1bee764 <$Ustrncat>
         8d8f0:	e1a0000d 	mov	r0, sp
         8d8f4:	ea000012 	b	8d944 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x504>
         8d8f8:	00682cb8 	streqh	r2, [r8], -#200
         8d8fc:	e3390000 	teq	r9, #0	; 0x0
         8d900:	0a000012 	beq	8d950 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x510>
         8d904:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d908:	e51b0034 	ldr	r0, [fp, -#52]
         8d90c:	e2800024 	add	r0, r0, #36	; 0x24
         8d910:	e59f103c 	ldr	r1, [pc, #3c]	; 8d954 <TDate::TimeString(unsigned long, unsigned short *, unsigned long)+0x514>
         8d914:	e3a02000 	mov	r2, #0	; 0x0
         8d918:	eb6cda52 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8d91c:	e1a01000 	mov	r1, r0
         8d920:	e1a0000d 	mov	r0, sp
         8d924:	eb6ccde9 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8d928:	e1a0000d 	mov	r0, sp
         8d92c:	eb6cd1f8 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8d930:	e1a01000 	mov	r1, r0
         8d934:	e24b202c 	sub	r2, fp, #44	; 0x2c
         8d938:	e8920005 	ldmia	r2, {r0, r2}
         8d93c:	eb6d8388 	bl	1bee764 <$Ustrncat>
         8d940:	e1a0000d 	mov	r0, sp
         8d944:	e3a01000 	mov	r1, #0	; 0x0
         8d948:	eb6cd1ec 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8d94c:	e28dd004 	add	sp, sp, #4	; 0x4
         8d950:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         8d954:	00684940 	rsbeq	r4, r8, r0, asr #18
    */
}

/**
 * Symbol: TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)
 * Address: 0008d958
 */
TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char) {
    /*
         8d958:	e1a0c00d 	mov	ip, sp
         8d95c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         8d960:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8d964:	e24cb014 	sub	fp, ip, #20	; 0x14
         8d968:	e1a05000 	mov	r5, r0
         8d96c:	e1a0a001 	mov	sl, r1
         8d970:	e1a04003 	mov	r4, r3
         8d974:	e59b0018 	ldr	r0, [fp, #24]	; fField24
         8d978:	e20060ff 	and	r6, r0, #255	; 0xff
         8d97c:	e59b8014 	ldr	r8, [fp, #20]	; fField20
         8d980:	e24dd048 	sub	sp, sp, #72	; 0x48
         8d984:	e3a07002 	mov	r7, #2	; 0x2
         8d988:	e1a00007 	mov	r0, r7
         8d98c:	eb6cd1ee 	bl	1bc214c <$AllocateRefHandle(long)>
         8d990:	e58d0004 	str	r0, [sp, #4]	; fField4
         8d994:	e1a00007 	mov	r0, r7
         8d998:	eb6cd1eb 	bl	1bc214c <$AllocateRefHandle(long)>
         8d99c:	e58d0000 	str	r0, [sp]
         8d9a0:	e3a00000 	mov	r0, #0	; 0x0
         8d9a4:	e5c40001 	strb	r0, [r4, #1]
         8d9a8:	e5c40000 	strb	r0, [r4]
         8d9ac:	e5cd0009 	strb	r0, [sp, #9]
         8d9b0:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         8d9b4:	e285001c 	add	r0, r5, #28	; 0x1c
         8d9b8:	e1a09000 	mov	r9, r0
         8d9bc:	e5900000 	ldr	r0, [r0]
         8d9c0:	e5900000 	ldr	r0, [r0]
         8d9c4:	e2857020 	add	r7, r5, #32	; 0x20
         8d9c8:	e3300002 	teq	r0, #2	; 0x2
         8d9cc:	15970000 	ldrne	r0, [r7]
         8d9d0:	15900000 	ldrne	r0, [r0]
         8d9d4:	13300002 	teqne	r0, #2	; 0x2
         8d9d8:	1a000016 	bne	8da38 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0xe0>
         8d9dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         8d9e0:	eb682031 	bl	1a95aac <$GetCurrentLocale(void)>
         8d9e4:	eb6cd1d8 	bl	1bc214c <$AllocateRefHandle(long)>
         8d9e8:	e40d0004 	str	r0, [sp], -#4	; fField4
         8d9ec:	e58d9000 	str	r9, [sp]
         8d9f0:	e59f108c 	ldr	r1, [pc, #8c]	; 8da84 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x12c>	; fField8
         8d9f4:	e28d0004 	add	r0, sp, #4	; 0x4
         8d9f8:	e3a02000 	mov	r2, #0	; 0x0
         8d9fc:	eb6cda19 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8da00:	e59d1000 	ldr	r1, [sp]
         8da04:	e5911000 	ldr	r1, [r1]
         8da08:	e5810000 	str	r0, [r1]
         8da0c:	e58d7000 	str	r7, [sp]
         8da10:	e59f1070 	ldr	r1, [pc, #70]	; 8da88 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x130>
         8da14:	e28d0004 	add	r0, sp, #4	; 0x4
         8da18:	e3a02000 	mov	r2, #0	; 0x0
         8da1c:	eb6cda11 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8da20:	e59d1000 	ldr	r1, [sp]
         8da24:	e5911000 	ldr	r1, [r1]
         8da28:	e5810000 	str	r0, [r1]
         8da2c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         8da30:	eb6cd5e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8da34:	e28dd004 	add	sp, sp, #4	; 0x4
         8da38:	e24dd004 	sub	sp, sp, #4	; 0x4
         8da3c:	e3360000 	teq	r6, #0	; 0x0
         8da40:	01a09007 	moveq	r9, r7
         8da44:	e5990000 	ldr	r0, [r9]
         8da48:	e5900000 	ldr	r0, [r0]
         8da4c:	eb6cd1be 	bl	1bc214c <$AllocateRefHandle(long)>
         8da50:	e1a0100a 	mov	r1, sl
         8da54:	e58d0000 	str	r0, [sp]
         8da58:	e59fa02c 	ldr	sl, [pc, #2c]	; 8da8c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x134>
         8da5c:	e59f902c 	ldr	r9, [pc, #2c]	; 8da90 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x138>
         8da60:	e3510005 	cmp	r1, #5	; 0x5
         8da64:	908ff101 	addls	pc, pc, r1, lsl #2
         8da68:	ea0000e4 	b	8de00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4a8>
         8da6c:	ea0000e3 	b	8de00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4a8>
         8da70:	ea000007 	b	8da94 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x13c>
         8da74:	ea000025 	b	8db10 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x1b8>
         8da78:	ea00005c 	b	8dbf0 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x298>
         8da7c:	ea0000bd 	b	8dd78 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x420>
         8da80:	ea0000de 	b	8de00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4a8>
         8da84:	00683640 	rsbeq	r3, r8, r0, asr #12
         8da88:	00684618 	rsbeq	r4, r8, r8, lsl r6
         8da8c:	0c100f88 	ldceq	15, cr0, [r0], -#544
         8da90:	0c106198 	ldfeqs	f6, [r0], -#608
         8da94:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
         8da98:	e350000a 	cmp	r0, #10	; 0xa
         8da9c:	2a000013 	bcs	8daf0 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x198>
         8daa0:	e28d100c 	add	r1, sp, #12	; 0xc
         8daa4:	eb6d729a 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8daa8:	e59f103c 	ldr	r1, [pc, #3c]	; 8daec <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x194>
         8daac:	e1a0000d 	mov	r0, sp
         8dab0:	e3a02000 	mov	r2, #0	; 0x0
         8dab4:	eb6cd9eb 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dab8:	e3100003 	tst	r0, #3	; 0x3
         8dabc:	01a00140 	moveq	r0, r0, asr #2
         8dac0:	0a000000 	beq	8dac8 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x170>
         8dac4:	eb6cd194 	bl	1bc211c <$_RINTError(long)>
         8dac8:	e3300000 	teq	r0, #0	; 0x0
         8dacc:	01a00004 	moveq	r0, r4
         8dad0:	059a1000 	ldreq	r1, [sl]
         8dad4:	0b6d8320 	bleq	1bee75c <$Ustrcpy>
         8dad8:	e1a02008 	mov	r2, r8
         8dadc:	e28d100c 	add	r1, sp, #12	; 0xc
         8dae0:	e1a00004 	mov	r0, r4
         8dae4:	eb6d831e 	bl	1bee764 <$Ustrncat>
         8dae8:	ea000002 	b	8daf8 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x1a0>
         8daec:	00682808 	rsbeq	r2, r8, r8, lsl #16
         8daf0:	e1a01004 	mov	r1, r4
         8daf4:	eb6d7286 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8daf8:	e3360000 	teq	r6, #0	; 0x0
         8dafc:	059f1004 	ldreq	r1, [pc, #4]	; 8db08 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x1b0>	; fField4
         8db00:	159f1004 	ldrne	r1, [pc, #4]	; 8db0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x1b4>	; fField4
         8db04:	ea0000b8 	b	8ddec <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x494>
         8db08:	00684628 	rsbeq	r4, r8, r8, lsr #12
         8db0c:	00683658 	rsbeq	r3, r8, r8, asr r6
         8db10:	e59b200c 	ldr	r2, [fp, #12]	; fField12
         8db14:	e3320001 	teq	r2, #1	; 0x1
         8db18:	0a00001a 	beq	8db88 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x230>
         8db1c:	e3320002 	teq	r2, #2	; 0x2
         8db20:	0a000011 	beq	8db6c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x214>
         8db24:	e3320003 	teq	r2, #3	; 0x3
         8db28:	0a000008 	beq	8db50 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x1f8>
         8db2c:	e3320004 	teq	r2, #4	; 0x4
         8db30:	1a000019 	bne	8db9c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x244>
         8db34:	e599000c 	ldr	r0, [r9, #12]	; fField12
         8db38:	e5900000 	ldr	r0, [r0]
         8db3c:	e5900000 	ldr	r0, [r0]
         8db40:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8db44:	e5810000 	str	r0, [r1]
         8db48:	e3300002 	teq	r0, #2	; 0x2
         8db4c:	1a000012 	bne	8db9c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x244>
         8db50:	e5990008 	ldr	r0, [r9, #8]	; fField8
         8db54:	e5900000 	ldr	r0, [r0]
         8db58:	e5900000 	ldr	r0, [r0]
         8db5c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8db60:	e5810000 	str	r0, [r1]
         8db64:	e3300002 	teq	r0, #2	; 0x2
         8db68:	1a00000b 	bne	8db9c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x244>
         8db6c:	e5990004 	ldr	r0, [r9, #4]	; fField4
         8db70:	e5900000 	ldr	r0, [r0]
         8db74:	e5900000 	ldr	r0, [r0]
         8db78:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8db7c:	e5810000 	str	r0, [r1]
         8db80:	e3300002 	teq	r0, #2	; 0x2
         8db84:	1a000004 	bne	8db9c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x244>
         8db88:	e5990000 	ldr	r0, [r9]
         8db8c:	e5900000 	ldr	r0, [r0]
         8db90:	e5900000 	ldr	r0, [r0]
         8db94:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8db98:	e5810000 	str	r0, [r1]
         8db9c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         8dba0:	e5900000 	ldr	r0, [r0]
         8dba4:	e3300002 	teq	r0, #2	; 0x2
         8dba8:	0a000094 	beq	8de00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4a8>
         8dbac:	e24dd004 	sub	sp, sp, #4	; 0x4
         8dbb0:	e5b51018 	ldr	r1, [r5, #24]!	; fField24
         8dbb4:	eb6cd9a6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8dbb8:	e1a01000 	mov	r1, r0
         8dbbc:	e1a0000d 	mov	r0, sp
         8dbc0:	eb6ccd42 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8dbc4:	e1a0000d 	mov	r0, sp
         8dbc8:	eb6cd151 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8dbcc:	e1a01000 	mov	r1, r0
         8dbd0:	e1a02008 	mov	r2, r8
         8dbd4:	e1a00004 	mov	r0, r4
         8dbd8:	eb6d82e2 	bl	1bee768 <$Ustrncpy>
         8dbdc:	e1a0000d 	mov	r0, sp
         8dbe0:	e3a01000 	mov	r1, #0	; 0x0
         8dbe4:	eb6cd145 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8dbe8:	e28dd004 	add	sp, sp, #4	; 0x4
         8dbec:	ea000083 	b	8de00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4a8>
         8dbf0:	e59b200c 	ldr	r2, [fp, #12]	; fField12
         8dbf4:	e3520005 	cmp	r2, #5	; 0x5
         8dbf8:	908ff102 	addls	pc, pc, r2, lsl #2
         8dbfc:	ea000042 	b	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dc00:	ea000041 	b	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dc04:	ea000035 	b	8dce0 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x388>
         8dc08:	ea00002c 	b	8dcc0 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x368>
         8dc0c:	ea000023 	b	8dca0 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x348>
         8dc10:	ea00001a 	b	8dc80 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x328>
         8dc14:	e28d100c 	add	r1, sp, #12	; 0xc
         8dc18:	e5950004 	ldr	r0, [r5, #4]	; fField4
         8dc1c:	eb6d723c 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8dc20:	e5950004 	ldr	r0, [r5, #4]	; fField4
         8dc24:	e350000a 	cmp	r0, #10	; 0xa
         8dc28:	2a000035 	bcs	8dd04 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3ac>
         8dc2c:	e28d100c 	add	r1, sp, #12	; 0xc
         8dc30:	eb6d7237 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8dc34:	e1a00007 	mov	r0, r7
         8dc38:	e59f103c 	ldr	r1, [pc, #3c]	; 8dc7c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x324>
         8dc3c:	e3a02000 	mov	r2, #0	; 0x0
         8dc40:	eb6cd988 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dc44:	e3100003 	tst	r0, #3	; 0x3
         8dc48:	01a00140 	moveq	r0, r0, asr #2
         8dc4c:	0a000000 	beq	8dc54 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x2fc>
         8dc50:	eb6cd131 	bl	1bc211c <$_RINTError(long)>
         8dc54:	e3300000 	teq	r0, #0	; 0x0
         8dc58:	1a000003 	bne	8dc6c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x314>
         8dc5c:	e1a02008 	mov	r2, r8
         8dc60:	e1a00004 	mov	r0, r4
         8dc64:	e59a1000 	ldr	r1, [sl]
         8dc68:	eb6d82be 	bl	1bee768 <$Ustrncpy>
         8dc6c:	e28d100c 	add	r1, sp, #12	; 0xc
         8dc70:	e1a00004 	mov	r0, r4
         8dc74:	eb6d82b5 	bl	1bee750 <$Ustrcat>
         8dc78:	ea000023 	b	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dc7c:	00683928 	rsbeq	r3, r8, r8, lsr #18
         8dc80:	e59f1070 	ldr	r1, [pc, #70]	; 8dcf8 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3a0>
         8dc84:	e1a0000d 	mov	r0, sp
         8dc88:	e3a02000 	mov	r2, #0	; 0x0
         8dc8c:	eb6cd975 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dc90:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8dc94:	e5810000 	str	r0, [r1]
         8dc98:	e3300002 	teq	r0, #2	; 0x2
         8dc9c:	1a00001a 	bne	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dca0:	e59f1054 	ldr	r1, [pc, #54]	; 8dcfc <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3a4>
         8dca4:	e1a0000d 	mov	r0, sp
         8dca8:	e3a02000 	mov	r2, #0	; 0x0
         8dcac:	eb6cd96d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dcb0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8dcb4:	e5810000 	str	r0, [r1]
         8dcb8:	e3300002 	teq	r0, #2	; 0x2
         8dcbc:	1a000012 	bne	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dcc0:	e59f1038 	ldr	r1, [pc, #38]	; 8dd00 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3a8>
         8dcc4:	e1a0000d 	mov	r0, sp
         8dcc8:	e3a02000 	mov	r2, #0	; 0x0
         8dccc:	eb6cd965 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dcd0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8dcd4:	e5810000 	str	r0, [r1]
         8dcd8:	e3300002 	teq	r0, #2	; 0x2
         8dcdc:	1a00000a 	bne	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dce0:	e5b90010 	ldr	r0, [r9, #16]!	; fField16
         8dce4:	e5900000 	ldr	r0, [r0]
         8dce8:	e5900000 	ldr	r0, [r0]
         8dcec:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         8dcf0:	e5810000 	str	r0, [r1]
         8dcf4:	ea000004 	b	8dd0c <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x3b4>
         8dcf8:	00684638 	rsbeq	r4, r8, r8, lsr r6
         8dcfc:	00684ab0 	streqh	r4, [r8], -#160
         8dd00:	00681d28 	rsbeq	r1, r8, r8, lsr #26
         8dd04:	e1a01004 	mov	r1, r4
         8dd08:	eb6d7201 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8dd0c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         8dd10:	e5900000 	ldr	r0, [r0]
         8dd14:	e3300002 	teq	r0, #2	; 0x2
         8dd18:	0a000010 	beq	8dd60 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x408>
         8dd1c:	e24dd004 	sub	sp, sp, #4	; 0x4
         8dd20:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
         8dd24:	e2411001 	sub	r1, r1, #1	; 0x1
         8dd28:	eb6cd949 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8dd2c:	e1a01000 	mov	r1, r0
         8dd30:	e1a0000d 	mov	r0, sp
         8dd34:	eb6ccce5 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
         8dd38:	e1a0000d 	mov	r0, sp
         8dd3c:	eb6cd0f4 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8dd40:	e1a01000 	mov	r1, r0
         8dd44:	e1a02008 	mov	r2, r8
         8dd48:	e1a00004 	mov	r0, r4
         8dd4c:	eb6d8285 	bl	1bee768 <$Ustrncpy>
         8dd50:	e1a0000d 	mov	r0, sp
         8dd54:	e3a01000 	mov	r1, #0	; 0x0
         8dd58:	eb6cd0e8 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8dd5c:	e28dd004 	add	sp, sp, #4	; 0x4
         8dd60:	e3360000 	teq	r6, #0	; 0x0
         8dd64:	059f1004 	ldreq	r1, [pc, #4]	; 8dd70 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x418>	; fField4
         8dd68:	159f1004 	ldrne	r1, [pc, #4]	; 8dd74 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x41c>	; fField4
         8dd6c:	ea00001e 	b	8ddec <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x494>
         8dd70:	00684640 	rsbeq	r4, r8, r0, asr #12
         8dd74:	00683678 	rsbeq	r3, r8, r8, ror r6
         8dd78:	e24dd00c 	sub	sp, sp, #12	; 0xc
         8dd7c:	e3a09000 	mov	r9, #0	; 0x0
         8dd80:	e1a0100d 	mov	r1, sp
         8dd84:	e5950000 	ldr	r0, [r5]
         8dd88:	eb6d71e1 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         8dd8c:	e3360000 	teq	r6, #0	; 0x0
         8dd90:	1a00000d 	bne	8ddcc <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x474>
         8dd94:	e1a00007 	mov	r0, r7
         8dd98:	e59f10c0 	ldr	r1, [pc, #c0]	; 8de60 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x508>
         8dd9c:	e3a02000 	mov	r2, #0	; 0x0
         8dda0:	eb6cd930 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8dda4:	e3100003 	tst	r0, #3	; 0x3
         8dda8:	01a00140 	moveq	r0, r0, asr #2
         8ddac:	0a000000 	beq	8ddb4 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x45c>
         8ddb0:	eb6cd0d9 	bl	1bc211c <$_RINTError(long)>
         8ddb4:	e3300001 	teq	r0, #1	; 0x1
         8ddb8:	1a000003 	bne	8ddcc <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x474>
         8ddbc:	e1a0000d 	mov	r0, sp
         8ddc0:	eb6d8266 	bl	1bee760 <$Ustrlen>
         8ddc4:	e2509002 	subs	r9, r0, #2	; 0x2
         8ddc8:	43a09000 	movmi	r9, #0	; 0x0
         8ddcc:	e08d1089 	add	r1, sp, r9, lsl #1
         8ddd0:	e1a02008 	mov	r2, r8
         8ddd4:	e1a00004 	mov	r0, r4
         8ddd8:	eb6d8262 	bl	1bee768 <$Ustrncpy>
         8dddc:	e28dd00c 	add	sp, sp, #12	; 0xc
         8dde0:	e3360000 	teq	r6, #0	; 0x0
         8dde4:	059f1078 	ldreq	r1, [pc, #78]	; 8de64 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x50c>
         8dde8:	159f1078 	ldrne	r1, [pc, #78]	; 8de68 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x510>
         8ddec:	e1a0000d 	mov	r0, sp
         8ddf0:	e3a02000 	mov	r2, #0	; 0x0
         8ddf4:	eb6cd91b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8ddf8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         8ddfc:	e5810000 	str	r0, [r1]
         8de00:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8de04:	e5900000 	ldr	r0, [r0]
         8de08:	e3300002 	teq	r0, #2	; 0x2
         8de0c:	0a00000c 	beq	8de44 <TDate::DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)+0x4ec>
         8de10:	e24dd004 	sub	sp, sp, #4	; 0x4
         8de14:	e28d1008 	add	r1, sp, #8	; 0x8
         8de18:	e1a0000d 	mov	r0, sp
         8de1c:	eb6cccad 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         8de20:	e1a0000d 	mov	r0, sp
         8de24:	eb6cd0ba 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         8de28:	e1a01000 	mov	r1, r0
         8de2c:	e1a00004 	mov	r0, r4
         8de30:	eb6d8246 	bl	1bee750 <$Ustrcat>
         8de34:	e1a0000d 	mov	r0, sp
         8de38:	e3a01000 	mov	r1, #0	; 0x0
         8de3c:	eb6cd0af 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         8de40:	e28dd004 	add	sp, sp, #4	; 0x4
         8de44:	e59d0000 	ldr	r0, [sp]
         8de48:	eb6cd4db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8de4c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         8de50:	eb6cd4d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8de54:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8de58:	eb6cd4d7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8de5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         8de60:	00685270 	rsbeq	r5, r8, r0, ror r2
         8de64:	00684660 	rsbeq	r4, r8, r0, ror #12
         8de68:	00683680 	rsbeq	r3, r8, r0, lsl #13
    */
}

/**
 * Symbol: TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)
 * Address: 0008de6c
 */
TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long) {
    /*
         8de6c:	e1a0c00d 	mov	ip, sp
         8de70:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8de74:	e24cb004 	sub	fp, ip, #4	; 0x4
         8de78:	e1a04000 	mov	r4, r0
         8de7c:	e1a05003 	mov	r5, r3
         8de80:	e24dd00c 	sub	sp, sp, #12	; 0xc
         8de84:	e1a06001 	mov	r6, r1
         8de88:	e3a07000 	mov	r7, #0	; 0x0
         8de8c:	eb684435 	bl	1a9ef68 <$RealClock(void)>
         8de90:	e1a01000 	mov	r1, r0
         8de94:	e3a00e5a 	mov	r0, #1440	; 0x5a0
         8de98:	eb6c92aa 	bl	1bb2948 <$__rt_udiv>
         8de9c:	e1a01100 	mov	r1, r0, lsl #2
         8dea0:	e3a000b5 	mov	r0, #181	; 0xb5
         8dea4:	e2800c05 	add	r0, r0, #1280	; 0x500
         8dea8:	eb6c92a6 	bl	1bb2948 <$__rt_udiv>
         8deac:	e2808e77 	add	r8, r0, #1904	; 0x770
         8deb0:	e3e00000 	mvn	r0, #0	; 0x0
         8deb4:	e5840014 	str	r0, [r4, #20]	; fField20
         8deb8:	e5840010 	str	r0, [r4, #16]	; fField16
         8debc:	e1a03005 	mov	r3, r5
         8dec0:	e584000c 	str	r0, [r4, #12]	; fField12
         8dec4:	e92d0008 	stmdb	sp!, {r3}
         8dec8:	e59fa0c0 	ldr	sl, [pc, #c0]	; 8df90 <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x124>
         8decc:	e28d3008 	add	r3, sp, #8	; 0x8
         8ded0:	e1a02006 	mov	r2, r6
         8ded4:	e1a01004 	mov	r1, r4
         8ded8:	e59a0000 	ldr	r0, [sl]
         8dedc:	eb683be6 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
         8dee0:	e28dd004 	add	sp, sp, #4	; 0x4
         8dee4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8dee8:	e1b00000 	movs	r0, r0
         8deec:	13a00001 	movne	r0, #1	; 0x1
         8def0:	e20090ff 	and	r9, r0, #255	; 0xff
         8def4:	e3e00000 	mvn	r0, #0	; 0x0
         8def8:	e5840018 	str	r0, [r4, #24]	; fField24
         8defc:	e5840008 	str	r0, [r4, #8]	; fField8
         8df00:	e5840004 	str	r0, [r4, #4]	; fField4
         8df04:	e1a03005 	mov	r3, r5
         8df08:	e5840000 	str	r0, [r4]
         8df0c:	e92d0008 	stmdb	sp!, {r3}
         8df10:	e59f007c 	ldr	r0, [pc, #7c]	; 8df94 <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x128>
         8df14:	e58d000c 	str	r0, [sp, #12]	; fField12
         8df18:	e5900000 	ldr	r0, [r0]
         8df1c:	e28d3004 	add	r3, sp, #4	; 0x4
         8df20:	e1a02006 	mov	r2, r6
         8df24:	e1a01004 	mov	r1, r4
         8df28:	eb683bd3 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
         8df2c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         8df30:	e1b01000 	movs	r1, r0
         8df34:	13a01001 	movne	r1, #1	; 0x1
         8df38:	e20110ff 	and	r1, r1, #255	; 0xff
         8df3c:	e3390000 	teq	r9, #0	; 0x0
         8df40:	03310000 	teqeq	r1, #0	; 0x0
         8df44:	0a000030 	beq	8e00c <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x1a0>
         8df48:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         8df4c:	e1500001 	cmp	r0, r1
         8df50:	e3e00000 	mvn	r0, #0	; 0x0
         8df54:	9a00000f 	bls	8df98 <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x12c>
         8df58:	e5840014 	str	r0, [r4, #20]	; fField20
         8df5c:	e5840010 	str	r0, [r4, #16]	; fField16
         8df60:	e584000c 	str	r0, [r4, #12]	; fField12
         8df64:	e59d0000 	ldr	r0, [sp]
         8df68:	e0862080 	add	r2, r6, r0, lsl #1
         8df6c:	e0453000 	sub	r3, r5, r0
         8df70:	e92d0008 	stmdb	sp!, {r3}
         8df74:	e28d3008 	add	r3, sp, #8	; 0x8
         8df78:	e1a01004 	mov	r1, r4
         8df7c:	e59a0000 	ldr	r0, [sl]
         8df80:	eb683bbd 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
         8df84:	e28dd004 	add	sp, sp, #4	; 0x4
         8df88:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8df8c:	ea00000f 	b	8dfd0 <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x164>
         8df90:	0c100f8c 	ldceq	15, cr0, [r0], -#560
         8df94:	0c100f90 	ldceq	15, cr0, [r0], -#576
         8df98:	e5840018 	str	r0, [r4, #24]	; fField24
         8df9c:	e5840008 	str	r0, [r4, #8]	; fField8
         8dfa0:	e5840004 	str	r0, [r4, #4]	; fField4
         8dfa4:	e5840000 	str	r0, [r4]
         8dfa8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8dfac:	e0862080 	add	r2, r6, r0, lsl #1
         8dfb0:	e0453000 	sub	r3, r5, r0
         8dfb4:	e92d0008 	stmdb	sp!, {r3}
         8dfb8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         8dfbc:	e5900000 	ldr	r0, [r0]
         8dfc0:	e28d3004 	add	r3, sp, #4	; 0x4
         8dfc4:	e1a01004 	mov	r1, r4
         8dfc8:	eb683bab 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
         8dfcc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         8dfd0:	e5946000 	ldr	r6, [r4]
         8dfd4:	e1360008 	teq	r6, r8
         8dfd8:	0a00000b 	beq	8e00c <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x1a0>
         8dfdc:	e3560064 	cmp	r6, #100	; 0x64
         8dfe0:	2a000009 	bcs	8e00c <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x1a0>
         8dfe4:	e1a01008 	mov	r1, r8
         8dfe8:	e3a00064 	mov	r0, #100	; 0x64
         8dfec:	eb6c9255 	bl	1bb2948 <$__rt_udiv>
         8dff0:	e080c180 	add	ip, r0, r0, lsl #3
         8dff4:	e08c0200 	add	r0, ip, r0, lsl #4
         8dff8:	e0860100 	add	r0, r6, r0, lsl #2
         8dffc:	e5840000 	str	r0, [r4]
         8e000:	e3500d1e 	cmp	r0, #1920	; 0x780
         8e004:	32800064 	addcc	r0, r0, #100	; 0x64
         8e008:	35840000 	strcc	r0, [r4]
         8e00c:	e89d0003 	ldmia	sp, {r0, r1}
         8e010:	e0910000 	adds	r0, r1, r0
         8e014:	e51b2030 	ldr	r2, [fp, -#48]
         8e018:	e5820000 	str	r0, [r2]
         8e01c:	03e07000 	mvneq	r7, #0	; 0x0
         8e020:	0a000001 	beq	8e02c <TDate::StringToDateFields(unsigned short const *, unsigned long *, unsigned long)+0x1c0>
         8e024:	e1500005 	cmp	r0, r5
         8e028:	33a07002 	movcc	r7, #2	; 0x2
         8e02c:	e1a00007 	mov	r0, r7
         8e030:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)
 * Address: 0008e034
 */
TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long) {
    /*
         8e034:	e1a0c00d 	mov	ip, sp
         8e038:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8e03c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e040:	e1a04000 	mov	r4, r0
         8e044:	e1a07001 	mov	r7, r1
         8e048:	e1a06002 	mov	r6, r2
         8e04c:	e1a05003 	mov	r5, r3
         8e050:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e054:	e59f0058 	ldr	r0, [pc, #58]	; 8e0b4 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x80>
         8e058:	eb6cd043 	bl	1bc216c <$Clone(RefVar const &)>
         8e05c:	eb6cd03a 	bl	1bc214c <$AllocateRefHandle(long)>
         8e060:	e1a03005 	mov	r3, r5
         8e064:	e1a02006 	mov	r2, r6
         8e068:	e1a01007 	mov	r1, r7
         8e06c:	e58d0000 	str	r0, [sp]
         8e070:	e1a00004 	mov	r0, r4
         8e074:	eb68d44b 	bl	1ac31a8 <TDate::$StringToDateFields(unsigned short const *, unsigned long *, unsigned long)>
         8e078:	e1b05000 	movs	r5, r0
         8e07c:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e080:	13350002 	teqne	r5, #2	; 0x2
         8e084:	1a000063 	bne	8e218 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x1e4>
         8e088:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e08c:	e5940000 	ldr	r0, [r4]
         8e090:	e1a01000 	mov	r1, r0
         8e094:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8e098:	235c0008 	cmpcs	ip, #8	; 0x8
         8e09c:	2a000001 	bcs	8e0a8 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x74>
         8e0a0:	e3700001 	cmn	r0, #1	; 0x1
         8e0a4:	1a000003 	bne	8e0b8 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x84>
         8e0a8:	e3a00eda 	mov	r0, #3488	; 0xda0
         8e0ac:	e2800a02 	add	r0, r0, #8192	; 0x2000
         8e0b0:	ea000001 	b	8e0bc <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x88>
         8e0b4:	00680218 	rsbeq	r0, r8, r8, lsl r2
         8e0b8:	e1a00101 	mov	r0, r1, lsl #2
         8e0bc:	eb6cd022 	bl	1bc214c <$AllocateRefHandle(long)>
         8e0c0:	e58d0000 	str	r0, [sp]
         8e0c4:	e1a0200d 	mov	r2, sp
         8e0c8:	e59f1180 	ldr	r1, [pc, #180]	; 8e250 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x21c>
         8e0cc:	e28d0008 	add	r0, sp, #8	; 0x8
         8e0d0:	eb6ce0a4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e0d4:	e59d0000 	ldr	r0, [sp]
         8e0d8:	eb6cd437 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e0dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e0e0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         8e0e4:	e3700001 	cmn	r0, #1	; 0x1
         8e0e8:	0a000008 	beq	8e110 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0xdc>
         8e0ec:	e1a00100 	mov	r0, r0, lsl #2
         8e0f0:	eb6cd015 	bl	1bc214c <$AllocateRefHandle(long)>
         8e0f4:	e58d0000 	str	r0, [sp]
         8e0f8:	e1a0200d 	mov	r2, sp
         8e0fc:	e59f1150 	ldr	r1, [pc, #150]	; 8e254 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x220>
         8e100:	e28d000c 	add	r0, sp, #12	; 0xc
         8e104:	eb6ce097 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e108:	e59d0000 	ldr	r0, [sp]
         8e10c:	eb6cd42a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e110:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e114:	e5940008 	ldr	r0, [r4, #8]	; fField8
         8e118:	e3700001 	cmn	r0, #1	; 0x1
         8e11c:	0a000008 	beq	8e144 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x110>
         8e120:	e1a00100 	mov	r0, r0, lsl #2
         8e124:	eb6cd008 	bl	1bc214c <$AllocateRefHandle(long)>
         8e128:	e58d0000 	str	r0, [sp]
         8e12c:	e1a0200d 	mov	r2, sp
         8e130:	e59f1120 	ldr	r1, [pc, #120]	; 8e258 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x224>
         8e134:	e28d0010 	add	r0, sp, #16	; 0x10
         8e138:	eb6ce08a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e13c:	e59d0000 	ldr	r0, [sp]
         8e140:	eb6cd41d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e144:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e148:	e594000c 	ldr	r0, [r4, #12]	; fField12
         8e14c:	e3700001 	cmn	r0, #1	; 0x1
         8e150:	0a000008 	beq	8e178 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x144>
         8e154:	e1a00100 	mov	r0, r0, lsl #2
         8e158:	eb6ccffb 	bl	1bc214c <$AllocateRefHandle(long)>
         8e15c:	e58d0000 	str	r0, [sp]
         8e160:	e1a0200d 	mov	r2, sp
         8e164:	e59f10f0 	ldr	r1, [pc, #f0]	; 8e25c <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x228>
         8e168:	e28d0014 	add	r0, sp, #20	; 0x14
         8e16c:	eb6ce07d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e170:	e59d0000 	ldr	r0, [sp]
         8e174:	eb6cd410 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e178:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e17c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         8e180:	e3700001 	cmn	r0, #1	; 0x1
         8e184:	0a000008 	beq	8e1ac <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x178>
         8e188:	e1a00100 	mov	r0, r0, lsl #2
         8e18c:	eb6ccfee 	bl	1bc214c <$AllocateRefHandle(long)>
         8e190:	e58d0000 	str	r0, [sp]
         8e194:	e1a0200d 	mov	r2, sp
         8e198:	e59f10c0 	ldr	r1, [pc, #c0]	; 8e260 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x22c>
         8e19c:	e28d0018 	add	r0, sp, #24	; 0x18
         8e1a0:	eb6ce070 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e1a4:	e59d0000 	ldr	r0, [sp]
         8e1a8:	eb6cd403 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e1ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e1b0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         8e1b4:	e3700001 	cmn	r0, #1	; 0x1
         8e1b8:	0a000008 	beq	8e1e0 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x1ac>
         8e1bc:	e1a00100 	mov	r0, r0, lsl #2
         8e1c0:	eb6ccfe1 	bl	1bc214c <$AllocateRefHandle(long)>
         8e1c4:	e58d0000 	str	r0, [sp]
         8e1c8:	e1a0200d 	mov	r2, sp
         8e1cc:	e59f1090 	ldr	r1, [pc, #90]	; 8e264 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x230>
         8e1d0:	e28d001c 	add	r0, sp, #28	; 0x1c
         8e1d4:	eb6ce063 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e1d8:	e59d0000 	ldr	r0, [sp]
         8e1dc:	eb6cd3f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e1e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e1e4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         8e1e8:	e3700001 	cmn	r0, #1	; 0x1
         8e1ec:	0a000008 	beq	8e214 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x1e0>
         8e1f0:	e1a00100 	mov	r0, r0, lsl #2
         8e1f4:	eb6ccfd4 	bl	1bc214c <$AllocateRefHandle(long)>
         8e1f8:	e58d0000 	str	r0, [sp]
         8e1fc:	e1a0200d 	mov	r2, sp
         8e200:	e59f1060 	ldr	r1, [pc, #60]	; 8e268 <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x234>
         8e204:	e28d0020 	add	r0, sp, #32	; 0x20
         8e208:	eb6ce056 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e20c:	e59d0000 	ldr	r0, [sp]
         8e210:	eb6cd3e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e214:	e28dd01c 	add	sp, sp, #28	; 0x1c
         8e218:	e1a00105 	mov	r0, r5, lsl #2
         8e21c:	eb6ccfca 	bl	1bc214c <$AllocateRefHandle(long)>
         8e220:	e58d0000 	str	r0, [sp]
         8e224:	e1a0200d 	mov	r2, sp
         8e228:	e59f103c 	ldr	r1, [pc, #3c]	; 8e26c <TDate::StringToDateFrame(unsigned short const *, unsigned long *, unsigned long)+0x238>
         8e22c:	e28d0004 	add	r0, sp, #4	; 0x4
         8e230:	eb6ce04c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8e234:	e59d0000 	ldr	r0, [sp]
         8e238:	eb6cd3df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e23c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         8e240:	e5904000 	ldr	r4, [r0]
         8e244:	eb6cd3dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8e248:	e1a00004 	mov	r0, r4
         8e24c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8e250:	00685268 	rsbeq	r5, r8, r8, ror #4
         8e254:	00683910 	rsbeq	r3, r8, r0, lsl r9
         8e258:	006827d8 	ldreqd	r2, [r8], -#120
         8e25c:	00683130 	rsbeq	r3, r8, r0, lsr r1
         8e260:	006838a0 	rsbeq	r3, r8, r0, lsr #17
         8e264:	006844e0 	rsbeq	r4, r8, r0, ror #9
         8e268:	00682820 	rsbeq	r2, r8, r0, lsr #16
         8e26c:	00684830 	rsbeq	r4, r8, r0, lsr r8
    */
}

/**
 * Symbol: TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long)
 * Address: 0008e270
 */
TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long) {
    /*
         8e270:	e1a0c00d 	mov	ip, sp
         8e274:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8e278:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e27c:	e1a04000 	mov	r4, r0
         8e280:	e1a0a003 	mov	sl, r3
         8e284:	eb6dc338 	bl	1bfef6c <TDate::$SetCurrentTime(void)>
         8e288:	e24dd004 	sub	sp, sp, #4	; 0x4
         8e28c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         8e290:	e2846008 	add	r6, r4, #8	; 0x8
         8e294:	e8960060 	ldmia	r6, {r5, r6}
         8e298:	e5947018 	ldr	r7, [r4, #24]	; fField24
         8e29c:	e5948004 	ldr	r8, [r4, #4]	; fField4
         8e2a0:	e5949000 	ldr	r9, [r4]
         8e2a4:	e1a0300a 	mov	r3, sl
         8e2a8:	e58d0000 	str	r0, [sp]
         8e2ac:	e1a00004 	mov	r0, r4
         8e2b0:	e24b2034 	sub	r2, fp, #52	; 0x34
         8e2b4:	e8920006 	ldmia	r2, {r1, r2}
         8e2b8:	eb68d3ba 	bl	1ac31a8 <TDate::$StringToDateFields(unsigned short const *, unsigned long *, unsigned long)>
         8e2bc:	e1b0a000 	movs	sl, r0
         8e2c0:	133a0002 	teqne	sl, #2	; 0x2
         8e2c4:	1a00002c 	bne	8e37c <TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long)+0x10c>
         8e2c8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         8e2cc:	e3700001 	cmn	r0, #1	; 0x1
         8e2d0:	0a000008 	beq	8e2f8 <TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long)+0x88>
         8e2d4:	e5941008 	ldr	r1, [r4, #8]	; fField8
         8e2d8:	e3710001 	cmn	r1, #1	; 0x1
         8e2dc:	1a000005 	bne	8e2f8 <TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long)+0x88>
         8e2e0:	e2800007 	add	r0, r0, #7	; 0x7
         8e2e4:	e0401007 	sub	r1, r0, r7
         8e2e8:	e3a00007 	mov	r0, #7	; 0x7
         8e2ec:	eb6c9195 	bl	1bb2948 <$__rt_udiv>
         8e2f0:	e0850001 	add	r0, r5, r1
         8e2f4:	e5840008 	str	r0, [r4, #8]	; fField8
         8e2f8:	e5940000 	ldr	r0, [r4]
         8e2fc:	e3700001 	cmn	r0, #1	; 0x1
         8e300:	05849000 	streq	r9, [r4]
         8e304:	e5940004 	ldr	r0, [r4, #4]	; fField4
         8e308:	e3700001 	cmn	r0, #1	; 0x1
         8e30c:	05848004 	streq	r8, [r4, #4]	; fField4
         8e310:	e5940008 	ldr	r0, [r4, #8]	; fField8
         8e314:	e3700001 	cmn	r0, #1	; 0x1
         8e318:	05845008 	streq	r5, [r4, #8]	; fField8
         8e31c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         8e320:	e3710001 	cmn	r1, #1	; 0x1
         8e324:	05940010 	ldreq	r0, [r4, #16]	; fField16
         8e328:	03700001 	cmneq	r0, #1	; 0x1
         8e32c:	05940014 	ldreq	r0, [r4, #20]	; fField20
         8e330:	03700001 	cmneq	r0, #1	; 0x1
         8e334:	13a00001 	movne	r0, #1	; 0x1
         8e338:	03a00000 	moveq	r0, #0	; 0x0
         8e33c:	e20000ff 	and	r0, r0, #255	; 0xff
         8e340:	e3710001 	cmn	r1, #1	; 0x1
         8e344:	0584600c 	streq	r6, [r4, #12]	; fField12
         8e348:	e5941010 	ldr	r1, [r4, #16]	; fField16
         8e34c:	e3710001 	cmn	r1, #1	; 0x1
         8e350:	1a000003 	bne	8e364 <TDate::StringToDate(unsigned short const *, unsigned long *, unsigned long)+0xf4>
         8e354:	e3300000 	teq	r0, #0	; 0x0
         8e358:	059d0000 	ldreq	r0, [sp]
         8e35c:	13a00000 	movne	r0, #0	; 0x0
         8e360:	e5840010 	str	r0, [r4, #16]	; fField16
         8e364:	e5940014 	ldr	r0, [r4, #20]	; fField20
         8e368:	e3700001 	cmn	r0, #1	; 0x1
         8e36c:	03a00000 	moveq	r0, #0	; 0x0
         8e370:	05840014 	streq	r0, [r4, #20]	; fField20
         8e374:	e1a00004 	mov	r0, r4
         8e378:	eb6dc2f0 	bl	1bfef40 <TDate::$CleanUpFields(void)>
         8e37c:	e1a0000a 	mov	r0, sl
         8e380:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::StringToTime(unsigned short const *, unsigned long *, unsigned long)
 * Address: 0008e384
 */
TDate::StringToTime(unsigned short const *, unsigned long *, unsigned long) {
    /*
         8e384:	e1a0c00d 	mov	ip, sp
         8e388:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         8e38c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e390:	e1a04000 	mov	r4, r0
         8e394:	e1a07001 	mov	r7, r1
         8e398:	e1a06002 	mov	r6, r2
         8e39c:	e1a05003 	mov	r5, r3
         8e3a0:	e3a08000 	mov	r8, #0	; 0x0
         8e3a4:	eb6dc2f0 	bl	1bfef6c <TDate::$SetCurrentTime(void)>
         8e3a8:	e3a09000 	mov	r9, #0	; 0x0
         8e3ac:	e584900c 	str	r9, [r4, #12]	; fField12
         8e3b0:	e5849010 	str	r9, [r4, #16]	; fField16
         8e3b4:	e1a03005 	mov	r3, r5
         8e3b8:	e5849014 	str	r9, [r4, #20]	; fField20
         8e3bc:	e92d0008 	stmdb	sp!, {r3}
         8e3c0:	e59f0044 	ldr	r0, [pc, #44]	; 8e40c <TDate::StringToTime(unsigned short const *, unsigned long *, unsigned long)+0x88>
         8e3c4:	e5900000 	ldr	r0, [r0]
         8e3c8:	e1a03006 	mov	r3, r6
         8e3cc:	e1a02007 	mov	r2, r7
         8e3d0:	e1a01004 	mov	r1, r4
         8e3d4:	eb683aa8 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
         8e3d8:	e28dd004 	add	sp, sp, #4	; 0x4
         8e3dc:	e5960000 	ldr	r0, [r6]
         8e3e0:	e3300000 	teq	r0, #0	; 0x0
         8e3e4:	1a000009 	bne	8e410 <TDate::StringToTime(unsigned short const *, unsigned long *, unsigned long)+0x8c>
         8e3e8:	e5849018 	str	r9, [r4, #24]	; fField24
         8e3ec:	e5849014 	str	r9, [r4, #20]	; fField20
         8e3f0:	e5849010 	str	r9, [r4, #16]	; fField16
         8e3f4:	e584900c 	str	r9, [r4, #12]	; fField12
         8e3f8:	e5849008 	str	r9, [r4, #8]	; fField8
         8e3fc:	e5849004 	str	r9, [r4, #4]	; fField4
         8e400:	e3e08000 	mvn	r8, #0	; 0x0
         8e404:	e5849000 	str	r9, [r4]
         8e408:	ea000002 	b	8e418 <TDate::StringToTime(unsigned short const *, unsigned long *, unsigned long)+0x94>
         8e40c:	0c100f8c 	ldceq	15, cr0, [r0], -#560
         8e410:	e1500005 	cmp	r0, r5
         8e414:	33a08002 	movcc	r8, #2	; 0x2
         8e418:	e1a00008 	mov	r0, r8
         8e41c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::SetCurrentTime(void)
 * Address: 0008e450
 */
TDate::SetCurrentTime(void) {
    /*
         8e450:	e1a0c00d 	mov	ip, sp
         8e454:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8e458:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e45c:	e1a04000 	mov	r4, r0
         8e460:	eb6842c0 	bl	1a9ef68 <$RealClock(void)>
         8e464:	e1a01000 	mov	r1, r0
         8e468:	e1a00004 	mov	r0, r4
         8e46c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         8e470:	ea6dc2b6 	b	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
    */
}

/**
 * Symbol: TDate::InitWithDateFrame(RefVar const &, unsigned char)
 * Address: 0008e4f8
 */
TDate::InitWithDateFrame(RefVar const &, unsigned char) {
    /*
         8e4f8:	e1a0c00d 	mov	ip, sp
         8e4fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8e500:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e504:	e1a05000 	mov	r5, r0
         8e508:	e1a04001 	mov	r4, r1
         8e50c:	e20270ff 	and	r7, r2, #255	; 0xff
         8e510:	e5910000 	ldr	r0, [r1]
         8e514:	e5900000 	ldr	r0, [r0]
         8e518:	e3300002 	teq	r0, #2	; 0x2
         8e51c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8e520:	e3a00002 	mov	r0, #2	; 0x2
         8e524:	eb6ccf08 	bl	1bc214c <$AllocateRefHandle(long)>
         8e528:	e1a06000 	mov	r6, r0
         8e52c:	e59f0038 	ldr	r0, [pc, #38]	; 8e56c <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x74>
         8e530:	e5900000 	ldr	r0, [r0]
         8e534:	e5901000 	ldr	r1, [r0]
         8e538:	e5940000 	ldr	r0, [r4]
         8e53c:	e5900000 	ldr	r0, [r0]
         8e540:	eb6cd746 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e544:	e5860000 	str	r0, [r6]
         8e548:	e1a01000 	mov	r1, r0
         8e54c:	e2000003 	and	r0, r0, #3	; 0x3
         8e550:	e3500000 	cmp	r0, #0	; 0x0
         8e554:	1a000005 	bne	8e570 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x78>
         8e558:	e1a00001 	mov	r0, r1
         8e55c:	01a00140 	moveq	r0, r0, asr #2
         8e560:	0a000005 	beq	8e57c <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x84>
         8e564:	eb6cceec 	bl	1bc211c <$_RINTError(long)>
         8e568:	ea000003 	b	8e57c <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x84>
         8e56c:	00685268 	rsbeq	r5, r8, r8, ror #4
         8e570:	e3370000 	teq	r7, #0	; 0x0
         8e574:	03e00000 	mvneq	r0, #0	; 0x0
         8e578:	13a00e77 	movne	r0, #1904	; 0x770
         8e57c:	e5850000 	str	r0, [r5]
         8e580:	e59f0038 	ldr	r0, [pc, #38]	; 8e5c0 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0xc8>
         8e584:	e5900000 	ldr	r0, [r0]
         8e588:	e5901000 	ldr	r1, [r0]
         8e58c:	e5940000 	ldr	r0, [r4]
         8e590:	e5900000 	ldr	r0, [r0]
         8e594:	eb6cd731 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e598:	e5860000 	str	r0, [r6]
         8e59c:	e1a01000 	mov	r1, r0
         8e5a0:	e2000003 	and	r0, r0, #3	; 0x3
         8e5a4:	e3500000 	cmp	r0, #0	; 0x0
         8e5a8:	1a000005 	bne	8e5c4 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0xcc>
         8e5ac:	e1a00001 	mov	r0, r1
         8e5b0:	01a00140 	moveq	r0, r0, asr #2
         8e5b4:	0a000005 	beq	8e5d0 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0xd8>
         8e5b8:	eb6cced7 	bl	1bc211c <$_RINTError(long)>
         8e5bc:	ea000003 	b	8e5d0 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0xd8>
         8e5c0:	00683910 	rsbeq	r3, r8, r0, lsl r9
         8e5c4:	e3370000 	teq	r7, #0	; 0x0
         8e5c8:	03e00000 	mvneq	r0, #0	; 0x0
         8e5cc:	13a00001 	movne	r0, #1	; 0x1
         8e5d0:	e5850004 	str	r0, [r5, #4]	; fField4
         8e5d4:	e59f0038 	ldr	r0, [pc, #38]	; 8e614 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x11c>
         8e5d8:	e5900000 	ldr	r0, [r0]
         8e5dc:	e5901000 	ldr	r1, [r0]
         8e5e0:	e5940000 	ldr	r0, [r4]
         8e5e4:	e5900000 	ldr	r0, [r0]
         8e5e8:	eb6cd71c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e5ec:	e5860000 	str	r0, [r6]
         8e5f0:	e1a01000 	mov	r1, r0
         8e5f4:	e2000003 	and	r0, r0, #3	; 0x3
         8e5f8:	e3500000 	cmp	r0, #0	; 0x0
         8e5fc:	1a000005 	bne	8e618 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x120>
         8e600:	e1a00001 	mov	r0, r1
         8e604:	01a00140 	moveq	r0, r0, asr #2
         8e608:	0a000005 	beq	8e624 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x12c>
         8e60c:	eb6ccec2 	bl	1bc211c <$_RINTError(long)>
         8e610:	ea000003 	b	8e624 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x12c>
         8e614:	006827d8 	ldreqd	r2, [r8], -#120
         8e618:	e3370000 	teq	r7, #0	; 0x0
         8e61c:	03e00000 	mvneq	r0, #0	; 0x0
         8e620:	13a00001 	movne	r0, #1	; 0x1
         8e624:	e5850008 	str	r0, [r5, #8]	; fField8
         8e628:	e59f0030 	ldr	r0, [pc, #30]	; 8e660 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x168>
         8e62c:	e5900000 	ldr	r0, [r0]
         8e630:	e5901000 	ldr	r1, [r0]
         8e634:	e5940000 	ldr	r0, [r4]
         8e638:	e5900000 	ldr	r0, [r0]
         8e63c:	eb6cd707 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e640:	e5860000 	str	r0, [r6]
         8e644:	e2001003 	and	r1, r0, #3	; 0x3
         8e648:	e3510000 	cmp	r1, #0	; 0x0
         8e64c:	1a000004 	bne	8e664 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x16c>
         8e650:	01a00140 	moveq	r0, r0, asr #2
         8e654:	0a000005 	beq	8e670 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x178>
         8e658:	eb6cceaf 	bl	1bc211c <$_RINTError(long)>
         8e65c:	ea000003 	b	8e670 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x178>
         8e660:	00683130 	rsbeq	r3, r8, r0, lsr r1
         8e664:	e3370000 	teq	r7, #0	; 0x0
         8e668:	03e00000 	mvneq	r0, #0	; 0x0
         8e66c:	13a00000 	movne	r0, #0	; 0x0
         8e670:	e585000c 	str	r0, [r5, #12]	; fField12
         8e674:	e59f0038 	ldr	r0, [pc, #38]	; 8e6b4 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x1bc>
         8e678:	e5900000 	ldr	r0, [r0]
         8e67c:	e5901000 	ldr	r1, [r0]
         8e680:	e5940000 	ldr	r0, [r4]
         8e684:	e5900000 	ldr	r0, [r0]
         8e688:	eb6cd6f4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e68c:	e5860000 	str	r0, [r6]
         8e690:	e1a01000 	mov	r1, r0
         8e694:	e2000003 	and	r0, r0, #3	; 0x3
         8e698:	e3500000 	cmp	r0, #0	; 0x0
         8e69c:	1a000005 	bne	8e6b8 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x1c0>
         8e6a0:	e1a00001 	mov	r0, r1
         8e6a4:	01a00140 	moveq	r0, r0, asr #2
         8e6a8:	0a000005 	beq	8e6c4 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x1cc>
         8e6ac:	eb6cce9a 	bl	1bc211c <$_RINTError(long)>
         8e6b0:	ea000003 	b	8e6c4 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x1cc>
         8e6b4:	006838a0 	rsbeq	r3, r8, r0, lsr #17
         8e6b8:	e3370000 	teq	r7, #0	; 0x0
         8e6bc:	03e00000 	mvneq	r0, #0	; 0x0
         8e6c0:	13a00000 	movne	r0, #0	; 0x0
         8e6c4:	e5850010 	str	r0, [r5, #16]	; fField16
         8e6c8:	e59f0030 	ldr	r0, [pc, #30]	; 8e700 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x208>
         8e6cc:	e5900000 	ldr	r0, [r0]
         8e6d0:	e5901000 	ldr	r1, [r0]
         8e6d4:	e5940000 	ldr	r0, [r4]
         8e6d8:	e5900000 	ldr	r0, [r0]
         8e6dc:	eb6cd6df 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8e6e0:	e5860000 	str	r0, [r6]
         8e6e4:	e2001003 	and	r1, r0, #3	; 0x3
         8e6e8:	e3510000 	cmp	r1, #0	; 0x0
         8e6ec:	1a000004 	bne	8e704 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x20c>
         8e6f0:	01a00140 	moveq	r0, r0, asr #2
         8e6f4:	0a000005 	beq	8e710 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x218>
         8e6f8:	eb6cce87 	bl	1bc211c <$_RINTError(long)>
         8e6fc:	ea000003 	b	8e710 <TDate::InitWithDateFrame(RefVar const &, unsigned char)+0x218>
         8e700:	006844e0 	rsbeq	r4, r8, r0, ror #9
         8e704:	e3370000 	teq	r7, #0	; 0x0
         8e708:	03e00000 	mvneq	r0, #0	; 0x0
         8e70c:	13a00000 	movne	r0, #0	; 0x0
         8e710:	e3370000 	teq	r7, #0	; 0x0
         8e714:	e5850014 	str	r0, [r5, #20]	; fField20
         8e718:	11a00005 	movne	r0, r5
         8e71c:	1b6dc207 	blne	1bfef40 <TDate::$CleanUpFields(void)>
         8e720:	e1a00006 	mov	r0, r6
         8e724:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         8e728:	ea6cd2a3 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TDate::InitWithSeconds(unsigned long)
 * Address: 0008e72c
 */
TDate::InitWithSeconds(unsigned long) {
    /*
         8e72c:	e1a0c00d 	mov	ip, sp
         8e730:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         8e734:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e738:	e1a04000 	mov	r4, r0
         8e73c:	e3a0003c 	mov	r0, #60	; 0x3c
         8e740:	eb6c9080 	bl	1bb2948 <$__rt_udiv>
         8e744:	e1a05001 	mov	r5, r1
         8e748:	e1a01000 	mov	r1, r0
         8e74c:	e1a00004 	mov	r0, r4
         8e750:	eb6dc1fe 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         8e754:	e5a45014 	str	r5, [r4, #20]!	; fField20
         8e758:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::InitWithMinutes(unsigned long)
 * Address: 0008e75c
 */
TDate::InitWithMinutes(unsigned long) {
    /*
         8e75c:	e1a0c00d 	mov	ip, sp
         8e760:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         8e764:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e768:	e1a04000 	mov	r4, r0
         8e76c:	e3a00e5a 	mov	r0, #1440	; 0x5a0
         8e770:	eb6c9074 	bl	1bb2948 <$__rt_udiv>
         8e774:	e1a07000 	mov	r7, r0
         8e778:	e1a08001 	mov	r8, r1
         8e77c:	e1a01100 	mov	r1, r0, lsl #2
         8e780:	e3a000b5 	mov	r0, #181	; 0xb5
         8e784:	e2800c05 	add	r0, r0, #1280	; 0x500
         8e788:	eb6c906e 	bl	1bb2948 <$__rt_udiv>
         8e78c:	e2805e77 	add	r5, r0, #1904	; 0x770
         8e790:	e3a0003b 	mov	r0, #59	; 0x3b
         8e794:	e3150003 	tst	r5, #3	; 0x3
         8e798:	03a0003c 	moveq	r0, #60	; 0x3c
         8e79c:	e1a01121 	mov	r1, r1, lsr #2
         8e7a0:	e3a06001 	mov	r6, #1	; 0x1
         8e7a4:	e1510000 	cmp	r1, r0
         8e7a8:	23a06003 	movcs	r6, #3	; 0x3
         8e7ac:	20411000 	subcs	r1, r1, r0
         8e7b0:	e3a00047 	mov	r0, #71	; 0x47
         8e7b4:	e0801381 	add	r1, r0, r1, lsl #7
         8e7b8:	e3a0004f 	mov	r0, #79	; 0x4f
         8e7bc:	e2800c0f 	add	r0, r0, #3840	; 0xf00
         8e7c0:	eb6c9060 	bl	1bb2948 <$__rt_udiv>
         8e7c4:	e0800006 	add	r0, r0, r6
         8e7c8:	e3a02001 	mov	r2, #1	; 0x1
         8e7cc:	e08213a1 	add	r1, r2, r1, lsr #7
         8e7d0:	e9840003 	stmib	r4, {r0, r1}
         8e7d4:	e1a01008 	mov	r1, r8
         8e7d8:	e3a0003c 	mov	r0, #60	; 0x3c
         8e7dc:	e5845000 	str	r5, [r4]
         8e7e0:	eb6c9058 	bl	1bb2948 <$__rt_udiv>
         8e7e4:	e284400c 	add	r4, r4, #12	; 0xc
         8e7e8:	e8840003 	stmia	r4, {r0, r1}
         8e7ec:	e244400c 	sub	r4, r4, #12	; 0xc
         8e7f0:	e3a00000 	mov	r0, #0	; 0x0
         8e7f4:	e2871005 	add	r1, r7, #5	; 0x5
         8e7f8:	e5840014 	str	r0, [r4, #20]	; fField20
         8e7fc:	e3a00007 	mov	r0, #7	; 0x7
         8e800:	eb6c9050 	bl	1bb2948 <$__rt_udiv>
         8e804:	e5a41018 	str	r1, [r4, #24]!	; fField24
         8e808:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::TotalDays( const(void))
 * Address: 0008e80c
 */
TDate::TotalDays( const(void)) {
    /*
         8e80c:	e5901008 	ldr	r1, [r0, #8]	; fField8
         8e810:	e2412001 	sub	r2, r1, #1	; 0x1
         8e814:	e5901000 	ldr	r1, [r0]
         8e818:	e3510e77 	cmp	r1, #1904	; 0x770
         8e81c:	22413e77 	subcs	r3, r1, #1904	; 0x770
         8e820:	33a03000 	movcc	r3, #0	; 0x0
         8e824:	e083c283 	add	ip, r3, r3, lsl #5
         8e828:	e06cc483 	rsb	ip, ip, r3, lsl #9
         8e82c:	e08c3183 	add	r3, ip, r3, lsl #3
         8e830:	e0833083 	add	r3, r3, r3, lsl #1
         8e834:	e2833003 	add	r3, r3, #3	; 0x3
         8e838:	e0822123 	add	r2, r2, r3, lsr #2
         8e83c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         8e840:	e2400001 	sub	r0, r0, #1	; 0x1
         8e844:	e3500002 	cmp	r0, #2	; 0x2
         8e848:	ba000003 	blt	8e85c <TDate::TotalDays( const(void))+0x50>
         8e84c:	e2400002 	sub	r0, r0, #2	; 0x2
         8e850:	e282203b 	add	r2, r2, #59	; 0x3b
         8e854:	e3110003 	tst	r1, #3	; 0x3
         8e858:	02822001 	addeq	r2, r2, #1	; 0x1
         8e85c:	e080c300 	add	ip, r0, r0, lsl #6
         8e860:	e06cc20c 	rsb	ip, ip, ip, lsl #4
         8e864:	e08cc100 	add	ip, ip, r0, lsl #2
         8e868:	e080010c 	add	r0, r0, ip, lsl #2
         8e86c:	e2800034 	add	r0, r0, #52	; 0x34
         8e870:	e08203c0 	add	r0, r2, r0, asr #7
         8e874:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDate::TotalHours( const(void))
 * Address: 0008e878
 */
TDate::TotalHours( const(void)) {
    /*
         8e878:	e1a0c00d 	mov	ip, sp
         8e87c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8e880:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e884:	e1a04000 	mov	r4, r0
         8e888:	eb6dc5bf 	bl	1bfff8c <TDate::$TotalDays( const(void))>
         8e88c:	e0800080 	add	r0, r0, r0, lsl #1
         8e890:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
         8e894:	e0810180 	add	r0, r1, r0, lsl #3
         8e898:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDate::TotalMinutes( const(void))
 * Address: 0008e89c
 */
TDate::TotalMinutes( const(void)) {
    /*
         8e89c:	e1a0c00d 	mov	ip, sp
         8e8a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8e8a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e8a8:	e590200c 	ldr	r2, [r0, #12]	; fField12
         8e8ac:	e0622202 	rsb	r2, r2, r2, lsl #4
         8e8b0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         8e8b4:	e0814102 	add	r4, r1, r2, lsl #2
         8e8b8:	eb6dc5b3 	bl	1bfff8c <TDate::$TotalDays( const(void))>
         8e8bc:	e0600200 	rsb	r0, r0, r0, lsl #4
         8e8c0:	e0800080 	add	r0, r0, r0, lsl #1
         8e8c4:	e0840280 	add	r0, r4, r0, lsl #5
         8e8c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

