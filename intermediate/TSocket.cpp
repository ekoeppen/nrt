#include "include/TSocket.h"

/**
 * Symbol: TSocket::__ct(void)
 * Address: 0007a76c
 */
TSocket::TSocket(void) {
    /*
         7a76c:	e1a0c00d 	mov	ip, sp
         7a770:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         7a774:	e24cb004 	sub	fp, ip, #4	; 0x4
         7a778:	e1b04000 	movs	r4, r0
         7a77c:	1a000003 	bne	7a790 <TSocket::__ct(void)+0x24>
         7a780:	e3a00060 	mov	r0, #96	; 0x60
         7a784:	eb6d4feb 	bl	1bce738 <$__nw(unsigned int)>
         7a788:	e1b04000 	movs	r4, r0
         7a78c:	0a000019 	beq	7a7f8 <TSocket::__ct(void)+0x8c>
         7a790:	e3a05000 	mov	r5, #0	; 0x0
         7a794:	e5c45004 	strb	r5, [r4, #4]
         7a798:	e5845000 	str	r5, [r4]
         7a79c:	e284000c 	add	r0, r4, #12	; 0xc
         7a7a0:	eb6d4bc1 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         7a7a4:	e284001c 	add	r0, r4, #28	; 0x1c
         7a7a8:	eb6da6a2 	bl	1be4238 <TAEvent::$__ct(void)>
         7a7ac:	e59f704c 	ldr	r7, [pc, #4c]	; 7a800 <TSocket::__ct(void)+0x94>
         7a7b0:	e5845028 	str	r5, [r4, #40]
         7a7b4:	e584701c 	str	r7, [r4, #28]
         7a7b8:	e5845024 	str	r5, [r4, #36]
         7a7bc:	e59f0040 	ldr	r0, [pc, #40]	; 7a804 <TSocket::__ct(void)+0x98>
         7a7c0:	e5840020 	str	r0, [r4, #32]	; fField32
         7a7c4:	e3a00002 	mov	r0, #2	; 0x2
         7a7c8:	e2800c07 	add	r0, r0, #1792	; 0x700
         7a7cc:	e584002c 	str	r0, [r4, #44]
         7a7d0:	e2846038 	add	r6, r4, #56	; 0x38
         7a7d4:	e1a00006 	mov	r0, r6
         7a7d8:	eb6da696 	bl	1be4238 <TAEvent::$__ct(void)>
         7a7dc:	e586500c 	str	r5, [r6, #12]	; fField12
         7a7e0:	e5867000 	str	r7, [r6]
         7a7e4:	e5865008 	str	r5, [r6, #8]	; fField8
         7a7e8:	e286001c 	add	r0, r6, #28	; 0x1c
         7a7ec:	e3a01001 	mov	r1, #1	; 0x1
         7a7f0:	eb6de46d 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7a7f4:	e5c45008 	strb	r5, [r4, #8]	; fField8
         7a7f8:	e1a00004 	mov	r0, r4
         7a7fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         7a800:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7a804:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TSocket::Init(unsigned long)
 * Address: 0007a808
 */
TSocket::Init(unsigned long) {
    /*
         7a808:	e1a0c00d 	mov	ip, sp
         7a80c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7a810:	e24cb004 	sub	fp, ip, #4	; 0x4
         7a814:	e1a04000 	mov	r4, r0
         7a818:	e1a05001 	mov	r5, r1
         7a81c:	eb67e88d 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         7a820:	e3300000 	teq	r0, #0	; 0x0
         7a824:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         7a828:	e284000c 	add	r0, r4, #12	; 0xc
         7a82c:	e1a06000 	mov	r6, r0
         7a830:	e3a01001 	mov	r1, #1	; 0x1
         7a834:	eb6d6c96 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         7a838:	e3300000 	teq	r0, #0	; 0x0
         7a83c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         7a840:	e1a00006 	mov	r0, r6
         7a844:	e1a01005 	mov	r1, r5
         7a848:	eb6d8550 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         7a84c:	e3300000 	teq	r0, #0	; 0x0
         7a850:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         7a854:	e1a00004 	mov	r0, r4
         7a858:	eb68224c 	bl	1a83190 <TSocket::$GetReceiveMsgId(void)>
         7a85c:	e1a01000 	mov	r1, r0
         7a860:	e1a00006 	mov	r0, r6
         7a864:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         7a868:	ea6d8968 	b	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
    */
}

/**
 * Symbol: TSocket::Open(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 0007a86c
 */
TSocket::Open(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
         7a86c:	e1a0c00d 	mov	ip, sp
         7a870:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7a874:	e24cb004 	sub	fp, ip, #4	; 0x4
         7a878:	e1a05000 	mov	r5, r0
         7a87c:	e1a04001 	mov	r4, r1
         7a880:	e1a07002 	mov	r7, r2
         7a884:	e1a06003 	mov	r6, r3
         7a888:	e59ba004 	ldr	sl, [fp, #4]
         7a88c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         7a890:	e28d0018 	add	r0, sp, #24	; 0x18
         7a894:	eb6da667 	bl	1be4238 <TAEvent::$__ct(void)>
         7a898:	e59f90b0 	ldr	r9, [pc, #b0]	; 7a950 <TSocket::Open(unsigned char *, unsigned long, unsigned long, unsigned long)+0xe4>
         7a89c:	e3a08000 	mov	r8, #0	; 0x0
         7a8a0:	e58d8024 	str	r8, [sp, #36]
         7a8a4:	e58d9018 	str	r9, [sp, #24]
         7a8a8:	e58d8020 	str	r8, [sp, #32]	; fField32
         7a8ac:	e59f00a0 	ldr	r0, [pc, #a0]	; 7a954 <TSocket::Open(unsigned char *, unsigned long, unsigned long, unsigned long)+0xe8>
         7a8b0:	e58d001c 	str	r0, [sp, #28]
         7a8b4:	e3a00c07 	mov	r0, #1792	; 0x700
         7a8b8:	e58d0028 	str	r0, [sp, #40]
         7a8bc:	e1a0000d 	mov	r0, sp
         7a8c0:	eb6da65c 	bl	1be4238 <TAEvent::$__ct(void)>
         7a8c4:	e58d800c 	str	r8, [sp, #12]	; fField12
         7a8c8:	e40d9004 	str	r9, [sp], -#4
         7a8cc:	e58d800c 	str	r8, [sp, #12]	; fField12
         7a8d0:	e5d40000 	ldrb	r0, [r4]
         7a8d4:	e5cd0030 	strb	r0, [sp, #48]
         7a8d8:	e3a00001 	mov	r0, #1	; 0x1
         7a8dc:	e5cd0031 	strb	r0, [sp, #49]
         7a8e0:	e58d6038 	str	r6, [sp, #56]
         7a8e4:	e58da03c 	str	sl, [sp, #60]
         7a8e8:	e58d7034 	str	r7, [sp, #52]
         7a8ec:	e28d0004 	add	r0, sp, #4	; 0x4
         7a8f0:	e3a01018 	mov	r1, #24	; 0x18
         7a8f4:	e3a02000 	mov	r2, #0	; 0x0
         7a8f8:	e3a0c000 	mov	ip, #0	; 0x0
         7a8fc:	e3a03000 	mov	r3, #0	; 0x0
         7a900:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7a904:	e1a03008 	mov	r3, r8
         7a908:	e1a0100c 	mov	r1, ip
         7a90c:	e3a00024 	mov	r0, #36	; 0x24
         7a910:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7a914:	e28d303c 	add	r3, sp, #60	; 0x3c
         7a918:	e92d0008 	stmdb	sp!, {r3}
         7a91c:	e08d3000 	add	r3, sp, r0
         7a920:	e1a00005 	mov	r0, r5
         7a924:	e3a02002 	mov	r2, #2	; 0x2
         7a928:	e3a01001 	mov	r1, #1	; 0x1
         7a92c:	eb6d8106 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         7a930:	e28dd024 	add	sp, sp, #36	; 0x24
         7a934:	e3300000 	teq	r0, #0	; 0x0
         7a938:	1a000003 	bne	7a94c <TSocket::Open(unsigned char *, unsigned long, unsigned long, unsigned long)+0xe0>
         7a93c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         7a940:	e5dd1018 	ldrb	r1, [sp, #24]
         7a944:	e5c51008 	strb	r1, [r5, #8]	; fField8
         7a948:	e5c41000 	strb	r1, [r4]
         7a94c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7a950:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7a954:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TSocket::Close(void)
 * Address: 0007a958
 */
TSocket::Close(void) {
    /*
         7a958:	e1a0c00d 	mov	ip, sp
         7a95c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7a960:	e24cb004 	sub	fp, ip, #4	; 0x4
         7a964:	e1a04000 	mov	r4, r0
         7a968:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         7a96c:	e28d0014 	add	r0, sp, #20	; 0x14
         7a970:	eb6da630 	bl	1be4238 <TAEvent::$__ct(void)>
         7a974:	e59f609c 	ldr	r6, [pc, #9c]	; 7aa18 <TSocket::Close(void)+0xc0>
         7a978:	e3a05000 	mov	r5, #0	; 0x0
         7a97c:	e58d5020 	str	r5, [sp, #32]	; fField32
         7a980:	e58d6014 	str	r6, [sp, #20]
         7a984:	e58d501c 	str	r5, [sp, #28]
         7a988:	e59f008c 	ldr	r0, [pc, #8c]	; 7aa1c <TSocket::Close(void)+0xc4>	; fField8
         7a98c:	e58d0018 	str	r0, [sp, #24]
         7a990:	e3a00001 	mov	r0, #1	; 0x1
         7a994:	e2800c07 	add	r0, r0, #1792	; 0x700
         7a998:	e58d0024 	str	r0, [sp, #36]
         7a99c:	e1a0000d 	mov	r0, sp
         7a9a0:	eb6da624 	bl	1be4238 <TAEvent::$__ct(void)>
         7a9a4:	e58d500c 	str	r5, [sp, #12]	; fField12
         7a9a8:	e40d6004 	str	r6, [sp], -#4
         7a9ac:	e58d500c 	str	r5, [sp, #12]	; fField12
         7a9b0:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
         7a9b4:	e5cd002c 	strb	r0, [sp, #44]
         7a9b8:	e28d0004 	add	r0, sp, #4	; 0x4
         7a9bc:	e3a01014 	mov	r1, #20	; 0x14
         7a9c0:	e3a02000 	mov	r2, #0	; 0x0
         7a9c4:	e3a0c000 	mov	ip, #0	; 0x0
         7a9c8:	e3a03000 	mov	r3, #0	; 0x0
         7a9cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7a9d0:	e1a03005 	mov	r3, r5
         7a9d4:	e1a0100c 	mov	r1, ip
         7a9d8:	e3a00018 	mov	r0, #24	; 0x18
         7a9dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7a9e0:	e28d3038 	add	r3, sp, #56	; 0x38
         7a9e4:	e92d0008 	stmdb	sp!, {r3}
         7a9e8:	e28d3024 	add	r3, sp, #36	; 0x24
         7a9ec:	e1a00004 	mov	r0, r4
         7a9f0:	e3a02002 	mov	r2, #2	; 0x2
         7a9f4:	e3a01001 	mov	r1, #1	; 0x1
         7a9f8:	eb6d80d3 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         7a9fc:	e28dd024 	add	sp, sp, #36	; 0x24
         7aa00:	e3300000 	teq	r0, #0	; 0x0
         7aa04:	059d000c 	ldreq	r0, [sp, #12]	; fField12
         7aa08:	e28dd004 	add	sp, sp, #4	; 0x4
         7aa0c:	e3300000 	teq	r0, #0	; 0x0
         7aa10:	05c45008 	streqb	r5, [r4, #8]	; fField8
         7aa14:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         7aa18:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7aa1c:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TSocket::Send(TAddress *, unsigned char, CBufferList *)
 * Address: 0007aa20
 */
TSocket::Send(TAddress *, unsigned char, CBufferList *) {
    /*
         7aa20:	e1a0c00d 	mov	ip, sp
         7aa24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7aa28:	e24cb004 	sub	fp, ip, #4	; 0x4
         7aa2c:	e1a06000 	mov	r6, r0
         7aa30:	e1a05001 	mov	r5, r1
         7aa34:	e1a04003 	mov	r4, r3
         7aa38:	e202a0ff 	and	sl, r2, #255	; 0xff
         7aa3c:	e24dd068 	sub	sp, sp, #104	; 0x68
         7aa40:	e28d0050 	add	r0, sp, #80	; 0x50
         7aa44:	eb67dba6 	bl	1a718e4 <TWriteElement::$__ct(void)>
         7aa48:	e28d0044 	add	r0, sp, #68	; 0x44
         7aa4c:	eb67db96 	bl	1a718ac <TWriteChain::$__ct(void)>
         7aa50:	e28d0014 	add	r0, sp, #20	; 0x14
         7aa54:	eb6da5f7 	bl	1be4238 <TAEvent::$__ct(void)>
         7aa58:	e59f7180 	ldr	r7, [pc, #180]	; 7abe0 <TSocket::Send(TAddress *, unsigned char, CBufferList *)+0x1c0>
         7aa5c:	e3a08000 	mov	r8, #0	; 0x0
         7aa60:	e58d7014 	str	r7, [sp, #20]
         7aa64:	e58d8020 	str	r8, [sp, #32]	; fField32
         7aa68:	e58d801c 	str	r8, [sp, #28]
         7aa6c:	e28d0028 	add	r0, sp, #40	; 0x28
         7aa70:	e1a09000 	mov	r9, r0
         7aa74:	e3a01001 	mov	r1, #1	; 0x1
         7aa78:	eb6de3cb 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7aa7c:	e1a0000d 	mov	r0, sp
         7aa80:	eb6da5ec 	bl	1be4238 <TAEvent::$__ct(void)>
         7aa84:	e58d7000 	str	r7, [sp]
         7aa88:	e58d800c 	str	r8, [sp, #12]	; fField12
         7aa8c:	e58d8008 	str	r8, [sp, #8]	; fField8
         7aa90:	e3a080a8 	mov	r8, #168	; 0xa8
         7aa94:	e2488b07 	sub	r8, r8, #7168	; 0x1c00
         7aa98:	e1a00004 	mov	r0, r4
         7aa9c:	e5941000 	ldr	r1, [r4]
         7aaa0:	e1a0e00f 	mov	lr, pc
         7aaa4:	e281f02c 	add	pc, r1, #44	; 0x2c
         7aaa8:	eb6d702e 	bl	1bd6b68 <$malloc>
         7aaac:	e1b07000 	movs	r7, r0
         7aab0:	0a000042 	beq	7abc0 <TSocket::Send(TAddress *, unsigned char, CBufferList *)+0x1a0>
         7aab4:	e1a00004 	mov	r0, r4
         7aab8:	e3e02000 	mvn	r2, #0	; 0x0
         7aabc:	e3a01000 	mov	r1, #0	; 0x0
         7aac0:	e5943000 	ldr	r3, [r4]
         7aac4:	e1a0e00f 	mov	lr, pc
         7aac8:	e283f038 	add	pc, r3, #56	; 0x38
         7aacc:	e1a08004 	mov	r8, r4
         7aad0:	e1a00004 	mov	r0, r4
         7aad4:	e5941000 	ldr	r1, [r4]
         7aad8:	e1a0e00f 	mov	lr, pc
         7aadc:	e281f02c 	add	pc, r1, #44	; 0x2c
         7aae0:	e1a02000 	mov	r2, r0
         7aae4:	e1a01007 	mov	r1, r7
         7aae8:	e1a00008 	mov	r0, r8
         7aaec:	e5983000 	ldr	r3, [r8]
         7aaf0:	e1a0e00f 	mov	lr, pc
         7aaf4:	e283f014 	add	pc, r3, #20	; 0x14
         7aaf8:	e1a00004 	mov	r0, r4
         7aafc:	e5941000 	ldr	r1, [r4]
         7ab00:	e1a0e00f 	mov	lr, pc
         7ab04:	e281f02c 	add	pc, r1, #44	; 0x2c
         7ab08:	e1a02000 	mov	r2, r0
         7ab0c:	e1a01007 	mov	r1, r7
         7ab10:	e28d0050 	add	r0, sp, #80	; 0x50
         7ab14:	e3a03000 	mov	r3, #0	; 0x0
         7ab18:	eb6804a7 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         7ab1c:	e28d1050 	add	r1, sp, #80	; 0x50
         7ab20:	e28d0044 	add	r0, sp, #68	; 0x44
         7ab24:	eb67e7bd 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         7ab28:	e5d60008 	ldrb	r0, [r6, #8]	; fField8
         7ab2c:	e5c50001 	strb	r0, [r5, #1]
         7ab30:	e59f00ac 	ldr	r0, [pc, #ac]	; 7abe4 <TSocket::Send(TAddress *, unsigned char, CBufferList *)+0x1c4>
         7ab34:	e58d0018 	str	r0, [sp, #24]
         7ab38:	e3a0000a 	mov	r0, #10	; 0xa
         7ab3c:	e58d0024 	str	r0, [sp, #36]
         7ab40:	e1a00009 	mov	r0, r9
         7ab44:	e1a01005 	mov	r1, r5
         7ab48:	eb6de398 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         7ab4c:	e5cda034 	strb	sl, [sp, #52]
         7ab50:	e28d0044 	add	r0, sp, #68	; 0x44
         7ab54:	e58d0040 	str	r0, [sp, #64]	; fField64
         7ab58:	e24dd004 	sub	sp, sp, #4	; 0x4
         7ab5c:	e28d0004 	add	r0, sp, #4	; 0x4
         7ab60:	e3a01014 	mov	r1, #20	; 0x14
         7ab64:	e3a02000 	mov	r2, #0	; 0x0
         7ab68:	e3a0c000 	mov	ip, #0	; 0x0
         7ab6c:	e3a08000 	mov	r8, #0	; 0x0
         7ab70:	e3a03000 	mov	r3, #0	; 0x0
         7ab74:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ab78:	e1a03008 	mov	r3, r8
         7ab7c:	e1a0100c 	mov	r1, ip
         7ab80:	e3a00030 	mov	r0, #48	; 0x30
         7ab84:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ab88:	e28d3038 	add	r3, sp, #56	; 0x38
         7ab8c:	e92d0008 	stmdb	sp!, {r3}
         7ab90:	e28d3024 	add	r3, sp, #36	; 0x24
         7ab94:	e1a00006 	mov	r0, r6
         7ab98:	e3a02002 	mov	r2, #2	; 0x2
         7ab9c:	e3a01001 	mov	r1, #1	; 0x1
         7aba0:	eb6d8069 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         7aba4:	e28dd024 	add	sp, sp, #36	; 0x24
         7aba8:	e1b08000 	movs	r8, r0
         7abac:	059d800c 	ldreq	r8, [sp, #12]	; fField12
         7abb0:	e28dd004 	add	sp, sp, #4	; 0x4
         7abb4:	e3370000 	teq	r7, #0	; 0x0
         7abb8:	11a00007 	movne	r0, r7
         7abbc:	1b6d5f65 	blne	1bd2958 <$free>
         7abc0:	e28d0044 	add	r0, sp, #68	; 0x44
         7abc4:	eb67f818 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         7abc8:	e28d0050 	add	r0, sp, #80	; 0x50
         7abcc:	e3a01000 	mov	r1, #0	; 0x0
         7abd0:	e1a0e00f 	mov	lr, pc
         7abd4:	e59df050 	ldr	pc, [sp, #80]	; fField80
         7abd8:	e1a00008 	mov	r0, r8
         7abdc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7abe0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7abe4:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TSocket::ReceiveAsync(CBufferList *)
 * Address: 0007abe8
 */
TSocket::ReceiveAsync(CBufferList *) {
    /*
         7abe8:	e1a0c00d 	mov	ip, sp
         7abec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7abf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7abf4:	e1a0c000 	mov	ip, r0
         7abf8:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
         7abfc:	e5cc0030 	strb	r0, [ip, #48]
         7ac00:	e58c1034 	str	r1, [ip, #52]
         7ac04:	e28ce00c 	add	lr, ip, #12	; 0xc
         7ac08:	e28c401c 	add	r4, ip, #28	; 0x1c
         7ac0c:	e28c0038 	add	r0, ip, #56	; 0x38
         7ac10:	e3a01028 	mov	r1, #40	; 0x28
         7ac14:	e3a02000 	mov	r2, #0	; 0x0
         7ac18:	e3a03000 	mov	r3, #0	; 0x0
         7ac1c:	e3a05000 	mov	r5, #0	; 0x0
         7ac20:	e3a06000 	mov	r6, #0	; 0x0
         7ac24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ac28:	e1a03006 	mov	r3, r6
         7ac2c:	e3a02001 	mov	r2, #1	; 0x1
         7ac30:	e1a01005 	mov	r1, r5
         7ac34:	e3a0001c 	mov	r0, #28	; 0x1c
         7ac38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ac3c:	e1a03004 	mov	r3, r4
         7ac40:	e92d0008 	stmdb	sp!, {r3}
         7ac44:	e1a0000c 	mov	r0, ip
         7ac48:	e3a03000 	mov	r3, #0	; 0x0
         7ac4c:	e49e1008 	ldr	r1, [lr], #8	; fField8
         7ac50:	e59e2000 	ldr	r2, [lr]
         7ac54:	eb6d803c 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         7ac58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSocket::GetReceiveMsgId(void)
 * Address: 0007ac5c
 */
TSocket::GetReceiveMsgId(void) {
    /*
         7ac5c:	e590000c 	ldr	r0, [r0, #12]	; fField12
         7ac60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSocket::ReceiveGetResults(unsigned char *, unsigned long *, TAddress *)
 * Address: 0007ac64
 */
TSocket::ReceiveGetResults(unsigned char *, unsigned long *, TAddress *) {
    /*
         7ac64:	e1a0c00d 	mov	ip, sp
         7ac68:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7ac6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ac70:	e1a04000 	mov	r4, r0
         7ac74:	e5d0004c 	ldrb	r0, [r0, #76]
         7ac78:	e5c10000 	strb	r0, [r1]
         7ac7c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         7ac80:	e2841054 	add	r1, r4, #84	; 0x54
         7ac84:	e5820000 	str	r0, [r2]
         7ac88:	e1a00003 	mov	r0, r3
         7ac8c:	eb6de347 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         7ac90:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
         7ac94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSocket::CancelReceive(void)
 * Address: 0007ac98
 */
TSocket::CancelReceive(void) {
    /*
         7ac98:	e1a0c00d 	mov	ip, sp
         7ac9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7aca0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7aca4:	e1a04000 	mov	r4, r0
         7aca8:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         7acac:	e28d0014 	add	r0, sp, #20	; 0x14
         7acb0:	eb6da560 	bl	1be4238 <TAEvent::$__ct(void)>
         7acb4:	e59f6094 	ldr	r6, [pc, #94]	; 7ad50 <TSocket::CancelReceive(void)+0xb8>
         7acb8:	e3a05000 	mov	r5, #0	; 0x0
         7acbc:	e58d5020 	str	r5, [sp, #32]	; fField32
         7acc0:	e58d6014 	str	r6, [sp, #20]
         7acc4:	e58d501c 	str	r5, [sp, #28]
         7acc8:	e59f0084 	ldr	r0, [pc, #84]	; 7ad54 <TSocket::CancelReceive(void)+0xbc>
         7accc:	e58d0018 	str	r0, [sp, #24]
         7acd0:	e3a00003 	mov	r0, #3	; 0x3
         7acd4:	e2800c07 	add	r0, r0, #1792	; 0x700
         7acd8:	e58d0024 	str	r0, [sp, #36]
         7acdc:	e1a0000d 	mov	r0, sp
         7ace0:	eb6da554 	bl	1be4238 <TAEvent::$__ct(void)>
         7ace4:	e58d500c 	str	r5, [sp, #12]	; fField12
         7ace8:	e40d6004 	str	r6, [sp], -#4
         7acec:	e58d500c 	str	r5, [sp, #12]	; fField12
         7acf0:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
         7acf4:	e5cd002c 	strb	r0, [sp, #44]
         7acf8:	e28d0004 	add	r0, sp, #4	; 0x4
         7acfc:	e3a01014 	mov	r1, #20	; 0x14
         7ad00:	e3a02000 	mov	r2, #0	; 0x0
         7ad04:	e3a0c000 	mov	ip, #0	; 0x0
         7ad08:	e3a0e001 	mov	lr, #1	; 0x1
         7ad0c:	e3a03000 	mov	r3, #0	; 0x0
         7ad10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ad14:	e1a0300e 	mov	r3, lr
         7ad18:	e1a0100c 	mov	r1, ip
         7ad1c:	e3a00018 	mov	r0, #24	; 0x18
         7ad20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7ad24:	e28d3038 	add	r3, sp, #56	; 0x38
         7ad28:	e92d0008 	stmdb	sp!, {r3}
         7ad2c:	e28d3024 	add	r3, sp, #36	; 0x24
         7ad30:	e1a00004 	mov	r0, r4
         7ad34:	e3a02002 	mov	r2, #2	; 0x2
         7ad38:	e3a01001 	mov	r1, #1	; 0x1
         7ad3c:	eb6d8002 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         7ad40:	e28dd024 	add	sp, sp, #36	; 0x24
         7ad44:	e3300000 	teq	r0, #0	; 0x0
         7ad48:	059d000c 	ldreq	r0, [sp, #12]	; fField12
         7ad4c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         7ad50:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7ad54:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

