#include "include/TEzPipeProtocol.h"

/**
 * Symbol: TEzPipeProtocol::ProtocolInit(unsigned long, unsigned long)
 * Address: 00092664
 */
TEzPipeProtocol::ProtocolInit(unsigned long, unsigned long) {
    /*
         92664:	e9a00006 	stmib	r0!, {r1, r2}
         92668:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEzPipeProtocol::WriteDockerHeader(unsigned long, unsigned char)
 * Address: 00097288
 */
TEzPipeProtocol::WriteDockerHeader(unsigned long, unsigned char) {
    /*
         97288:	e1a0c00d 	mov	ip, sp
         9728c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         97290:	e24cb004 	sub	fp, ip, #4	; 0x4
         97294:	e1a04000 	mov	r4, r0
         97298:	e31200ff 	tst	r2, #255	; 0xff
         9729c:	e24dd010 	sub	sp, sp, #16	; 0x10
         972a0:	e3a0200c 	mov	r2, #12	; 0xc
         972a4:	e5943004 	ldr	r3, [r4, #4]	; fField4
         972a8:	e58d3000 	str	r3, [sp]
         972ac:	e5943008 	ldr	r3, [r4, #8]	; fField8
         972b0:	e58d1008 	str	r1, [sp, #8]	; fField8
         972b4:	e3a01000 	mov	r1, #0	; 0x0
         972b8:	e58d100c 	str	r1, [sp, #12]
         972bc:	e58d3004 	str	r3, [sp, #4]	; fField4
         972c0:	0a00000c 	beq	972f8 <TEzPipeProtocol::WriteDockerHeader(unsigned long, unsigned char)+0x70>
         972c4:	e3a02010 	mov	r2, #16	; 0x10
         972c8:	e1a0100d 	mov	r1, sp
         972cc:	e594c000 	ldr	ip, [r4]
         972d0:	e1a0000c 	mov	r0, ip
         972d4:	e3a03000 	mov	r3, #0	; 0x0
         972d8:	e59cc000 	ldr	ip, [ip]
         972dc:	e1a0e00f 	mov	lr, pc
         972e0:	e28cf018 	add	pc, ip, #24	; 0x18
         972e4:	e5940000 	ldr	r0, [r4]
         972e8:	e5901000 	ldr	r1, [r0]
         972ec:	e1a0e00f 	mov	lr, pc
         972f0:	e281f020 	add	pc, r1, #32	; 0x20
         972f4:	ea000006 	b	97314 <TEzPipeProtocol::WriteDockerHeader(unsigned long, unsigned char)+0x8c>
         972f8:	e1a0100d 	mov	r1, sp
         972fc:	e594c000 	ldr	ip, [r4]
         97300:	e1a0000c 	mov	r0, ip
         97304:	e3a03000 	mov	r3, #0	; 0x0
         97308:	e59cc000 	ldr	ip, [ip]
         9730c:	e1a0e00f 	mov	lr, pc
         97310:	e28cf018 	add	pc, ip, #24	; 0x18
         97314:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEzPipeProtocol::SendDockerHeader(unsigned long, unsigned char)
 * Address: 000978b8
 */
TEzPipeProtocol::SendDockerHeader(unsigned long, unsigned char) {
    /*
         978b8:	e20220ff 	and	r2, r2, #255	; 0xff
         978bc:	ea689551 	b	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TEzPipeProtocol::FindDockerHeader(unsigned long &, unsigned long &)
 * Address: 00098144
 */
TEzPipeProtocol::FindDockerHeader(unsigned long &, unsigned long &) {
    /*
         98144:	e1a0c00d 	mov	ip, sp
         98148:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9814c:	e24cb004 	sub	fp, ip, #4	; 0x4
         98150:	e1a04000 	mov	r4, r0
         98154:	e1a06001 	mov	r6, r1
         98158:	e1a05002 	mov	r5, r2
         9815c:	e24dd010 	sub	sp, sp, #16	; 0x10
         98160:	e3a00008 	mov	r0, #8	; 0x8
         98164:	e58d0004 	str	r0, [sp, #4]	; fField4
         98168:	e1a0300d 	mov	r3, sp
         9816c:	e28d2004 	add	r2, sp, #4	; 0x4
         98170:	e08d1000 	add	r1, sp, r0
         98174:	e594c000 	ldr	ip, [r4]
         98178:	e1a0000c 	mov	r0, ip
         9817c:	e59cc000 	ldr	ip, [ip]
         98180:	e1a0e00f 	mov	lr, pc
         98184:	e28cf014 	add	pc, ip, #20	; 0x14
         98188:	e24dd004 	sub	sp, sp, #4	; 0x4
         9818c:	ea00000c 	b	981c4 <TEzPipeProtocol::FindDockerHeader(unsigned long &, unsigned long &)+0x80>
         98190:	e1a0100d 	mov	r1, sp
         98194:	e5940000 	ldr	r0, [r4]
         98198:	eb6d3446 	bl	1be52b8 <CPipe::$__rs(char &)>
         9819c:	e59d000c 	ldr	r0, [sp, #12]
         981a0:	e1a01400 	mov	r1, r0, lsl #8
         981a4:	e59d0010 	ldr	r0, [sp, #16]
         981a8:	e1810c20 	orr	r0, r1, r0, lsr #24
         981ac:	e58d000c 	str	r0, [sp, #12]
         981b0:	e5dd0000 	ldrb	r0, [sp]
         981b4:	e20010ff 	and	r1, r0, #255	; 0xff
         981b8:	e59d0010 	ldr	r0, [sp, #16]
         981bc:	e1810400 	orr	r0, r1, r0, lsl #8
         981c0:	e58d0010 	str	r0, [sp, #16]
         981c4:	e5941004 	ldr	r1, [r4, #4]	; fField4
         981c8:	e59d000c 	ldr	r0, [sp, #12]
         981cc:	e1310000 	teq	r1, r0
         981d0:	059d0010 	ldreq	r0, [sp, #16]
         981d4:	05941008 	ldreq	r1, [r4, #8]	; fField8
         981d8:	01300001 	teqeq	r0, r1
         981dc:	1affffeb 	bne	98190 <TEzPipeProtocol::FindDockerHeader(unsigned long &, unsigned long &)+0x4c>
         981e0:	e3a00008 	mov	r0, #8	; 0x8
         981e4:	e52d000c 	str	r0, [sp, -#12]!
         981e8:	e28d3010 	add	r3, sp, #16	; 0x10
         981ec:	e1a0200d 	mov	r2, sp
         981f0:	e28d1004 	add	r1, sp, #4	; 0x4
         981f4:	e594c000 	ldr	ip, [r4]
         981f8:	e1a0000c 	mov	r0, ip
         981fc:	e59cc000 	ldr	ip, [ip]
         98200:	e1a0e00f 	mov	lr, pc
         98204:	e28cf014 	add	pc, ip, #20	; 0x14
         98208:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9820c:	e5860000 	str	r0, [r6]
         98210:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         98214:	e5850000 	str	r0, [r5]
         98218:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEzPipeProtocol::ReadDockerHeader(unsigned long &, unsigned long &)
 * Address: 00098de0
 */
TEzPipeProtocol::ReadDockerHeader(unsigned long &, unsigned long &) {
    /*
         98de0:	e1a0c00d 	mov	ip, sp
         98de4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         98de8:	e24cb004 	sub	fp, ip, #4	; 0x4
         98dec:	e1a04000 	mov	r4, r0
         98df0:	e1a06001 	mov	r6, r1
         98df4:	e1a05002 	mov	r5, r2
         98df8:	e24dd010 	sub	sp, sp, #16	; 0x10
         98dfc:	e3a00008 	mov	r0, #8	; 0x8
         98e00:	e58d0004 	str	r0, [sp, #4]	; fField4
         98e04:	e1a0300d 	mov	r3, sp
         98e08:	e28d2004 	add	r2, sp, #4	; 0x4
         98e0c:	e08d1000 	add	r1, sp, r0
         98e10:	e594c000 	ldr	ip, [r4]
         98e14:	e1a0000c 	mov	r0, ip
         98e18:	e59cc000 	ldr	ip, [ip]
         98e1c:	e1a0e00f 	mov	lr, pc
         98e20:	e28cf014 	add	pc, ip, #20	; 0x14
         98e24:	e5941004 	ldr	r1, [r4, #4]	; fField4
         98e28:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         98e2c:	e1310000 	teq	r1, r0
         98e30:	059d100c 	ldreq	r1, [sp, #12]
         98e34:	05940008 	ldreq	r0, [r4, #8]	; fField8
         98e38:	01310000 	teqeq	r1, r0
         98e3c:	0a000005 	beq	98e58 <TEzPipeProtocol::ReadDockerHeader(unsigned long &, unsigned long &)+0x78>
         98e40:	e59f004c 	ldr	r0, [pc, #4c]	; 98e94 <TEzPipeProtocol::ReadDockerHeader(unsigned long &, unsigned long &)+0xb4>	; fField4
         98e44:	e5900000 	ldr	r0, [r0]
         98e48:	e3a02000 	mov	r2, #0	; 0x0
         98e4c:	e3a01e29 	mov	r1, #656	; 0x290
         98e50:	e2411a07 	sub	r1, r1, #28672	; 0x7000
         98e54:	eb6d28d0 	bl	1be319c <$Throw>
         98e58:	e3a00008 	mov	r0, #8	; 0x8
         98e5c:	e52d000c 	str	r0, [sp, -#12]!
         98e60:	e28d300c 	add	r3, sp, #12	; 0xc
         98e64:	e1a0200d 	mov	r2, sp
         98e68:	e28d1004 	add	r1, sp, #4	; 0x4
         98e6c:	e594c000 	ldr	ip, [r4]
         98e70:	e1a0000c 	mov	r0, ip
         98e74:	e59cc000 	ldr	ip, [ip]
         98e78:	e1a0e00f 	mov	lr, pc
         98e7c:	e28cf014 	add	pc, ip, #20	; 0x14
         98e80:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98e84:	e5860000 	str	r0, [r6]
         98e88:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         98e8c:	e5850000 	str	r0, [r5]
         98e90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         98e94:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

