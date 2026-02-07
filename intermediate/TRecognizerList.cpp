#include "include/TRecognizerList.h"

/**
 * Symbol: Make__15TRecognizerListSFv
 * Address: 0019de84
 */
void TRecognizerList::Make() {
    /*
        19de84:	e1a0c00d 	mov	ip, sp
        19de88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19de8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19de90:	e3a00020 	mov	r0, #32	; 0x20
        19de94:	eb68c227 	bl	1bce738 <$__nw(unsigned int)>
        19de98:	e1b04000 	movs	r4, r0
        19de9c:	0a000003 	beq	19deb0 <Make__15TRecognizerListSFv+0x2c>
        19dea0:	e1a00004 	mov	r0, r4
        19dea4:	eb01abfb 	bl	208e98 <TArray::__ct(void)>
        19dea8:	e59f0038 	ldr	r0, [pc, #38]	; 19dee8 <Make__15TRecognizerListSFv+0x64>
        19deac:	e5840000 	str	r0, [r4]
        19deb0:	e3340000 	teq	r4, #0	; 0x0
        19deb4:	0a000009 	beq	19dee0 <Make__15TRecognizerListSFv+0x5c>
        19deb8:	e3a00000 	mov	r0, #0	; 0x0
        19debc:	e584001c 	str	r0, [r4, #28]
        19dec0:	e1a00004 	mov	r0, r4
        19dec4:	eb645ad9 	bl	1ab4a30 <TRecognizerList::$IRecognizerList(void)>
        19dec8:	e3300000 	teq	r0, #0	; 0x0
        19decc:	0a000003 	beq	19dee0 <Make__15TRecognizerListSFv+0x5c>
        19ded0:	e1a00004 	mov	r0, r4
        19ded4:	e1a0e00f 	mov	lr, pc
        19ded8:	e594f000 	ldr	pc, [r4]
        19dedc:	e3a04000 	mov	r4, #0	; 0x0
        19dee0:	e1a00004 	mov	r0, r4
        19dee4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19dee8:	0001e178 	andeq	lr, r1, r8, ror r1
    */
}

/**
 * Symbol: TRecognizerList::IRecognizerList(void)
 * Address: 0019deec
 */
TRecognizerList::IRecognizerList(void) {
    /*
        19deec:	e3a02000 	mov	r2, #0	; 0x0
        19def0:	e3a01004 	mov	r1, #4	; 0x4
        19def4:	ea670831 	b	1b5ffc0 <TArray::$IArray(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TRecognizerList::AddRecognizer(TRecognizer *)
 * Address: 0019def8
 */
TRecognizerList::AddRecognizer(TRecognizer *) {
    /*
        19def8:	e1a0c00d 	mov	ip, sp
        19defc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19df00:	e24cb004 	sub	fp, ip, #4	; 0x4
        19df04:	e1a04001 	mov	r4, r1
        19df08:	e5901000 	ldr	r1, [r0]
        19df0c:	e1a0e00f 	mov	lr, pc
        19df10:	e281f018 	add	pc, r1, #24	; 0x18
        19df14:	e5804000 	str	r4, [r0]
        19df18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRecognizerList::GetRecognizer(unsigned long)
 * Address: 0019df1c
 */
TRecognizerList::GetRecognizer(unsigned long) {
    /*
        19df1c:	e1a0c00d 	mov	ip, sp
        19df20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19df24:	e24cb004 	sub	fp, ip, #4	; 0x4
        19df28:	e5902000 	ldr	r2, [r0]
        19df2c:	e1a0e00f 	mov	lr, pc
        19df30:	e282f01c 	add	pc, r2, #28	; 0x1c
        19df34:	e5900000 	ldr	r0, [r0]
        19df38:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRecognizerList::FindRecognizer(unsigned long)
 * Address: 0019df3c
 */
TRecognizerList::FindRecognizer(unsigned long) {
    /*
        19df3c:	e1a0c00d 	mov	ip, sp
        19df40:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        19df44:	e24cb004 	sub	fp, ip, #4	; 0x4
        19df48:	e1a04001 	mov	r4, r1
        19df4c:	e3a01000 	mov	r1, #0	; 0x0
        19df50:	e5902000 	ldr	r2, [r0]
        19df54:	e590700c 	ldr	r7, [r0, #12]	; fField12
        19df58:	e1a0e00f 	mov	lr, pc
        19df5c:	e282f01c 	add	pc, r2, #28	; 0x1c
        19df60:	e1a05000 	mov	r5, r0
        19df64:	e3a06000 	mov	r6, #0	; 0x0
        19df68:	e3570000 	cmp	r7, #0	; 0x0
        19df6c:	9a00000a 	bls	19df9c <TRecognizerList::FindRecognizer(unsigned long)+0x60>
        19df70:	e5950000 	ldr	r0, [r5]
        19df74:	e5901000 	ldr	r1, [r0]
        19df78:	e1a0e00f 	mov	lr, pc
        19df7c:	e281f00c 	add	pc, r1, #12	; 0xc
        19df80:	e1300004 	teq	r0, r4
        19df84:	05950000 	ldreq	r0, [r5]
        19df88:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        19df8c:	e2866001 	add	r6, r6, #1	; 0x1
        19df90:	e2855004 	add	r5, r5, #4	; 0x4
        19df94:	e1560007 	cmp	r6, r7
        19df98:	3afffff4 	bcc	19df70 <TRecognizerList::FindRecognizer(unsigned long)+0x34>
        19df9c:	e3a00000 	mov	r0, #0	; 0x0
        19dfa0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

