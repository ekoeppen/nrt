#include "DDKIncludes/OS600/Protocols.h"

/**
 * Symbol: TProtocol::ClassInfo( const(void))
 * Address: 0005b740
 */
instance->ClassInfo() == to::ClassInfo() ? (to*)instance : 0 {
    /*
         5b740:	e5900004 	ldr	r0, [r0, #4]	; TProtocol
         5b744:	e5900008 	ldr	r0, [r0, #8]	; fMonitorId
         5b748:	e280f004 	add	pc, r0, #4	; 0x4
    */
}

/**
 * Symbol: TProtocol::Become(unsigned long)
 * Address: 0005c5bc
 */
void			TProtocol::Become(TObjectId);					// forward to a monitor (via kernel id) {
    /*
         5c5bc:	e5a0100c 	str	r1, [r0, #12]!	; fReserved1
         5c5c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocol::Become(TProtocol const *)
 * Address: 0005c708
 */
void			TProtocol::Become(TObjectId);					// forward to a monitor (via kernel id) {
    /*
         5c708:	e5a01004 	str	r1, [r0, #4]!	; TProtocol
         5c70c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocol::SetType(TClassInfo const *)
 * Address: 0005ca4c
 */
void			TProtocol::SetType(const TClassInfo*);			// set this instance's type {
    /*
         5ca4c:	e5b12010 	ldr	r2, [r1, #16]!	; fInterfaceDelta
         5ca50:	e0811002 	add	r1, r1, r2
         5ca54:	e5a01008 	str	r1, [r0, #8]!	; fMonitorId
         5ca58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocol::StartMonitor(unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 0005cbe4
 */
TProtocol::StartMonitor(unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
         5cbe4:	e1a0c00d 	mov	ip, sp
         5cbe8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         5cbec:	e24cb004 	sub	fp, ip, #4	; 0x4
         5cbf0:	e1a04000 	mov	r4, r0
         5cbf4:	e1a07001 	mov	r7, r1
         5cbf8:	e1a06002 	mov	r6, r2
         5cbfc:	e1a05003 	mov	r5, r3
         5cc00:	e59b0004 	ldr	r0, [fp, #4]	; TProtocol
         5cc04:	e20080ff 	and	r8, r0, #255	; 0xff
         5cc08:	e24dd008 	sub	sp, sp, #8	; 0x8
         5cc0c:	e1a0000d 	mov	r0, sp
         5cc10:	e3a01000 	mov	r1, #0	; 0x0
         5cc14:	eb6dc2b0 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
         5cc18:	e1a03008 	mov	r3, r8
         5cc1c:	e1a02005 	mov	r2, r5
         5cc20:	e3a01000 	mov	r1, #0	; 0x0
         5cc24:	e1a00006 	mov	r0, r6
         5cc28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         5cc2c:	e1a00004 	mov	r0, r4
         5cc30:	eb6dcaf0 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
         5cc34:	eb6dd32a 	bl	1bd18e4 <TClassInfo::$EntryProc( const(void))>
         5cc38:	e1a01000 	mov	r1, r0
         5cc3c:	e1a03004 	mov	r3, r4
         5cc40:	e1a02007 	mov	r2, r7
         5cc44:	e28d0010 	add	r0, sp, #16	; 0x10
         5cc48:	eb6de3a3 	bl	1bd5adc <$Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5>
         5cc4c:	e28dd010 	add	sp, sp, #16	; 0x10
         5cc50:	e3300000 	teq	r0, #0	; 0x0
         5cc54:	1a000003 	bne	5cc68 <TProtocol::StartMonitor(unsigned long, unsigned long, unsigned long, unsigned char)+0x84>
         5cc58:	e3a01000 	mov	r1, #0	; 0x0
         5cc5c:	e5cd1004 	strb	r1, [sp, #4]	; TProtocol
         5cc60:	e59d1000 	ldr	r1, [sp]
         5cc64:	e5a4100c 	str	r1, [r4, #12]!	; fReserved1
         5cc68:	e1a04000 	mov	r4, r0
         5cc6c:	e1a0000d 	mov	r0, sp
         5cc70:	e3a01000 	mov	r1, #0	; 0x0
         5cc74:	eb6dc6ad 	bl	1bce730 <TUMonitor::$__dt(void)>
         5cc78:	e1a00004 	mov	r0, r4
         5cc7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TProtocol::DestroyMonitor(void)
 * Address: 0005cc80
 */
long			TProtocol::DestroyMonitor();					// destroy the monitor {
    /*
         5cc80:	e1a0c00d 	mov	ip, sp
         5cc84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5cc88:	e24cb004 	sub	fp, ip, #4	; 0x4
         5cc8c:	e1a04000 	mov	r4, r0
         5cc90:	e590100c 	ldr	r1, [r0, #12]	; fReserved1
         5cc94:	e3a00000 	mov	r0, #0	; 0x0
         5cc98:	eb6dc28f 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
         5cc9c:	e3300000 	teq	r0, #0	; 0x0
         5cca0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5cca4:	0a6e151d 	beq	1be2120 <$MemError>
         5cca8:	e3a01001 	mov	r1, #1	; 0x1
         5ccac:	e5c01004 	strb	r1, [r0, #4]	; TProtocol
         5ccb0:	eb6dc69e 	bl	1bce730 <TUMonitor::$__dt(void)>
         5ccb4:	e1a00004 	mov	r0, r4
         5ccb8:	eb6dd726 	bl	1bd2958 <$free>
         5ccbc:	e3a00000 	mov	r0, #0	; 0x0
         5ccc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TProtocol::GetMonitorId( const(void))
 * Address: 0005ccc4
 */
TObjectId		TProtocol::GetMonitorId() const;				// ==> monitor id, or zero {
    /*
         5ccc4:	e590000c 	ldr	r0, [r0, #12]	; fReserved1
         5ccc8:	e1a0f00e 	mov	pc, lr
    */
}

