#include "include/TNSConfigServer.h"

/**
 * Symbol: TNSConfigServer::InitConfigServer(RefVar const &, RefVar const &)
 * Address: 0013acc8
 */
TNSConfigServer::InitConfigServer(RefVar const &, RefVar const &) {
    /*
        13acc8:	e1a0c00d 	mov	ip, sp
        13accc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13acd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13acd4:	e1a04000 	mov	r4, r0
        13acd8:	e1a05002 	mov	r5, r2
        13acdc:	e3a06000 	mov	r6, #0	; 0x0
        13ace0:	e1a00001 	mov	r0, r1
        13ace4:	eb6a2126 	bl	1bc3184 <$GetCString(RefVar const &)>
        13ace8:	e2841014 	add	r1, r4, #20	; 0x14
        13acec:	e3a03004 	mov	r3, #4	; 0x4
        13acf0:	e3a02001 	mov	r2, #1	; 0x1
        13acf4:	eb6b39eb 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        13acf8:	e1a00005 	mov	r0, r5
        13acfc:	eb6a2120 	bl	1bc3184 <$GetCString(RefVar const &)>
        13ad00:	e3a01001 	mov	r1, #1	; 0x1
        13ad04:	eb6b39e0 	bl	1c0948c <$Umbstrlen>
        13ad08:	e2800001 	add	r0, r0, #1	; 0x1
        13ad0c:	e1a07000 	mov	r7, r0
        13ad10:	eb6a9d0b 	bl	1be2144 <$NewPtrClear>
        13ad14:	e5840010 	str	r0, [r4, #16]	; fField16
        13ad18:	e3300000 	teq	r0, #0	; 0x0
        13ad1c:	0a000006 	beq	13ad3c <TNSConfigServer::InitConfigServer(RefVar const &, RefVar const &)+0x74>
        13ad20:	e1a00005 	mov	r0, r5
        13ad24:	eb6a2116 	bl	1bc3184 <$GetCString(RefVar const &)>
        13ad28:	e1a03007 	mov	r3, r7
        13ad2c:	e3a02001 	mov	r2, #1	; 0x1
        13ad30:	e5b41010 	ldr	r1, [r4, #16]!	; fField16
        13ad34:	eb6b39db 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        13ad38:	ea000001 	b	13ad44 <TNSConfigServer::InitConfigServer(RefVar const &, RefVar const &)+0x7c>
        13ad3c:	e3a060e9 	mov	r6, #233	; 0xe9
        13ad40:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        13ad44:	e1a00006 	mov	r0, r6
        13ad48:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNSConfigServer::__dt(void)
 * Address: 0013ad4c
 */
TNSConfigServer::~TNSConfigServer(void) {
    /*
        13ad4c:	e1a0c00d 	mov	ip, sp
        13ad50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13ad54:	e24cb004 	sub	fp, ip, #4	; 0x4
        13ad58:	e1a04000 	mov	r4, r0
        13ad5c:	e1a05001 	mov	r5, r1
        13ad60:	e5900010 	ldr	r0, [r0, #16]	; fField16
        13ad64:	e3a06000 	mov	r6, #0	; 0x0
        13ad68:	e3300000 	teq	r0, #0	; 0x0
        13ad6c:	0a000001 	beq	13ad78 <TNSConfigServer::__dt(void)+0x2c>
        13ad70:	eb6a5ef8 	bl	1bd2958 <$free>
        13ad74:	e5846010 	str	r6, [r4, #16]	; fField16
        13ad78:	e1a00004 	mov	r0, r4
        13ad7c:	e3a01000 	mov	r1, #0	; 0x0
        13ad80:	eb6a4e5f 	bl	1bce704 <TUNameServer::$__dt(void)>
        13ad84:	e3150001 	tst	r5, #1	; 0x1
        13ad88:	11a00004 	movne	r0, r4
        13ad8c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        13ad90:	1a6a4a52 	bne	1bcd6e0 <$__dl(void *)>
        13ad94:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNSConfigServer::GetConfig(long *)
 * Address: 0013ad98
 */
TNSConfigServer::GetConfig(long *) {
    /*
        13ad98:	e1a0c00d 	mov	ip, sp
        13ad9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13ada0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13ada4:	e1a04000 	mov	r4, r0
        13ada8:	e1a05001 	mov	r5, r1
        13adac:	e24dd004 	sub	sp, sp, #4	; 0x4
        13adb0:	e3a00002 	mov	r0, #2	; 0x2
        13adb4:	eb6a1ce4 	bl	1bc214c <$AllocateRefHandle(long)>
        13adb8:	e1a06000 	mov	r6, r0
        13adbc:	e3a03000 	mov	r3, #0	; 0x0
        13adc0:	e92d0008 	stmdb	sp!, {r3}
        13adc4:	e28d3004 	add	r3, sp, #4	; 0x4
        13adc8:	e5941014 	ldr	r1, [r4, #20]	; fField20
        13adcc:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13add0:	e1a00004 	mov	r0, r4
        13add4:	ebfead03 	bl	e61e8 <TUConfigServer::GetDefaultConfig(unsigned long, char *, unsigned long *, unsigned long *)>
        13add8:	e28dd004 	add	sp, sp, #4	; 0x4
        13addc:	e3a01000 	mov	r1, #0	; 0x0
        13ade0:	e5850000 	str	r0, [r5]
        13ade4:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        13ade8:	e37c0013 	cmn	ip, #19	; 0x13
        13adec:	05851000 	streq	r1, [r5]
        13adf0:	0a000008 	beq	13ae18 <TNSConfigServer::GetConfig(long *)+0x80>
        13adf4:	e24dd008 	sub	sp, sp, #8	; 0x8
        13adf8:	e1a0200d 	mov	r2, sp
        13adfc:	e1a00004 	mov	r0, r4
        13ae00:	e59d1008 	ldr	r1, [sp, #8]
        13ae04:	eb64a0f0 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
        13ae08:	e1a0000d 	mov	r0, sp
        13ae0c:	eb6a292f 	bl	1bc52d0 <$MakeString(char const *)>
        13ae10:	e5860000 	str	r0, [r6]
        13ae14:	e28dd008 	add	sp, sp, #8	; 0x8
        13ae18:	e5964000 	ldr	r4, [r6]
        13ae1c:	e1a00006 	mov	r0, r6
        13ae20:	eb6a20e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13ae24:	e1a00004 	mov	r0, r4
        13ae28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNSConfigServer::SetConfig(RefVar const &)
 * Address: 0013ae2c
 */
TNSConfigServer::SetConfig(RefVar const &) {
    /*
        13ae2c:	e1a0c00d 	mov	ip, sp
        13ae30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13ae34:	e24cb004 	sub	fp, ip, #4	; 0x4
        13ae38:	e1a04000 	mov	r4, r0
        13ae3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13ae40:	e5910000 	ldr	r0, [r1]
        13ae44:	e5900000 	ldr	r0, [r0]
        13ae48:	e3300002 	teq	r0, #2	; 0x2
        13ae4c:	0a000005 	beq	13ae68 <TNSConfigServer::SetConfig(RefVar const &)+0x3c>
        13ae50:	e1a00001 	mov	r0, r1
        13ae54:	eb6a20ca 	bl	1bc3184 <$GetCString(RefVar const &)>
        13ae58:	e1a0100d 	mov	r1, sp
        13ae5c:	e3a03004 	mov	r3, #4	; 0x4
        13ae60:	e3a02001 	mov	r2, #1	; 0x1
        13ae64:	eb6b398f 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        13ae68:	e3a03000 	mov	r3, #0	; 0x0
        13ae6c:	e92d0008 	stmdb	sp!, {r3}
        13ae70:	e5941014 	ldr	r1, [r4, #20]	; fField20
        13ae74:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13ae78:	e1a00004 	mov	r0, r4
        13ae7c:	e59d3004 	ldr	r3, [sp, #4]
        13ae80:	ebfeacf8 	bl	e6268 <TUConfigServer::SetDefaultConfig(unsigned long, char *, unsigned long, unsigned long)>
        13ae84:	e28dd004 	add	sp, sp, #4	; 0x4
        13ae88:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        13ae8c:	e37c0013 	cmn	ip, #19	; 0x13
        13ae90:	059d1000 	ldreq	r1, [sp]
        13ae94:	03310000 	teqeq	r1, #0	; 0x0
        13ae98:	03a00000 	moveq	r0, #0	; 0x0
        13ae9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

