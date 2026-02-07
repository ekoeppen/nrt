#include "include/TSerialNumberROM.h"

/**
 * Symbol: TSerialNumberROM::GetSystemSerialNumber(unsigned long *)
 * Address: 001dd720
 */
TSerialNumberROM::GetSystemSerialNumber(unsigned long *) {
    /*
        1dd720:	e5d02008 	ldrb	r2, [r0, #8]	; fField8
        1dd724:	e3320000 	teq	r2, #0	; 0x0
        1dd728:	15d02009 	ldrneb	r2, [r0, #9]	; fField9
        1dd72c:	13320000 	teqne	r2, #0	; 0x0
        1dd730:	03a000a6 	moveq	r0, #166	; 0xa6
        1dd734:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1dd738:	01a0f00e 	moveq	pc, lr
        1dd73c:	e3a03801 	mov	r3, #65536	; 0x10000
        1dd740:	e2433001 	sub	r3, r3, #1	; 0x1
        1dd744:	e5902000 	ldr	r2, [r0]
        1dd748:	e0032422 	and	r2, r3, r2, lsr #8
        1dd74c:	e5812000 	str	r2, [r1]
        1dd750:	e5902000 	ldr	r2, [r0]
        1dd754:	e1a02c02 	mov	r2, r2, lsl #24
        1dd758:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1dd75c:	e1820420 	orr	r0, r2, r0, lsr #8
        1dd760:	e5a10004 	str	r0, [r1, #4]!	; fField4
        1dd764:	e3a00000 	mov	r0, #0	; 0x0
        1dd768:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialNumberROM::Init(void)
 * Address: 001dd76c
 */
TSerialNumberROM::Init(void) {
    /*
        1dd76c:	e1a0c00d 	mov	ip, sp
        1dd770:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1dd774:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd778:	e1a04000 	mov	r4, r0
        1dd77c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1dd780:	e28d0004 	add	r0, sp, #4	; 0x4
        1dd784:	eb6881d0 	bl	1bfdecc <TDelayTimer::$__ct(void)>
        1dd788:	e3a05a43 	mov	r5, #274432	; 0x43000
        1dd78c:	e28556f2 	add	r5, r5, #253755392	; 0xf200000
        1dd790:	e3a00000 	mov	r0, #0	; 0x0
        1dd794:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1dd798:	eb06d4fc 	bl	392b90 <EnterFIQAtomic>
        1dd79c:	e3a0a000 	mov	sl, #0	; 0x0
        1dd7a0:	e585a000 	str	sl, [r5]
        1dd7a4:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd7a8:	e3a0102b 	mov	r1, #43	; 0x2b
        1dd7ac:	e2811c07 	add	r1, r1, #1792	; 0x700
        1dd7b0:	eb6881c9 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd7b4:	e3a09001 	mov	r9, #1	; 0x1
        1dd7b8:	e5859000 	str	r9, [r5]
        1dd7bc:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd7c0:	e3a0106f 	mov	r1, #111	; 0x6f
        1dd7c4:	e2811c01 	add	r1, r1, #256	; 0x100
        1dd7c8:	eb6881c3 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd7cc:	e5950000 	ldr	r0, [r5]
        1dd7d0:	e3100002 	tst	r0, #2	; 0x2
        1dd7d4:	13a00000 	movne	r0, #0	; 0x0
        1dd7d8:	03a00001 	moveq	r0, #1	; 0x1
        1dd7dc:	e5c40008 	strb	r0, [r4, #8]	; fField8
        1dd7e0:	e31000ff 	tst	r0, #255	; 0xff
        1dd7e4:	0a00005b 	beq	1dd958 <TSerialNumberROM::Init(void)+0x1ec>
        1dd7e8:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd7ec:	e3a01f6f 	mov	r1, #444	; 0x1bc
        1dd7f0:	e2811b01 	add	r1, r1, #1024	; 0x400
        1dd7f4:	eb6881b8 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd7f8:	e3a06033 	mov	r6, #51	; 0x33
        1dd7fc:	e3a07000 	mov	r7, #0	; 0x0
        1dd800:	e3160001 	tst	r6, #1	; 0x1
        1dd804:	e585a000 	str	sl, [r5]
        1dd808:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd80c:	0a000005 	beq	1dd828 <TSerialNumberROM::Init(void)+0xbc>
        1dd810:	e3a01004 	mov	r1, #4	; 0x4
        1dd814:	eb6881b0 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd818:	e5859000 	str	r9, [r5]
        1dd81c:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd820:	e3a010de 	mov	r1, #222	; 0xde
        1dd824:	ea000004 	b	1dd83c <TSerialNumberROM::Init(void)+0xd0>
        1dd828:	e3a01f4a 	mov	r1, #296	; 0x128
        1dd82c:	eb6881aa 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd830:	e5859000 	str	r9, [r5]
        1dd834:	e28d0008 	add	r0, sp, #8	; 0x8
        1dd838:	e3a01004 	mov	r1, #4	; 0x4
        1dd83c:	eb6881a6 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
        1dd840:	e1a000c6 	mov	r0, r6, asr #1
        1dd844:	e20060ff 	and	r6, r0, #255	; 0xff
        1dd848:	e2877001 	add	r7, r7, #1	; 0x1
        1dd84c:	e3570008 	cmp	r7, #8	; 0x8
        1dd850:	baffffea 	blt	1dd800 <TSerialNumberROM::Init(void)+0x94>
        1dd854:	e24dd008 	sub	sp, sp, #8	; 0x8
        1dd858:	e3a07000 	mov	r7, #0	; 0x0
        1dd85c:	e3a08000 	mov	r8, #0	; 0x0
        1dd860:	e3a06000 	mov	r6, #0	; 0x0
        1dd864:	e3a00031 	mov	r0, #49	; 0x31
        1dd868:	e2800c01 	add	r0, r0, #256	; 0x100
        1dd86c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1dd870:	e3a00c01 	mov	r0, #256	; 0x100
        1dd874:	e58d0000 	str	r0, [sp]
        1dd878:	e3a00000 	mov	r0, #0	; 0x0
        1dd87c:	e58d000c 	str	r0, [sp, #12]
        1dd880:	e1a080a8 	mov	r8, r8, lsr #1
        1dd884:	e3170001 	tst	r7, #1	; 0x1
        1dd888:	13888102 	orrne	r8, r8, #-2147483648	; 0x80000000
        1dd88c:	e1a070a7 	mov	r7, r7, lsr #1
        1dd890:	e1a06086 	mov	r6, r6, lsl #1
        1dd894:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd898:	eb68818e 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd89c:	e1a0a000 	mov	sl, r0
        1dd8a0:	e3a00000 	mov	r0, #0	; 0x0
        1dd8a4:	e5850000 	str	r0, [r5]
        1dd8a8:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd8ac:	eb688189 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd8b0:	e1a09000 	mov	r9, r0
        1dd8b4:	e3a00001 	mov	r0, #1	; 0x1
        1dd8b8:	e5850000 	str	r0, [r5]
        1dd8bc:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd8c0:	eb688184 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd8c4:	e0400009 	sub	r0, r0, r9
        1dd8c8:	e3500014 	cmp	r0, #20	; 0x14
        1dd8cc:	2a000004 	bcs	1dd8e4 <TSerialNumberROM::Init(void)+0x178>
        1dd8d0:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd8d4:	eb68817f 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd8d8:	e0400009 	sub	r0, r0, r9
        1dd8dc:	e3500014 	cmp	r0, #20	; 0x14
        1dd8e0:	3afffffa 	bcc	1dd8d0 <TSerialNumberROM::Init(void)+0x164>
        1dd8e4:	e5950000 	ldr	r0, [r5]
        1dd8e8:	e3100002 	tst	r0, #2	; 0x2
        1dd8ec:	13877102 	orrne	r7, r7, #-2147483648	; 0x80000000
        1dd8f0:	13866001 	orrne	r6, r6, #1	; 0x1
        1dd8f4:	e59d0000 	ldr	r0, [sp]
        1dd8f8:	e1160000 	tst	r6, r0
        1dd8fc:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        1dd900:	10266000 	eorne	r6, r6, r0
        1dd904:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd908:	eb688172 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd90c:	e040000a 	sub	r0, r0, sl
        1dd910:	e35000de 	cmp	r0, #222	; 0xde
        1dd914:	2a000004 	bcs	1dd92c <TSerialNumberROM::Init(void)+0x1c0>
        1dd918:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd91c:	eb68816d 	bl	1bfded8 <TDelayTimer::$GetHardwareTime(void)>
        1dd920:	e040000a 	sub	r0, r0, sl
        1dd924:	e35000de 	cmp	r0, #222	; 0xde
        1dd928:	3afffffa 	bcc	1dd918 <TSerialNumberROM::Init(void)+0x1ac>
        1dd92c:	e59d000c 	ldr	r0, [sp, #12]
        1dd930:	e2800001 	add	r0, r0, #1	; 0x1
        1dd934:	e58d000c 	str	r0, [sp, #12]
        1dd938:	e3500040 	cmp	r0, #64	; 0x40
        1dd93c:	baffffcf 	blt	1dd880 <TSerialNumberROM::Init(void)+0x114>
        1dd940:	e3360000 	teq	r6, #0	; 0x0
        1dd944:	e8840180 	stmia	r4, {r7, r8}
        1dd948:	13a00000 	movne	r0, #0	; 0x0
        1dd94c:	03a00001 	moveq	r0, #1	; 0x1
        1dd950:	e5c40009 	strb	r0, [r4, #9]	; fField9
        1dd954:	e28dd008 	add	sp, sp, #8	; 0x8
        1dd958:	eb06d494 	bl	392bb0 <ExitFIQAtomic>
        1dd95c:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        1dd960:	e3300000 	teq	r0, #0	; 0x0
        1dd964:	15d40009 	ldrneb	r0, [r4, #9]	; fField9
        1dd968:	13300000 	teqne	r0, #0	; 0x0
        1dd96c:	1a000004 	bne	1dd984 <TSerialNumberROM::Init(void)+0x218>
        1dd970:	e59d0000 	ldr	r0, [sp]
        1dd974:	e2800001 	add	r0, r0, #1	; 0x1
        1dd978:	e58d0000 	str	r0, [sp]
        1dd97c:	e3500003 	cmp	r0, #3	; 0x3
        1dd980:	baffff84 	blt	1dd798 <TSerialNumberROM::Init(void)+0x2c>
        1dd984:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

