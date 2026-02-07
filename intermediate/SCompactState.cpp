#include "DDKIncludes/PSS/CompactState.h"

/**
 * Symbol: SCompactState::Init(void)
 * Address: 00070ed4
 */
void	SCompactState::Init( void );		// Initializes the struct {
    /*
         70ed4:	e1a0c00d 	mov	ip, sp
         70ed8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         70edc:	e24cb004 	sub	fp, ip, #4	; 0x4
         70ee0:	e1a04000 	mov	r4, r0
         70ee4:	e3a02000 	mov	r2, #0	; 0x0
         70ee8:	e3a01064 	mov	r1, #100	; 0x64
         70eec:	eb6db81f 	bl	1bdef70 <$FillLongs>
         70ef0:	e3a00000 	mov	r0, #0	; 0x0
         70ef4:	e5840004 	str	r0, [r4, #4]	; mMagicKey
         70ef8:	e59f000c 	ldr	r0, [pc, #c]	; 70f0c <SCompactState::Init(void)+0x38>
         70efc:	e5840000 	str	r0, [r4]
         70f00:	e59f0008 	ldr	r0, [pc, #8]	; 70f10 <SCompactState::Init(void)+0x3c>	; mUnknown_1
         70f04:	e5a40014 	str	r0, [r4, #20]!	; mUnknown_4
         70f08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         70f0c:	626c7467 	rsbvs	r7, ip, #1728053248	; 0x67000000
         70f10:	7a617266 	bvc	18cd8b0 <ROM$$Size+0x11adc64>
    */
}

/**
 * Symbol: SCompactState::IsValid(void)
 * Address: 00070f14
 */
Boolean	SCompactState::IsValid( void );	// Return true if the struct has been initialized (if both mMagicKey and mOtherMagicKey are set properly) {
    /*
         70f14:	e5901000 	ldr	r1, [r0]
         70f18:	e59fc01c 	ldr	ip, [pc, #1c]	; 70f3c <SCompactState::IsValid(void)+0x28>
         70f1c:	e131000c 	teq	r1, ip
         70f20:	05900014 	ldreq	r0, [r0, #20]	; mUnknown_4
         70f24:	059fc014 	ldreq	ip, [pc, #14]	; 70f40 <SCompactState::IsValid(void)+0x2c>
         70f28:	0130000c 	teqeq	r0, ip
         70f2c:	13a00000 	movne	r0, #0	; 0x0
         70f30:	03a00001 	moveq	r0, #1	; 0x1
         70f34:	e20000ff 	and	r0, r0, #255	; 0xff
         70f38:	e1a0f00e 	mov	pc, lr
         70f3c:	626c7467 	rsbvs	r7, ip, #1728053248	; 0x67000000
         70f40:	7a617266 	bvc	18cd8e0 <ROM$$Size+0x11adc94>
    */
}

/**
 * Symbol: SCompactState::InProgress(void)
 * Address: 00070f44
 */
Boolean	SCompactState::InProgress( void ) {
    /*
         70f44:	e1a0c00d 	mov	ip, sp
         70f48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         70f4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         70f50:	e1a04000 	mov	r4, r0
         70f54:	eb6a37f6 	bl	1afef34 <SCompactState::$IsValid(void)>
         70f58:	e3300000 	teq	r0, #0	; 0x0
         70f5c:	15b40004 	ldrne	r0, [r4, #4]!	; mMagicKey
         70f60:	13300000 	teqne	r0, #0	; 0x0
         70f64:	03a00000 	moveq	r0, #0	; 0x0
         70f68:	13a00001 	movne	r0, #1	; 0x1
         70f6c:	e20000ff 	and	r0, r0, #255	; 0xff
         70f70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

