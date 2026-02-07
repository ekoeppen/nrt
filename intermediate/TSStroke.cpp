#include "include/TSStroke.h"

/**
 * Symbol: TSStroke::AddPoint(TabPt *)
 * Address: 00222f6c
 */
TSStroke::AddPoint(TabPt *) {
    /*
        222f6c:	e1a0c00d 	mov	ip, sp
        222f70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        222f74:	e24cb004 	sub	fp, ip, #4	; 0x4
        222f78:	e1a04000 	mov	r4, r0
        222f7c:	e1a05001 	mov	r5, r1
        222f80:	eb651d7a 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        222f84:	e1b01000 	movs	r1, r0
        222f88:	e3a00001 	mov	r0, #1	; 0x1
        222f8c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        222f90:	e594100c 	ldr	r1, [r4, #12]	; fField12
        222f94:	e3310001 	teq	r1, #1	; 0x1
        222f98:	1a00000b 	bne	222fcc <TSStroke::AddPoint(TabPt *)+0x60>
        222f9c:	e5951000 	ldr	r1, [r5]
        222fa0:	e2811902 	add	r1, r1, #32768	; 0x8000
        222fa4:	e1a01841 	mov	r1, r1, asr #16
        222fa8:	e5c4104f 	strb	r1, [r4, #79]	; fField79
        222fac:	e1a01441 	mov	r1, r1, asr #8
        222fb0:	e5c4104e 	strb	r1, [r4, #78]	; fField78
        222fb4:	e5951004 	ldr	r1, [r5, #4]
        222fb8:	e2811902 	add	r1, r1, #32768	; 0x8000
        222fbc:	e1a01841 	mov	r1, r1, asr #16
        222fc0:	e5c4104d 	strb	r1, [r4, #77]	; fField77
        222fc4:	e1a01441 	mov	r1, r1, asr #8
        222fc8:	e5c4104c 	strb	r1, [r4, #76]	; fField76
        222fcc:	e5d41054 	ldrb	r1, [r4, #84]	; fField84
        222fd0:	e3310000 	teq	r1, #0	; 0x0
        222fd4:	1a00000c 	bne	22300c <TSStroke::AddPoint(TabPt *)+0xa0>
        222fd8:	e5951000 	ldr	r1, [r5]
        222fdc:	e2811902 	add	r1, r1, #32768	; 0x8000
        222fe0:	e1a01841 	mov	r1, r1, asr #16
        222fe4:	e5c41053 	strb	r1, [r4, #83]	; fField83
        222fe8:	e1a01441 	mov	r1, r1, asr #8
        222fec:	e5c41052 	strb	r1, [r4, #82]	; fField82
        222ff0:	e5b51004 	ldr	r1, [r5, #4]!
        222ff4:	e2811902 	add	r1, r1, #32768	; 0x8000
        222ff8:	e1a01841 	mov	r1, r1, asr #16
        222ffc:	e5c41051 	strb	r1, [r4, #81]	; fField81
        223000:	e1a01441 	mov	r1, r1, asr #8
        223004:	e5c41050 	strb	r1, [r4, #80]	; fField80
        223008:	e5c40054 	strb	r0, [r4, #84]	; fField84
        22300c:	e3a00000 	mov	r0, #0	; 0x0
        223010:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Make__8TSStrokeSFUl
 * Address: 0022304c
 */
void TSStroke::Make() {
    /*
        22304c:	e1a0c00d 	mov	ip, sp
        223050:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        223054:	e24cb004 	sub	fp, ip, #4	; 0x4
        223058:	e1a04000 	mov	r4, r0
        22305c:	e3a00058 	mov	r0, #88	; 0x58
        223060:	eb66adb4 	bl	1bce738 <$__nw(unsigned int)>
        223064:	e1b05000 	movs	r5, r0
        223068:	0a000003 	beq	22307c <Make__8TSStrokeSFUl+0x30>
        22306c:	e1a00005 	mov	r0, r5
        223070:	ebffa5bb 	bl	20c764 <TDArray::__ct(void)>
        223074:	e59f0068 	ldr	r0, [pc, #68]	; 2230e4 <Make__8TSStrokeSFUl+0x98>
        223078:	e5850000 	str	r0, [r5]
        22307c:	e3350000 	teq	r5, #0	; 0x0
        223080:	0a000015 	beq	2230dc <Make__8TSStrokeSFUl+0x90>
        223084:	e3a06000 	mov	r6, #0	; 0x0
        223088:	e585601c 	str	r6, [r5, #28]
        22308c:	e1a01004 	mov	r1, r4
        223090:	e5856030 	str	r6, [r5, #48]
        223094:	e1a00005 	mov	r0, r5
        223098:	eb652563 	bl	1b6c62c <TStroke::$IStroke(unsigned long)>
        22309c:	e5c56054 	strb	r6, [r5, #84]	; fField84
        2230a0:	e3e01000 	mvn	r1, #0	; 0x0
        2230a4:	e5c5104d 	strb	r1, [r5, #77]	; fField77
        2230a8:	e5c5104c 	strb	r1, [r5, #76]	; fField76
        2230ac:	e5c5104f 	strb	r1, [r5, #79]	; fField79
        2230b0:	e5c5104e 	strb	r1, [r5, #78]	; fField78
        2230b4:	e5c51051 	strb	r1, [r5, #81]	; fField81
        2230b8:	e5c51050 	strb	r1, [r5, #80]	; fField80
        2230bc:	e5c51053 	strb	r1, [r5, #83]	; fField83
        2230c0:	e5c51052 	strb	r1, [r5, #82]	; fField82
        2230c4:	e3300000 	teq	r0, #0	; 0x0
        2230c8:	0a000003 	beq	2230dc <Make__8TSStrokeSFUl+0x90>
        2230cc:	e1a00005 	mov	r0, r5
        2230d0:	e1a0e00f 	mov	lr, pc
        2230d4:	e595f000 	ldr	pc, [r5]
        2230d8:	e3a05000 	mov	r5, #0	; 0x0
        2230dc:	e1a00005 	mov	r0, r5
        2230e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2230e4:	000203e8 	andeq	r0, r2, r8, ror #7
    */
}

