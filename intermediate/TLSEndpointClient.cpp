#include "include/TLSEndpointClient.h"

/**
 * Symbol: TLSEndpointClient::Default(TEndpointEvent *)
 * Address: 0010593c
 */
TLSEndpointClient::Default(TEndpointEvent *) {
    /*
        10593c:	e5912010 	ldr	r2, [r1, #16]
        105940:	e3320001 	teq	r2, #1	; 0x1
        105944:	1a6ac8a7 	bne	1bb7be8 <TEndpointClient::$Default(TEndpointEvent *)>
        105948:	05900018 	ldreq	r0, [r0, #24]	; fField24
        10594c:	0a68e166 	beq	1b3deec <TLaserWriterLSDriver::$BreakOccurred(void)>
    */
}

/**
 * Symbol: TLSEndpointClient::ILSEndpointClient(TLaserWriterLSDriver *, TEndpoint *)
 * Address: 00105950
 */
TLSEndpointClient::ILSEndpointClient(TLaserWriterLSDriver *, TEndpoint *) {
    /*
        105950:	e5801018 	str	r1, [r0, #24]	; fField24
        105954:	e1a01002 	mov	r1, r2
        105958:	e59f3004 	ldr	r3, [pc, #4]	; 105964 <TLSEndpointClient::ILSEndpointClient(TLaserWriterLSDriver *, TEndpoint *)+0x14>
        10595c:	e59f2004 	ldr	r2, [pc, #4]	; 105968 <TLSEndpointClient::ILSEndpointClient(TLaserWriterLSDriver *, TEndpoint *)+0x18>
        105960:	ea6ad0c7 	b	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
        105964:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        105968:	656e6470 	strvsb	r6, [lr, -#1136]!
    */
}

