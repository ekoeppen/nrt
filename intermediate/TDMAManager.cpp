#include "include/TDMAManager.h"

/**
 * Symbol: TDMAManager::Init(void)
 * Address: 0007cc4c
 */
TDMAManager::Init(void) {
    /*
         7cc4c:	e3a00000 	mov	r0, #0	; 0x0
         7cc50:	e59f1010 	ldr	r1, [pc, #10]	; 7cc68 <TDMAManager::Init(void)+0x1c>
         7cc54:	e5810000 	str	r0, [r1]
         7cc58:	e3a010ff 	mov	r1, #255	; 0xff
         7cc5c:	e59f2008 	ldr	r2, [pc, #8]	; 7cc6c <TDMAManager::Init(void)+0x20>
         7cc60:	e5821000 	str	r1, [r2]
         7cc64:	e1a0f00e 	mov	pc, lr
         7cc68:	0f08fc00 	swieq	0x0008fc00
         7cc6c:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)
 * Address: 0007cc70
 */
TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *) {
    /*
         7cc70:	e1a0c00d 	mov	ip, sp
         7cc74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7cc78:	e24cb004 	sub	fp, ip, #4	; 0x4
         7cc7c:	e1a04001 	mov	r4, r1
         7cc80:	e1a05002 	mov	r5, r2
         7cc84:	e3a06000 	mov	r6, #0	; 0x0
         7cc88:	eb0c578c 	bl	392ac0 <EnterAtomic>
         7cc8c:	e59f2094 	ldr	r2, [pc, #94]	; 7cd28 <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xb8>
         7cc90:	e5921000 	ldr	r1, [r2]
         7cc94:	e59f0090 	ldr	r0, [pc, #90]	; 7cd2c <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xbc>
         7cc98:	e7900104 	ldr	r0, [r0, r4, lsl #2]	; fField2
         7cc9c:	e1d13000 	bics	r3, r1, r0
         7cca0:	e59f0088 	ldr	r0, [pc, #88]	; 7cd30 <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xc0>
         7cca4:	1790c104 	ldrne	ip, [r0, r4, lsl #2]	; fField2
         7cca8:	113c0003 	teqne	ip, r3
         7ccac:	07900104 	ldreq	r0, [r0, r4, lsl #2]	; fField2
         7ccb0:	01800001 	orreq	r0, r0, r1
         7ccb4:	05820000 	streq	r0, [r2]
         7ccb8:	13a060a2 	movne	r6, #162	; 0xa2
         7ccbc:	12466b0a 	subne	r6, r6, #10240	; 0x2800
         7ccc0:	eb0c5795 	bl	392b1c <ExitAtomic>
         7ccc4:	e3360000 	teq	r6, #0	; 0x0
         7ccc8:	1a000014 	bne	7cd20 <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xb0>
         7cccc:	e3350000 	teq	r5, #0	; 0x0
         7ccd0:	0a000012 	beq	7cd20 <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xb0>
         7ccd4:	e59f0058 	ldr	r0, [pc, #58]	; 7cd34 <TDMAManager::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)+0xc4>
         7ccd8:	e7d01004 	ldrb	r1, [r0, r4]
         7ccdc:	e3a027c2 	mov	r2, #50855936	; 0x3080000
         7cce0:	e2822303 	add	r2, r2, #201326592	; 0xc000000
         7cce4:	e0821681 	add	r1, r2, r1, lsl #13
         7cce8:	e5851000 	str	r1, [r5]
         7ccec:	e7d02004 	ldrb	r2, [r0, r4]
         7ccf0:	e3a01809 	mov	r1, #589824	; 0x90000
         7ccf4:	e281140f 	add	r1, r1, #251658240	; 0xf000000
         7ccf8:	e0811602 	add	r1, r1, r2, lsl #12
         7ccfc:	e5851004 	str	r1, [r5, #4]
         7cd00:	e7d02004 	ldrb	r2, [r0, r4]
         7cd04:	e3a01001 	mov	r1, #1	; 0x1
         7cd08:	e1a02211 	mov	r2, r1, lsl r2
         7cd0c:	e5852008 	str	r2, [r5, #8]
         7cd10:	e7d00004 	ldrb	r0, [r0, r4]
         7cd14:	e1a00011 	mov	r0, r1, lsl r0
         7cd18:	e1a00380 	mov	r0, r0, lsl #7
         7cd1c:	e5a5000c 	str	r0, [r5, #12]!
         7cd20:	e1a00006 	mov	r0, r6
         7cd24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         7cd28:	0f08fc00 	swieq	0x0008fc00
         7cd2c:	0037070c 	eoreqs	r0, r7, ip, lsl #14
         7cd30:	003706e0 	eoreqs	r0, r7, r0, ror #13
         7cd34:	00370738 	eoreqs	r0, r7, r8, lsr r7
    */
}

/**
 * Symbol: TDMAManager::PowerOnAssignment(unsigned long)
 * Address: 0007cd38
 */
TDMAManager::PowerOnAssignment(unsigned long) {
    /*
         7cd38:	e1a0c00d 	mov	ip, sp
         7cd3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7cd40:	e24cb004 	sub	fp, ip, #4	; 0x4
         7cd44:	e1a04001 	mov	r4, r1
         7cd48:	e3a05000 	mov	r5, #0	; 0x0
         7cd4c:	eb0c575b 	bl	392ac0 <EnterAtomic>
         7cd50:	e59f0030 	ldr	r0, [pc, #30]	; 7cd88 <TDMAManager::PowerOnAssignment(unsigned long)+0x50>
         7cd54:	e5900000 	ldr	r0, [r0]
         7cd58:	e59f102c 	ldr	r1, [pc, #2c]	; 7cd8c <TDMAManager::PowerOnAssignment(unsigned long)+0x54>	; fField2
         7cd5c:	e7911104 	ldr	r1, [r1, r4, lsl #2]	; fField2
         7cd60:	e1c00001 	bic	r0, r0, r1
         7cd64:	e59f1024 	ldr	r1, [pc, #24]	; 7cd90 <TDMAManager::PowerOnAssignment(unsigned long)+0x58>
         7cd68:	e7911104 	ldr	r1, [r1, r4, lsl #2]	; fField2
         7cd6c:	e1310000 	teq	r1, r0
         7cd70:	1a000008 	bne	7cd98 <TDMAManager::PowerOnAssignment(unsigned long)+0x60>
         7cd74:	e59f0018 	ldr	r0, [pc, #18]	; 7cd94 <TDMAManager::PowerOnAssignment(unsigned long)+0x5c>
         7cd78:	e7d00004 	ldrb	r0, [r0, r4]
         7cd7c:	e2800022 	add	r0, r0, #34	; 0x22
         7cd80:	eb6e3a1a 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         7cd84:	ea000005 	b	7cda0 <TDMAManager::PowerOnAssignment(unsigned long)+0x68>
         7cd88:	0f08fc00 	swieq	0x0008fc00
         7cd8c:	0037070c 	eoreqs	r0, r7, ip, lsl #14
         7cd90:	003706e0 	eoreqs	r0, r7, r0, ror #13
         7cd94:	00370738 	eoreqs	r0, r7, r8, lsr r7
         7cd98:	e3a050a1 	mov	r5, #161	; 0xa1
         7cd9c:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         7cda0:	eb0c575d 	bl	392b1c <ExitAtomic>
         7cda4:	e1a00005 	mov	r0, r5
         7cda8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDMAManager::PowerOffAssignment(unsigned long)
 * Address: 0007cdac
 */
TDMAManager::PowerOffAssignment(unsigned long) {
    /*
         7cdac:	e1a0c00d 	mov	ip, sp
         7cdb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7cdb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         7cdb8:	e1a04001 	mov	r4, r1
         7cdbc:	e3a05000 	mov	r5, #0	; 0x0
         7cdc0:	eb0c573e 	bl	392ac0 <EnterAtomic>
         7cdc4:	e59f0030 	ldr	r0, [pc, #30]	; 7cdfc <TDMAManager::PowerOffAssignment(unsigned long)+0x50>
         7cdc8:	e5900000 	ldr	r0, [r0]
         7cdcc:	e59f102c 	ldr	r1, [pc, #2c]	; 7ce00 <TDMAManager::PowerOffAssignment(unsigned long)+0x54>	; fField2
         7cdd0:	e7911104 	ldr	r1, [r1, r4, lsl #2]	; fField2
         7cdd4:	e1c00001 	bic	r0, r0, r1
         7cdd8:	e59f1024 	ldr	r1, [pc, #24]	; 7ce04 <TDMAManager::PowerOffAssignment(unsigned long)+0x58>
         7cddc:	e7911104 	ldr	r1, [r1, r4, lsl #2]	; fField2
         7cde0:	e1310000 	teq	r1, r0
         7cde4:	1a000008 	bne	7ce0c <TDMAManager::PowerOffAssignment(unsigned long)+0x60>
         7cde8:	e59f0018 	ldr	r0, [pc, #18]	; 7ce08 <TDMAManager::PowerOffAssignment(unsigned long)+0x5c>
         7cdec:	e7d00004 	ldrb	r0, [r0, r4]
         7cdf0:	e2800022 	add	r0, r0, #34	; 0x22
         7cdf4:	eb6e39fc 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
         7cdf8:	ea000005 	b	7ce14 <TDMAManager::PowerOffAssignment(unsigned long)+0x68>
         7cdfc:	0f08fc00 	swieq	0x0008fc00
         7ce00:	0037070c 	eoreqs	r0, r7, ip, lsl #14
         7ce04:	003706e0 	eoreqs	r0, r7, r0, ror #13
         7ce08:	00370738 	eoreqs	r0, r7, r8, lsr r7
         7ce0c:	e3a050a1 	mov	r5, #161	; 0xa1
         7ce10:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         7ce14:	eb0c5740 	bl	392b1c <ExitAtomic>
         7ce18:	e1a00005 	mov	r0, r5
         7ce1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

