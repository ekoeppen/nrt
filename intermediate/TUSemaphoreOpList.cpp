#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: TUSemaphoreOpList::Init(unsigned long,...)
 * Address: 0025a1c8
 */
long		TUSemaphoreOpList::Init(ULong numInList, ...) {
    /*
        25a1c8:	e1a0c00d 	mov	ip, sp
        25a1cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25a1d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25a1d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        25a1d8:	e59b0008 	ldr	r0, [fp, #8]
        25a1dc:	e3300000 	teq	r0, #0	; 0x0
        25a1e0:	0a00001e 	beq	25a260 <TUSemaphoreOpList::Init(unsigned long,...)+0x98>
        25a1e4:	e28b600c 	add	r6, fp, #12	; 0xc
        25a1e8:	e3a01010 	mov	r1, #16	; 0x10
        25a1ec:	e0810100 	add	r0, r1, r0, lsl #2
        25a1f0:	e1a05000 	mov	r5, r0
        25a1f4:	eb65f25b 	bl	1bd6b68 <$malloc>
        25a1f8:	e1b04000 	movs	r4, r0
        25a1fc:	059f0058 	ldreq	r0, [pc, #58]	; 25a25c <TUSemaphoreOpList::Init(unsigned long,...)+0x94>
        25a200:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25a204:	e3a00000 	mov	r0, #0	; 0x0
        25a208:	e59b1008 	ldr	r1, [fp, #8]
        25a20c:	e3510000 	cmp	r1, #0	; 0x0
        25a210:	9a000006 	bls	25a230 <TUSemaphoreOpList::Init(unsigned long,...)+0x68>
        25a214:	e0842100 	add	r2, r4, r0, lsl #2
        25a218:	e4961004 	ldr	r1, [r6], #4
        25a21c:	e2800001 	add	r0, r0, #1	; 0x1
        25a220:	e5a21010 	str	r1, [r2, #16]!
        25a224:	e59b1008 	ldr	r1, [fp, #8]
        25a228:	e1500001 	cmp	r0, r1
        25a22c:	3afffff8 	bcc	25a214 <TUSemaphoreOpList::Init(unsigned long,...)+0x4c>
        25a230:	e59b0008 	ldr	r0, [fp, #8]
        25a234:	e1a03005 	mov	r3, r5
        25a238:	e584000c 	str	r0, [r4, #12]
        25a23c:	e1a02004 	mov	r2, r4
        25a240:	e3a01004 	mov	r1, #4	; 0x4
        25a244:	e59b0004 	ldr	r0, [fp, #4]
        25a248:	eb65f245 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        25a24c:	e1a05000 	mov	r5, r0
        25a250:	e1a00004 	mov	r0, r4
        25a254:	eb65e1bf 	bl	1bd2958 <$free>
        25a258:	ea000002 	b	25a268 <TUSemaphoreOpList::Init(unsigned long,...)+0xa0>
        25a25c:	ffffd8e7 	swinv	0x00ffd8e7
        25a260:	e3a050ea 	mov	r5, #234	; 0xea
        25a264:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        25a268:	e1a00005 	mov	r0, r5
        25a26c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

