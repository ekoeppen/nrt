#include "include/TUPageManager.h"

/**
 * Symbol: Get__13TUPageManagerSFRUlUli
 * Address: 00162af4
 */
void TUPageManager::Get() {
    /*
        162af4:	e1a0c00d 	mov	ip, sp
        162af8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        162afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        162b00:	e1a04000 	mov	r4, r0
        162b04:	e24dd004 	sub	sp, sp, #4	; 0x4
        162b08:	e92d0006 	stmdb	sp!, {r1, r2}
        162b0c:	e1a0200d 	mov	r2, sp
        162b10:	e3a01000 	mov	r1, #0	; 0x0
        162b14:	e59f0014 	ldr	r0, [pc, #14]	; 162b30 <Get__13TUPageManagerSFRUlUli+0x3c>
        162b18:	e5900000 	ldr	r0, [r0]
        162b1c:	eb092dff 	bl	3ae320 <MonitorDispatchSWI>
        162b20:	e3300000 	teq	r0, #0	; 0x0
        162b24:	059d1000 	ldreq	r1, [sp]
        162b28:	05841000 	streq	r1, [r4]
        162b2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        162b30:	0c1016ec 	ldceq	6, cr1, [r0], -#944
    */
}

/**
 * Symbol: GetExternal__13TUPageManagerSFRUlUli
 * Address: 00162b34
 */
void TUPageManager::GetExternal() {
    /*
        162b34:	e1a0c00d 	mov	ip, sp
        162b38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        162b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        162b40:	e1a04000 	mov	r4, r0
        162b44:	e24dd004 	sub	sp, sp, #4	; 0x4
        162b48:	e92d0006 	stmdb	sp!, {r1, r2}
        162b4c:	e1a0200d 	mov	r2, sp
        162b50:	e3a01001 	mov	r1, #1	; 0x1
        162b54:	e59f0014 	ldr	r0, [pc, #14]	; 162b70 <GetExternal__13TUPageManagerSFRUlUli+0x3c>
        162b58:	e5900000 	ldr	r0, [r0]
        162b5c:	eb092def 	bl	3ae320 <MonitorDispatchSWI>
        162b60:	e3300000 	teq	r0, #0	; 0x0
        162b64:	059d1000 	ldreq	r1, [sp]
        162b68:	05841000 	streq	r1, [r4]
        162b6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        162b70:	0c1016ec 	ldceq	6, cr1, [r0], -#944
    */
}

/**
 * Symbol: Register__13TUPageManagerSFUl
 * Address: 00162b74
 */
void TUPageManager::Register() {
    /*
        162b74:	e1a0c00d 	mov	ip, sp
        162b78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        162b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        162b80:	e52d000c 	str	r0, [sp, -#12]!
        162b84:	e1a0200d 	mov	r2, sp
        162b88:	e3a01003 	mov	r1, #3	; 0x3
        162b8c:	e59f0008 	ldr	r0, [pc, #8]	; 162b9c <Register__13TUPageManagerSFUl+0x28>
        162b90:	e5900000 	ldr	r0, [r0]
        162b94:	eb092de1 	bl	3ae320 <MonitorDispatchSWI>
        162b98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        162b9c:	0c1016ec 	ldceq	6, cr1, [r0], -#944
    */
}

/**
 * Symbol: Release__13TUPageManagerSFUl
 * Address: 00162ba0
 */
void TUPageManager::Release() {
    /*
        162ba0:	e1a01000 	mov	r1, r0
        162ba4:	e3a03000 	mov	r3, #0	; 0x0
        162ba8:	e3a02000 	mov	r2, #0	; 0x0
        162bac:	e3a00011 	mov	r0, #17	; 0x11
        162bb0:	ea092d6f 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: FreePageCount__13TUPageManagerSFPUl
 * Address: 00162bb4
 */
void TUPageManager::FreePageCount() {
    /*
        162bb4:	e1a0c00d 	mov	ip, sp
        162bb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        162bbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        162bc0:	e1a04000 	mov	r4, r0
        162bc4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        162bc8:	e1a0200d 	mov	r2, sp
        162bcc:	e3a01004 	mov	r1, #4	; 0x4
        162bd0:	e59f0014 	ldr	r0, [pc, #14]	; 162bec <FreePageCount__13TUPageManagerSFPUl+0x38>
        162bd4:	e5900000 	ldr	r0, [r0]
        162bd8:	eb092dd0 	bl	3ae320 <MonitorDispatchSWI>
        162bdc:	e3300000 	teq	r0, #0	; 0x0
        162be0:	059d1000 	ldreq	r1, [sp]
        162be4:	05841000 	streq	r1, [r4]
        162be8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        162bec:	0c1016ec 	ldceq	6, cr1, [r0], -#944
    */
}

