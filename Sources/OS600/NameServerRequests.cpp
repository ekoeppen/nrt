/*
	File:		NameServerRequests.cpp

	Contains:	Implementation of NameServer request and reply classes.

	Copyright:	 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "NameServer.h"

/**
 * Symbol: TNameServerRequest::__ct(void)
 * Address: 001309ac
 */
TNameServerRequest::TNameServerRequest() {
    /*
        1309ac:	e1a0c00d 	mov	ip, sp
        1309b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1309b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1309b8:	e3300000 	teq	r0, #0	; 0x0
        1309bc:	1a000003 	bne	1309d0 <TNameServerRequest::__ct(void)+0x24>
        1309c0:	e3a00004 	mov	r0, #4	; 0x4
        1309c4:	eb6a775b 	bl	1bce738 <$__nw(unsigned int)>
        1309c8:	e3300000 	teq	r0, #0	; 0x0
        1309cc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1309d0:	e3a01001 	mov	r1, #1	; 0x1
        1309d4:	e5801000 	str	r1, [r0]
        1309d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
    fCommand = kRegisterName;
}


/**
 * Symbol: TNameRequest::__ct(void)
 * Address: 00130fe0
 */
TNameRequest::TNameRequest() {
    /*
        130fe0:	e1a0c00d 	mov	ip, sp
        130fe4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        130fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        130fec:	e1b04000 	movs	r4, r0
        130ff0:	1a000003 	bne	131004 <TNameRequest::__ct(void)+0x24>
        130ff4:	e3a0001c 	mov	r0, #28	; 0x1c
        130ff8:	eb6a75ce 	bl	1bce738 <$__nw(unsigned int)>
        130ffc:	e1b04000 	movs	r4, r0
        131000:	0a000008 	beq	131028 <TNameRequest::__ct(void)+0x48>
        131004:	e1a00004 	mov	r0, r4
        131008:	eb678655 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        13100c:	e3a00005 	mov	r0, #5	; 0x5
        131010:	e5840000 	str	r0, [r4]
        131014:	e3a00000 	mov	r0, #0	; 0x0
        131018:	e5840004 	str	r0, [r4, #4]
        13101c:	e5840008 	str	r0, [r4, #8]	; fThing
        131020:	e5840014 	str	r0, [r4, #20]	; fParam2
        131024:	e5840018 	str	r0, [r4, #24]	; fObjectName
        131028:	e1a00004 	mov	r0, r4
        13102c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
    fCommand = kLookup;
    fThing = 0;
    fSpec = 0;
    fParam1 = 0;
    fParam2 = 0;
    fObjectName = 0;
    fObjectType = 0;
}


/**
 * Symbol: TNameServerReply::__ct(void)
 * Address: 00131ed0
 */
TNameServerReply::TNameServerReply() {
    /*
        131ed0:	e1a0c00d 	mov	ip, sp
        131ed4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        131ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
        131edc:	e3300000 	teq	r0, #0	; 0x0
        131ee0:	1a000003 	bne	131ef4 <TNameServerReply::__ct(void)+0x24>
        131ee4:	e3a0000c 	mov	r0, #12	; 0xc
        131ee8:	eb6a7212 	bl	1bce738 <$__nw(unsigned int)>
        131eec:	e3300000 	teq	r0, #0	; 0x0
        131ef0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        131ef4:	e3a01000 	mov	r1, #0	; 0x0
        131ef8:	e5801008 	str	r1, [r0, #8]	; fSpec
        131efc:	e5801000 	str	r1, [r0]
        131f00:	e5801004 	str	r1, [r0, #4]	; fThing
        131f04:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
    fThing = 0;
    fSpec = 0;
    fResult = 0;
}


/**
 * Symbol: TSysEventRequest::__ct(void)
 * Address: 00131728
 */
TSysEventRequest::TSysEventRequest() {
    /*
        131728:	e1a0c00d 	mov	ip, sp
        13172c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131730:	e24cb004 	sub	fp, ip, #4	; 0x4
        131734:	e1b04000 	movs	r4, r0
        131738:	1a000003 	bne	13174c <TSysEventRequest::__ct(void)+0x24>
        13173c:	e3a00014 	mov	r0, #20	; 0x14
        131740:	eb6a73fc 	bl	1bce738 <$__nw(unsigned int)>
        131744:	e1b04000 	movs	r4, r0
        131748:	0a000009 	beq	131774 <TSysEventRequest::__ct(void)+0x4c>
        13174c:	e1a00004 	mov	r0, r4
        131750:	eb678483 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        131754:	e3a00007 	mov	r0, #7	; 0x7
        131758:	e5840000 	str	r0, [r4]
        13175c:	e59f0018 	ldr	r0, [pc, #18]	; 13177c <TSysEventRequest::__ct(void)+0x54>
        131760:	e5840004 	str	r0, [r4, #4]
        131764:	e3a00000 	mov	r0, #0	; 0x0
        131768:	e5840008 	str	r0, [r4, #8]
        13176c:	e584000c 	str	r0, [r4, #12]
        131770:	e5840010 	str	r0, [r4, #16]
        131774:	e1a00004 	mov	r0, r4
        131778:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        13177c:	70776f6e 	pwon
    */
    fCommand = kRegisterForSystemEvent;
    fTheEvent = kSysEvent_PowerOn;
    fSysEventObjId = 0;
    fSysEventTimeOut = 0;
    fSysEventSendFilter = 0;
}


/**
 * Symbol: TGestaltRequest::__ct(void)
 * Address: 00131e38
 */
TGestaltRequest::TGestaltRequest() {
    /*
        131e38:	e1a0c00d 	mov	ip, sp
        131e3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        131e44:	e1b04000 	movs	r4, r0
        131e48:	1a000003 	bne	131e5c <TGestaltRequest::__ct(void)+0x24>
        131e4c:	e3a00008 	mov	r0, #8	; 0x8
        131e50:	eb6a7238 	bl	1bce738 <$__nw(unsigned int)>
        131e54:	e1b04000 	movs	r4, r0
        131e58:	0a000006 	beq	131e78 <TGestaltRequest::__ct(void)+0x40>
        131e5c:	e1a00004 	mov	r0, r4
        131e60:	eb6782bf 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        131e64:	e3a0000a 	mov	r0, #10	; 0xa
        131e68:	e5840000 	str	r0, [r4]
        131e6c:	e3a00401 	mov	r0, #16777216	; 0x1000000
        131e70:	e2800002 	add	r0, r0, #2	; 0x2
        131e74:	e5840004 	str	r0, [r4, #4]
        131e78:	e1a00004 	mov	r0, r4
        131e7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
    fCommand = kGestalt;
    fSelector = 0x01000002;
}


/**
 * Symbol: TResArbitrationRequest::__ct(void)
 * Address: 00131e80
 */
TResArbitrationRequest::TResArbitrationRequest() {
    /*
        131e80:	e1a0c00d 	mov	ip, sp
        131e84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        131e8c:	e1b04000 	movs	r4, r0
        131e90:	1a000003 	bne	131ea4 <TResArbitrationRequest::__ct(void)+0x24>
        131e94:	e3a00028 	mov	r0, #40	; 0x28
        131e98:	eb6a7226 	bl	1bce738 <$__nw(unsigned int)>
        131e9c:	e1b04000 	movs	r4, r0
        131ea0:	0a000008 	beq	131ec8 <TResArbitrationRequest::__ct(void)+0x48>
        131ea4:	e1a00004 	mov	r0, r4
        131ea8:	ebfffc4c 	bl	130fe0 <TNameRequest::__ct(void)>
        131eac:	e3a0000b 	mov	r0, #11	; 0xb
        131eb0:	e5840000 	str	r0, [r4]
        131eb4:	e3a00001 	mov	r0, #1	; 0x1
        131eb8:	e584001c 	str	r0, [r4, #28]
        131ebc:	e3a00000 	mov	r0, #0	; 0x0
        131ec0:	e5840020 	str	r0, [r4, #32]
        131ec4:	e5840024 	str	r0, [r4, #36]
        131ec8:	e1a00004 	mov	r0, r4
        131ecc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
    fCommand = kResourceArbitration;
    fRequestType = kResArbitrationClaim;
    fOwnerPortId = 0;
    fOwnerName = 0;
}
