#include "DDKIncludes/PCMCIA/CardPCMCIA.h"

/**
 * Symbol: TCardPackage::__ct(void)
 * Address: 0004efe0
 */
TCardPackage::TCardPackage() {
    /*
         4efe0:	e1a0c00d 	mov	ip, sp
         4efe4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4efe8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4efec:	e3300000 	teq	r0, #0	; 0x0
         4eff0:	1a000003 	bne	4f004 <TCardPackage::__ct(void)+0x24>
         4eff4:	e3a0001c 	mov	r0, #28	; 0x1c
         4eff8:	eb6dfdce 	bl	1bce738 <$__nw(unsigned int)>
         4effc:	e3300000 	teq	r0, #0	; 0x0
         4f000:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4f004:	e3a01000 	mov	r1, #0	; 0x0
         4f008:	e5801008 	str	r1, [r0, #8]	; fLength
         4f00c:	e5801004 	str	r1, [r0, #4]	; fAddress
         4f010:	e5801000 	str	r1, [r0]
         4f014:	e5c0100f 	strb	r1, [r0, #15]	; fField15
         4f018:	e5c0100e 	strb	r1, [r0, #14]	; fField14
         4f01c:	e5c0100d 	strb	r1, [r0, #13]	; fField13
         4f020:	e5c0100c 	strb	r1, [r0, #12]	; fVersion
         4f024:	e5801018 	str	r1, [r0, #24]	; fReserved0
         4f028:	e5801014 	str	r1, [r0, #20]	; fAttribute
         4f02c:	e5801010 	str	r1, [r0, #16]	; fType
         4f030:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardPackage::__dt(void)
 * Address: 0004f034
 */
TCardPackage::~TCardPackage() {
    /*
         4f034:	e1a0c00d 	mov	ip, sp
         4f038:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4f03c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f040:	e1a04000 	mov	r4, r0
         4f044:	e1a05001 	mov	r5, r1
         4f048:	e5900010 	ldr	r0, [r0, #16]	; fType
         4f04c:	eb6df9a3 	bl	1bcd6e0 <$__dl(void *)>
         4f050:	e5940014 	ldr	r0, [r4, #20]	; fAttribute
         4f054:	eb6df9a1 	bl	1bcd6e0 <$__dl(void *)>
         4f058:	e5940018 	ldr	r0, [r4, #24]	; fReserved0
         4f05c:	eb6df99f 	bl	1bcd6e0 <$__dl(void *)>
         4f060:	e3150001 	tst	r5, #1	; 0x1
         4f064:	11a00004 	movne	r0, r4
         4f068:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4f06c:	1a6df99b 	bne	1bcd6e0 <$__dl(void *)>
         4f070:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPackage::SetName(char *)
 * Address: 0004f074
 */
char*			TCardPackage::SetName(char* srcStr);						// Set name {
    /*
         4f074:	e2800010 	add	r0, r0, #16	; 0x10
         4f078:	ea6e335f 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPackage::GetName( const(void))
 * Address: 0004f07c
 */
const char*		TCardPackage::GetName() const;							// Get name {
    /*
         4f07c:	e5900010 	ldr	r0, [r0, #16]	; fType
         4f080:	e3300000 	teq	r0, #0	; 0x0
         4f084:	059f0004 	ldreq	r0, [pc, #4]	; 4f090 <TCardPackage::GetName( const(void))+0x14>	; fAddress
         4f088:	05900008 	ldreq	r0, [r0, #8]	; fLength
         4f08c:	e1a0f00e 	mov	pc, lr
         4f090:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPackage::SetCPUType(char *)
 * Address: 0004f094
 */
char*			TCardPackage::SetCPUType(char* srcStr);					// Set CPU type {
    /*
         4f094:	e2800014 	add	r0, r0, #20	; 0x14
         4f098:	ea6e3357 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPackage::GetCPUType( const(void))
 * Address: 0004f09c
 */
const char*		TCardPackage::GetCPUType() const;							// Get CPU type {
    /*
         4f09c:	e5900014 	ldr	r0, [r0, #20]	; fAttribute
         4f0a0:	e3300000 	teq	r0, #0	; 0x0
         4f0a4:	059f0004 	ldreq	r0, [pc, #4]	; 4f0b0 <TCardPackage::GetCPUType( const(void))+0x14>	; fAddress
         4f0a8:	05900008 	ldreq	r0, [r0, #8]	; fLength
         4f0ac:	e1a0f00e 	mov	pc, lr
         4f0b0:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

/**
 * Symbol: TCardPackage::SetOSType(char *)
 * Address: 0004f0b4
 */
char*			TCardPackage::SetOSType(char* srcStr);					// Set OS type {
    /*
         4f0b4:	e2800018 	add	r0, r0, #24	; 0x18
         4f0b8:	ea6e334f 	b	1bdbdfc <$SetString(char *&, char const *)>
    */
}

/**
 * Symbol: TCardPackage::GetOSType( const(void))
 * Address: 0004f0bc
 */
const char*		TCardPackage::GetOSType() const;							// Get OS type {
    /*
         4f0bc:	e5900018 	ldr	r0, [r0, #24]	; fReserved0
         4f0c0:	e3300000 	teq	r0, #0	; 0x0
         4f0c4:	059f0004 	ldreq	r0, [pc, #4]	; 4f0d0 <TCardPackage::GetOSType( const(void))+0x14>	; fAddress
         4f0c8:	05900008 	ldreq	r0, [r0, #8]	; fLength
         4f0cc:	e1a0f00e 	mov	pc, lr
         4f0d0:	0c100974 	ldceq	9, cr0, [r0], -#464
    */
}

