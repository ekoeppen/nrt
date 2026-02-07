#include "include/TLicenseeVAddress.h"

/**
 * Symbol: TLicenseeVAddress::__ct(unsigned long)
 * Address: 0025be34
 */
TLicenseeVAddress::TLicenseeVAddress(unsigned long) {
    /*
        25be34:	e1a0c00d 	mov	ip, sp
        25be38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25be3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25be40:	e1b04000 	movs	r4, r0
        25be44:	e1a05001 	mov	r5, r1
        25be48:	1a000003 	bne	25be5c <TLicenseeVAddress::__ct(unsigned long)+0x28>
        25be4c:	e3a00018 	mov	r0, #24	; 0x18
        25be50:	eb65ca38 	bl	1bce738 <$__nw(unsigned int)>
        25be54:	e1b04000 	movs	r4, r0
        25be58:	0a000009 	beq	25be84 <TLicenseeVAddress::__ct(unsigned long)+0x50>
        25be5c:	e3a00000 	mov	r0, #0	; 0x0
        25be60:	e5c40004 	strb	r0, [r4, #4]	; fField4
        25be64:	e5840010 	str	r0, [r4, #16]	; fField16
        25be68:	e5845000 	str	r5, [r4]
        25be6c:	e5c40014 	strb	r0, [r4, #20]	; fField20
        25be70:	e5c40015 	strb	r0, [r4, #21]	; fField21
        25be74:	eb62ce51 	bl	1b0f7c0 <$GetLicenseeDomainInfo(void)>
        25be78:	e5840008 	str	r0, [r4, #8]	; fField8
        25be7c:	e5900000 	ldr	r0, [r0]
        25be80:	e584000c 	str	r0, [r4, #12]	; fField12
        25be84:	e1a00004 	mov	r0, r4
        25be88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::__ct(TLicenseeVAddress const &)
 * Address: 0025be8c
 */
TLicenseeVAddress::TLicenseeVAddress(TLicenseeVAddress const &) {
    /*
        25be8c:	e1a0c00d 	mov	ip, sp
        25be90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25be94:	e24cb004 	sub	fp, ip, #4	; 0x4
        25be98:	e1a04001 	mov	r4, r1
        25be9c:	e3300000 	teq	r0, #0	; 0x0
        25bea0:	1a000003 	bne	25beb4 <TLicenseeVAddress::__ct(TLicenseeVAddress const &)+0x28>
        25bea4:	e3a00018 	mov	r0, #24	; 0x18
        25bea8:	eb65ca22 	bl	1bce738 <$__nw(unsigned int)>
        25beac:	e3300000 	teq	r0, #0	; 0x0
        25beb0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        25beb4:	e3a01000 	mov	r1, #0	; 0x0
        25beb8:	e5942000 	ldr	r2, [r4]
        25bebc:	e5c01004 	strb	r1, [r0, #4]	; fField4
        25bec0:	e5802000 	str	r2, [r0]
        25bec4:	e5942010 	ldr	r2, [r4, #16]	; fField16
        25bec8:	e5802010 	str	r2, [r0, #16]	; fField16
        25becc:	e594200c 	ldr	r2, [r4, #12]	; fField12
        25bed0:	e580200c 	str	r2, [r0, #12]	; fField12
        25bed4:	e5c01014 	strb	r1, [r0, #20]	; fField20
        25bed8:	e5c01015 	strb	r1, [r0, #21]	; fField21
        25bedc:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        25bee0:	e5801008 	str	r1, [r0, #8]	; fField8
        25bee4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::__dt(void)
 * Address: 0025bfb0
 */
TLicenseeVAddress::~TLicenseeVAddress(void) {
    /*
        25bfb0:	e1a0c00d 	mov	ip, sp
        25bfb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25bfb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bfbc:	e1a04000 	mov	r4, r0
        25bfc0:	e1a05001 	mov	r5, r1
        25bfc4:	eb66b114 	bl	1c0841c <TLicenseeVAddress::$Unmap(void)>
        25bfc8:	e1a00004 	mov	r0, r4
        25bfcc:	e3a01000 	mov	r1, #0	; 0x0
        25bfd0:	eb65c9d3 	bl	1bce724 <TUObject::$__dt(void)>
        25bfd4:	e3150001 	tst	r5, #1	; 0x1
        25bfd8:	11a00004 	movne	r0, r4
        25bfdc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        25bfe0:	1a65c5be 	bne	1bcd6e0 <$__dl(void *)>
        25bfe4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::operator=(TUPhys const &)
 * Address: 0025bfe8
 */
TLicenseeVAddress::operator=(TUPhys const &) {
    /*
        25bfe8:	e1a0c00d 	mov	ip, sp
        25bfec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25bff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bff4:	e1a04000 	mov	r4, r0
        25bff8:	e5911000 	ldr	r1, [r1]
        25bffc:	eb65d211 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25c000:	e3a00000 	mov	r0, #0	; 0x0
        25c004:	e5840010 	str	r0, [r4, #16]	; fField16
        25c008:	e5c40014 	strb	r0, [r4, #20]	; fField20
        25c00c:	e5c40015 	strb	r0, [r4, #21]	; fField21
        25c010:	eb62cdea 	bl	1b0f7c0 <$GetLicenseeDomainInfo(void)>
        25c014:	e5840008 	str	r0, [r4, #8]	; fField8
        25c018:	e5900000 	ldr	r0, [r0]
        25c01c:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        25c020:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::operator=(TLicenseeVAddress const &)
 * Address: 0025c024
 */
TLicenseeVAddress::operator=(TLicenseeVAddress const &) {
    /*
        25c024:	e1a0c00d 	mov	ip, sp
        25c028:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c02c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c030:	e1a04000 	mov	r4, r0
        25c034:	e1a05001 	mov	r5, r1
        25c038:	e5911000 	ldr	r1, [r1]
        25c03c:	eb65d201 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25c040:	e5950010 	ldr	r0, [r5, #16]	; fField16
        25c044:	e5840010 	str	r0, [r4, #16]	; fField16
        25c048:	e3a00000 	mov	r0, #0	; 0x0
        25c04c:	e5c40014 	strb	r0, [r4, #20]	; fField20
        25c050:	e5c40015 	strb	r0, [r4, #21]	; fField21
        25c054:	e5950008 	ldr	r0, [r5, #8]	; fField8
        25c058:	e5840008 	str	r0, [r4, #8]	; fField8
        25c05c:	e5b5000c 	ldr	r0, [r5, #12]!	; fField12
        25c060:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        25c064:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::AddDomainToEnvironment(void)
 * Address: 0025c068
 */
TLicenseeVAddress::AddDomainToEnvironment(void) {
    /*
        25c068:	e1a0c00d 	mov	ip, sp
        25c06c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c070:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c074:	e1a04000 	mov	r4, r0
        25c078:	e24dd004 	sub	sp, sp, #4	; 0x4
        25c07c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        25c080:	e3300000 	teq	r0, #0	; 0x0
        25c084:	03e0500f 	mvneq	r5, #15	; 0xf
        25c088:	02455c27 	subeq	r5, r5, #9984	; 0x2700
        25c08c:	0a000014 	beq	25c0e4 <TLicenseeVAddress::AddDomainToEnvironment(void)+0x7c>
        25c090:	e1a0000d 	mov	r0, sp
        25c094:	eb65de4a 	bl	1bd39c4 <$GetEnvironment(unsigned long *)>
        25c098:	e24dd008 	sub	sp, sp, #8	; 0x8
        25c09c:	e3a01000 	mov	r1, #0	; 0x0
        25c0a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25c0a4:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        25c0a8:	e3a03000 	mov	r3, #0	; 0x0
        25c0ac:	e58d0000 	str	r0, [sp]
        25c0b0:	e92d0008 	stmdb	sp!, {r3}
        25c0b4:	e28d0004 	add	r0, sp, #4	; 0x4
        25c0b8:	e3a02000 	mov	r2, #0	; 0x0
        25c0bc:	e594100c 	ldr	r1, [r4, #12]	; fField12
        25c0c0:	eb65c9a6 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
        25c0c4:	e28dd004 	add	sp, sp, #4	; 0x4
        25c0c8:	e1b05000 	movs	r5, r0
        25c0cc:	03a00001 	moveq	r0, #1	; 0x1
        25c0d0:	05c40014 	streqb	r0, [r4, #20]	; fField20
        25c0d4:	e1a0000d 	mov	r0, sp
        25c0d8:	e3a01000 	mov	r1, #0	; 0x0
        25c0dc:	eb65c990 	bl	1bce724 <TUObject::$__dt(void)>
        25c0e0:	e28dd008 	add	sp, sp, #8	; 0x8
        25c0e4:	e1a00005 	mov	r0, r5
        25c0e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::Map(unsigned char, Perm)
 * Address: 0025c0ec
 */
TLicenseeVAddress::Map(unsigned char, Perm) {
    /*
        25c0ec:	e1a0c00d 	mov	ip, sp
        25c0f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25c0f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c0f8:	e1a04000 	mov	r4, r0
        25c0fc:	e1a05002 	mov	r5, r2
        25c100:	e20160ff 	and	r6, r1, #255	; 0xff
        25c104:	e24dd004 	sub	sp, sp, #4	; 0x4
        25c108:	e5900010 	ldr	r0, [r0, #16]	; fField16
        25c10c:	e3300000 	teq	r0, #0	; 0x0
        25c110:	15d40015 	ldrneb	r0, [r4, #21]	; fField21
        25c114:	13300000 	teqne	r0, #0	; 0x0
        25c118:	11a00004 	movne	r0, r4
        25c11c:	1b66b0be 	blne	1c0841c <TLicenseeVAddress::$Unmap(void)>
        25c120:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        25c124:	e3300000 	teq	r0, #0	; 0x0
        25c128:	1a000003 	bne	25c13c <TLicenseeVAddress::Map(unsigned char, Perm)+0x50>
        25c12c:	e1a00004 	mov	r0, r4
        25c130:	eb62c561 	bl	1b0d6bc <TLicenseeVAddress::$AddDomainToEnvironment(void)>
        25c134:	e3300000 	teq	r0, #0	; 0x0
        25c138:	1a000019 	bne	25c1a4 <TLicenseeVAddress::Map(unsigned char, Perm)+0xb8>
        25c13c:	e1a0100d 	mov	r1, sp
        25c140:	e1a00004 	mov	r0, r4
        25c144:	eb660335 	bl	1bdce20 <TUPhys::$Size(unsigned long &)>
        25c148:	e1a00004 	mov	r0, r4
        25c14c:	e59d1000 	ldr	r1, [sp]
        25c150:	eb668751 	bl	1bfde9c <TLicenseeVAddress::$GetNextVirtualAddress(unsigned long)>
        25c154:	e5840010 	str	r0, [r4, #16]	; fField16
        25c158:	e3300000 	teq	r0, #0	; 0x0
        25c15c:	03a000e9 	moveq	r0, #233	; 0xe9
        25c160:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        25c164:	0a00000e 	beq	25c1a4 <TLicenseeVAddress::Map(unsigned char, Perm)+0xb8>
        25c168:	e1a01000 	mov	r1, r0
        25c16c:	e1a03006 	mov	r3, r6
        25c170:	e594000c 	ldr	r0, [r4, #12]	; fField12
        25c174:	e5942000 	ldr	r2, [r4]
        25c178:	eb65f6d0 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
        25c17c:	e3300000 	teq	r0, #0	; 0x0
        25c180:	1a000004 	bne	25c198 <TLicenseeVAddress::Map(unsigned char, Perm)+0xac>
        25c184:	e1a03005 	mov	r3, r5
        25c188:	e284100c 	add	r1, r4, #12	; 0xc
        25c18c:	e8910003 	ldmia	r1, {r0, r1}
        25c190:	e59d2000 	ldr	r2, [sp]
        25c194:	eb65f6c7 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
        25c198:	e3300000 	teq	r0, #0	; 0x0
        25c19c:	03a01001 	moveq	r1, #1	; 0x1
        25c1a0:	05c41015 	streqb	r1, [r4, #21]	; fField21
        25c1a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::Unmap(void)
 * Address: 0025c1a8
 */
TLicenseeVAddress::Unmap(void) {
    /*
        25c1a8:	e1a0c00d 	mov	ip, sp
        25c1ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25c1b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c1b4:	e1a04000 	mov	r4, r0
        25c1b8:	e5d01015 	ldrb	r1, [r0, #21]	; fField21
        25c1bc:	e3310000 	teq	r1, #0	; 0x0
        25c1c0:	15d41014 	ldrneb	r1, [r4, #20]	; fField20
        25c1c4:	13310000 	teqne	r1, #0	; 0x0
        25c1c8:	15941010 	ldrne	r1, [r4, #16]	; fField16
        25c1cc:	13310000 	teqne	r1, #0	; 0x0
        25c1d0:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        25c1d4:	15942000 	ldrne	r2, [r4]
        25c1d8:	1b65d9dc 	blne	1bd2950 <$ForgetPhysMap__15TUDomainManagerSFUlN21>
        25c1dc:	e3a01000 	mov	r1, #0	; 0x0
        25c1e0:	e5841010 	str	r1, [r4, #16]	; fField16
        25c1e4:	e5c41015 	strb	r1, [r4, #21]	; fField21
        25c1e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::GetNextVirtualAddress(unsigned long)
 * Address: 0025c1ec
 */
TLicenseeVAddress::GetNextVirtualAddress(unsigned long) {
    /*
        25c1ec:	e1a0c00d 	mov	ip, sp
        25c1f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25c1f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c1f8:	e1a04000 	mov	r4, r0
        25c1fc:	e1a05001 	mov	r5, r1
        25c200:	e5900008 	ldr	r0, [r0, #8]	; fField8
        25c204:	e5906004 	ldr	r6, [r0, #4]	; fField4
        25c208:	e5900010 	ldr	r0, [r0, #16]	; fField16
        25c20c:	e3a01000 	mov	r1, #0	; 0x0
        25c210:	eb65c94f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        25c214:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25c218:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        25c21c:	e0811005 	add	r1, r1, r5
        25c220:	e5801000 	str	r1, [r0]
        25c224:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25c228:	e5900010 	ldr	r0, [r0, #16]	; fField16
        25c22c:	eb65f699 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        25c230:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        25c234:	e2802008 	add	r2, r0, #8	; 0x8
        25c238:	e8920006 	ldmia	r2, {r1, r2}
        25c23c:	e0821001 	add	r1, r2, r1
        25c240:	e5900004 	ldr	r0, [r0, #4]	; fField4
        25c244:	e1510000 	cmp	r1, r0
        25c248:	93a00000 	movls	r0, #0	; 0x0
        25c24c:	81a00006 	movhi	r0, r6
        25c250:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLicenseeVAddress::SetupDomain(void)
 * Address: 0025c254
 */
TLicenseeVAddress::SetupDomain(void) {
    /*
        25c254:	e1a0f00e 	mov	pc, lr
    */
}

