#include "include/TCMOModemFaxClass1Cap.h"

/**
 * Symbol: TCMOModemFaxClass1Cap::__ct(void)
 * Address: 0011f918
 */
TCMOModemFaxClass1Cap::TCMOModemFaxClass1Cap(void) {
    /*
        11f918:	e1a0c00d 	mov	ip, sp
        11f91c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f920:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f924:	e1b04000 	movs	r4, r0
        11f928:	1a000003 	bne	11f93c <TCMOModemFaxClass1Cap::__ct(void)+0x24>
        11f92c:	e3a00024 	mov	r0, #36	; 0x24
        11f930:	eb6abb80 	bl	1bce738 <$__nw(unsigned int)>
        11f934:	e1b04000 	movs	r4, r0
        11f938:	0a00000e 	beq	11f978 <TCMOModemFaxClass1Cap::__ct(void)+0x60>
        11f93c:	e1a00004 	mov	r0, r4
        11f940:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f944:	eb6ba2bf 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
        11f948:	e59f0030 	ldr	r0, [pc, #30]	; 11f980 <TCMOModemFaxClass1Cap::__ct(void)+0x68>
        11f94c:	e5840000 	str	r0, [r4]
        11f950:	e3a00018 	mov	r0, #24	; 0x18
        11f954:	e5840004 	str	r0, [r4, #4]
        11f958:	e3a00a02 	mov	r0, #8192	; 0x2000
        11f95c:	e2400002 	sub	r0, r0, #2	; 0x2
        11f960:	e3a01001 	mov	r1, #1	; 0x1
        11f964:	e2844014 	add	r4, r4, #20	; 0x14
        11f968:	e8840003 	stmia	r4, {r0, r1}
        11f96c:	e2844008 	add	r4, r4, #8	; 0x8
        11f970:	e8840003 	stmia	r4, {r0, r1}
        11f974:	e244401c 	sub	r4, r4, #28	; 0x1c
        11f978:	e1a00004 	mov	r0, r4
        11f97c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f980:	6d663163 	stfvse	f3, [r6, -#396]!
    */
}

