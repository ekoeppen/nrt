#include "include/TTupleEquiv.h"

/**
 * Symbol: TTupleEquiv::Equal(unsigned long, unsigned short, unsigned char, unsigned char, unsigned char)
 * Address: 00127924
 */
TTupleEquiv::Equal(unsigned long, unsigned short, unsigned char, unsigned char, unsigned char) {
    /*
        127924:	e92d4010 	stmdb	sp!, {r4, lr}
        127928:	e1a02802 	mov	r2, r2, lsl #16
        12792c:	e1a02822 	mov	r2, r2, lsr #16
        127930:	e20330ff 	and	r3, r3, #255	; 0xff
        127934:	e59de008 	ldr	lr, [sp, #8]	; fField8
        127938:	e20ee0ff 	and	lr, lr, #255	; 0xff
        12793c:	e59dc00c 	ldr	ip, [sp, #12]
        127940:	e20cc0ff 	and	ip, ip, #255	; 0xff
        127944:	e5904000 	ldr	r4, [r0]
        127948:	e1310004 	teq	r1, r4
        12794c:	05901004 	ldreq	r1, [r0, #4]	; fField4
        127950:	01a01821 	moveq	r1, r1, lsr #16
        127954:	01310002 	teqeq	r1, r2
        127958:	05d01006 	ldreqb	r1, [r0, #6]	; fField6
        12795c:	01310003 	teqeq	r1, r3
        127960:	05d01007 	ldreqb	r1, [r0, #7]	; fField7
        127964:	0131000e 	teqeq	r1, lr
        127968:	05d00008 	ldreqb	r0, [r0, #8]	; fField8
        12796c:	0130000c 	teqeq	r0, ip
        127970:	13a00000 	movne	r0, #0	; 0x0
        127974:	03a00001 	moveq	r0, #1	; 0x1
        127978:	e20000ff 	and	r0, r0, #255	; 0xff
        12797c:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

