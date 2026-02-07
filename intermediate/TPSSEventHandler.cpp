#include "include/TPSSEventHandler.h"

/**
 * Symbol: TPSSEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0015591c
 */
TPSSEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        15591c:	e1a0c00d 	mov	ip, sp
        155920:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        155924:	e24cb004 	sub	fp, ip, #4	; 0x4
        155928:	e1a05001 	mov	r5, r1
        15592c:	e1a04002 	mov	r4, r2
        155930:	e1a06003 	mov	r6, r3
        155934:	e3a03000 	mov	r3, #0	; 0x0
        155938:	e92d0008 	stmdb	sp!, {r3}
        15593c:	eb69f824 	bl	1bd39d4 <$GetGlobals>
        155940:	e1a03006 	mov	r3, r6
        155944:	e1a02004 	mov	r2, r4
        155948:	e1a01005 	mov	r1, r5
        15594c:	eb66888b 	bl	1af7b80 <TPSSManager::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
        155950:	e28dd004 	add	sp, sp, #4	; 0x4
        155954:	eb69f81e 	bl	1bd39d4 <$GetGlobals>
        155958:	e3a010b8 	mov	r1, #184	; 0xb8
        15595c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        155960:	ea6a426e 	b	1be6320 <TAppWorld::$AESetReply(unsigned long)>
    */
}

/**
 * Symbol: TPSSEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00155964
 */
TPSSEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        155964:	e1a0c00d 	mov	ip, sp
        155968:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15596c:	e24cb004 	sub	fp, ip, #4	; 0x4
        155970:	e1a05001 	mov	r5, r1
        155974:	e1a04002 	mov	r4, r2
        155978:	e1a06003 	mov	r6, r3
        15597c:	e3a03001 	mov	r3, #1	; 0x1
        155980:	e92d0008 	stmdb	sp!, {r3}
        155984:	eb69f812 	bl	1bd39d4 <$GetGlobals>
        155988:	e1a03006 	mov	r3, r6
        15598c:	e1a02004 	mov	r2, r4
        155990:	e1a01005 	mov	r1, r5
        155994:	eb668880 	bl	1af7b9c <TPSSManager::$DoReply(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
        155998:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

