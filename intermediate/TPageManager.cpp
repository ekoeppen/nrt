#include "include/TPageManager.h"

/**
 * Symbol: TPageManager::__ct(void)
 * Address: 001628d0
 */
TPageManager::TPageManager(void) {
    /*
        1628d0:	e1a0c00d 	mov	ip, sp
        1628d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1628d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1628dc:	e1b04000 	movs	r4, r0
        1628e0:	1a000003 	bne	1628f4 <TPageManager::__ct(void)+0x24>
        1628e4:	e3a00014 	mov	r0, #20	; 0x14
        1628e8:	eb69af92 	bl	1bce738 <$__nw(unsigned int)>
        1628ec:	e1b04000 	movs	r4, r0
        1628f0:	0a000007 	beq	162914 <TPageManager::__ct(void)+0x44>
        1628f4:	e2845004 	add	r5, r4, #4	; 0x4
        1628f8:	e2850004 	add	r0, r5, #4	; 0x4
        1628fc:	e3a02010 	mov	r2, #16	; 0x10
        162900:	e3a01000 	mov	r1, #0	; 0x0
        162904:	eb6637d1 	bl	1af0850 <TDynArray::$__ct(int, int)>
        162908:	e3a00000 	mov	r0, #0	; 0x0
        16290c:	e5850000 	str	r0, [r5]
        162910:	e5c40000 	strb	r0, [r4]
        162914:	e1a00004 	mov	r0, r4
        162918:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPageManager::GetExternal(unsigned long &, unsigned long, int)
 * Address: 0016291c
 */
TPageManager::GetExternal(unsigned long &, unsigned long, int) {
    /*
        16291c:	e1a0c00d 	mov	ip, sp
        162920:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        162924:	e24cb004 	sub	fp, ip, #4	; 0x4
        162928:	e1a05001 	mov	r5, r1
        16292c:	e1a04002 	mov	r4, r2
        162930:	e59f0020 	ldr	r0, [pc, #20]	; 162958 <TPageManager::GetExternal(unsigned long &, unsigned long, int)+0x3c>
        162934:	e5900000 	ldr	r0, [r0]
        162938:	e3300000 	teq	r0, #0	; 0x0
        16293c:	0a000002 	beq	16294c <TPageManager::GetExternal(unsigned long &, unsigned long, int)+0x30>
        162940:	eb6696b7 	bl	1b08424 <TExtPageTrackerMgr::$Take(void)>
        162944:	e1b06000 	movs	r6, r0
        162948:	1a000003 	bne	16295c <TPageManager::GetExternal(unsigned long &, unsigned long, int)+0x40>
        16294c:	e3e00042 	mvn	r0, #66	; 0x42
        162950:	e2400c27 	sub	r0, r0, #9984	; 0x2700
        162954:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        162958:	0c104f4c 	ldceq	15, cr4, [r0], -#304
        16295c:	eb08c057 	bl	392ac0 <EnterAtomic>
        162960:	e1a03004 	mov	r3, r4
        162964:	e1a01006 	mov	r1, r6
        162968:	e59f0018 	ldr	r0, [pc, #18]	; 162988 <TPageManager::GetExternal(unsigned long &, unsigned long, int)+0x6c>
        16296c:	e5900000 	ldr	r0, [r0]
        162970:	e3a0200c 	mov	r2, #12	; 0xc
        162974:	eb663bd3 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        162978:	e5850000 	str	r0, [r5]
        16297c:	eb08c066 	bl	392b1c <ExitAtomic>
        162980:	e3a00000 	mov	r0, #0	; 0x0
        162984:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        162988:	0c101164 	ldfeqs	f1, [r0], -#400
    */
}

/**
 * Symbol: TPageManager::Release(unsigned long)
 * Address: 0016298c
 */
TPageManager::Release(unsigned long) {
    /*
        16298c:	e1a0c00d 	mov	ip, sp
        162990:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        162994:	e24cb004 	sub	fp, ip, #4	; 0x4
        162998:	e1a05000 	mov	r5, r0
        16299c:	e1a04001 	mov	r4, r1
        1629a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1629a4:	e3a06000 	mov	r6, #0	; 0x0
        1629a8:	eb08c044 	bl	392ac0 <EnterAtomic>
        1629ac:	e1a0100d 	mov	r1, sp
        1629b0:	e1a00004 	mov	r0, r4
        1629b4:	eb69c817 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        1629b8:	e3300000 	teq	r0, #0	; 0x0
        1629bc:	03a060e1 	moveq	r6, #225	; 0xe1
        1629c0:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1629c4:	0a000019 	beq	162a30 <TPageManager::Release(unsigned long)+0xa4>
        1629c8:	e59d0000 	ldr	r0, [sp]
        1629cc:	e5901010 	ldr	r1, [r0, #16]
        1629d0:	e3110c02 	tst	r1, #512	; 0x200
        1629d4:	05900014 	ldreq	r0, [r0, #20]
        1629d8:	120100ff 	andne	r0, r1, #255	; 0xff
        1629dc:	11a00600 	movne	r0, r0, lsl #12
        1629e0:	e3300a01 	teq	r0, #4096	; 0x1000
        1629e4:	13a060ea 	movne	r6, #234	; 0xea
        1629e8:	12466b0a 	subne	r6, r6, #10240	; 0x2800
        1629ec:	1a00000f 	bne	162a30 <TPageManager::Release(unsigned long)+0xa4>
        1629f0:	e1a01004 	mov	r1, r4
        1629f4:	e59f003c 	ldr	r0, [pc, #3c]	; 162a38 <TPageManager::Release(unsigned long)+0xac>
        1629f8:	e5900000 	ldr	r0, [r0]
        1629fc:	eb6681f4 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        162a00:	e204000f 	and	r0, r4, #15	; 0xf
        162a04:	e3a04000 	mov	r4, #0	; 0x0
        162a08:	e330000c 	teq	r0, #12	; 0xc
        162a0c:	11a00004 	movne	r0, r4
        162a10:	03a00001 	moveq	r0, #1	; 0x1
        162a14:	e3300000 	teq	r0, #0	; 0x0
        162a18:	0a000008 	beq	162a40 <TPageManager::Release(unsigned long)+0xb4>
        162a1c:	e59f0018 	ldr	r0, [pc, #18]	; 162a3c <TPageManager::Release(unsigned long)+0xb0>
        162a20:	e5900000 	ldr	r0, [r0]
        162a24:	e3300000 	teq	r0, #0	; 0x0
        162a28:	159d1000 	ldrne	r1, [sp]
        162a2c:	1b667db5 	blne	1b02108 <TExtPageTrackerMgr::$Put(TLittlePhys *)>
        162a30:	eb08c039 	bl	392b1c <ExitAtomic>
        162a34:	ea00000b 	b	162a68 <TPageManager::Release(unsigned long)+0xdc>
        162a38:	0c101164 	ldfeqs	f1, [r0], -#400
        162a3c:	0c104f4c 	ldceq	15, cr4, [r0], -#304
        162a40:	eb08c035 	bl	392b1c <ExitAtomic>
        162a44:	e59d1000 	ldr	r1, [sp]
        162a48:	e59f0020 	ldr	r0, [pc, #20]	; 162a70 <TPageManager::Release(unsigned long)+0xe4>
        162a4c:	e5900000 	ldr	r0, [r0]
        162a50:	eb667daa 	bl	1b02100 <TPageTracker::$Put(TLittlePhys *)>
        162a54:	e5d50000 	ldrb	r0, [r5]
        162a58:	e3300000 	teq	r0, #0	; 0x0
        162a5c:	0a000001 	beq	162a68 <TPageManager::Release(unsigned long)+0xdc>
        162a60:	ebffff8b 	bl	162894 <AddToContentArea+0x34>
        162a64:	e5c54000 	strb	r4, [r5]
        162a68:	e1a00006 	mov	r0, r6
        162a6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        162a70:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

/**
 * Symbol: TPageManager::Register(unsigned long)
 * Address: 00162a74
 */
TPageManager::Register(unsigned long) {
    /*
        162a74:	e1a0c00d 	mov	ip, sp
        162a78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        162a7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        162a80:	e1a05000 	mov	r5, r0
        162a84:	e1a04001 	mov	r4, r1
        162a88:	eb08c00c 	bl	392ac0 <EnterAtomic>
        162a8c:	e59f0028 	ldr	r0, [pc, #28]	; 162abc <TPageManager::Register(unsigned long)+0x48>
        162a90:	e5900000 	ldr	r0, [r0]
        162a94:	e204100f 	and	r1, r4, #15	; 0xf
        162a98:	e3a06000 	mov	r6, #0	; 0x0
        162a9c:	e331000a 	teq	r1, #10	; 0xa
        162aa0:	11a01006 	movne	r1, r6
        162aa4:	03a01001 	moveq	r1, #1	; 0x1
        162aa8:	e3310000 	teq	r1, #0	; 0x0
        162aac:	0a000003 	beq	162ac0 <TPageManager::Register(unsigned long)+0x4c>
        162ab0:	e1a01004 	mov	r1, r4
        162ab4:	eb06dd16 	bl	319f14 <TObjectTable::Get(unsigned long)>
        162ab8:	ea000001 	b	162ac4 <TPageManager::Register(unsigned long)+0x50>
        162abc:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        162ac0:	e1a00006 	mov	r0, r6
        162ac4:	e3300000 	teq	r0, #0	; 0x0
        162ac8:	1a000003 	bne	162adc <TPageManager::Register(unsigned long)+0x68>
        162acc:	eb08c012 	bl	392b1c <ExitAtomic>
        162ad0:	e3a000e1 	mov	r0, #225	; 0xe1
        162ad4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        162ad8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        162adc:	eb08c00e 	bl	392b1c <ExitAtomic>
        162ae0:	e2850004 	add	r0, r5, #4	; 0x4
        162ae4:	e1a01004 	mov	r1, r4
        162ae8:	eb667983 	bl	1b010fc <TRing::$Push(void *)>
        162aec:	e1a00006 	mov	r0, r6
        162af0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPageManager::MonitorProc(long, PMMessage *)
 * Address: 00162c6c
 */
TPageManager::MonitorProc(long, PMMessage *) {
    /*
        162c6c:	e1a0c00d 	mov	ip, sp
        162c70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        162c74:	e24cb004 	sub	fp, ip, #4	; 0x4
        162c78:	e1a0c002 	mov	ip, r2
        162c7c:	e3a02000 	mov	r2, #0	; 0x0
        162c80:	e3510006 	cmp	r1, #6	; 0x6
        162c84:	908ff101 	addls	pc, pc, r1, lsl #2
        162c88:	ea000020 	b	162d10 <TPageManager::MonitorProc(long, PMMessage *)+0xa4>
        162c8c:	ea000007 	b	162cb0 <TPageManager::MonitorProc(long, PMMessage *)+0x44>
        162c90:	ea000010 	b	162cd8 <TPageManager::MonitorProc(long, PMMessage *)+0x6c>
        162c94:	ea000016 	b	162cf4 <TPageManager::MonitorProc(long, PMMessage *)+0x88>
        162c98:	ea000012 	b	162ce8 <TPageManager::MonitorProc(long, PMMessage *)+0x7c>
        162c9c:	ea000017 	b	162d00 <TPageManager::MonitorProc(long, PMMessage *)+0x94>
        162ca0:	ea000006 	b	162cc0 <TPageManager::MonitorProc(long, PMMessage *)+0x54>
        162ca4:	e1a0100c 	mov	r1, ip
        162ca8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        162cac:	ea66cf94 	b	1b16b04 <TPageManager::$ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)>
        162cb0:	e89c000c 	ldmia	ip, {r2, r3}
        162cb4:	e1a0100c 	mov	r1, ip
        162cb8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        162cbc:	ea665bfe 	b	1af9cbc <TPageManager::$Get(unsigned long &, unsigned long, int)>
        162cc0:	e59c3008 	ldr	r3, [ip, #8]	; fField8
        162cc4:	e92d0008 	stmdb	sp!, {r3}
        162cc8:	e89c000c 	ldmia	ip, {r2, r3}
        162ccc:	e1a0100c 	mov	r1, ip
        162cd0:	eb66cb89 	bl	1b15afc <TPageManager::$Get(unsigned long &, unsigned long, int, TUMonitor *)>
        162cd4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        162cd8:	e89c000c 	ldmia	ip, {r2, r3}
        162cdc:	e1a0100c 	mov	r1, ip
        162ce0:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        162ce4:	ea665bfa 	b	1af9cd4 <TPageManager::$GetExternal(unsigned long &, unsigned long, int)>
        162ce8:	e59c1000 	ldr	r1, [ip]
        162cec:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        162cf0:	ea667d1f 	b	1b02174 <TPageManager::$Register(unsigned long)>
        162cf4:	e59c1000 	ldr	r1, [ip]
        162cf8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        162cfc:	ea668123 	b	1b03190 <TPageManager::$Release(unsigned long)>
        162d00:	e59f0010 	ldr	r0, [pc, #10]	; 162d18 <TPageManager::MonitorProc(long, PMMessage *)+0xac>
        162d04:	e5900000 	ldr	r0, [r0]
        162d08:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162d0c:	e58c0000 	str	r0, [ip]
        162d10:	e1a00002 	mov	r0, r2
        162d14:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        162d18:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

/**
 * Symbol: TPageManager::QueryClients(int, TUMonitor *)
 * Address: 00162d1c
 */
TPageManager::QueryClients(int, TUMonitor *) {
    /*
        162d1c:	e1a0c00d 	mov	ip, sp
        162d20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        162d24:	e24cb004 	sub	fp, ip, #4	; 0x4
        162d28:	e1a04001 	mov	r4, r1
        162d2c:	e2800004 	add	r0, r0, #4	; 0x4
        162d30:	e1a06000 	mov	r6, r0
        162d34:	e3a05000 	mov	r5, #0	; 0x0
        162d38:	e5b07008 	ldr	r7, [r0, #8]!	; fField8
        162d3c:	e3570000 	cmp	r7, #0	; 0x0
        162d40:	da000011 	ble	162d8c <TPageManager::QueryClients(int, TUMonitor *)+0x70>
        162d44:	e59f8048 	ldr	r8, [pc, #48]	; 162d94 <TPageManager::QueryClients(int, TUMonitor *)+0x78>
        162d48:	e1a00006 	mov	r0, r6
        162d4c:	e3a01000 	mov	r1, #0	; 0x0
        162d50:	eb663ad1 	bl	1af189c <TRing::$__vc(int const)>
        162d54:	e5909000 	ldr	r9, [r0]
        162d58:	e1a00006 	mov	r0, r6
        162d5c:	e3a01001 	mov	r1, #1	; 0x1
        162d60:	eb668540 	bl	1b04268 <TRing::$Rotate(int)>
        162d64:	e1a01004 	mov	r1, r4
        162d68:	e1a00009 	mov	r0, r9
        162d6c:	eb69dbcc 	bl	1bd9ca4 <$ReleaseRequest__20TUPageManagerMonitorSFUli>
        162d70:	e5980000 	ldr	r0, [r8]
        162d74:	eb6695a8 	bl	1b0841c <TPageTracker::$Take(void)>
        162d78:	e3300000 	teq	r0, #0	; 0x0
        162d7c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        162d80:	e2855001 	add	r5, r5, #1	; 0x1
        162d84:	e1550007 	cmp	r5, r7
        162d88:	baffffee 	blt	162d48 <TPageManager::QueryClients(int, TUMonitor *)+0x2c>
        162d8c:	e3a00000 	mov	r0, #0	; 0x0
        162d90:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        162d94:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

/**
 * Symbol: Make__12TPageManagerSFRUlUlP11TLittlePhys
 * Address: 00162d98
 */
void TPageManager::Make() {
    /*
        162d98:	e1a0c00d 	mov	ip, sp
        162d9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        162da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        162da4:	e1a05000 	mov	r5, r0
        162da8:	e1a06001 	mov	r6, r1
        162dac:	e1a04002 	mov	r4, r2
        162db0:	eb08bf42 	bl	392ac0 <EnterAtomic>
        162db4:	e1a03006 	mov	r3, r6
        162db8:	e1a01004 	mov	r1, r4
        162dbc:	e59f0018 	ldr	r0, [pc, #18]	; 162ddc <Make__12TPageManagerSFRUlUlP11TLittlePhys+0x44>
        162dc0:	e5900000 	ldr	r0, [r0]
        162dc4:	e3a0200b 	mov	r2, #11	; 0xb
        162dc8:	eb663abe 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        162dcc:	e5850000 	str	r0, [r5]
        162dd0:	eb08bf51 	bl	392b1c <ExitAtomic>
        162dd4:	e3a00000 	mov	r0, #0	; 0x0
        162dd8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        162ddc:	0c101164 	ldfeqs	f1, [r0], -#400
    */
}

/**
 * Symbol: TPageManager::Get(unsigned long &, unsigned long, int)
 * Address: 00162de0
 */
TPageManager::Get(unsigned long &, unsigned long, int) {
    /*
        162de0:	e1a0c00d 	mov	ip, sp
        162de4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        162de8:	e24cb004 	sub	fp, ip, #4	; 0x4
        162dec:	e1a06000 	mov	r6, r0
        162df0:	e1a05001 	mov	r5, r1
        162df4:	e1a04002 	mov	r4, r2
        162df8:	e1a07003 	mov	r7, r3
        162dfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        162e00:	e1a0000d 	mov	r0, sp
        162e04:	e3a01000 	mov	r1, #0	; 0x0
        162e08:	eb69aa33 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        162e0c:	e1a0300d 	mov	r3, sp
        162e10:	e92d0008 	stmdb	sp!, {r3}
        162e14:	e1a03007 	mov	r3, r7
        162e18:	e1a02004 	mov	r2, r4
        162e1c:	e1a01005 	mov	r1, r5
        162e20:	e1a00006 	mov	r0, r6
        162e24:	eb66cb34 	bl	1b15afc <TPageManager::$Get(unsigned long &, unsigned long, int, TUMonitor *)>
        162e28:	e28dd004 	add	sp, sp, #4	; 0x4
        162e2c:	e1a04000 	mov	r4, r0
        162e30:	e1a0000d 	mov	r0, sp
        162e34:	e3a01000 	mov	r1, #0	; 0x0
        162e38:	eb69ae3c 	bl	1bce730 <TUMonitor::$__dt(void)>
        162e3c:	e1a00004 	mov	r0, r4
        162e40:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPageManager::Get(unsigned long &, unsigned long, int, TUMonitor *)
 * Address: 00162e44
 */
TPageManager::Get(unsigned long &, unsigned long, int, TUMonitor *) {
    /*
        162e44:	e1a0c00d 	mov	ip, sp
        162e48:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        162e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        162e50:	e1a04000 	mov	r4, r0
        162e54:	e1a07001 	mov	r7, r1
        162e58:	e1a06002 	mov	r6, r2
        162e5c:	e1a05003 	mov	r5, r3
        162e60:	e59b9004 	ldr	r9, [fp, #4]
        162e64:	e59f0060 	ldr	r0, [pc, #60]	; 162ecc <TPageManager::Get(unsigned long &, unsigned long, int, TUMonitor *)+0x88>
        162e68:	e5900000 	ldr	r0, [r0]
        162e6c:	eb66956a 	bl	1b0841c <TPageTracker::$Take(void)>
        162e70:	e1b08000 	movs	r8, r0
        162e74:	1a000009 	bne	162ea0 <TPageManager::Get(unsigned long &, unsigned long, int, TUMonitor *)+0x5c>
        162e78:	e1a02009 	mov	r2, r9
        162e7c:	e1a01005 	mov	r1, r5
        162e80:	e1a00004 	mov	r0, r4
        162e84:	eb66cb1b 	bl	1b15af8 <TPageManager::$QueryClients(int, TUMonitor *)>
        162e88:	e1b08000 	movs	r8, r0
        162e8c:	03a00001 	moveq	r0, #1	; 0x1
        162e90:	05c40000 	streqb	r0, [r4]
        162e94:	03e00042 	mvneq	r0, #66	; 0x42
        162e98:	02400c27 	subeq	r0, r0, #9984	; 0x2700
        162e9c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        162ea0:	eb08bf06 	bl	392ac0 <EnterAtomic>
        162ea4:	e1a03006 	mov	r3, r6
        162ea8:	e1a01008 	mov	r1, r8
        162eac:	e59f001c 	ldr	r0, [pc, #1c]	; 162ed0 <TPageManager::Get(unsigned long &, unsigned long, int, TUMonitor *)+0x8c>
        162eb0:	e5900000 	ldr	r0, [r0]
        162eb4:	e3a0200b 	mov	r2, #11	; 0xb
        162eb8:	eb663a82 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        162ebc:	e5870000 	str	r0, [r7]
        162ec0:	eb08bf15 	bl	392b1c <ExitAtomic>
        162ec4:	e3a00000 	mov	r0, #0	; 0x0
        162ec8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        162ecc:	0c104f48 	ldceq	15, cr4, [r0], -#288
        162ed0:	0c101164 	ldfeqs	f1, [r0], -#400
    */
}

/**
 * Symbol: TPageManager::AskOnePageToAClient(int, unsigned long)
 * Address: 00162ed4
 */
TPageManager::AskOnePageToAClient(int, unsigned long) {
    /*
        162ed4:	e1a0c00d 	mov	ip, sp
        162ed8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        162edc:	e24cb004 	sub	fp, ip, #4	; 0x4
        162ee0:	e1a05001 	mov	r5, r1
        162ee4:	e1a04002 	mov	r4, r2
        162ee8:	e2800004 	add	r0, r0, #4	; 0x4
        162eec:	e1a08000 	mov	r8, r0
        162ef0:	e3a07000 	mov	r7, #0	; 0x0
        162ef4:	e5b09008 	ldr	r9, [r0, #8]!	; fField8
        162ef8:	e3590000 	cmp	r9, #0	; 0x0
        162efc:	da000011 	ble	162f48 <TPageManager::AskOnePageToAClient(int, unsigned long)+0x74>
        162f00:	e1a00008 	mov	r0, r8
        162f04:	e3a01000 	mov	r1, #0	; 0x0
        162f08:	eb663a63 	bl	1af189c <TRing::$__vc(int const)>
        162f0c:	e5906000 	ldr	r6, [r0]
        162f10:	e1a00008 	mov	r0, r8
        162f14:	e3a01001 	mov	r1, #1	; 0x1
        162f18:	eb6684d2 	bl	1b04268 <TRing::$Rotate(int)>
        162f1c:	e1360004 	teq	r6, r4
        162f20:	0a000005 	beq	162f3c <TPageManager::AskOnePageToAClient(int, unsigned long)+0x68>
        162f24:	e1a01005 	mov	r1, r5
        162f28:	e1a00006 	mov	r0, r6
        162f2c:	eb69db5c 	bl	1bd9ca4 <$ReleaseRequest__20TUPageManagerMonitorSFUli>
        162f30:	e3300000 	teq	r0, #0	; 0x0
        162f34:	03a00001 	moveq	r0, #1	; 0x1
        162f38:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        162f3c:	e2877001 	add	r7, r7, #1	; 0x1
        162f40:	e1570009 	cmp	r7, r9
        162f44:	baffffed 	blt	162f00 <TPageManager::AskOnePageToAClient(int, unsigned long)+0x2c>
        162f48:	e3a00000 	mov	r0, #0	; 0x0
        162f4c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)
 * Address: 00162f50
 */
TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *) {
    /*
        162f50:	e1a0c00d 	mov	ip, sp
        162f54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        162f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        162f5c:	e1a05000 	mov	r5, r0
        162f60:	e1a04001 	mov	r4, r1
        162f64:	e59f609c 	ldr	r6, [pc, #9c]	; 163008 <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0xb8>
        162f68:	e5960000 	ldr	r0, [r6]
        162f6c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162f70:	e5911004 	ldr	r1, [r1, #4]
        162f74:	e1500001 	cmp	r0, r1
        162f78:	2a00000a 	bcs	162fa8 <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x58>
        162f7c:	e1a00005 	mov	r0, r5
        162f80:	e3a01001 	mov	r1, #1	; 0x1
        162f84:	e5942008 	ldr	r2, [r4, #8]	; fField8
        162f88:	eb66cedc 	bl	1b16b00 <TPageManager::$AskOnePageToAClient(int, unsigned long)>
        162f8c:	e3300000 	teq	r0, #0	; 0x0
        162f90:	0a000004 	beq	162fa8 <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x58>
        162f94:	e5960000 	ldr	r0, [r6]
        162f98:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162f9c:	e5941004 	ldr	r1, [r4, #4]
        162fa0:	e1500001 	cmp	r0, r1
        162fa4:	3afffff4 	bcc	162f7c <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x2c>
        162fa8:	e5960000 	ldr	r0, [r6]
        162fac:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162fb0:	e5941000 	ldr	r1, [r4]
        162fb4:	e1500001 	cmp	r0, r1
        162fb8:	2a00000a 	bcs	162fe8 <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x98>
        162fbc:	e1a00005 	mov	r0, r5
        162fc0:	e3a01002 	mov	r1, #2	; 0x2
        162fc4:	e5942008 	ldr	r2, [r4, #8]	; fField8
        162fc8:	eb66cecc 	bl	1b16b00 <TPageManager::$AskOnePageToAClient(int, unsigned long)>
        162fcc:	e3300000 	teq	r0, #0	; 0x0
        162fd0:	0a000004 	beq	162fe8 <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x98>
        162fd4:	e5960000 	ldr	r0, [r6]
        162fd8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162fdc:	e5941000 	ldr	r1, [r4]
        162fe0:	e1500001 	cmp	r0, r1
        162fe4:	3afffff4 	bcc	162fbc <TPageManager::ReleasePagesForFaultHandling(TPMReleasePagesForFaultHandling *)+0x6c>
        162fe8:	e5960000 	ldr	r0, [r6]
        162fec:	e5900008 	ldr	r0, [r0, #8]	; fField8
        162ff0:	e5941000 	ldr	r1, [r4]
        162ff4:	e1500001 	cmp	r0, r1
        162ff8:	23a00000 	movcs	r0, #0	; 0x0
        162ffc:	33a000e9 	movcc	r0, #233	; 0xe9
        163000:	32400b0a 	subcc	r0, r0, #10240	; 0x2800
        163004:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        163008:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

