#include "include/TIASService.h"

/**
 * Symbol: TIASService::__ct(void)
 * Address: 000f1924
 */
TIASService::TIASService(void) {
    /*
         f1924:	e1a0c00d 	mov	ip, sp
         f1928:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f192c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1930:	e1b04000 	movs	r4, r0
         f1934:	1a000003 	bne	f1948 <TIASService::__ct(void)+0x24>
         f1938:	e3a0001c 	mov	r0, #28	; 0x1c
         f193c:	eb6b737d 	bl	1bce738 <$__nw(unsigned int)>
         f1940:	e1b04000 	movs	r4, r0
         f1944:	0a000001 	beq	f1950 <TIASService::__ct(void)+0x2c>
         f1948:	e1a00004 	mov	r0, r4
         f194c:	eb6503fe 	bl	1a3294c <TIASNamedList::$__ct(void)>
         f1950:	e1a00004 	mov	r0, r4
         f1954:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::__dt(void)
 * Address: 000f1958
 */
TIASService::~TIASService(void) {
    /*
         f1958:	e1a0c00d 	mov	ip, sp
         f195c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1960:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1964:	e1a04000 	mov	r4, r0
         f1968:	e1a05001 	mov	r5, r1
         f196c:	e3a06000 	mov	r6, #0	; 0x0
         f1970:	e5900000 	ldr	r0, [r0]
         f1974:	e3500000 	cmp	r0, #0	; 0x0
         f1978:	da000009 	ble	f19a4 <TIASService::__dt(void)+0x4c>
         f197c:	e1a01006 	mov	r1, r6
         f1980:	e1a00004 	mov	r0, r4
         f1984:	eb6bd26e 	bl	1be6344 <CList::$At(long)>
         f1988:	e3300000 	teq	r0, #0	; 0x0
         f198c:	13a01001 	movne	r1, #1	; 0x1
         f1990:	1b6503e5 	blne	1a3292c <TIASClass::$__dt(void)>
         f1994:	e2866001 	add	r6, r6, #1	; 0x1
         f1998:	e5940000 	ldr	r0, [r4]
         f199c:	e1500006 	cmp	r0, r6
         f19a0:	cafffff5 	bgt	f197c <TIASService::__dt(void)+0x24>
         f19a4:	e1a00004 	mov	r0, r4
         f19a8:	e3a01000 	mov	r1, #0	; 0x0
         f19ac:	eb6503e7 	bl	1a32950 <TIASNamedList::$__dt(void)>
         f19b0:	e3150001 	tst	r5, #1	; 0x1
         f19b4:	11a00004 	movne	r0, r4
         f19b8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         f19bc:	1a6b6f47 	bne	1bcd6e0 <$__dl(void *)>
         f19c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::FindClass(unsigned char const *)
 * Address: 000f19c4
 */
TIASService::FindClass(unsigned char const *) {
    /*
         f19c4:	ea6503e3 	b	1a32958 <TIASNamedList::$Search(unsigned char const *)>
    */
}

/**
 * Symbol: TIASService::AddIntegerEntry(unsigned char const *, unsigned char const *, unsigned long)
 * Address: 000f1ba4
 */
TIASService::AddIntegerEntry(unsigned char const *, unsigned char const *, unsigned long) {
    /*
         f1ba4:	e1a0c00d 	mov	ip, sp
         f1ba8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f1bac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1bb0:	e1a07000 	mov	r7, r0
         f1bb4:	e1a06001 	mov	r6, r1
         f1bb8:	e1a05002 	mov	r5, r2
         f1bbc:	e1a04003 	mov	r4, r3
         f1bc0:	e3a00000 	mov	r0, #0	; 0x0
         f1bc4:	eb650364 	bl	1a3295c <TIASElement::$__ct(void)>
         f1bc8:	e1b08000 	movs	r8, r0
         f1bcc:	03a000a8 	moveq	r0, #168	; 0xa8
         f1bd0:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f1bd4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f1bd8:	e1a01004 	mov	r1, r4
         f1bdc:	e1a00008 	mov	r0, r8
         f1be0:	eb65035f 	bl	1a32964 <TIASElement::$SetInteger(unsigned long)>
         f1be4:	e1a03008 	mov	r3, r8
         f1be8:	e1a02005 	mov	r2, r5
         f1bec:	e1a01006 	mov	r1, r6
         f1bf0:	e1a00007 	mov	r0, r7
         f1bf4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         f1bf8:	ea650762 	b	1a33988 <TIASService::$AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)>
    */
}

/**
 * Symbol: TIASService::AddStringEntry(unsigned char const *, unsigned char const *, unsigned char const *)
 * Address: 000f1f2c
 */
TIASService::AddStringEntry(unsigned char const *, unsigned char const *, unsigned char const *) {
    /*
         f1f2c:	e1a0c00d 	mov	ip, sp
         f1f30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f1f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1f38:	e1a07000 	mov	r7, r0
         f1f3c:	e1a06001 	mov	r6, r1
         f1f40:	e1a05002 	mov	r5, r2
         f1f44:	e1a04003 	mov	r4, r3
         f1f48:	e3a00000 	mov	r0, #0	; 0x0
         f1f4c:	eb650282 	bl	1a3295c <TIASElement::$__ct(void)>
         f1f50:	e1b08000 	movs	r8, r0
         f1f54:	0a00000d 	beq	f1f90 <TIASService::AddStringEntry(unsigned char const *, unsigned char const *, unsigned char const *)+0x64>
         f1f58:	e1a01004 	mov	r1, r4
         f1f5c:	e1a00008 	mov	r0, r8
         f1f60:	eb650282 	bl	1a32970 <TIASElement::$SetString(unsigned char const *)>
         f1f64:	e3300000 	teq	r0, #0	; 0x0
         f1f68:	1a000005 	bne	f1f84 <TIASService::AddStringEntry(unsigned char const *, unsigned char const *, unsigned char const *)+0x58>
         f1f6c:	e1a03008 	mov	r3, r8
         f1f70:	e1a02005 	mov	r2, r5
         f1f74:	e1a01006 	mov	r1, r6
         f1f78:	e1a00007 	mov	r0, r7
         f1f7c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         f1f80:	ea650680 	b	1a33988 <TIASService::$AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)>
         f1f84:	e1a00008 	mov	r0, r8
         f1f88:	e3a01001 	mov	r1, #1	; 0x1
         f1f8c:	eb650273 	bl	1a32960 <TIASElement::$__dt(void)>
         f1f90:	e3a000a8 	mov	r0, #168	; 0xa8
         f1f94:	e2400b07 	sub	r0, r0, #7168	; 0x1c00
         f1f98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::AddNBytesEntry(unsigned char const *, unsigned char const *, unsigned long, unsigned long)
 * Address: 000f2100
 */
TIASService::AddNBytesEntry(unsigned char const *, unsigned char const *, unsigned long, unsigned long) {
    /*
         f2100:	e1a0c00d 	mov	ip, sp
         f2104:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f2108:	e24cb004 	sub	fp, ip, #4	; 0x4
         f210c:	e1a07000 	mov	r7, r0
         f2110:	e1a06001 	mov	r6, r1
         f2114:	e1a05002 	mov	r5, r2
         f2118:	e1a04003 	mov	r4, r3
         f211c:	e3a00000 	mov	r0, #0	; 0x0
         f2120:	e59b9004 	ldr	r9, [fp, #4]
         f2124:	eb65020c 	bl	1a3295c <TIASElement::$__ct(void)>
         f2128:	e1b08000 	movs	r8, r0
         f212c:	03a000a8 	moveq	r0, #168	; 0xa8
         f2130:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f2134:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f2138:	e1a02009 	mov	r2, r9
         f213c:	e1a01004 	mov	r1, r4
         f2140:	e1a00008 	mov	r0, r8
         f2144:	eb650207 	bl	1a32968 <TIASElement::$SetNBytes(unsigned long, unsigned long)>
         f2148:	e1a03008 	mov	r3, r8
         f214c:	e1a02005 	mov	r2, r5
         f2150:	e1a01006 	mov	r1, r6
         f2154:	e1a00007 	mov	r0, r7
         f2158:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         f215c:	ea650609 	b	1a33988 <TIASService::$AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)>
    */
}

/**
 * Symbol: TIASService::AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)
 * Address: 000f2160
 */
TIASService::AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *) {
    /*
         f2160:	e1a0c00d 	mov	ip, sp
         f2164:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f2168:	e24cb004 	sub	fp, ip, #4	; 0x4
         f216c:	e1a07000 	mov	r7, r0
         f2170:	e1a06001 	mov	r6, r1
         f2174:	e1a05002 	mov	r5, r2
         f2178:	e1a04003 	mov	r4, r3
         f217c:	e24dd004 	sub	sp, sp, #4	; 0x4
         f2180:	e3a080a8 	mov	r8, #168	; 0xa8
         f2184:	e2488b07 	sub	r8, r8, #7168	; 0x1c00
         f2188:	e1a0300d 	mov	r3, sp
         f218c:	eb6505fe 	bl	1a3398c <TIASService::$AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)>
         f2190:	e3300000 	teq	r0, #0	; 0x0
         f2194:	0a000009 	beq	f21c0 <TIASService::AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)+0x60>
         f2198:	e1a01004 	mov	r1, r4
         f219c:	eb6501e6 	bl	1a3293c <TIASAttribute::$Insert(TIASElement *)>
         f21a0:	e1b08000 	movs	r8, r0
         f21a4:	03a00000 	moveq	r0, #0	; 0x0
         f21a8:	0a000008 	beq	f21d0 <TIASService::AddAttributeEntry(unsigned char const *, unsigned char const *, TIASElement *)+0x70>
         f21ac:	e1a02005 	mov	r2, r5
         f21b0:	e1a01006 	mov	r1, r6
         f21b4:	e1a00007 	mov	r0, r7
         f21b8:	e59d3000 	ldr	r3, [sp]
         f21bc:	eb6501d8 	bl	1a32924 <TIASService::$RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long)>
         f21c0:	e1b00004 	movs	r0, r4
         f21c4:	13a01001 	movne	r1, #1	; 0x1
         f21c8:	1b6501e4 	blne	1a32960 <TIASElement::$__dt(void)>
         f21cc:	e1a00008 	mov	r0, r8
         f21d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)
 * Address: 000f21d4
 */
TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &) {
    /*
         f21d4:	e1a0c00d 	mov	ip, sp
         f21d8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f21dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f21e0:	e1a07000 	mov	r7, r0
         f21e4:	e1a06001 	mov	r6, r1
         f21e8:	e1a05002 	mov	r5, r2
         f21ec:	e1a04003 	mov	r4, r3
         f21f0:	e1a02003 	mov	r2, r3
         f21f4:	eb6505e5 	bl	1a33990 <TIASService::$AddClass(unsigned char const *, unsigned long &)>
         f21f8:	e1b09000 	movs	r9, r0
         f21fc:	0a00001e 	beq	f227c <TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)+0xa8>
         f2200:	e1a01005 	mov	r1, r5
         f2204:	e1a00009 	mov	r0, r9
         f2208:	eb6501c9 	bl	1a32934 <TIASClass::$FindAttribute(unsigned char const *)>
         f220c:	e3300000 	teq	r0, #0	; 0x0
         f2210:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f2214:	e3a00000 	mov	r0, #0	; 0x0
         f2218:	ebfffe16 	bl	f1a78 <TIASAttribute::__ct(void)>
         f221c:	e1b08000 	movs	r8, r0
         f2220:	0a000011 	beq	f226c <TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)+0x98>
         f2224:	e1a01005 	mov	r1, r5
         f2228:	e1a00008 	mov	r0, r8
         f222c:	eb6501c8 	bl	1a32954 <TIASNamedList::$Init(unsigned char const *)>
         f2230:	e3300000 	teq	r0, #0	; 0x0
         f2234:	1a000009 	bne	f2260 <TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)+0x8c>
         f2238:	e1a01008 	mov	r1, r8
         f223c:	e1a00009 	mov	r0, r9
         f2240:	eb6501ba 	bl	1a32930 <TIASClass::$Insert(TIASAttribute *)>
         f2244:	e3300000 	teq	r0, #0	; 0x0
         f2248:	1a000004 	bne	f2260 <TIASService::AddAttribute(unsigned char const *, unsigned char const *, unsigned long &)+0x8c>
         f224c:	e5940000 	ldr	r0, [r4]
         f2250:	e3800002 	orr	r0, r0, #2	; 0x2
         f2254:	e5840000 	str	r0, [r4]
         f2258:	e1a00008 	mov	r0, r8
         f225c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f2260:	e1a00008 	mov	r0, r8
         f2264:	e3a01001 	mov	r1, #1	; 0x1
         f2268:	eb6501b2 	bl	1a32938 <TIASAttribute::$__dt(void)>
         f226c:	e1a01006 	mov	r1, r6
         f2270:	e1a00007 	mov	r0, r7
         f2274:	e5942000 	ldr	r2, [r4]
         f2278:	eb6505c5 	bl	1a33994 <TIASService::$RemoveClass(unsigned char const *, unsigned long)>
         f227c:	e3a00000 	mov	r0, #0	; 0x0
         f2280:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::AddClass(unsigned char const *, unsigned long &)
 * Address: 000f2284
 */
TIASService::AddClass(unsigned char const *, unsigned long &) {
    /*
         f2284:	e1a0c00d 	mov	ip, sp
         f2288:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f228c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2290:	e1a04000 	mov	r4, r0
         f2294:	e1a06001 	mov	r6, r1
         f2298:	e1a05002 	mov	r5, r2
         f229c:	e3a08000 	mov	r8, #0	; 0x0
         f22a0:	e5828000 	str	r8, [r2]
         f22a4:	eb65019f 	bl	1a32928 <TIASService::$FindClass(unsigned char const *)>
         f22a8:	e3300000 	teq	r0, #0	; 0x0
         f22ac:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f22b0:	e3a00000 	mov	r0, #0	; 0x0
         f22b4:	ebfffdc3 	bl	f19c8 <TIASClass::__ct(void)>
         f22b8:	e1b07000 	movs	r7, r0
         f22bc:	0a000012 	beq	f230c <TIASService::AddClass(unsigned char const *, unsigned long &)+0x88>
         f22c0:	e1a01006 	mov	r1, r6
         f22c4:	e1a00007 	mov	r0, r7
         f22c8:	eb6501a1 	bl	1a32954 <TIASNamedList::$Init(unsigned char const *)>
         f22cc:	e3300000 	teq	r0, #0	; 0x0
         f22d0:	1a00000a 	bne	f2300 <TIASService::AddClass(unsigned char const *, unsigned long &)+0x7c>
         f22d4:	e1a02007 	mov	r2, r7
         f22d8:	e5941000 	ldr	r1, [r4]
         f22dc:	e1a00004 	mov	r0, r4
         f22e0:	eb6bdc81 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f22e4:	e3300000 	teq	r0, #0	; 0x0
         f22e8:	1a000004 	bne	f2300 <TIASService::AddClass(unsigned char const *, unsigned long &)+0x7c>
         f22ec:	e5950000 	ldr	r0, [r5]
         f22f0:	e3800001 	orr	r0, r0, #1	; 0x1
         f22f4:	e5850000 	str	r0, [r5]
         f22f8:	e1a00007 	mov	r0, r7
         f22fc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f2300:	e1a00007 	mov	r0, r7
         f2304:	e3a01001 	mov	r1, #1	; 0x1
         f2308:	eb650187 	bl	1a3292c <TIASClass::$__dt(void)>
         f230c:	e1a00008 	mov	r0, r8
         f2310:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::RemoveClass(unsigned char const *, unsigned long)
 * Address: 000f2314
 */
TIASService::RemoveClass(unsigned char const *, unsigned long) {
    /*
         f2314:	e1a0c00d 	mov	ip, sp
         f2318:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f231c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2320:	e1a04000 	mov	r4, r0
         f2324:	e1a05002 	mov	r5, r2
         f2328:	eb65017e 	bl	1a32928 <TIASService::$FindClass(unsigned char const *)>
         f232c:	e1b06000 	movs	r6, r0
         f2330:	12050001 	andne	r0, r5, #1	; 0x1
         f2334:	13300000 	teqne	r0, #0	; 0x0
         f2338:	0a000005 	beq	f2354 <TIASService::RemoveClass(unsigned char const *, unsigned long)+0x40>
         f233c:	e1a01006 	mov	r1, r6
         f2340:	e1a00004 	mov	r0, r4
         f2344:	eb6be8b7 	bl	1bec628 <CList::$Remove(void *)>
         f2348:	e1a00006 	mov	r0, r6
         f234c:	e3a01001 	mov	r1, #1	; 0x1
         f2350:	eb650175 	bl	1a3292c <TIASClass::$__dt(void)>
         f2354:	e3a00000 	mov	r0, #0	; 0x0
         f2358:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASService::RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long)
 * Address: 000f235c
 */
TIASService::RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long) {
    /*
         f235c:	e1a0c00d 	mov	ip, sp
         f2360:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f2364:	e24cb004 	sub	fp, ip, #4	; 0x4
         f2368:	e1a05000 	mov	r5, r0
         f236c:	e1a06002 	mov	r6, r2
         f2370:	e1a04003 	mov	r4, r3
         f2374:	eb65016b 	bl	1a32928 <TIASService::$FindClass(unsigned char const *)>
         f2378:	e1b07000 	movs	r7, r0
         f237c:	0a000014 	beq	f23d4 <TIASService::RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long)+0x78>
         f2380:	e1a01006 	mov	r1, r6
         f2384:	e1a00007 	mov	r0, r7
         f2388:	eb650169 	bl	1a32934 <TIASClass::$FindAttribute(unsigned char const *)>
         f238c:	e1b06000 	movs	r6, r0
         f2390:	12040002 	andne	r0, r4, #2	; 0x2
         f2394:	13300000 	teqne	r0, #0	; 0x0
         f2398:	0a000005 	beq	f23b4 <TIASService::RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long)+0x58>
         f239c:	e1a01006 	mov	r1, r6
         f23a0:	e1a00007 	mov	r0, r7
         f23a4:	eb6be89f 	bl	1bec628 <CList::$Remove(void *)>
         f23a8:	e1a00006 	mov	r0, r6
         f23ac:	e3a01001 	mov	r1, #1	; 0x1
         f23b0:	eb650160 	bl	1a32938 <TIASAttribute::$__dt(void)>
         f23b4:	e3140001 	tst	r4, #1	; 0x1
         f23b8:	0a000005 	beq	f23d4 <TIASService::RemoveAttribute(unsigned char const *, unsigned char const *, unsigned long)+0x78>
         f23bc:	e1a01007 	mov	r1, r7
         f23c0:	e1a00005 	mov	r0, r5
         f23c4:	eb6be897 	bl	1bec628 <CList::$Remove(void *)>
         f23c8:	e1a00007 	mov	r0, r7
         f23cc:	e3a01001 	mov	r1, #1	; 0x1
         f23d0:	eb650155 	bl	1a3292c <TIASClass::$__dt(void)>
         f23d4:	e3a00000 	mov	r0, #0	; 0x0
         f23d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

