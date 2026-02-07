#include "include/TCMOModemPrefs.h"

/**
 * Symbol: TCMOModemPrefs::__ct(void)
 * Address: 0011f4c0
 */
TCMOModemPrefs::TCMOModemPrefs(void) {
    /*
        11f4c0:	e1a0c00d 	mov	ip, sp
        11f4c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f4c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f4cc:	e1b04000 	movs	r4, r0
        11f4d0:	1a000003 	bne	11f4e4 <TCMOModemPrefs::__ct(void)+0x24>
        11f4d4:	e3a00028 	mov	r0, #40	; 0x28
        11f4d8:	eb6abc96 	bl	1bce738 <$__nw(unsigned int)>
        11f4dc:	e1b04000 	movs	r4, r0
        11f4e0:	0a000019 	beq	11f54c <TCMOModemPrefs::__ct(void)+0x8c>
        11f4e4:	e1a00004 	mov	r0, r4
        11f4e8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f4ec:	eb6a5d8d 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11f4f0:	e59f005c 	ldr	r0, [pc, #5c]	; 11f554 <TCMOModemPrefs::__ct(void)+0x94>
        11f4f4:	e5840000 	str	r0, [r4]
        11f4f8:	e3a0001c 	mov	r0, #28	; 0x1c
        11f4fc:	e3a01000 	mov	r1, #0	; 0x0
        11f500:	e5840004 	str	r0, [r4, #4]
        11f504:	e5c4100c 	strb	r1, [r4, #12]
        11f508:	e3a00001 	mov	r0, #1	; 0x1
        11f50c:	e5c4000d 	strb	r0, [r4, #13]
        11f510:	e5c4100e 	strb	r1, [r4, #14]
        11f514:	e5c4000f 	strb	r0, [r4, #15]
        11f518:	e5c41010 	strb	r1, [r4, #16]
        11f51c:	e5c40011 	strb	r0, [r4, #17]
        11f520:	e5c40012 	strb	r0, [r4, #18]
        11f524:	e5c40013 	strb	r0, [r4, #19]
        11f528:	e5c41014 	strb	r1, [r4, #20]
        11f52c:	e5c41015 	strb	r1, [r4, #21]
        11f530:	e3a01c4b 	mov	r1, #19200	; 0x4b00
        11f534:	e5841018 	str	r1, [r4, #24]
        11f538:	e3a01003 	mov	r1, #3	; 0x3
        11f53c:	e584101c 	str	r1, [r4, #28]
        11f540:	e3a0100f 	mov	r1, #15	; 0xf
        11f544:	e5841020 	str	r1, [r4, #32]
        11f548:	e5c40024 	strb	r0, [r4, #36]
        11f54c:	e1a00004 	mov	r0, r4
        11f550:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f554:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
    */
}

