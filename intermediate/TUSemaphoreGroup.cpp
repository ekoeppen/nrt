#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: TUSemaphoreGroup::Init(unsigned long)
 * Address: 0025a270
 */
long		TUSemaphoreGroup::Init(ULong num = 1) {
    /*
        25a270:	e1a0c00d 	mov	ip, sp
        25a274:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a278:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a27c:	e24dd028 	sub	sp, sp, #40	; 0x28
        25a280:	e58d100c 	str	r1, [sp, #12]
        25a284:	e1a0200d 	mov	r2, sp
        25a288:	e3a03010 	mov	r3, #16	; 0x10
        25a28c:	e3a01005 	mov	r1, #5	; 0x5
        25a290:	eb65f233 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        25a294:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUSemaphoreGroup::SemOp(unsigned long, SemFlags)
 * Address: 0025a45c
 */
long		TUSemaphoreGroup::SemOp(TUSemaphoreOpList* semListObj, SemFlags flags = kWaitOnBlock) {
    /*
        25a45c:	e5900000 	ldr	r0, [r0]
        25a460:	ea054f65 	b	3ae1fc <SemaphoreOpGlue>
    */
}

/**
 * Symbol: TUSemaphoreGroup::SemOp(TUSemaphoreOpList *, SemFlags)
 * Address: 0025a464
 */
long		TUSemaphoreGroup::SemOp(TUSemaphoreOpList* semListObj, SemFlags flags = kWaitOnBlock) {
    /*
        25a464:	e5911000 	ldr	r1, [r1]
        25a468:	e5900000 	ldr	r0, [r0]
        25a46c:	ea054f62 	b	3ae1fc <SemaphoreOpGlue>
    */
}

/**
 * Symbol: TUSemaphoreGroup::SetRefCon(void *)
 * Address: 0025a470
 */
long		TUSemaphoreGroup::SetRefCon(void* refCon) {
    /*
        25a470:	e5900000 	ldr	r0, [r0]
        25a474:	ea66022f 	b	1bdad38 <$SemGroupSetRefCon(unsigned long, void *)>
    */
}

/**
 * Symbol: TUSemaphoreGroup::GetRefCon(void **)
 * Address: 0025a478
 */
long		TUSemaphoreGroup::GetRefCon(void** pRefCon) {
    /*
        25a478:	e5900000 	ldr	r0, [r0]
        25a47c:	ea66022c 	b	1bdad34 <$SemGroupGetRefCon(unsigned long, void **)>
    */
}

