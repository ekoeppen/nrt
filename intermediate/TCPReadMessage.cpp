#include "include/TCPReadMessage.h"

/**
 * Symbol: TCPReadMessage::__ct(void)
 * Address: 00049698
 */
TCPReadMessage::TCPReadMessage(void) {
    /*
         49698:	e1a0c00d 	mov	ip, sp
         4969c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         496a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         496a4:	e1b04000 	movs	r4, r0
         496a8:	1a000003 	bne	496bc <TCPReadMessage::__ct(void)+0x24>
         496ac:	e3a0000c 	mov	r0, #12	; 0xc
         496b0:	eb6e1420 	bl	1bce738 <$__nw(unsigned int)>
         496b4:	e1b04000 	movs	r4, r0
         496b8:	0a000004 	beq	496d0 <TCPReadMessage::__ct(void)+0x38>
         496bc:	e3a00000 	mov	r0, #0	; 0x0
         496c0:	e5840000 	str	r0, [r4]
         496c4:	e5840008 	str	r0, [r4, #8]	; fField8
         496c8:	e1a00004 	mov	r0, r4
         496cc:	eb66f72e 	bl	1a0738c <TCPReadMessage::$Reset(void)>
         496d0:	e1a00004 	mov	r0, r4
         496d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCPReadMessage::__dt(void)
 * Address: 000496d8
 */
TCPReadMessage::~TCPReadMessage(void) {
    /*
         496d8:	e1a0c00d 	mov	ip, sp
         496dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         496e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         496e4:	e1a04000 	mov	r4, r0
         496e8:	e1a05001 	mov	r5, r1
         496ec:	e5900008 	ldr	r0, [r0, #8]	; fField8
         496f0:	e3300000 	teq	r0, #0	; 0x0
         496f4:	1b6e0ff9 	blne	1bcd6e0 <$__dl(void *)>
         496f8:	e3150001 	tst	r5, #1	; 0x1
         496fc:	11a00004 	movne	r0, r4
         49700:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         49704:	1a6e0ff5 	bne	1bcd6e0 <$__dl(void *)>
         49708:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCPReadMessage::Init(TEndpointPipe *, unsigned long)
 * Address: 0004970c
 */
TCPReadMessage::Init(TEndpointPipe *, unsigned long) {
    /*
         4970c:	e1a0c00d 	mov	ip, sp
         49710:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         49714:	e24cb004 	sub	fp, ip, #4	; 0x4
         49718:	e1a04000 	mov	r4, r0
         4971c:	e5801000 	str	r1, [r0]
         49720:	e1a00002 	mov	r0, r2
         49724:	eb6e6285 	bl	1be2140 <$NewPtr>
         49728:	e5840008 	str	r0, [r4, #8]	; fField8
         4972c:	e3300000 	teq	r0, #0	; 0x0
         49730:	03a000e9 	moveq	r0, #233	; 0xe9
         49734:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         49738:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         4973c:	e1a00004 	mov	r0, r4
         49740:	eb66f711 	bl	1a0738c <TCPReadMessage::$Reset(void)>
         49744:	e3a00000 	mov	r0, #0	; 0x0
         49748:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCPReadMessage::Reset(void)
 * Address: 0004974c
 */
TCPReadMessage::Reset(void) {
    /*
         4974c:	e5901008 	ldr	r1, [r0, #8]	; fField8
         49750:	e5a01004 	str	r1, [r0, #4]!	; fField4
         49754:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCPReadMessage::Find(unsigned long, unsigned char)
 * Address: 00049758
 */
TCPReadMessage::Find(unsigned long, unsigned char) {
    /*
         49758:	e1a0c00d 	mov	ip, sp
         4975c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         49760:	e24cb004 	sub	fp, ip, #4	; 0x4
         49764:	e1a04000 	mov	r4, r0
         49768:	e1a05001 	mov	r5, r1
         4976c:	e31200ff 	tst	r2, #255	; 0xff
         49770:	01a00004 	moveq	r0, r4
         49774:	0b66f704 	bleq	1a0738c <TCPReadMessage::$Reset(void)>
         49778:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4977c:	e59f2000 	ldr	r2, [pc, #0]	; 49784 <TCPReadMessage::Find(unsigned long, unsigned char)+0x2c>
         49780:	ea000007 	b	497a4 <TCPReadMessage::Find(unsigned long, unsigned char)+0x4c>
         49784:	6e6f666d 	cdpvs	6, 6, cr6, cr15, cr13, {3}
         49788:	e1310005 	teq	r1, r5
         4978c:	15901004 	ldrne	r1, [r0, #4]	; fField4
         49790:	10810000 	addne	r0, r1, r0
         49794:	12800008 	addne	r0, r0, #8	; 0x8
         49798:	1a000001 	bne	497a4 <TCPReadMessage::Find(unsigned long, unsigned char)+0x4c>
         4979c:	e5a40004 	str	r0, [r4, #4]!	; fField4
         497a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         497a4:	e3300000 	teq	r0, #0	; 0x0
         497a8:	15901000 	ldrne	r1, [r0]
         497ac:	11310002 	teqne	r1, r2
         497b0:	1afffff4 	bne	49788 <TCPReadMessage::Find(unsigned long, unsigned char)+0x30>
         497b4:	e3a00000 	mov	r0, #0	; 0x0
         497b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCPReadMessage::ReceiveMessage(void)
 * Address: 000497bc
 */
TCPReadMessage::ReceiveMessage(void) {
    /*
         497bc:	e1a0c00d 	mov	ip, sp
         497c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         497c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         497c8:	e1a04000 	mov	r4, r0
         497cc:	eb66f6ee 	bl	1a0738c <TCPReadMessage::$Reset(void)>
         497d0:	e3a00001 	mov	r0, #1	; 0x1
         497d4:	e52d0008 	str	r0, [sp, -#8]!	; fField8
         497d8:	e1a0100d 	mov	r1, sp
         497dc:	e1a00004 	mov	r0, r4
         497e0:	e3a02000 	mov	r2, #0	; 0x0
         497e4:	eb66f2e3 	bl	1a06378 <TCPReadMessage::$ReadTuple(TCPTuple *, unsigned char)>
         497e8:	e1b05000 	movs	r5, r0
         497ec:	059f6008 	ldreq	r6, [pc, #8]	; 497fc <TCPReadMessage::ReceiveMessage(void)+0x40>	; fField8
         497f0:	0a000007 	beq	49814 <TCPReadMessage::ReceiveMessage(void)+0x58>
         497f4:	e1a00005 	mov	r0, r5
         497f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         497fc:	6e6f666d 	cdpvs	6, 6, cr6, cr15, cr13, {3}
         49800:	e1a0100d 	mov	r1, sp
         49804:	e1a00004 	mov	r0, r4
         49808:	e3a02000 	mov	r2, #0	; 0x0
         4980c:	eb66f2d9 	bl	1a06378 <TCPReadMessage::$ReadTuple(TCPTuple *, unsigned char)>
         49810:	e1a05000 	mov	r5, r0
         49814:	e59d0000 	ldr	r0, [sp]
         49818:	e1300006 	teq	r0, r6
         4981c:	0a000001 	beq	49828 <TCPReadMessage::ReceiveMessage(void)+0x6c>
         49820:	e3350000 	teq	r5, #0	; 0x0
         49824:	0afffff5 	beq	49800 <TCPReadMessage::ReceiveMessage(void)+0x44>
         49828:	e1a00004 	mov	r0, r4
         4982c:	eb66f6d6 	bl	1a0738c <TCPReadMessage::$Reset(void)>
         49830:	eaffffef 	b	497f4 <TCPReadMessage::ReceiveMessage(void)+0x38>
    */
}

/**
 * Symbol: TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)
 * Address: 00049834
 */
TCPReadMessage::ReadTuple(TCPTuple *, unsigned char) {
    /*
         49834:	e1a0c00d 	mov	ip, sp
         49838:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4983c:	e24cb004 	sub	fp, ip, #4	; 0x4
         49840:	e1a04000 	mov	r4, r0
         49844:	e1a05001 	mov	r5, r1
         49848:	e20280ff 	and	r8, r2, #255	; 0xff
         4984c:	e3a06000 	mov	r6, #0	; 0x0
         49850:	e3a00000 	mov	r0, #0	; 0x0
         49854:	e52d006c 	str	r0, [sp, -#108]!
         49858:	e28d0008 	add	r0, sp, #8	; 0x8
         4985c:	eb6da444 	bl	1bb2974 <$setjmp>
         49860:	e3300000 	teq	r0, #0	; 0x0
         49864:	1a00001e 	bne	498e4 <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0xb0>
         49868:	e1a0000d 	mov	r0, sp
         4986c:	eb6e5a02 	bl	1be007c <$AddExceptionHandler>
         49870:	e5941004 	ldr	r1, [r4, #4]	; fField4
         49874:	e1a07001 	mov	r7, r1
         49878:	e1a00004 	mov	r0, r4
         4987c:	e3a02008 	mov	r2, #8	; 0x8
         49880:	eb66f2bb 	bl	1a06374 <TCPReadMessage::$ReadChunk(void *, long)>
         49884:	e1a01005 	mov	r1, r5
         49888:	e3a02008 	mov	r2, #8	; 0x8
         4988c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         49890:	eb6e55af 	bl	1bdef54 <$BlockMove>
         49894:	e5940004 	ldr	r0, [r4, #4]	; fField4
         49898:	e2801008 	add	r1, r0, #8	; 0x8
         4989c:	e3380000 	teq	r8, #0	; 0x0
         498a0:	e5841004 	str	r1, [r4, #4]	; fField4
         498a4:	1a000008 	bne	498cc <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0x98>
         498a8:	e5950004 	ldr	r0, [r5, #4]	; fField4
         498ac:	e1b02000 	movs	r2, r0
         498b0:	0a000005 	beq	498cc <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0x98>
         498b4:	e1a00004 	mov	r0, r4
         498b8:	eb66f2ad 	bl	1a06374 <TCPReadMessage::$ReadChunk(void *, long)>
         498bc:	e5950004 	ldr	r0, [r5, #4]	; fField4
         498c0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         498c4:	e0800001 	add	r0, r0, r1
         498c8:	e5a40004 	str	r0, [r4, #4]!	; fField4
         498cc:	e5950000 	ldr	r0, [r5]
         498d0:	e59fc008 	ldr	ip, [pc, #8]	; 498e0 <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0xac>	; fField8
         498d4:	e130000c 	teq	r0, ip
         498d8:	05b76008 	ldreq	r6, [r7, #8]!	; fField8
         498dc:	ea000009 	b	49908 <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0xd4>
         498e0:	61627274 	cmnvs	r2, r4, ror r2
         498e4:	e59d0060 	ldr	r0, [sp, #96]
         498e8:	e59f1028 	ldr	r1, [pc, #28]	; 49918 <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0xe4>
         498ec:	e5911000 	ldr	r1, [r1]
         498f0:	eb6e6627 	bl	1be3194 <$Subexception>
         498f4:	e3300000 	teq	r0, #0	; 0x0
         498f8:	159d6064 	ldrne	r6, [sp, #100]
         498fc:	1a000001 	bne	49908 <TCPReadMessage::ReadTuple(TCPTuple *, unsigned char)+0xd4>
         49900:	e1a0000d 	mov	r0, sp
         49904:	eb6e6212 	bl	1be2154 <$NextHandler>
         49908:	e1a0000d 	mov	r0, sp
         4990c:	eb6e5de9 	bl	1be10b8 <$ExitHandler>
         49910:	e1a00006 	mov	r0, r6
         49914:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         49918:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TCPReadMessage::ReadChunk(void *, long)
 * Address: 0004991c
 */
TCPReadMessage::ReadChunk(void *, long) {
    /*
         4991c:	e1a0c00d 	mov	ip, sp
         49920:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
         49924:	e24cb004 	sub	fp, ip, #4	; 0x4
         49928:	e24dd004 	sub	sp, sp, #4	; 0x4
         4992c:	e51b0018 	ldr	r0, [fp, -#24]
         49930:	e1a0300d 	mov	r3, sp
         49934:	e24b2010 	sub	r2, fp, #16	; 0x10
         49938:	e590c000 	ldr	ip, [r0]
         4993c:	e1a0000c 	mov	r0, ip
         49940:	e51b1014 	ldr	r1, [fp, -#20]
         49944:	e59cc000 	ldr	ip, [ip]
         49948:	e1a0e00f 	mov	lr, pc
         4994c:	e28cf014 	add	pc, ip, #20	; 0x14
         49950:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
         49954:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

