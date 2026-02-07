#include "DDKIncludes/Communications/MNPOptions.h"

/**
 * Symbol: TCMOMNPStatistics::__ct(void)
 * Address: 00118804
 */
TCMOMNPStatistics::TCMOMNPStatistics() {
    /*
        118804:	e1a0c00d 	mov	ip, sp
        118808:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11880c:	e24cb004 	sub	fp, ip, #4	; 0x4
        118810:	e1b04000 	movs	r4, r0
        118814:	1a000003 	bne	118828 <TCMOMNPStatistics::__ct(void)+0x24>
        118818:	e3a0004c 	mov	r0, #76	; 0x4c
        11881c:	eb6ad7c5 	bl	1bce738 <$__nw(unsigned int)>
        118820:	e1b04000 	movs	r4, r0
        118824:	0a000018 	beq	11888c <TCMOMNPStatistics::__ct(void)+0x88>
        118828:	e1a00004 	mov	r0, r4
        11882c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        118830:	eb6a78bc 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        118834:	e59f0058 	ldr	r0, [pc, #58]	; 118894 <TCMOMNPStatistics::__ct(void)+0x90>
        118838:	e5840000 	str	r0, [r4]
        11883c:	e3a00040 	mov	r0, #64	; 0x40
        118840:	e5840004 	str	r0, [r4, #4]
        118844:	e3a000c4 	mov	r0, #196	; 0xc4
        118848:	e584000c 	str	r0, [r4, #12]
        11884c:	e3a00000 	mov	r0, #0	; 0x0
        118850:	e5840010 	str	r0, [r4, #16]
        118854:	e5840014 	str	r0, [r4, #20]
        118858:	e5840018 	str	r0, [r4, #24]
        11885c:	e584001c 	str	r0, [r4, #28]
        118860:	e5840020 	str	r0, [r4, #32]
        118864:	e5840024 	str	r0, [r4, #36]
        118868:	e5840028 	str	r0, [r4, #40]
        11886c:	e584002c 	str	r0, [r4, #44]
        118870:	e5840030 	str	r0, [r4, #48]
        118874:	e5840034 	str	r0, [r4, #52]
        118878:	e5840038 	str	r0, [r4, #56]
        11887c:	e584003c 	str	r0, [r4, #60]	; fAdaptValue
        118880:	e5840040 	str	r0, [r4, #64]	; fLTRetransCount
        118884:	e5840044 	str	r0, [r4, #68]	; fLRRetransCount
        118888:	e5840048 	str	r0, [r4, #72]	; fRetransTotal
        11888c:	e1a00004 	mov	r0, r4
        118890:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        118894:	6d6e7073 	stcvsl	0, cr7, [lr, -#460]!
    */
}

