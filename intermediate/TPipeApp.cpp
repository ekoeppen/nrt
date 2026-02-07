#include "include/TPipeApp.h"

/**
 * Symbol: TPipeApp::__ct(PipeInfo const &, unsigned char)
 * Address: 0018259c
 */
TPipeApp::TPipeApp(PipeInfo const &, unsigned char) {
    /*
        18259c:	e1a0c00d 	mov	ip, sp
        1825a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1825a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1825a8:	e1b04000 	movs	r4, r0
        1825ac:	e1a05001 	mov	r5, r1
        1825b0:	e20260ff 	and	r6, r2, #255	; 0xff
        1825b4:	1a000003 	bne	1825c8 <TPipeApp::__ct(PipeInfo const &, unsigned char)+0x2c>
        1825b8:	e3a00088 	mov	r0, #136	; 0x88
        1825bc:	eb69305d 	bl	1bce738 <$__nw(unsigned int)>
        1825c0:	e1b04000 	movs	r4, r0
        1825c4:	0a000008 	beq	1825ec <TPipeApp::__ct(PipeInfo const &, unsigned char)+0x50>
        1825c8:	e1a00004 	mov	r0, r4
        1825cc:	eb69871c 	bl	1be4244 <TAppWorld::$__ct(void)>
        1825d0:	e59f001c 	ldr	r0, [pc, #1c]	; 1825f4 <TPipeApp::__ct(PipeInfo const &, unsigned char)+0x58>
        1825d4:	e5840000 	str	r0, [r4]
        1825d8:	e2840074 	add	r0, r4, #116	; 0x74
        1825dc:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        1825e0:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1825e4:	e5c46080 	strb	r6, [r4, #128]
        1825e8:	e5c46084 	strb	r6, [r4, #132]	; fField132
        1825ec:	e1a00004 	mov	r0, r4
        1825f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1825f4:	00020384 	andeq	r0, r2, r4, lsl #7
    */
}

/**
 * Symbol: TPipeApp::MainConstructor(void)
 * Address: 001825f8
 */
TPipeApp::MainConstructor(void) {
    /*
        1825f8:	e1a0c00d 	mov	ip, sp
        1825fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        182600:	e24cb004 	sub	fp, ip, #4	; 0x4
        182604:	e1a04000 	mov	r4, r0
        182608:	eb68ac3b 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        18260c:	e1b05000 	movs	r5, r0
        182610:	1a00000d 	bne	18264c <TPipeApp::MainConstructor(void)+0x54>
        182614:	e2841074 	add	r1, r4, #116	; 0x74
        182618:	e3a00000 	mov	r0, #0	; 0x0
        18261c:	eb65b87c 	bl	1af0814 <TPipeEventHandler::$__ct(PipeInfo *)>
        182620:	e5840070 	str	r0, [r4, #112]	; fField112
        182624:	e3300000 	teq	r0, #0	; 0x0
        182628:	0a000005 	beq	182644 <TPipeApp::MainConstructor(void)+0x4c>
        18262c:	e59f2008 	ldr	r2, [pc, #8]	; 18263c <TPipeApp::MainConstructor(void)+0x44>
        182630:	e59f1008 	ldr	r1, [pc, #8]	; 182640 <TPipeApp::MainConstructor(void)+0x48>
        182634:	eb699b9d 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        182638:	ea000003 	b	18264c <TPipeApp::MainConstructor(void)+0x54>
        18263c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        182640:	70636b6d 	rsbvc	r6, r3, sp, ror #22
        182644:	e3a050e9 	mov	r5, #233	; 0xe9
        182648:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        18264c:	e5d40084 	ldrb	r0, [r4, #132]	; fField132
        182650:	e3300000 	teq	r0, #0	; 0x0
        182654:	0a000019 	beq	1826c0 <TPipeApp::MainConstructor(void)+0xc8>
        182658:	e3a00000 	mov	r0, #0	; 0x0
        18265c:	e52d0004 	str	r0, [sp, -#4]!
        182660:	e52d006c 	str	r0, [sp, -#108]!
        182664:	e28d0008 	add	r0, sp, #8	; 0x8
        182668:	eb68c0c1 	bl	1bb2974 <$setjmp>
        18266c:	e3300000 	teq	r0, #0	; 0x0
        182670:	1a000004 	bne	182688 <TPipeApp::MainConstructor(void)+0x90>
        182674:	e1a0000d 	mov	r0, sp
        182678:	eb69767f 	bl	1be007c <$AddExceptionHandler>
        18267c:	e5b40074 	ldr	r0, [r4, #116]!	; fField116
        182680:	eb68d135 	bl	1bb6b5c <TEndpointPipe::$AddToAppWorld(void)>
        182684:	ea000009 	b	1826b0 <TPipeApp::MainConstructor(void)+0xb8>
        182688:	e59d0060 	ldr	r0, [sp, #96]
        18268c:	e59f1034 	ldr	r1, [pc, #34]	; 1826c8 <TPipeApp::MainConstructor(void)+0xd0>
        182690:	e5911000 	ldr	r1, [r1]
        182694:	eb6982be 	bl	1be3194 <$Subexception>
        182698:	e3300000 	teq	r0, #0	; 0x0
        18269c:	159d0064 	ldrne	r0, [sp, #100]
        1826a0:	158d006c 	strne	r0, [sp, #108]
        1826a4:	1a000001 	bne	1826b0 <TPipeApp::MainConstructor(void)+0xb8>
        1826a8:	e1a0000d 	mov	r0, sp
        1826ac:	eb697ea8 	bl	1be2154 <$NextHandler>
        1826b0:	e1a0000d 	mov	r0, sp
        1826b4:	eb697a7f 	bl	1be10b8 <$ExitHandler>
        1826b8:	e5bd506c 	ldr	r5, [sp, #108]!
        1826bc:	e28dd004 	add	sp, sp, #4	; 0x4
        1826c0:	e1a00005 	mov	r0, r5
        1826c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1826c8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TPipeApp::MainDestructor(void)
 * Address: 0018297c
 */
TPipeApp::MainDestructor(void) {
    /*
        18297c:	e1a0c00d 	mov	ip, sp
        182980:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        182984:	e24cb004 	sub	fp, ip, #4	; 0x4
        182988:	e1a04000 	mov	r4, r0
        18298c:	e5900070 	ldr	r0, [r0, #112]	; fField112
        182990:	e3300000 	teq	r0, #0	; 0x0
        182994:	0a000002 	beq	1829a4 <TPipeApp::MainDestructor(void)+0x28>
        182998:	e3a01001 	mov	r1, #1	; 0x1
        18299c:	e1a0e00f 	mov	lr, pc
        1829a0:	e590f000 	ldr	pc, [r0]
        1829a4:	e1a00004 	mov	r0, r4
        1829a8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1829ac:	ea68af54 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TPipeApp::GetSizeOf(void)
 * Address: 00182d58
 */
TPipeApp::GetSizeOf(void) {
    /*
        182d58:	e3a00088 	mov	r0, #136	; 0x88
        182d5c:	e1a0f00e 	mov	pc, lr
    */
}

