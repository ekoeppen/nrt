#include "DDKIncludes/PCMCIA/CardPCMCIA.h"

/**
 * Symbol: TCardFunction::__ct(void)
 * Address: 0004f108
 */
TCardFunction::TCardFunction() {
    /*
         4f108:	e1a0c00d 	mov	ip, sp
         4f10c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4f110:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f114:	e1b04000 	movs	r4, r0
         4f118:	1a000003 	bne	4f12c <TCardFunction::__ct(void)+0x24>
         4f11c:	e3a00020 	mov	r0, #32	; 0x20
         4f120:	eb6dfd84 	bl	1bce738 <$__nw(unsigned int)>
         4f124:	e1b04000 	movs	r4, r0
         4f128:	0a000008 	beq	4f150 <TCardFunction::__ct(void)+0x48>
         4f12c:	e2840008 	add	r0, r4, #8	; 0x8
         4f130:	eb6e543d 	bl	1be422c <CList::$__ct(void)>
         4f134:	e3a000ff 	mov	r0, #255	; 0xff
         4f138:	e5c40000 	strb	r0, [r4]
         4f13c:	e3a00000 	mov	r0, #0	; 0x0
         4f140:	e5c40001 	strb	r0, [r4, #1]
         4f144:	e5c40002 	strb	r0, [r4, #2]
         4f148:	e5c40003 	strb	r0, [r4, #3]
         4f14c:	e5840004 	str	r0, [r4, #4]	; fFuncId
         4f150:	e1a00004 	mov	r0, r4
         4f154:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardFunction::__dt(void)
 * Address: 0004f158
 */
TCardFunction::~TCardFunction() {
    /*
         4f158:	e1a0c00d 	mov	ip, sp
         4f15c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4f160:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f164:	e1a04000 	mov	r4, r0
         4f168:	e1a05001 	mov	r5, r1
         4f16c:	e2800008 	add	r0, r0, #8	; 0x8
         4f170:	e1a06000 	mov	r6, r0
         4f174:	e5901000 	ldr	r1, [r0]
         4f178:	e2411001 	sub	r1, r1, #1	; 0x1
         4f17c:	eb6e5c70 	bl	1be6344 <CList::$At(long)>
         4f180:	e1b07000 	movs	r7, r0
         4f184:	0a00000c 	beq	4f1bc <TCardFunction::__dt(void)+0x64>
         4f188:	e1a00006 	mov	r0, r6
         4f18c:	e5961000 	ldr	r1, [r6]
         4f190:	e2411001 	sub	r1, r1, #1	; 0x1
         4f194:	e3a02001 	mov	r2, #1	; 0x1
         4f198:	eb6e7525 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         4f19c:	e1a00007 	mov	r0, r7
         4f1a0:	eb6e47c3 	bl	1be10b4 <$DisposPtr>
         4f1a4:	e1a00006 	mov	r0, r6
         4f1a8:	e5961000 	ldr	r1, [r6]
         4f1ac:	e2411001 	sub	r1, r1, #1	; 0x1
         4f1b0:	eb6e5c63 	bl	1be6344 <CList::$At(long)>
         4f1b4:	e1b07000 	movs	r7, r0
         4f1b8:	1afffff2 	bne	4f188 <TCardFunction::__dt(void)+0x30>
         4f1bc:	e1a00006 	mov	r0, r6
         4f1c0:	e3a01000 	mov	r1, #0	; 0x0
         4f1c4:	eb6e582e 	bl	1be5284 <CList::$__dt(void)>
         4f1c8:	e3150001 	tst	r5, #1	; 0x1
         4f1cc:	11a00004 	movne	r0, r4
         4f1d0:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         4f1d4:	1a6df941 	bne	1bcd6e0 <$__dl(void *)>
         4f1d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardFunction::GetNumOfFuncExts(void)
 * Address: 0004f1dc
 */
ULong			TCardFunction::GetNumOfFuncExts();							// Get the number of function extensions {
    /*
         4f1dc:	e5900008 	ldr	r0, [r0, #8]	; fFuncIdSysInits
         4f1e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardFunction::GetFuncExt(unsigned long const)
 * Address: 0004f1e4
 */
TCardFuncExt*	TCardFunction::GetFuncExt(const ULong functExtNumber);		// Get a function extension data {
    /*
         4f1e4:	e1a0c00d 	mov	ip, sp
         4f1e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4f1ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f1f0:	e3a02000 	mov	r2, #0	; 0x0
         4f1f4:	e5b03008 	ldr	r3, [r0, #8]!	; fFuncIdSysInits
         4f1f8:	e1530001 	cmp	r3, r1
         4f1fc:	9a000001 	bls	4f208 <TCardFunction::GetFuncExt(unsigned long const)+0x24>
         4f200:	eb6e5c4f 	bl	1be6344 <CList::$At(long)>
         4f204:	e1a02000 	mov	r2, r0
         4f208:	e1a00002 	mov	r0, r2
         4f20c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardFunction::AddFuncExt(unsigned long const, unsigned char const *)
 * Address: 0004f210
 */
NewtonErr		TCardFunction::AddFuncExt(const ULong dataSize, const UChar* data);	// Add a new copy of function extension data {
    /*
         4f210:	e1a0c00d 	mov	ip, sp
         4f214:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4f218:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f21c:	e1a06000 	mov	r6, r0
         4f220:	e1a04001 	mov	r4, r1
         4f224:	e1a05002 	mov	r5, r2
         4f228:	e3a08000 	mov	r8, #0	; 0x0
         4f22c:	e2810001 	add	r0, r1, #1	; 0x1
         4f230:	eb6e4bc2 	bl	1be2140 <$NewPtr>
         4f234:	e1b07000 	movs	r7, r0
         4f238:	0a000009 	beq	4f264 <TCardFunction::AddFuncExt(unsigned long const, unsigned char const *)+0x54>
         4f23c:	e5c74000 	strb	r4, [r7]
         4f240:	e2871001 	add	r1, r7, #1	; 0x1
         4f244:	e1a02004 	mov	r2, r4
         4f248:	e1a00005 	mov	r0, r5
         4f24c:	eb6e3f40 	bl	1bdef54 <$BlockMove>
         4f250:	e2860008 	add	r0, r6, #8	; 0x8
         4f254:	e1a02007 	mov	r2, r7
         4f258:	e5901000 	ldr	r1, [r0]
         4f25c:	eb6e68a2 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4f260:	ea000001 	b	4f26c <TCardFunction::AddFuncExt(unsigned long const, unsigned char const *)+0x5c>
         4f264:	e3a080e9 	mov	r8, #233	; 0xe9
         4f268:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         4f26c:	e1a00008 	mov	r0, r8
         4f270:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

