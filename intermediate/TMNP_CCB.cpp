#include "include/TMNP_CCB.h"

/**
 * Symbol: TMNP_CCB::__ct(void)
 * Address: 0011a8ac
 */
TMNP_CCB::TMNP_CCB(void) {
    /*
        11a8ac:	e1a0c00d 	mov	ip, sp
        11a8b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11a8b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a8b8:	e1b04000 	movs	r4, r0
        11a8bc:	1a000004 	bne	11a8d4 <TMNP_CCB::__ct(void)+0x28>
        11a8c0:	e3a00f5d 	mov	r0, #372	; 0x174
        11a8c4:	e2800b03 	add	r0, r0, #3072	; 0xc00
        11a8c8:	eb6acf9a 	bl	1bce738 <$__nw(unsigned int)>
        11a8cc:	e1b04000 	movs	r4, r0
        11a8d0:	0a00002b 	beq	11a984 <TMNP_CCB::__ct(void)+0xd8>
        11a8d4:	e2840040 	add	r0, r4, #64	; 0x40
        11a8d8:	eb6bb6e7 	bl	1c0847c <TCircleBuf::$__ct(void)>
        11a8dc:	e2840068 	add	r0, r4, #104	; 0x68
        11a8e0:	eb6bb6e5 	bl	1c0847c <TCircleBuf::$__ct(void)>
        11a8e4:	e2441fff 	sub	r1, r4, #1020	; 0x3fc
        11a8e8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11a8ec:	e1a05001 	mov	r5, r1
        11a8f0:	e28400c4 	add	r0, r4, #196	; 0xc4
        11a8f4:	e59f3090 	ldr	r3, [pc, #90]	; 11a98c <TMNP_CCB::__ct(void)+0xe0>
        11a8f8:	e3a02f5a 	mov	r2, #360	; 0x168
        11a8fc:	eb63aa60 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        11a900:	e1a00005 	mov	r0, r5
        11a904:	eb6b263e 	bl	1be4204 <CBufferSegment::$__ct(void)>
        11a908:	e2440ff5 	sub	r0, r4, #980	; 0x3d4
        11a90c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11a910:	eb6b222a 	bl	1be31c0 <CBufferList::$__ct(void)>
        11a914:	e2440fe2 	sub	r0, r4, #904	; 0x388
        11a918:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11a91c:	eb6b2227 	bl	1be31c0 <CBufferList::$__ct(void)>
        11a920:	e2440fda 	sub	r0, r4, #872	; 0x368
        11a924:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11a928:	eb6b2635 	bl	1be4204 <CBufferSegment::$__ct(void)>
        11a92c:	e2840d33 	add	r0, r4, #3264	; 0xcc0
        11a930:	eb6bb6d1 	bl	1c0847c <TCircleBuf::$__ct(void)>
        11a934:	e2440fbb 	sub	r0, r4, #748	; 0x2ec
        11a938:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11a93c:	eb6a8523 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
        11a940:	e2440fb6 	sub	r0, r4, #728	; 0x2d8
        11a944:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11a948:	eb6a8524 	bl	1bbbde0 <TCMOMNPStatistics::$__ct(void)>
        11a94c:	e3a00000 	mov	r0, #0	; 0x0
        11a950:	e5840010 	str	r0, [r4, #16]
        11a954:	e3a0101e 	mov	r1, #30	; 0x1e
        11a958:	e5841090 	str	r1, [r4, #144]
        11a95c:	e3a01032 	mov	r1, #50	; 0x32
        11a960:	e584001c 	str	r0, [r4, #28]
        11a964:	e5841094 	str	r1, [r4, #148]
        11a968:	e5840cec 	str	r0, [r4, #3308]
        11a96c:	e5840cf0 	str	r0, [r4, #3312]
        11a970:	e5840cf4 	str	r0, [r4, #3316]
        11a974:	e5840cf8 	str	r0, [r4, #3320]
        11a978:	e5840d10 	str	r0, [r4, #3344]
        11a97c:	e5840000 	str	r0, [r4]
        11a980:	e5840004 	str	r0, [r4, #4]
        11a984:	e1a00004 	mov	r0, r4
        11a988:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        11a98c:	01a094dc 	ldreqd	r9, [r0, ip]!
    */
}

/**
 * Symbol: TMNP_CCB::Init(void)
 * Address: 0011ae10
 */
TMNP_CCB::Init(void) {
    /*
        11ae10:	e1a0c00d 	mov	ip, sp
        11ae14:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        11ae18:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ae1c:	e1a04000 	mov	r4, r0
        11ae20:	e3a00000 	mov	r0, #0	; 0x0
        11ae24:	e3a0500a 	mov	r5, #10	; 0xa
        11ae28:	e2855c01 	add	r5, r5, #256	; 0x100
        11ae2c:	e2809001 	add	r9, r0, #1	; 0x1
        11ae30:	e2091007 	and	r1, r9, #7	; 0x7
        11ae34:	e0611201 	rsb	r1, r1, r1, lsl #4
        11ae38:	e0811081 	add	r1, r1, r1, lsl #1
        11ae3c:	e0841181 	add	r1, r4, r1, lsl #3
        11ae40:	e28120c4 	add	r2, r1, #196	; 0xc4
        11ae44:	e0601200 	rsb	r1, r0, r0, lsl #4
        11ae48:	e0811081 	add	r1, r1, r1, lsl #1
        11ae4c:	e0841181 	add	r1, r4, r1, lsl #3
        11ae50:	e1a07001 	mov	r7, r1
        11ae54:	e2400001 	sub	r0, r0, #1	; 0x1
        11ae58:	e2000007 	and	r0, r0, #7	; 0x7
        11ae5c:	e0600200 	rsb	r0, r0, r0, lsl #4
        11ae60:	e0800080 	add	r0, r0, r0, lsl #1
        11ae64:	e0840180 	add	r0, r4, r0, lsl #3
        11ae68:	e28000c4 	add	r0, r0, #196	; 0xc4
        11ae6c:	e58100c8 	str	r0, [r1, #200]
        11ae70:	e58120c4 	str	r2, [r1, #196]
        11ae74:	e28100d8 	add	r0, r1, #216	; 0xd8
        11ae78:	e1a08000 	mov	r8, r0
        11ae7c:	e3a01000 	mov	r1, #0	; 0x0
        11ae80:	eb6b3981 	bl	1be948c <CBufferList::$Init(unsigned char)>
        11ae84:	e1b06000 	movs	r6, r0
        11ae88:	1a000028 	bne	11af30 <TMNP_CCB::Init(void)+0x120>
        11ae8c:	e3e03000 	mvn	r3, #0	; 0x0
        11ae90:	e3a02000 	mov	r2, #0	; 0x0
        11ae94:	e92d000c 	stmdb	sp!, {r2, r3}
        11ae98:	e2871e12 	add	r1, r7, #288	; 0x120
        11ae9c:	e28700f8 	add	r0, r7, #248	; 0xf8
        11aea0:	e1a07000 	mov	r7, r0
        11aea4:	e3a03000 	mov	r3, #0	; 0x0
        11aea8:	e1a02005 	mov	r2, r5
        11aeac:	eb6b397e 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        11aeb0:	e28dd008 	add	sp, sp, #8	; 0x8
        11aeb4:	e1b06000 	movs	r6, r0
        11aeb8:	1a00001c 	bne	11af30 <TMNP_CCB::Init(void)+0x120>
        11aebc:	e1a01007 	mov	r1, r7
        11aec0:	e1a00008 	mov	r0, r8
        11aec4:	eb6b3d8e 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        11aec8:	e1a00009 	mov	r0, r9
        11aecc:	e3590008 	cmp	r9, #8	; 0x8
        11aed0:	3affffd5 	bcc	11ae2c <TMNP_CCB::Init(void)+0x1c>
        11aed4:	e2440ff5 	sub	r0, r4, #980	; 0x3d4
        11aed8:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11aedc:	e1a05000 	mov	r5, r0
        11aee0:	e3a01000 	mov	r1, #0	; 0x0
        11aee4:	eb6b3968 	bl	1be948c <CBufferList::$Init(unsigned char)>
        11aee8:	e1b06000 	movs	r6, r0
        11aeec:	1a00000f 	bne	11af30 <TMNP_CCB::Init(void)+0x120>
        11aef0:	e3e03000 	mvn	r3, #0	; 0x0
        11aef4:	e3a02000 	mov	r2, #0	; 0x0
        11aef8:	e92d000c 	stmdb	sp!, {r2, r3}
        11aefc:	e2441fed 	sub	r1, r4, #948	; 0x3b4
        11af00:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11af04:	e2440fff 	sub	r0, r4, #1020	; 0x3fc
        11af08:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11af0c:	e1a04000 	mov	r4, r0
        11af10:	e3a03000 	mov	r3, #0	; 0x0
        11af14:	e3a0200a 	mov	r2, #10	; 0xa
        11af18:	eb6b3963 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        11af1c:	e28dd008 	add	sp, sp, #8	; 0x8
        11af20:	e1b06000 	movs	r6, r0
        11af24:	01a01004 	moveq	r1, r4
        11af28:	01a00005 	moveq	r0, r5
        11af2c:	0b6b3d74 	bleq	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        11af30:	e1a00006 	mov	r0, r6
        11af34:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

