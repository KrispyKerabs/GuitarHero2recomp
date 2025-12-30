#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822CF794"))) PPC_WEAK_FUNC(sub_822CF794);
PPC_FUNC_IMPL(__imp__sub_822CF794) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10124
	ctx.r11.s64 = ctx.r11.s64 + -10124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10124
	ctx.r10.s64 = ctx.r10.s64 + -10124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF7BC"))) PPC_WEAK_FUNC(sub_822CF7BC);
PPC_FUNC_IMPL(__imp__sub_822CF7BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10124
	ctx.r11.s64 = ctx.r11.s64 + -10124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10124
	ctx.r10.s64 = ctx.r10.s64 + -10124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF7E4"))) PPC_WEAK_FUNC(sub_822CF7E4);
PPC_FUNC_IMPL(__imp__sub_822CF7E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10124
	ctx.r11.s64 = ctx.r11.s64 + -10124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10124
	ctx.r10.s64 = ctx.r10.s64 + -10124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF80C"))) PPC_WEAK_FUNC(sub_822CF80C);
PPC_FUNC_IMPL(__imp__sub_822CF80C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10124
	ctx.r11.s64 = ctx.r11.s64 + -10124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10124
	ctx.r10.s64 = ctx.r10.s64 + -10124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF834"))) PPC_WEAK_FUNC(sub_822CF834);
PPC_FUNC_IMPL(__imp__sub_822CF834) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10124
	ctx.r11.s64 = ctx.r11.s64 + -10124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10124
	ctx.r10.s64 = ctx.r10.s64 + -10124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF85C"))) PPC_WEAK_FUNC(sub_822CF85C);
PPC_FUNC_IMPL(__imp__sub_822CF85C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x822CF874;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF884"))) PPC_WEAK_FUNC(sub_822CF884);
PPC_FUNC_IMPL(__imp__sub_822CF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CF888"))) PPC_WEAK_FUNC(sub_822CF888);
PPC_FUNC_IMPL(__imp__sub_822CF888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,26856(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26856);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x822CF898;
	sub_8239BA0C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf8c4
	if (ctx.cr0.eq) goto loc_822CF8C4;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e1cf8
	ctx.lr = 0x822CF8C0;
	sub_822E1CF8(ctx, base);
	// b 0x822cfb20
	goto loc_822CFB20;
loc_822CF8C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cea80
	ctx.lr = 0x822CF8CC;
	sub_822CEA80(ctx, base);
	// lbz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf8ec
	if (ctx.cr0.eq) goto loc_822CF8EC;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e1cf8
	ctx.lr = 0x822CF8E4;
	sub_822E1CF8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x822cf904
	goto loc_822CF904;
loc_822CF8EC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822CF8F8;
	sub_82311678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_822CF904:
	// lbz r11,129(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 129);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822cf994
	if (!ctx.cr0.eq) goto loc_822CF994;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce990
	ctx.lr = 0x822CF91C;
	sub_822CE990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf994
	if (ctx.cr0.eq) goto loc_822CF994;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82338748
	ctx.lr = 0x822CF930;
	sub_82338748(ctx, base);
	// addi r30,r29,132
	ctx.r30.s64 = ctx.r29.s64 + 132;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf988
	if (ctx.cr0.eq) goto loc_822CF988;
	// addi r26,r29,44
	ctx.r26.s64 = ctx.r29.s64 + 44;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_822CF954:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x822e22e0
	ctx.lr = 0x822CF968;
	sub_822E22E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822cf954
	if (ctx.cr6.lt) goto loc_822CF954;
loc_822CF988:
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c9a28
	ctx.lr = 0x822CF994;
	sub_822C9A28(ctx, base);
loc_822CF994:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-11024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11024);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823313e8
	ctx.lr = 0x822CF9A8;
	sub_823313E8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822cfa00
	if (!ctx.cr6.lt) goto loc_822CFA00;
loc_822CF9C8:
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822cfa00
	if (ctx.cr6.gt) goto loc_822CFA00;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822cf9c8
	if (ctx.cr6.lt) goto loc_822CF9C8;
loc_822CFA00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cfb1c
	if (!ctx.cr6.lt) goto loc_822CFB1C;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lbz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822cfb1c
	if (ctx.cr6.eq) goto loc_822CFB1C;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-10112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r30,r9,-10120
	ctx.r30.s64 = ctx.r9.s64 + -10120;
	// bne 0x822cfaa0
	if (!ctx.cr0.eq) goto loc_822CFAA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10112, ctx.r11.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x823559d8
	ctx.lr = 0x822CFA6C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82133358
	ctx.lr = 0x822CFA80;
	sub_82133358(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfa94
	if (ctx.cr0.eq) goto loc_822CFA94;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822CFA94;
	sub_82120818(ctx, base);
loc_822CFA94:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFAA0;
	sub_8239D4B8(ctx, base);
loc_822CFAA0:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317b30
	ctx.lr = 0x822CFABC;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfad0
	if (ctx.cr0.eq) goto loc_822CFAD0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822CFAD0;
	sub_82120818(ctx, base);
loc_822CFAD0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,-10420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfb18
	if (ctx.cr0.eq) goto loc_822CFB18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822CFB18;
	sub_82120818(ctx, base);
loc_822CFB18:
	// stw r28,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r28.u32);
loc_822CFB1C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_822CFB20:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_822CF890"))) PPC_WEAK_FUNC(sub_822CF890);
PPC_FUNC_IMPL(__imp__sub_822CF890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x822CF898;
	sub_8239BA0C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf8c4
	if (ctx.cr0.eq) goto loc_822CF8C4;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e1cf8
	ctx.lr = 0x822CF8C0;
	sub_822E1CF8(ctx, base);
	// b 0x822cfb20
	goto loc_822CFB20;
loc_822CF8C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cea80
	ctx.lr = 0x822CF8CC;
	sub_822CEA80(ctx, base);
	// lbz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf8ec
	if (ctx.cr0.eq) goto loc_822CF8EC;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e1cf8
	ctx.lr = 0x822CF8E4;
	sub_822E1CF8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x822cf904
	goto loc_822CF904;
loc_822CF8EC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822CF8F8;
	sub_82311678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_822CF904:
	// lbz r11,129(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 129);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822cf994
	if (!ctx.cr0.eq) goto loc_822CF994;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce990
	ctx.lr = 0x822CF91C;
	sub_822CE990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf994
	if (ctx.cr0.eq) goto loc_822CF994;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82338748
	ctx.lr = 0x822CF930;
	sub_82338748(ctx, base);
	// addi r30,r29,132
	ctx.r30.s64 = ctx.r29.s64 + 132;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf988
	if (ctx.cr0.eq) goto loc_822CF988;
	// addi r26,r29,44
	ctx.r26.s64 = ctx.r29.s64 + 44;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_822CF954:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x822e22e0
	ctx.lr = 0x822CF968;
	sub_822E22E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822cf954
	if (ctx.cr6.lt) goto loc_822CF954;
loc_822CF988:
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c9a28
	ctx.lr = 0x822CF994;
	sub_822C9A28(ctx, base);
loc_822CF994:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-11024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11024);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823313e8
	ctx.lr = 0x822CF9A8;
	sub_823313E8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822cfa00
	if (!ctx.cr6.lt) goto loc_822CFA00;
loc_822CF9C8:
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822cfa00
	if (ctx.cr6.gt) goto loc_822CFA00;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822cf9c8
	if (ctx.cr6.lt) goto loc_822CF9C8;
loc_822CFA00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cfb1c
	if (!ctx.cr6.lt) goto loc_822CFB1C;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lbz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822cfb1c
	if (ctx.cr6.eq) goto loc_822CFB1C;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-10112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r30,r9,-10120
	ctx.r30.s64 = ctx.r9.s64 + -10120;
	// bne 0x822cfaa0
	if (!ctx.cr0.eq) goto loc_822CFAA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10112, ctx.r11.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x823559d8
	ctx.lr = 0x822CFA6C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82133358
	ctx.lr = 0x822CFA80;
	sub_82133358(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfa94
	if (ctx.cr0.eq) goto loc_822CFA94;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822CFA94;
	sub_82120818(ctx, base);
loc_822CFA94:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFAA0;
	sub_8239D4B8(ctx, base);
loc_822CFAA0:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317b30
	ctx.lr = 0x822CFABC;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfad0
	if (ctx.cr0.eq) goto loc_822CFAD0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822CFAD0;
	sub_82120818(ctx, base);
loc_822CFAD0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,-10420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfb18
	if (ctx.cr0.eq) goto loc_822CFB18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822CFB18;
	sub_82120818(ctx, base);
loc_822CFB18:
	// stw r28,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r28.u32);
loc_822CFB1C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_822CFB20:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_822CFB2C"))) PPC_WEAK_FUNC(sub_822CFB2C);
PPC_FUNC_IMPL(__imp__sub_822CFB2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10112
	ctx.r11.s64 = ctx.r11.s64 + -10112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10112
	ctx.r10.s64 = ctx.r10.s64 + -10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFB54"))) PPC_WEAK_FUNC(sub_822CFB54);
PPC_FUNC_IMPL(__imp__sub_822CFB54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82120868
	ctx.lr = 0x822CFB6C;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFB7C"))) PPC_WEAK_FUNC(sub_822CFB7C);
PPC_FUNC_IMPL(__imp__sub_822CFB7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x822CFB94;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFBA4"))) PPC_WEAK_FUNC(sub_822CFBA4);
PPC_FUNC_IMPL(__imp__sub_822CFBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CFBA8"))) PPC_WEAK_FUNC(sub_822CFBA8);
PPC_FUNC_IMPL(__imp__sub_822CFBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,27096(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27096);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9e8
	ctx.lr = 0x822CFBB8;
	sub_8239B9E8(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r11,-4208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4208);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,24(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27524);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r20,r10,-10076
	ctx.r20.s64 = ctx.r10.s64 + -10076;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmadds f31,f12,f0,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bne 0x822cfc38
	if (!ctx.cr0.eq) goto loc_822CFC38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,27012
	ctx.r4.s64 = ctx.r11.s64 + 27012;
	// bl 0x823559d8
	ctx.lr = 0x822CFC34;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC38:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r16,r10,-10080
	ctx.r16.s64 = ctx.r10.s64 + -10080;
	// bne 0x822cfc64
	if (!ctx.cr0.eq) goto loc_822CFC64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r4,r11,27004
	ctx.r4.s64 = ctx.r11.s64 + 27004;
	// bl 0x823559d8
	ctx.lr = 0x822CFC60;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC64:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r19,r10,-10084
	ctx.r19.s64 = ctx.r10.s64 + -10084;
	// bne 0x822cfc90
	if (!ctx.cr0.eq) goto loc_822CFC90;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// bl 0x823559d8
	ctx.lr = 0x822CFC8C;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC90:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r21,r10,-10088
	ctx.r21.s64 = ctx.r10.s64 + -10088;
	// bne 0x822cfcb8
	if (!ctx.cr0.eq) goto loc_822CFCB8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,26984
	ctx.r4.s64 = ctx.r11.s64 + 26984;
	// bl 0x823559d8
	ctx.lr = 0x822CFCB8;
	sub_823559D8(ctx, base);
loc_822CFCB8:
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r11,116(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cff88
	if (!ctx.cr6.lt) goto loc_822CFF88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r26,-32128
	ctx.r26.s64 = -2105540608;
	// addi r25,r11,26968
	ctx.r25.s64 = ctx.r11.s64 + 26968;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r24,-32128
	ctx.r24.s64 = -2105540608;
	// addi r28,r11,-10096
	ctx.r28.s64 = ctx.r11.s64 + -10096;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,26956
	ctx.r23.s64 = ctx.r11.s64 + 26956;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r27,r11,-10108
	ctx.r27.s64 = ctx.r11.s64 + -10108;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,26936
	ctx.r22.s64 = ctx.r11.s64 + 26936;
loc_822CFD04:
	// lwz r10,116(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822cff88
	if (ctx.cr6.gt) goto loc_822CFF88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317ec0
	ctx.lr = 0x822CFD30;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822CFD40;
	sub_82317D30(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cfdc0
	if (!ctx.cr0.eq) goto loc_822CFDC0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256138
	ctx.lr = 0x822CFDB4;
	sub_82256138(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFDC0;
	sub_8239D4B8(ctx, base);
loc_822CFDC0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFDCC;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256968
	ctx.lr = 0x822CFDDC;
	sub_82256968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317ec0
	ctx.lr = 0x822CFDE8;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822CFDF8;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823178a8
	ctx.lr = 0x822CFE08;
	sub_823178A8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317b30
	ctx.lr = 0x822CFE1C;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfe30
	if (ctx.cr0.eq) goto loc_822CFE30;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822CFE30;
	sub_82120818(ctx, base);
loc_822CFE30:
	// lwz r11,-10420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// b 0x822cff5c
	goto loc_822CFF5C;
loc_822CFE74:
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cfea8
	if (!ctx.cr0.eq) goto loc_822CFEA8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFE94;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822CFE9C;
	sub_82318910(ctx, base);
	// stw r3,-10100(r24)
	PPC_STORE_U32(ctx.r24.u32 + -10100, ctx.r3.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x822cfeac
	goto loc_822CFEAC;
loc_822CFEA8:
	// lwz r3,-10100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10100);
loc_822CFEAC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82317b30
	ctx.lr = 0x822CFEC0;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfed4
	if (ctx.cr0.eq) goto loc_822CFED4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822CFED4;
	sub_82120818(ctx, base);
loc_822CFED4:
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cff00
	if (!ctx.cr0.eq) goto loc_822CFF00;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82256138
	ctx.lr = 0x822CFEF4;
	sub_82256138(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFF00;
	sub_8239D4B8(ctx, base);
loc_822CFF00:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFF0C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256968
	ctx.lr = 0x822CFF1C;
	sub_82256968(ctx, base);
	// lwz r11,-10420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_822CFF5C:
	// bl 0x82120818
	ctx.lr = 0x822CFF60;
	sub_82120818(ctx, base);
loc_822CFF60:
	// lwz r11,116(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r18)
	PPC_STORE_U32(ctx.r18.u32 + 116, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822cfd04
	if (ctx.cr6.lt) goto loc_822CFD04;
loc_822CFF88:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239ba38
	// ERROR 8239BA38
	return;
}

__attribute__((alias("__imp__sub_822CFBB0"))) PPC_WEAK_FUNC(sub_822CFBB0);
PPC_FUNC_IMPL(__imp__sub_822CFBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9e8
	ctx.lr = 0x822CFBB8;
	sub_8239B9E8(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r11,-4208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4208);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,24(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27524);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r20,r10,-10076
	ctx.r20.s64 = ctx.r10.s64 + -10076;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmadds f31,f12,f0,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bne 0x822cfc38
	if (!ctx.cr0.eq) goto loc_822CFC38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,27012
	ctx.r4.s64 = ctx.r11.s64 + 27012;
	// bl 0x823559d8
	ctx.lr = 0x822CFC34;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC38:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r16,r10,-10080
	ctx.r16.s64 = ctx.r10.s64 + -10080;
	// bne 0x822cfc64
	if (!ctx.cr0.eq) goto loc_822CFC64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r4,r11,27004
	ctx.r4.s64 = ctx.r11.s64 + 27004;
	// bl 0x823559d8
	ctx.lr = 0x822CFC60;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC64:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r19,r10,-10084
	ctx.r19.s64 = ctx.r10.s64 + -10084;
	// bne 0x822cfc90
	if (!ctx.cr0.eq) goto loc_822CFC90;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// bl 0x823559d8
	ctx.lr = 0x822CFC8C;
	sub_823559D8(ctx, base);
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
loc_822CFC90:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r21,r10,-10088
	ctx.r21.s64 = ctx.r10.s64 + -10088;
	// bne 0x822cfcb8
	if (!ctx.cr0.eq) goto loc_822CFCB8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,26984
	ctx.r4.s64 = ctx.r11.s64 + 26984;
	// bl 0x823559d8
	ctx.lr = 0x822CFCB8;
	sub_823559D8(ctx, base);
loc_822CFCB8:
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r11,116(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cff88
	if (!ctx.cr6.lt) goto loc_822CFF88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r26,-32128
	ctx.r26.s64 = -2105540608;
	// addi r25,r11,26968
	ctx.r25.s64 = ctx.r11.s64 + 26968;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r24,-32128
	ctx.r24.s64 = -2105540608;
	// addi r28,r11,-10096
	ctx.r28.s64 = ctx.r11.s64 + -10096;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,26956
	ctx.r23.s64 = ctx.r11.s64 + 26956;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r27,r11,-10108
	ctx.r27.s64 = ctx.r11.s64 + -10108;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,26936
	ctx.r22.s64 = ctx.r11.s64 + 26936;
loc_822CFD04:
	// lwz r10,116(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822cff88
	if (ctx.cr6.gt) goto loc_822CFF88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317ec0
	ctx.lr = 0x822CFD30;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822CFD40;
	sub_82317D30(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cfe74
	if (!ctx.cr0.eq) goto loc_822CFE74;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cfdc0
	if (!ctx.cr0.eq) goto loc_822CFDC0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256138
	ctx.lr = 0x822CFDB4;
	sub_82256138(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFDC0;
	sub_8239D4B8(ctx, base);
loc_822CFDC0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFDCC;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256968
	ctx.lr = 0x822CFDDC;
	sub_82256968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317ec0
	ctx.lr = 0x822CFDE8;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822CFDF8;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823178a8
	ctx.lr = 0x822CFE08;
	sub_823178A8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317b30
	ctx.lr = 0x822CFE1C;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfe30
	if (ctx.cr0.eq) goto loc_822CFE30;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822CFE30;
	sub_82120818(ctx, base);
loc_822CFE30:
	// lwz r11,-10420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// b 0x822cff5c
	goto loc_822CFF5C;
loc_822CFE74:
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cfea8
	if (!ctx.cr0.eq) goto loc_822CFEA8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFE94;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822CFE9C;
	sub_82318910(ctx, base);
	// stw r3,-10100(r24)
	PPC_STORE_U32(ctx.r24.u32 + -10100, ctx.r3.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x822cfeac
	goto loc_822CFEAC;
loc_822CFEA8:
	// lwz r3,-10100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10100);
loc_822CFEAC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82317b30
	ctx.lr = 0x822CFEC0;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfed4
	if (ctx.cr0.eq) goto loc_822CFED4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822CFED4;
	sub_82120818(ctx, base);
loc_822CFED4:
	// lwz r11,-10072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10072);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cff00
	if (!ctx.cr0.eq) goto loc_822CFF00;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,-10072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10072, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82256138
	ctx.lr = 0x822CFEF4;
	sub_82256138(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// bl 0x8239d4b8
	ctx.lr = 0x822CFF00;
	sub_8239D4B8(ctx, base);
loc_822CFF00:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x823559d8
	ctx.lr = 0x822CFF0C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256968
	ctx.lr = 0x822CFF1C;
	sub_82256968(ctx, base);
	// lwz r11,-10420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff60
	if (ctx.cr0.eq) goto loc_822CFF60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_822CFF5C:
	// bl 0x82120818
	ctx.lr = 0x822CFF60;
	sub_82120818(ctx, base);
loc_822CFF60:
	// lwz r11,116(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r18)
	PPC_STORE_U32(ctx.r18.u32 + 116, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822cfd04
	if (ctx.cr6.lt) goto loc_822CFD04;
loc_822CFF88:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239ba38
	// ERROR 8239BA38
	return;
}

__attribute__((alias("__imp__sub_822CFF94"))) PPC_WEAK_FUNC(sub_822CFF94);
PPC_FUNC_IMPL(__imp__sub_822CFF94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFFBC"))) PPC_WEAK_FUNC(sub_822CFFBC);
PPC_FUNC_IMPL(__imp__sub_822CFFBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFFE4"))) PPC_WEAK_FUNC(sub_822CFFE4);
PPC_FUNC_IMPL(__imp__sub_822CFFE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D000C"))) PPC_WEAK_FUNC(sub_822D000C);
PPC_FUNC_IMPL(__imp__sub_822D000C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0034"))) PPC_WEAK_FUNC(sub_822D0034);
PPC_FUNC_IMPL(__imp__sub_822D0034) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D005C"))) PPC_WEAK_FUNC(sub_822D005C);
PPC_FUNC_IMPL(__imp__sub_822D005C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82120868
	ctx.lr = 0x822D0074;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0084"))) PPC_WEAK_FUNC(sub_822D0084);
PPC_FUNC_IMPL(__imp__sub_822D0084) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D00AC"))) PPC_WEAK_FUNC(sub_822D00AC);
PPC_FUNC_IMPL(__imp__sub_822D00AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x822D00C4;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D00D4"))) PPC_WEAK_FUNC(sub_822D00D4);
PPC_FUNC_IMPL(__imp__sub_822D00D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10072
	ctx.r11.s64 = ctx.r11.s64 + -10072;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10072
	ctx.r10.s64 = ctx.r10.s64 + -10072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D00FC"))) PPC_WEAK_FUNC(sub_822D00FC);
PPC_FUNC_IMPL(__imp__sub_822D00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0100"))) PPC_WEAK_FUNC(sub_822D0100);
PPC_FUNC_IMPL(__imp__sub_822D0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba04
	ctx.lr = 0x822D0108;
	sub_8239BA04(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x822d0148
	if (ctx.cr6.lt) goto loc_822D0148;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822D0148:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822ce7d0
	ctx.lr = 0x822D0164;
	sub_822CE7D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822d0180
	if (ctx.cr0.eq) goto loc_822D0180;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8239d4f0
	ctx.lr = 0x822D017C;
	sub_8239D4F0(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_822D0180:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d01a0
	if (ctx.cr6.eq) goto loc_822D01A0;
loc_822D018C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x822d018c
	if (!ctx.cr0.eq) goto loc_822D018C;
loc_822D01A0:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bne 0x822d01c8
	if (!ctx.cr0.eq) goto loc_822D01C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf. r30,r26,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822d01c8
	if (ctx.cr0.eq) goto loc_822D01C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8239d4f0
	ctx.lr = 0x822D01C4;
	sub_8239D4F0(ctx, base);
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_822D01C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354cb0
	ctx.lr = 0x822D01E0;
	sub_82354CB0(ctx, base);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239ba54
	// ERROR 8239BA54
	return;
}

__attribute__((alias("__imp__sub_822D01FC"))) PPC_WEAK_FUNC(sub_822D01FC);
PPC_FUNC_IMPL(__imp__sub_822D01FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0200"))) PPC_WEAK_FUNC(sub_822D0200);
PPC_FUNC_IMPL(__imp__sub_822D0200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,27360(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27360);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D0210;
	sub_8239BA08(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-32128
	ctx.r25.s64 = -2105540608;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d03c0
	if (ctx.cr6.eq) goto loc_822D03C0;
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,27288
	ctx.r28.s64 = ctx.r10.s64 + 27288;
	// bne 0x822d0278
	if (!ctx.cr0.eq) goto loc_822D0278;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D0268;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D0270;
	sub_82318910(ctx, base);
	// stw r3,-10044(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10044, ctx.r3.u32);
	// b 0x822d027c
	goto loc_822D027C;
loc_822D0278:
	// lwz r3,-10044(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10044);
loc_822D027C:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,480
	ctx.r10.s64 = 480;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x82317b30
	ctx.lr = 0x822D02A8;
	sub_82317B30(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d02bc
	if (ctx.cr0.eq) goto loc_822D02BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822D02BC;
	sub_82120818(ctx, base);
loc_822D02BC:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d02f4
	if (!ctx.cr0.eq) goto loc_822D02F4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27276
	ctx.r4.s64 = ctx.r11.s64 + 27276;
	// bl 0x823559d8
	ctx.lr = 0x822D02E4;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D02EC;
	sub_82318910(ctx, base);
	// stw r3,-10048(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10048, ctx.r3.u32);
	// b 0x822d02f8
	goto loc_822D02F8;
loc_822D02F4:
	// lwz r3,-10048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10048);
loc_822D02F8:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d030c
	if (!ctx.cr0.eq) goto loc_822D030C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822d0314
	goto loc_822D0314;
loc_822D030C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D0314:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82317b30
	ctx.lr = 0x822D0324;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0338
	if (ctx.cr0.eq) goto loc_822D0338;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822D0338;
	sub_82120818(ctx, base);
loc_822D0338:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-10056
	ctx.r29.s64 = ctx.r10.s64 + -10056;
	// bne 0x822d037c
	if (!ctx.cr0.eq) goto loc_822D037C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D0360;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x822D0370;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// bl 0x8239d4b8
	ctx.lr = 0x822D037C;
	sub_8239D4B8(ctx, base);
loc_822D037C:
	// lwz r11,-10420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D03AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d03c0
	if (ctx.cr0.eq) goto loc_822D03C0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82120818
	ctx.lr = 0x822D03C0;
	sub_82120818(ctx, base);
loc_822D03C0:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d04c0
	if (ctx.cr6.eq) goto loc_822D04C0;
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d0408
	if (!ctx.cr0.eq) goto loc_822D0408;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27268
	ctx.r4.s64 = ctx.r11.s64 + 27268;
	// bl 0x823559d8
	ctx.lr = 0x822D03F8;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D0400;
	sub_82318910(ctx, base);
	// stw r3,-10060(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10060, ctx.r3.u32);
	// b 0x822d040c
	goto loc_822D040C;
loc_822D0408:
	// lwz r3,-10060(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10060);
loc_822D040C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// bl 0x82317b30
	ctx.lr = 0x822D0420;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0434
	if (ctx.cr0.eq) goto loc_822D0434;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822D0434;
	sub_82120818(ctx, base);
loc_822D0434:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-10068
	ctx.r29.s64 = ctx.r10.s64 + -10068;
	// bne 0x822d047c
	if (!ctx.cr0.eq) goto loc_822D047C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27256
	ctx.r4.s64 = ctx.r11.s64 + 27256;
	// bl 0x823559d8
	ctx.lr = 0x822D0460;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x822D0470;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// bl 0x8239d4b8
	ctx.lr = 0x822D047C;
	sub_8239D4B8(ctx, base);
loc_822D047C:
	// lwz r11,-10420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D04AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d04c0
	if (ctx.cr0.eq) goto loc_822D04C0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82120818
	ctx.lr = 0x822D04C0;
	sub_82120818(ctx, base);
loc_822D04C0:
	// addi r10,r24,44
	ctx.r10.s64 = ctx.r24.s64 + 44;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D04D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822d04d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D04D0;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822cfbb0
	ctx.lr = 0x822D0500;
	sub_822CFBB0(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D0208"))) PPC_WEAK_FUNC(sub_822D0208);
PPC_FUNC_IMPL(__imp__sub_822D0208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D0210;
	sub_8239BA08(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-32128
	ctx.r25.s64 = -2105540608;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d03c0
	if (ctx.cr6.eq) goto loc_822D03C0;
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,27288
	ctx.r28.s64 = ctx.r10.s64 + 27288;
	// bne 0x822d0278
	if (!ctx.cr0.eq) goto loc_822D0278;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D0268;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D0270;
	sub_82318910(ctx, base);
	// stw r3,-10044(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10044, ctx.r3.u32);
	// b 0x822d027c
	goto loc_822D027C;
loc_822D0278:
	// lwz r3,-10044(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10044);
loc_822D027C:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,480
	ctx.r10.s64 = 480;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x82317b30
	ctx.lr = 0x822D02A8;
	sub_82317B30(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d02bc
	if (ctx.cr0.eq) goto loc_822D02BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822D02BC;
	sub_82120818(ctx, base);
loc_822D02BC:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d02f4
	if (!ctx.cr0.eq) goto loc_822D02F4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27276
	ctx.r4.s64 = ctx.r11.s64 + 27276;
	// bl 0x823559d8
	ctx.lr = 0x822D02E4;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D02EC;
	sub_82318910(ctx, base);
	// stw r3,-10048(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10048, ctx.r3.u32);
	// b 0x822d02f8
	goto loc_822D02F8;
loc_822D02F4:
	// lwz r3,-10048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10048);
loc_822D02F8:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d030c
	if (!ctx.cr0.eq) goto loc_822D030C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822d0314
	goto loc_822D0314;
loc_822D030C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D0314:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82317b30
	ctx.lr = 0x822D0324;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0338
	if (ctx.cr0.eq) goto loc_822D0338;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x822D0338;
	sub_82120818(ctx, base);
loc_822D0338:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-10056
	ctx.r29.s64 = ctx.r10.s64 + -10056;
	// bne 0x822d037c
	if (!ctx.cr0.eq) goto loc_822D037C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D0360;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x822D0370;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// bl 0x8239d4b8
	ctx.lr = 0x822D037C;
	sub_8239D4B8(ctx, base);
loc_822D037C:
	// lwz r11,-10420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D03AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d03c0
	if (ctx.cr0.eq) goto loc_822D03C0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82120818
	ctx.lr = 0x822D03C0;
	sub_82120818(ctx, base);
loc_822D03C0:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d04c0
	if (ctx.cr6.eq) goto loc_822D04C0;
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d0408
	if (!ctx.cr0.eq) goto loc_822D0408;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27268
	ctx.r4.s64 = ctx.r11.s64 + 27268;
	// bl 0x823559d8
	ctx.lr = 0x822D03F8;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D0400;
	sub_82318910(ctx, base);
	// stw r3,-10060(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10060, ctx.r3.u32);
	// b 0x822d040c
	goto loc_822D040C;
loc_822D0408:
	// lwz r3,-10060(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10060);
loc_822D040C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// bl 0x82317b30
	ctx.lr = 0x822D0420;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0434
	if (ctx.cr0.eq) goto loc_822D0434;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x822D0434;
	sub_82120818(ctx, base);
loc_822D0434:
	// lwz r11,-10040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10040);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-10068
	ctx.r29.s64 = ctx.r10.s64 + -10068;
	// bne 0x822d047c
	if (!ctx.cr0.eq) goto loc_822D047C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-10040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10040, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27256
	ctx.r4.s64 = ctx.r11.s64 + 27256;
	// bl 0x823559d8
	ctx.lr = 0x822D0460;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x822D0470;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// bl 0x8239d4b8
	ctx.lr = 0x822D047C;
	sub_8239D4B8(ctx, base);
loc_822D047C:
	// lwz r11,-10420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D04AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d04c0
	if (ctx.cr0.eq) goto loc_822D04C0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82120818
	ctx.lr = 0x822D04C0;
	sub_82120818(ctx, base);
loc_822D04C0:
	// addi r10,r24,44
	ctx.r10.s64 = ctx.r24.s64 + 44;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D04D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822d04d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D04D0;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822cfbb0
	ctx.lr = 0x822D0500;
	sub_822CFBB0(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D0508"))) PPC_WEAK_FUNC(sub_822D0508);
PPC_FUNC_IMPL(__imp__sub_822D0508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10040
	ctx.r10.s64 = ctx.r10.s64 + -10040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0530"))) PPC_WEAK_FUNC(sub_822D0530);
PPC_FUNC_IMPL(__imp__sub_822D0530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82120868
	ctx.lr = 0x822D0548;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0558"))) PPC_WEAK_FUNC(sub_822D0558);
PPC_FUNC_IMPL(__imp__sub_822D0558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10040
	ctx.r10.s64 = ctx.r10.s64 + -10040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0580"))) PPC_WEAK_FUNC(sub_822D0580);
PPC_FUNC_IMPL(__imp__sub_822D0580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x822D0598;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D05A8"))) PPC_WEAK_FUNC(sub_822D05A8);
PPC_FUNC_IMPL(__imp__sub_822D05A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10040
	ctx.r10.s64 = ctx.r10.s64 + -10040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D05D0"))) PPC_WEAK_FUNC(sub_822D05D0);
PPC_FUNC_IMPL(__imp__sub_822D05D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10040
	ctx.r10.s64 = ctx.r10.s64 + -10040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D05F8"))) PPC_WEAK_FUNC(sub_822D05F8);
PPC_FUNC_IMPL(__imp__sub_822D05F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82120868
	ctx.lr = 0x822D0610;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0620"))) PPC_WEAK_FUNC(sub_822D0620);
PPC_FUNC_IMPL(__imp__sub_822D0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10040
	ctx.r10.s64 = ctx.r10.s64 + -10040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0648"))) PPC_WEAK_FUNC(sub_822D0648);
PPC_FUNC_IMPL(__imp__sub_822D0648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d0688
	if (ctx.cr6.eq) goto loc_822D0688;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d0678
	if (ctx.cr0.eq) goto loc_822D0678;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822D0678:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x822d069c
	goto loc_822D069C;
loc_822D0688:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822d0100
	ctx.lr = 0x822D069C;
	sub_822D0100(ctx, base);
loc_822D069C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D06AC"))) PPC_WEAK_FUNC(sub_822D06AC);
PPC_FUNC_IMPL(__imp__sub_822D06AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D06B0"))) PPC_WEAK_FUNC(sub_822D06B0);
PPC_FUNC_IMPL(__imp__sub_822D06B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D06B8;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822d06f8
	if (ctx.cr6.eq) goto loc_822D06F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822d06f0
	if (ctx.cr0.eq) goto loc_822D06F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239d4f0
	ctx.lr = 0x822D06E8;
	sub_8239D4F0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x822d06f4
	goto loc_822D06F4;
loc_822D06F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822D06F4:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_822D06F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D0704"))) PPC_WEAK_FUNC(sub_822D0704);
PPC_FUNC_IMPL(__imp__sub_822D0704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0708"))) PPC_WEAK_FUNC(sub_822D0708);
PPC_FUNC_IMPL(__imp__sub_822D0708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,27736(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27736);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9fc
	ctx.lr = 0x822D0718;
	sub_8239B9FC(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,26184
	ctx.r11.s64 = ctx.r11.s64 + 26184;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317430
	ctx.lr = 0x822D0740;
	sub_82317430(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,27644
	ctx.r11.s64 = ctx.r11.s64 + 27644;
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r30,64
	ctx.r26.s64 = ctx.r30.s64 + 64;
	// addi r10,r10,27580
	ctx.r10.s64 = ctx.r10.s64 + 27580;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b36a8
	ctx.lr = 0x822D0788;
	sub_822B36A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822bcc28
	ctx.lr = 0x822D0794;
	sub_822BCC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// addi r24,r11,27564
	ctx.r24.s64 = ctx.r11.s64 + 27564;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D07AC;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270ca8
	ctx.lr = 0x822D07B4;
	sub_82270CA8(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r25,r30,132
	ctx.r25.s64 = ctx.r30.s64 + 132;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// stb r29,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r29.u8);
	// stb r23,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r23.u8);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x822e4650
	ctx.lr = 0x822D07DC;
	sub_822E4650(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r21,-32128
	ctx.r21.s64 = -2105540608;
	// stb r23,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r23.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lwz r5,-4704(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// stw r26,-11024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11024, ctx.r26.u32);
	// bl 0x82314e88
	ctx.lr = 0x822D0808;
	sub_82314E88(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354c68
	ctx.lr = 0x822D0810;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0828
	if (ctx.cr0.eq) goto loc_822D0828;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82338978
	ctx.lr = 0x822D0824;
	sub_82338978(ctx, base);
	// b 0x822d082c
	goto loc_822D082C;
loc_822D0828:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D082C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
	// bl 0x82338db0
	ctx.lr = 0x822D0838;
	sub_82338DB0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,27556
	ctx.r4.s64 = ctx.r11.s64 + 27556;
	// bl 0x823559d8
	ctx.lr = 0x822D0848;
	sub_823559D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,27544
	ctx.r4.s64 = ctx.r11.s64 + 27544;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823559d8
	ctx.lr = 0x822D085C;
	sub_823559D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b36a8
	ctx.lr = 0x822D0868;
	sub_822B36A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82270cc0
	ctx.lr = 0x822D0878;
	sub_82270CC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82338218
	ctx.lr = 0x822D0888;
	sub_82338218(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x826838a0
	ctx.lr = 0x822D0898;
	sub_826838A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ce8d0
	ctx.lr = 0x822D08A0;
	sub_822CE8D0(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b55e8
	ctx.lr = 0x822D08A8;
	sub_822B55E8(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D08B0;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d08c8
	if (ctx.cr0.eq) goto loc_822D08C8;
	// lwz r4,-11344(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822c9ca0
	ctx.lr = 0x822D08C4;
	sub_822C9CA0(ctx, base);
	// b 0x822d08cc
	goto loc_822D08CC;
loc_822D08C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D08CC:
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x822b36a8
	ctx.lr = 0x822D08DC;
	sub_822B36A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d09b4
	if (!ctx.cr0.gt) goto loc_822D09B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,27524
	ctx.r22.s64 = ctx.r11.s64 + 27524;
loc_822D08EC:
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82354c68
	ctx.lr = 0x822D08F4;
	sub_82354C68(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// beq 0x822d0930
	if (ctx.cr0.eq) goto loc_822D0930;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x822c99f8
	ctx.lr = 0x822D090C;
	sub_822C99F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x822e4288
	ctx.lr = 0x822D0928;
	sub_822E4288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822d0934
	goto loc_822D0934;
loc_822D0930:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_822D0934:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r24,-4704(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212ddb8
	ctx.lr = 0x822D0958;
	sub_8212DDB8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D097C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d0648
	ctx.lr = 0x822D0988;
	sub_822D0648(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D0994;
	sub_822B5578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x822b5228
	ctx.lr = 0x822D09A0;
	sub_822B5228(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x822b36a8
	ctx.lr = 0x822D09AC;
	sub_822B36A8(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822d08ec
	if (ctx.cr6.lt) goto loc_822D08EC;
loc_822D09B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ce838
	ctx.lr = 0x822D09BC;
	sub_822CE838(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-11572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11572);
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822cf100
	ctx.lr = 0x822D09D0;
	sub_822CF100(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x822b36a8
	ctx.lr = 0x822D09DC;
	sub_822B36A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d0a28
	if (!ctx.cr0.gt) goto loc_822D0A28;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_822D09E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r24,0(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b5550
	ctx.lr = 0x822D09F8;
	sub_822B5550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// bl 0x822e1e48
	ctx.lr = 0x822D0A04;
	sub_822E1E48(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x822e3b58
	ctx.lr = 0x822D0A10;
	sub_822E3B58(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x822b36a8
	ctx.lr = 0x822D0A20;
	sub_822B36A8(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822d09e8
	if (ctx.cr6.lt) goto loc_822D09E8;
loc_822D0A28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,12140
	ctx.r4.s64 = ctx.r11.s64 + 12140;
	// lwz r11,-11344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// lwz r28,24(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82120690
	ctx.lr = 0x822D0A4C;
	sub_82120690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823344b8
	ctx.lr = 0x822D0A58;
	sub_823344B8(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354c68
	ctx.lr = 0x822D0A60;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0a74
	if (ctx.cr0.eq) goto loc_822D0A74;
	// bl 0x822f7d70
	ctx.lr = 0x822D0A70;
	sub_822F7D70(ctx, base);
	// b 0x822d0a78
	goto loc_822D0A78;
loc_822D0A74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D0A78:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-4704(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822f7ce0
	ctx.lr = 0x822D0AB0;
	sub_822F7CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba4c
	// ERROR 8239BA4C
	return;
}

__attribute__((alias("__imp__sub_822D0710"))) PPC_WEAK_FUNC(sub_822D0710);
PPC_FUNC_IMPL(__imp__sub_822D0710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9fc
	ctx.lr = 0x822D0718;
	sub_8239B9FC(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,26184
	ctx.r11.s64 = ctx.r11.s64 + 26184;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317430
	ctx.lr = 0x822D0740;
	sub_82317430(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,27644
	ctx.r11.s64 = ctx.r11.s64 + 27644;
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r30,64
	ctx.r26.s64 = ctx.r30.s64 + 64;
	// addi r10,r10,27580
	ctx.r10.s64 = ctx.r10.s64 + 27580;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b36a8
	ctx.lr = 0x822D0788;
	sub_822B36A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822bcc28
	ctx.lr = 0x822D0794;
	sub_822BCC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// addi r24,r11,27564
	ctx.r24.s64 = ctx.r11.s64 + 27564;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D07AC;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270ca8
	ctx.lr = 0x822D07B4;
	sub_82270CA8(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r25,r30,132
	ctx.r25.s64 = ctx.r30.s64 + 132;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// stb r29,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r29.u8);
	// stb r23,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r23.u8);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x822e4650
	ctx.lr = 0x822D07DC;
	sub_822E4650(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r21,-32128
	ctx.r21.s64 = -2105540608;
	// stb r23,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r23.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lwz r5,-4704(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// stw r26,-11024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11024, ctx.r26.u32);
	// bl 0x82314e88
	ctx.lr = 0x822D0808;
	sub_82314E88(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354c68
	ctx.lr = 0x822D0810;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0828
	if (ctx.cr0.eq) goto loc_822D0828;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82338978
	ctx.lr = 0x822D0824;
	sub_82338978(ctx, base);
	// b 0x822d082c
	goto loc_822D082C;
loc_822D0828:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D082C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
	// bl 0x82338db0
	ctx.lr = 0x822D0838;
	sub_82338DB0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,27556
	ctx.r4.s64 = ctx.r11.s64 + 27556;
	// bl 0x823559d8
	ctx.lr = 0x822D0848;
	sub_823559D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,27544
	ctx.r4.s64 = ctx.r11.s64 + 27544;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823559d8
	ctx.lr = 0x822D085C;
	sub_823559D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b36a8
	ctx.lr = 0x822D0868;
	sub_822B36A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82270cc0
	ctx.lr = 0x822D0878;
	sub_82270CC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82338218
	ctx.lr = 0x822D0888;
	sub_82338218(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x826838a0
	ctx.lr = 0x822D0898;
	sub_826838A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ce8d0
	ctx.lr = 0x822D08A0;
	sub_822CE8D0(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b55e8
	ctx.lr = 0x822D08A8;
	sub_822B55E8(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D08B0;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d08c8
	if (ctx.cr0.eq) goto loc_822D08C8;
	// lwz r4,-11344(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822c9ca0
	ctx.lr = 0x822D08C4;
	sub_822C9CA0(ctx, base);
	// b 0x822d08cc
	goto loc_822D08CC;
loc_822D08C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D08CC:
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x822b36a8
	ctx.lr = 0x822D08DC;
	sub_822B36A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d09b4
	if (!ctx.cr0.gt) goto loc_822D09B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,27524
	ctx.r22.s64 = ctx.r11.s64 + 27524;
loc_822D08EC:
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82354c68
	ctx.lr = 0x822D08F4;
	sub_82354C68(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// beq 0x822d0930
	if (ctx.cr0.eq) goto loc_822D0930;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x822c99f8
	ctx.lr = 0x822D090C;
	sub_822C99F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x822e4288
	ctx.lr = 0x822D0928;
	sub_822E4288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822d0934
	goto loc_822D0934;
loc_822D0930:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_822D0934:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r24,-4704(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212ddb8
	ctx.lr = 0x822D0958;
	sub_8212DDB8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D097C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d0648
	ctx.lr = 0x822D0988;
	sub_822D0648(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D0994;
	sub_822B5578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x822b5228
	ctx.lr = 0x822D09A0;
	sub_822B5228(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x822b36a8
	ctx.lr = 0x822D09AC;
	sub_822B36A8(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822d08ec
	if (ctx.cr6.lt) goto loc_822D08EC;
loc_822D09B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ce838
	ctx.lr = 0x822D09BC;
	sub_822CE838(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-11572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11572);
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822cf100
	ctx.lr = 0x822D09D0;
	sub_822CF100(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x822b36a8
	ctx.lr = 0x822D09DC;
	sub_822B36A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d0a28
	if (!ctx.cr0.gt) goto loc_822D0A28;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_822D09E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r24,0(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// bl 0x822b5550
	ctx.lr = 0x822D09F8;
	sub_822B5550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// bl 0x822e1e48
	ctx.lr = 0x822D0A04;
	sub_822E1E48(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x822e3b58
	ctx.lr = 0x822D0A10;
	sub_822E3B58(ctx, base);
	// lwz r3,-11344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x822b36a8
	ctx.lr = 0x822D0A20;
	sub_822B36A8(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822d09e8
	if (ctx.cr6.lt) goto loc_822D09E8;
loc_822D0A28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,12140
	ctx.r4.s64 = ctx.r11.s64 + 12140;
	// lwz r11,-11344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11344);
	// lwz r28,24(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82120690
	ctx.lr = 0x822D0A4C;
	sub_82120690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823344b8
	ctx.lr = 0x822D0A58;
	sub_823344B8(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354c68
	ctx.lr = 0x822D0A60;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0a74
	if (ctx.cr0.eq) goto loc_822D0A74;
	// bl 0x822f7d70
	ctx.lr = 0x822D0A70;
	sub_822F7D70(ctx, base);
	// b 0x822d0a78
	goto loc_822D0A78;
loc_822D0A74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822D0A78:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-4704(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4704);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822f7ce0
	ctx.lr = 0x822D0AB0;
	sub_822F7CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba4c
	// ERROR 8239BA4C
	return;
}

__attribute__((alias("__imp__sub_822D0ABC"))) PPC_WEAK_FUNC(sub_822D0ABC);
PPC_FUNC_IMPL(__imp__sub_822D0ABC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x822ce5b8
	ctx.lr = 0x822D0AD4;
	sub_822CE5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0AE4"))) PPC_WEAK_FUNC(sub_822D0AE4);
PPC_FUNC_IMPL(__imp__sub_822D0AE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82317498
	ctx.lr = 0x822D0B00;
	sub_82317498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0B10"))) PPC_WEAK_FUNC(sub_822D0B10);
PPC_FUNC_IMPL(__imp__sub_822D0B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x822bcdf0
	ctx.lr = 0x822D0B2C;
	sub_822BCDF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0B3C"))) PPC_WEAK_FUNC(sub_822D0B3C);
PPC_FUNC_IMPL(__imp__sub_822D0B3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82285770
	ctx.lr = 0x822D0B58;
	sub_82285770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0B68"))) PPC_WEAK_FUNC(sub_822D0B68);
PPC_FUNC_IMPL(__imp__sub_822D0B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x822e41f0
	ctx.lr = 0x822D0B84;
	sub_822E41F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0B94"))) PPC_WEAK_FUNC(sub_822D0B94);
PPC_FUNC_IMPL(__imp__sub_822D0B94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821e1b98
	ctx.lr = 0x822D0BAC;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0BBC"))) PPC_WEAK_FUNC(sub_822D0BBC);
PPC_FUNC_IMPL(__imp__sub_822D0BBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e1b98
	ctx.lr = 0x822D0BD4;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0BE4"))) PPC_WEAK_FUNC(sub_822D0BE4);
PPC_FUNC_IMPL(__imp__sub_822D0BE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e1b98
	ctx.lr = 0x822D0BFC;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0C0C"))) PPC_WEAK_FUNC(sub_822D0C0C);
PPC_FUNC_IMPL(__imp__sub_822D0C0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e1b98
	ctx.lr = 0x822D0C24;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0C34"))) PPC_WEAK_FUNC(sub_822D0C34);
PPC_FUNC_IMPL(__imp__sub_822D0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0C38"))) PPC_WEAK_FUNC(sub_822D0C38);
PPC_FUNC_IMPL(__imp__sub_822D0C38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822d0ea0
	sub_822D0EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D0C40"))) PPC_WEAK_FUNC(sub_822D0C40);
PPC_FUNC_IMPL(__imp__sub_822D0C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822ce938
	ctx.lr = 0x822D0C70;
	sub_822CE938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d06b0
	ctx.lr = 0x822D0C80;
	sub_822D06B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0C94"))) PPC_WEAK_FUNC(sub_822D0C94);
PPC_FUNC_IMPL(__imp__sub_822D0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0C98"))) PPC_WEAK_FUNC(sub_822D0C98);
PPC_FUNC_IMPL(__imp__sub_822D0C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,27928(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27928);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x822D0CA8;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,27644
	ctx.r11.s64 = ctx.r11.s64 + 27644;
	// addi r10,r10,27580
	ctx.r10.s64 = ctx.r10.s64 + 27580;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-11024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11024, ctx.r11.u32);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d04
	if (ctx.cr0.eq) goto loc_822D0D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D04:
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// stw r28,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0c40
	ctx.lr = 0x822D0D14;
	sub_822D0C40(ctx, base);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d34
	if (ctx.cr0.eq) goto loc_822D0D34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D34:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d58
	if (ctx.cr0.eq) goto loc_822D0D58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D58:
	// stw r28,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r28.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x822e41f0
	ctx.lr = 0x822D0D64;
	sub_822E41F0(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x822d0d84
	if (ctx.cr0.eq) goto loc_822D0D84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354cb0
	ctx.lr = 0x822D0D84;
	sub_82354CB0(ctx, base);
loc_822D0D84:
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x822bcdf0
	ctx.lr = 0x822D0D8C;
	sub_822BCDF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317498
	ctx.lr = 0x822D0D94;
	sub_82317498(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,26184
	ctx.r11.s64 = ctx.r11.s64 + 26184;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_822D0CA0"))) PPC_WEAK_FUNC(sub_822D0CA0);
PPC_FUNC_IMPL(__imp__sub_822D0CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x822D0CA8;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,27644
	ctx.r11.s64 = ctx.r11.s64 + 27644;
	// addi r10,r10,27580
	ctx.r10.s64 = ctx.r10.s64 + 27580;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-11024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11024, ctx.r11.u32);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d04
	if (ctx.cr0.eq) goto loc_822D0D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D04:
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// stw r28,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0c40
	ctx.lr = 0x822D0D14;
	sub_822D0C40(ctx, base);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d34
	if (ctx.cr0.eq) goto loc_822D0D34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D34:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0d58
	if (ctx.cr0.eq) goto loc_822D0D58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D58:
	// stw r28,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r28.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x822e41f0
	ctx.lr = 0x822D0D64;
	sub_822E41F0(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x822d0d84
	if (ctx.cr0.eq) goto loc_822D0D84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354cb0
	ctx.lr = 0x822D0D84;
	sub_82354CB0(ctx, base);
loc_822D0D84:
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x822bcdf0
	ctx.lr = 0x822D0D8C;
	sub_822BCDF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317498
	ctx.lr = 0x822D0D94;
	sub_82317498(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,26184
	ctx.r11.s64 = ctx.r11.s64 + 26184;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_822D0DA8"))) PPC_WEAK_FUNC(sub_822D0DA8);
PPC_FUNC_IMPL(__imp__sub_822D0DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822ce5b8
	ctx.lr = 0x822D0DC0;
	sub_822CE5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0DD0"))) PPC_WEAK_FUNC(sub_822D0DD0);
PPC_FUNC_IMPL(__imp__sub_822D0DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0dfc
	if (ctx.cr6.eq) goto loc_822D0DFC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x822d0e04
	goto loc_822D0E04;
loc_822D0DFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822D0E04:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82317498
	ctx.lr = 0x822D0E0C;
	sub_82317498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E1C"))) PPC_WEAK_FUNC(sub_822D0E1C);
PPC_FUNC_IMPL(__imp__sub_822D0E1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x822bcdf0
	ctx.lr = 0x822D0E38;
	sub_822BCDF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E48"))) PPC_WEAK_FUNC(sub_822D0E48);
PPC_FUNC_IMPL(__imp__sub_822D0E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82285770
	ctx.lr = 0x822D0E64;
	sub_82285770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E74"))) PPC_WEAK_FUNC(sub_822D0E74);
PPC_FUNC_IMPL(__imp__sub_822D0E74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x822e41f0
	ctx.lr = 0x822D0E90;
	sub_822E41F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0EA0"))) PPC_WEAK_FUNC(sub_822D0EA0);
PPC_FUNC_IMPL(__imp__sub_822D0EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d0ca0
	ctx.lr = 0x822D0EC0;
	sub_822D0CA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0ed0
	if (ctx.cr0.eq) goto loc_822D0ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1b98
	ctx.lr = 0x822D0ED0;
	sub_821E1B98(ctx, base);
loc_822D0ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0EEC"))) PPC_WEAK_FUNC(sub_822D0EEC);
PPC_FUNC_IMPL(__imp__sub_822D0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0EF0"))) PPC_WEAK_FUNC(sub_822D0EF0);
PPC_FUNC_IMPL(__imp__sub_822D0EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,28032
	ctx.r11.s64 = ctx.r11.s64 + 28032;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0F00"))) PPC_WEAK_FUNC(sub_822D0F00);
PPC_FUNC_IMPL(__imp__sub_822D0F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28032
	ctx.r11.s64 = ctx.r11.s64 + 28032;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822d0f2c
	if (ctx.cr0.eq) goto loc_822D0F2C;
	// bl 0x821e1b98
	ctx.lr = 0x822D0F2C;
	sub_821E1B98(ctx, base);
loc_822D0F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0F44"))) PPC_WEAK_FUNC(sub_822D0F44);
PPC_FUNC_IMPL(__imp__sub_822D0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0F48"))) PPC_WEAK_FUNC(sub_822D0F48);
PPC_FUNC_IMPL(__imp__sub_822D0F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0f80
	if (ctx.cr0.eq) goto loc_822D0F80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d0f78
	if (!ctx.cr6.eq) goto loc_822D0F78;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x8216a5a8
	ctx.lr = 0x822D0F78;
	sub_8216A5A8(ctx, base);
loc_822D0F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
loc_822D0F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0F94"))) PPC_WEAK_FUNC(sub_822D0F94);
PPC_FUNC_IMPL(__imp__sub_822D0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0F98"))) PPC_WEAK_FUNC(sub_822D0F98);
PPC_FUNC_IMPL(__imp__sub_822D0F98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,545(r3)
	PPC_STORE_U8(ctx.r3.u32 + 545, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0FA0"))) PPC_WEAK_FUNC(sub_822D0FA0);
PPC_FUNC_IMPL(__imp__sub_822D0FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// bl 0x8216a610
	ctx.lr = 0x822D0FB8;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822d0fd0
	if (ctx.cr6.gt) goto loc_822D0FD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D0FD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0FE4"))) PPC_WEAK_FUNC(sub_822D0FE4);
PPC_FUNC_IMPL(__imp__sub_822D0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0FE8"))) PPC_WEAK_FUNC(sub_822D0FE8);
PPC_FUNC_IMPL(__imp__sub_822D0FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28064(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28064);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D0FF8;
	sub_8239BA1C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823116a0
	ctx.lr = 0x822D101C;
	sub_823116A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// li r3,40
	ctx.r3.s64 = 40;
	// fadds f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x82354c68
	ctx.lr = 0x822D1030;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d1060
	if (ctx.cr0.eq) goto loc_822D1060;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,28008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e4670
	ctx.lr = 0x822D1058;
	sub_822E4670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1064
	goto loc_822D1064;
loc_822D1060:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D1064:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// bl 0x82198228
	ctx.lr = 0x822D1070;
	sub_82198228(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D0FF0"))) PPC_WEAK_FUNC(sub_822D0FF0);
PPC_FUNC_IMPL(__imp__sub_822D0FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D0FF8;
	sub_8239BA1C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823116a0
	ctx.lr = 0x822D101C;
	sub_823116A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// li r3,40
	ctx.r3.s64 = 40;
	// fadds f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x82354c68
	ctx.lr = 0x822D1030;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d1060
	if (ctx.cr0.eq) goto loc_822D1060;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,28008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e4670
	ctx.lr = 0x822D1058;
	sub_822E4670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1064
	goto loc_822D1064;
loc_822D1060:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D1064:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// bl 0x82198228
	ctx.lr = 0x822D1070;
	sub_82198228(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D1080"))) PPC_WEAK_FUNC(sub_822D1080);
PPC_FUNC_IMPL(__imp__sub_822D1080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821e1b98
	ctx.lr = 0x822D1098;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D10A8"))) PPC_WEAK_FUNC(sub_822D10A8);
PPC_FUNC_IMPL(__imp__sub_822D10A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,-6792
	ctx.r3.s64 = ctx.r10.s64 + -6792;
	// lwz r11,-10420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// addi r11,r11,142
	ctx.r11.s64 = ctx.r11.s64 + 142;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82311678
	ctx.lr = 0x822D10E0;
	sub_82311678(ctx, base);
	// lfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfsx f13,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1108"))) PPC_WEAK_FUNC(sub_822D1108);
PPC_FUNC_IMPL(__imp__sub_822D1108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D1110;
	sub_8239BA18(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822D112C;
	sub_82311678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,588(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 588, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r29,568
	ctx.r30.s64 = ctx.r29.s64 + 568;
	// lfs f30,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f30.f64 = double(temp.f32);
loc_822D1140:
	// lwz r11,564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x822d11a8
	if (!ctx.cr6.eq) goto loc_822D11A8;
	// bl 0x82317ec0
	ctx.lr = 0x822D1168;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317e08
	ctx.lr = 0x822D1174;
	sub_82317E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317ec0
	ctx.lr = 0x822D1184;
	sub_82317EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317e08
	ctx.lr = 0x822D1194;
	sub_82317E08(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8226dd28
	ctx.lr = 0x822D11A0;
	sub_8226DD28(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x822d11b0
	goto loc_822D11B0;
loc_822D11A8:
	// bl 0x82317d08
	ctx.lr = 0x822D11AC;
	sub_82317D08(ctx, base);
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_822D11B0:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r28,40
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 40, ctx.xer);
	// blt cr6,0x822d1140
	if (ctx.cr6.lt) goto loc_822D1140;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D11D0"))) PPC_WEAK_FUNC(sub_822D11D0);
PPC_FUNC_IMPL(__imp__sub_822D11D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// bl 0x8216a610
	ctx.lr = 0x822D11E8;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822d1200
	if (ctx.cr6.gt) goto loc_822D1200;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D1200:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1214"))) PPC_WEAK_FUNC(sub_822D1214);
PPC_FUNC_IMPL(__imp__sub_822D1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1218"))) PPC_WEAK_FUNC(sub_822D1218);
PPC_FUNC_IMPL(__imp__sub_822D1218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,-3175(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1258
	if (ctx.cr0.eq) goto loc_822D1258;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r4,r11,15364
	ctx.r4.s64 = ctx.r11.s64 + 15364;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r3,r11,24248
	ctx.r3.s64 = ctx.r11.s64 + 24248;
	// bl 0x8239ba90
	ctx.lr = 0x822D1250;
	sub_8239BA90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1260
	goto loc_822D1260;
loc_822D1258:
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28964);
loc_822D1260:
	// mulli r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 * 12;
	// bl 0x82354c88
	ctx.lr = 0x822D1268;
	sub_82354C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D127C"))) PPC_WEAK_FUNC(sub_822D127C);
PPC_FUNC_IMPL(__imp__sub_822D127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1280"))) PPC_WEAK_FUNC(sub_822D1280);
PPC_FUNC_IMPL(__imp__sub_822D1280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r31,r11,23920
	ctx.r31.s64 = ctx.r11.s64 + 23920;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r30,r11,920
	ctx.r30.s64 = ctx.r11.s64 + 920;
	// bl 0x82317e50
	ctx.lr = 0x822D12A8;
	sub_82317E50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c500
	ctx.lr = 0x822D12BC;
	sub_8239C500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D12D4"))) PPC_WEAK_FUNC(sub_822D12D4);
PPC_FUNC_IMPL(__imp__sub_822D12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D12D8"))) PPC_WEAK_FUNC(sub_822D12D8);
PPC_FUNC_IMPL(__imp__sub_822D12D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D12FC;
	sub_822B5578(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c6be0
	ctx.lr = 0x822D1304;
	sub_822C6BE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1314
	if (ctx.cr0.eq) goto loc_822D1314;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// b 0x822d1318
	goto loc_822D1318;
loc_822D1314:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
loc_822D1318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D132C"))) PPC_WEAK_FUNC(sub_822D132C);
PPC_FUNC_IMPL(__imp__sub_822D132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1330"))) PPC_WEAK_FUNC(sub_822D1330);
PPC_FUNC_IMPL(__imp__sub_822D1330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28176(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28176);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x822D1340;
	sub_8239BA14(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r27,r10,-10032
	ctx.r27.s64 = ctx.r10.s64 + -10032;
	// bne 0x822d1388
	if (!ctx.cr0.eq) goto loc_822D1388;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10028(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10028, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,28148
	ctx.r4.s64 = ctx.r11.s64 + 28148;
	// bl 0x823559d8
	ctx.lr = 0x822D1384;
	sub_823559D8(ctx, base);
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
loc_822D1388:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r28,r10,-10036
	ctx.r28.s64 = ctx.r10.s64 + -10036;
	// bne 0x822d13b0
	if (!ctx.cr0.eq) goto loc_822D13B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10028(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10028, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,28136
	ctx.r4.s64 = ctx.r11.s64 + 28136;
	// bl 0x823559d8
	ctx.lr = 0x822D13B0;
	sub_823559D8(ctx, base);
loc_822D13B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,28128
	ctx.r4.s64 = ctx.r11.s64 + 28128;
	// bl 0x823559d8
	ctx.lr = 0x822D13C0;
	sub_823559D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D13E0;
	sub_823152B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1280
	ctx.lr = 0x822D13E8;
	sub_822D1280(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// bl 0x82338ef8
	ctx.lr = 0x822D13F4;
	sub_82338EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822d1454
	goto loc_822D1454;
loc_822D13FC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822d1460
	if (!ctx.cr6.lt) goto loc_822D1460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D1414;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D1424;
	sub_82317D30(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1474
	if (!ctx.cr0.eq) goto loc_822D1474;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1474
	if (!ctx.cr0.eq) goto loc_822D1474;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_822D1454:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d13fc
	if (!ctx.cr6.eq) goto loc_822D13FC;
loc_822D1460:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
loc_822D1468:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
loc_822D1474:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d1468
	goto loc_822D1468;
}

__attribute__((alias("__imp__sub_822D1338"))) PPC_WEAK_FUNC(sub_822D1338);
PPC_FUNC_IMPL(__imp__sub_822D1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x822D1340;
	sub_8239BA14(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r27,r10,-10032
	ctx.r27.s64 = ctx.r10.s64 + -10032;
	// bne 0x822d1388
	if (!ctx.cr0.eq) goto loc_822D1388;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10028(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10028, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,28148
	ctx.r4.s64 = ctx.r11.s64 + 28148;
	// bl 0x823559d8
	ctx.lr = 0x822D1384;
	sub_823559D8(ctx, base);
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
loc_822D1388:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r28,r10,-10036
	ctx.r28.s64 = ctx.r10.s64 + -10036;
	// bne 0x822d13b0
	if (!ctx.cr0.eq) goto loc_822D13B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10028(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10028, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,28136
	ctx.r4.s64 = ctx.r11.s64 + 28136;
	// bl 0x823559d8
	ctx.lr = 0x822D13B0;
	sub_823559D8(ctx, base);
loc_822D13B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,28128
	ctx.r4.s64 = ctx.r11.s64 + 28128;
	// bl 0x823559d8
	ctx.lr = 0x822D13C0;
	sub_823559D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D13E0;
	sub_823152B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1280
	ctx.lr = 0x822D13E8;
	sub_822D1280(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// bl 0x82338ef8
	ctx.lr = 0x822D13F4;
	sub_82338EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822d1454
	goto loc_822D1454;
loc_822D13FC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822d1460
	if (!ctx.cr6.lt) goto loc_822D1460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D1414;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D1424;
	sub_82317D30(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1474
	if (!ctx.cr0.eq) goto loc_822D1474;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1474
	if (!ctx.cr0.eq) goto loc_822D1474;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_822D1454:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d13fc
	if (!ctx.cr6.eq) goto loc_822D13FC;
loc_822D1460:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
loc_822D1468:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
loc_822D1474:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d1468
	goto loc_822D1468;
}

__attribute__((alias("__imp__sub_822D147C"))) PPC_WEAK_FUNC(sub_822D147C);
PPC_FUNC_IMPL(__imp__sub_822D147C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10028
	ctx.r11.s64 = ctx.r11.s64 + -10028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10028
	ctx.r10.s64 = ctx.r10.s64 + -10028;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D14A4"))) PPC_WEAK_FUNC(sub_822D14A4);
PPC_FUNC_IMPL(__imp__sub_822D14A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10028
	ctx.r11.s64 = ctx.r11.s64 + -10028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10028
	ctx.r10.s64 = ctx.r10.s64 + -10028;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D14CC"))) PPC_WEAK_FUNC(sub_822D14CC);
PPC_FUNC_IMPL(__imp__sub_822D14CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D14D0"))) PPC_WEAK_FUNC(sub_822D14D0);
PPC_FUNC_IMPL(__imp__sub_822D14D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28376(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28376);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9f4
	ctx.lr = 0x822D14E0;
	sub_8239B9F4(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d2d0
	ctx.lr = 0x822D14E8;
	sub_8239D2D0(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r19,r10,-10016
	ctx.r19.s64 = ctx.r10.s64 + -10016;
	// bne 0x822d1528
	if (!ctx.cr0.eq) goto loc_822D1528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,28328
	ctx.r4.s64 = ctx.r11.s64 + 28328;
	// bl 0x823559d8
	ctx.lr = 0x822D1524;
	sub_823559D8(ctx, base);
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
loc_822D1528:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r20,r10,-10020
	ctx.r20.s64 = ctx.r10.s64 + -10020;
	// bne 0x822d1554
	if (!ctx.cr0.eq) goto loc_822D1554;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,28316
	ctx.r4.s64 = ctx.r11.s64 + 28316;
	// bl 0x823559d8
	ctx.lr = 0x822D1550;
	sub_823559D8(ctx, base);
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
loc_822D1554:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r27,r10,-10024
	ctx.r27.s64 = ctx.r10.s64 + -10024;
	// bne 0x822d157c
	if (!ctx.cr0.eq) goto loc_822D157C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,28304
	ctx.r4.s64 = ctx.r11.s64 + 28304;
	// bl 0x823559d8
	ctx.lr = 0x822D157C;
	sub_823559D8(ctx, base);
loc_822D157C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821953e8
	ctx.lr = 0x822D1584;
	sub_821953E8(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r25,-32128
	ctx.r25.s64 = -2105540608;
	// beq 0x822d15b4
	if (ctx.cr0.eq) goto loc_822D15B4;
	// lwz r3,-11344(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D159C;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d15b4
	if (!ctx.cr0.eq) goto loc_822D15B4;
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d15b8
	if (!ctx.cr6.eq) goto loc_822D15B8;
loc_822D15B4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822D15B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,28292
	ctx.r4.s64 = ctx.r11.s64 + 28292;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r10,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r10.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823559d8
	ctx.lr = 0x822D15E0;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D15F4;
	sub_82319250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r11.u32);
	// bl 0x822d1108
	ctx.lr = 0x822D1604;
	sub_822D1108(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,28288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28288);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stfs f0,588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// lwz r3,-11024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11024);
	// bl 0x822a69c8
	ctx.lr = 0x822D161C;
	sub_822A69C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r26,r11,28008
	ctx.r26.s64 = ctx.r11.s64 + 28008;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,28128
	ctx.r4.s64 = ctx.r11.s64 + 28128;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
	// lfd f0,96(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823559d8
	ctx.lr = 0x822D165C;
	sub_823559D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D167C;
	sub_823152B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1280
	ctx.lr = 0x822D1684;
	sub_822D1280(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822d16cc
	goto loc_822D16CC;
loc_822D1694:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D16A0;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D16B0;
	sub_82317D30(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d16dc
	if (!ctx.cr0.eq) goto loc_822D16DC;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_822D16CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d1694
	if (!ctx.cr6.eq) goto loc_822D1694;
	// b 0x822d16e4
	goto loc_822D16E4;
loc_822D16DC:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
loc_822D16E4:
	// addi r22,r30,596
	ctx.r22.s64 = ctx.r30.s64 + 596;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198310
	ctx.lr = 0x822D16F0;
	sub_82198310(ctx, base);
	// lbz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 592);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,28032
	ctx.r23.s64 = ctx.r11.s64 + 28032;
	// beq 0x822d197c
	if (ctx.cr0.eq) goto loc_822D197C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,28272
	ctx.r4.s64 = ctx.r11.s64 + 28272;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823559d8
	ctx.lr = 0x822D1724;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D1738;
	sub_82319250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317e08
	ctx.lr = 0x822D1748;
	sub_82317E08(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8218a960
	ctx.lr = 0x822D175C;
	sub_8218A960(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lfs f0,556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82195508
	ctx.lr = 0x822D1780;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,64
	ctx.r3.s64 = 64;
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,560(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 560, temp.u32);
	// bl 0x82195508
	ctx.lr = 0x822D1798;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-11344(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11344);
	// fmadds f29,f1,f0,f31
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// li r25,2048
	ctx.r25.s64 = 2048;
	// bl 0x822b5680
	ctx.lr = 0x822D17AC;
	sub_822B5680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d17bc
	if (ctx.cr0.eq) goto loc_822D17BC;
	// li r25,4096
	ctx.r25.s64 = 4096;
	// b 0x822d17d4
	goto loc_822D17D4;
loc_822D17BC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-10420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// bl 0x822ca500
	ctx.lr = 0x822D17C8;
	sub_822CA500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d17d4
	if (ctx.cr0.eq) goto loc_822D17D4;
	// li r25,1024
	ctx.r25.s64 = 1024;
loc_822D17D4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82195508
	ctx.lr = 0x822D17E0;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// fmadds f28,f1,f0,f31
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x821953e8
	ctx.lr = 0x822D17F0;
	sub_821953E8(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d1930
	if (ctx.cr6.eq) goto loc_822D1930;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,-27496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27496);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
loc_822D1818:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D1824;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D1834;
	sub_82317D30(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d18e8
	if (ctx.cr0.eq) goto loc_822D18E8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822d18ac
	if (ctx.cr6.eq) goto loc_822D18AC;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D185C;
	sub_82354C68(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d1888
	if (ctx.cr0.eq) goto loc_822D1888;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fsubs f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// bl 0x822e4670
	ctx.lr = 0x822D1884;
	sub_822E4670(ctx, base);
	// b 0x822d188c
	goto loc_822D188C;
loc_822D1888:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822D188C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822d1920
	if (!ctx.cr6.lt) goto loc_822D1920;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151d20
	ctx.lr = 0x822D18A8;
	sub_82151D20(ctx, base);
	// b 0x822d1920
	goto loc_822D1920;
loc_822D18AC:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354c68
	ctx.lr = 0x822D18B4;
	sub_82354C68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d191c
	if (ctx.cr0.eq) goto loc_822D191C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r21.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x822d1920
	goto loc_822D1920;
loc_822D18E8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1920
	if (ctx.cr0.eq) goto loc_822D1920;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x82198228
	ctx.lr = 0x822D191C;
	sub_82198228(ctx, base);
loc_822D191C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_822D1920:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d1818
	if (!ctx.cr6.eq) goto loc_822D1818;
loc_822D1930:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// ble cr6,0x822d197c
	if (!ctx.cr6.gt) goto loc_822D197C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D1940;
	sub_82354C68(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d196c
	if (ctx.cr0.eq) goto loc_822D196C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f3,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fsubs f1,f26,f28
	ctx.f1.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// bl 0x822e4670
	ctx.lr = 0x822D1964;
	sub_822E4670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1970
	goto loc_822D1970;
loc_822D196C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822D1970:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198228
	ctx.lr = 0x822D197C;
	sub_82198228(ctx, base);
loc_822D197C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354c68
	ctx.lr = 0x822D1984;
	sub_82354C68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d19c0
	if (ctx.cr0.eq) goto loc_822D19C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f26,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r21.u8);
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822d19c4
	goto loc_822D19C4;
loc_822D19C0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822D19C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198228
	ctx.lr = 0x822D19D0;
	sub_82198228(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d31c
	ctx.lr = 0x822D19DC;
	sub_8239D31C(ctx, base);
	// b 0x8239ba44
	// ERROR 8239BA44
	return;
}

__attribute__((alias("__imp__sub_822D14D8"))) PPC_WEAK_FUNC(sub_822D14D8);
PPC_FUNC_IMPL(__imp__sub_822D14D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9f4
	ctx.lr = 0x822D14E0;
	sub_8239B9F4(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d2d0
	ctx.lr = 0x822D14E8;
	sub_8239D2D0(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r19,r10,-10016
	ctx.r19.s64 = ctx.r10.s64 + -10016;
	// bne 0x822d1528
	if (!ctx.cr0.eq) goto loc_822D1528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,28328
	ctx.r4.s64 = ctx.r11.s64 + 28328;
	// bl 0x823559d8
	ctx.lr = 0x822D1524;
	sub_823559D8(ctx, base);
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
loc_822D1528:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r20,r10,-10020
	ctx.r20.s64 = ctx.r10.s64 + -10020;
	// bne 0x822d1554
	if (!ctx.cr0.eq) goto loc_822D1554;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,28316
	ctx.r4.s64 = ctx.r11.s64 + 28316;
	// bl 0x823559d8
	ctx.lr = 0x822D1550;
	sub_823559D8(ctx, base);
	// lwz r11,-10012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
loc_822D1554:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r27,r10,-10024
	ctx.r27.s64 = ctx.r10.s64 + -10024;
	// bne 0x822d157c
	if (!ctx.cr0.eq) goto loc_822D157C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-10012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -10012, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,28304
	ctx.r4.s64 = ctx.r11.s64 + 28304;
	// bl 0x823559d8
	ctx.lr = 0x822D157C;
	sub_823559D8(ctx, base);
loc_822D157C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821953e8
	ctx.lr = 0x822D1584;
	sub_821953E8(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r25,-32128
	ctx.r25.s64 = -2105540608;
	// beq 0x822d15b4
	if (ctx.cr0.eq) goto loc_822D15B4;
	// lwz r3,-11344(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D159C;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d15b4
	if (!ctx.cr0.eq) goto loc_822D15B4;
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d15b8
	if (!ctx.cr6.eq) goto loc_822D15B8;
loc_822D15B4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822D15B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,28292
	ctx.r4.s64 = ctx.r11.s64 + 28292;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r10,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r10.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823559d8
	ctx.lr = 0x822D15E0;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D15F4;
	sub_82319250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r11.u32);
	// bl 0x822d1108
	ctx.lr = 0x822D1604;
	sub_822D1108(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,28288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28288);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stfs f0,588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// lwz r3,-11024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11024);
	// bl 0x822a69c8
	ctx.lr = 0x822D161C;
	sub_822A69C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r26,r11,28008
	ctx.r26.s64 = ctx.r11.s64 + 28008;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,28128
	ctx.r4.s64 = ctx.r11.s64 + 28128;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
	// lfd f0,96(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823559d8
	ctx.lr = 0x822D165C;
	sub_823559D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D167C;
	sub_823152B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1280
	ctx.lr = 0x822D1684;
	sub_822D1280(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822d16cc
	goto loc_822D16CC;
loc_822D1694:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D16A0;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D16B0;
	sub_82317D30(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d16dc
	if (!ctx.cr0.eq) goto loc_822D16DC;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_822D16CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d1694
	if (!ctx.cr6.eq) goto loc_822D1694;
	// b 0x822d16e4
	goto loc_822D16E4;
loc_822D16DC:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
loc_822D16E4:
	// addi r22,r30,596
	ctx.r22.s64 = ctx.r30.s64 + 596;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198310
	ctx.lr = 0x822D16F0;
	sub_82198310(ctx, base);
	// lbz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 592);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,28032
	ctx.r23.s64 = ctx.r11.s64 + 28032;
	// beq 0x822d197c
	if (ctx.cr0.eq) goto loc_822D197C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,28272
	ctx.r4.s64 = ctx.r11.s64 + 28272;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823559d8
	ctx.lr = 0x822D1724;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D1738;
	sub_82319250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317e08
	ctx.lr = 0x822D1748;
	sub_82317E08(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8218a960
	ctx.lr = 0x822D175C;
	sub_8218A960(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lfs f0,556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82195508
	ctx.lr = 0x822D1780;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,64
	ctx.r3.s64 = 64;
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,560(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 560, temp.u32);
	// bl 0x82195508
	ctx.lr = 0x822D1798;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-11344(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11344);
	// fmadds f29,f1,f0,f31
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// li r25,2048
	ctx.r25.s64 = 2048;
	// bl 0x822b5680
	ctx.lr = 0x822D17AC;
	sub_822B5680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d17bc
	if (ctx.cr0.eq) goto loc_822D17BC;
	// li r25,4096
	ctx.r25.s64 = 4096;
	// b 0x822d17d4
	goto loc_822D17D4;
loc_822D17BC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-10420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// bl 0x822ca500
	ctx.lr = 0x822D17C8;
	sub_822CA500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d17d4
	if (ctx.cr0.eq) goto loc_822D17D4;
	// li r25,1024
	ctx.r25.s64 = 1024;
loc_822D17D4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82195508
	ctx.lr = 0x822D17E0;
	sub_82195508(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// fmadds f28,f1,f0,f31
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x821953e8
	ctx.lr = 0x822D17F0;
	sub_821953E8(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d1930
	if (ctx.cr6.eq) goto loc_822D1930;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,-27496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27496);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
loc_822D1818:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82317ec0
	ctx.lr = 0x822D1824;
	sub_82317EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82317d30
	ctx.lr = 0x822D1834;
	sub_82317D30(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d18e8
	if (ctx.cr0.eq) goto loc_822D18E8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822d18ac
	if (ctx.cr6.eq) goto loc_822D18AC;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D185C;
	sub_82354C68(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d1888
	if (ctx.cr0.eq) goto loc_822D1888;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fsubs f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// bl 0x822e4670
	ctx.lr = 0x822D1884;
	sub_822E4670(ctx, base);
	// b 0x822d188c
	goto loc_822D188C;
loc_822D1888:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822D188C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822d1920
	if (!ctx.cr6.lt) goto loc_822D1920;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151d20
	ctx.lr = 0x822D18A8;
	sub_82151D20(ctx, base);
	// b 0x822d1920
	goto loc_822D1920;
loc_822D18AC:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354c68
	ctx.lr = 0x822D18B4;
	sub_82354C68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d191c
	if (ctx.cr0.eq) goto loc_822D191C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r21.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x822d1920
	goto loc_822D1920;
loc_822D18E8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1920
	if (ctx.cr0.eq) goto loc_822D1920;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x82198228
	ctx.lr = 0x822D191C;
	sub_82198228(ctx, base);
loc_822D191C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_822D1920:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d1818
	if (!ctx.cr6.eq) goto loc_822D1818;
loc_822D1930:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// ble cr6,0x822d197c
	if (!ctx.cr6.gt) goto loc_822D197C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D1940;
	sub_82354C68(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d196c
	if (ctx.cr0.eq) goto loc_822D196C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f3,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fsubs f1,f26,f28
	ctx.f1.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// bl 0x822e4670
	ctx.lr = 0x822D1964;
	sub_822E4670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1970
	goto loc_822D1970;
loc_822D196C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822D1970:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198228
	ctx.lr = 0x822D197C;
	sub_82198228(ctx, base);
loc_822D197C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354c68
	ctx.lr = 0x822D1984;
	sub_82354C68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d19c0
	if (ctx.cr0.eq) goto loc_822D19C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f26,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r21.u8);
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822d19c4
	goto loc_822D19C4;
loc_822D19C0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822D19C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82198228
	ctx.lr = 0x822D19D0;
	sub_82198228(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d31c
	ctx.lr = 0x822D19DC;
	sub_8239D31C(ctx, base);
	// b 0x8239ba44
	// ERROR 8239BA44
	return;
}

__attribute__((alias("__imp__sub_822D19E0"))) PPC_WEAK_FUNC(sub_822D19E0);
PPC_FUNC_IMPL(__imp__sub_822D19E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10012
	ctx.r11.s64 = ctx.r11.s64 + -10012;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10012
	ctx.r10.s64 = ctx.r10.s64 + -10012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A08"))) PPC_WEAK_FUNC(sub_822D1A08);
PPC_FUNC_IMPL(__imp__sub_822D1A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10012
	ctx.r11.s64 = ctx.r11.s64 + -10012;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10012
	ctx.r10.s64 = ctx.r10.s64 + -10012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A30"))) PPC_WEAK_FUNC(sub_822D1A30);
PPC_FUNC_IMPL(__imp__sub_822D1A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10012
	ctx.r11.s64 = ctx.r11.s64 + -10012;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10012
	ctx.r10.s64 = ctx.r10.s64 + -10012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A58"))) PPC_WEAK_FUNC(sub_822D1A58);
PPC_FUNC_IMPL(__imp__sub_822D1A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x821e1b98
	ctx.lr = 0x822D1A70;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A80"))) PPC_WEAK_FUNC(sub_822D1A80);
PPC_FUNC_IMPL(__imp__sub_822D1A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x821e1b98
	ctx.lr = 0x822D1A98;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1AA8"))) PPC_WEAK_FUNC(sub_822D1AA8);
PPC_FUNC_IMPL(__imp__sub_822D1AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D1AB0;
	sub_8239BA1C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x822d1adc
	if (!ctx.cr6.lt) goto loc_822D1ADC;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_822D1ADC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1b38
	if (ctx.cr0.eq) goto loc_822D1B38;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x823116a0
	ctx.lr = 0x822D1AF4;
	sub_823116A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r31,-32128
	ctx.r31.s64 = -2105540608;
	// lfs f0,6328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6328);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-11024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11024);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x822bb280
	ctx.lr = 0x822D1B10;
	sub_822BB280(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lwz r3,-11024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11024);
	// lfs f13,17324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17324);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// bl 0x822bb268
	ctx.lr = 0x822D1B2C;
	sub_822BB268(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f30,f1,f0,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64));
loc_822D1B38:
	// lfs f0,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D1B50"))) PPC_WEAK_FUNC(sub_822D1B50);
PPC_FUNC_IMPL(__imp__sub_822D1B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D1B58;
	sub_8239BA1C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82317d08
	ctx.lr = 0x822D1B7C;
	sub_82317D08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d1b9c
	if (ctx.cr0.eq) goto loc_822D1B9C;
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1b9c
	if (!ctx.cr0.eq) goto loc_822D1B9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822D1B9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,544(r30)
	PPC_STORE_U8(ctx.r30.u32 + 544, ctx.r11.u8);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D1BB4"))) PPC_WEAK_FUNC(sub_822D1BB4);
PPC_FUNC_IMPL(__imp__sub_822D1BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1BB8"))) PPC_WEAK_FUNC(sub_822D1BB8);
PPC_FUNC_IMPL(__imp__sub_822D1BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28528(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28528);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D1BC8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x822D1BF0;
	sub_82317D30(ctx, base);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-10004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,-10008
	ctx.r29.s64 = ctx.r9.s64 + -10008;
	// bne 0x822d1c20
	if (!ctx.cr0.eq) goto loc_822D1C20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10004, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,28504
	ctx.r4.s64 = ctx.r11.s64 + 28504;
	// bl 0x823559d8
	ctx.lr = 0x822D1C20;
	sub_823559D8(ctx, base);
loc_822D1C20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1c54
	if (ctx.cr0.eq) goto loc_822D1C54;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,-204
	ctx.r3.s64 = ctx.r28.s64 + -204;
	// bl 0x82126e58
	ctx.lr = 0x822D1C50;
	sub_82126E58(ctx, base);
	// b 0x822d1c78
	goto loc_822D1C78;
loc_822D1C54:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// bl 0x82126148
	ctx.lr = 0x822D1C68;
	sub_82126148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_822D1C78:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D1BC0"))) PPC_WEAK_FUNC(sub_822D1BC0);
PPC_FUNC_IMPL(__imp__sub_822D1BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D1BC8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x822D1BF0;
	sub_82317D30(ctx, base);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-10004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,-10008
	ctx.r29.s64 = ctx.r9.s64 + -10008;
	// bne 0x822d1c20
	if (!ctx.cr0.eq) goto loc_822D1C20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-10004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10004, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,28504
	ctx.r4.s64 = ctx.r11.s64 + 28504;
	// bl 0x823559d8
	ctx.lr = 0x822D1C20;
	sub_823559D8(ctx, base);
loc_822D1C20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1c54
	if (ctx.cr0.eq) goto loc_822D1C54;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,-204
	ctx.r3.s64 = ctx.r28.s64 + -204;
	// bl 0x82126e58
	ctx.lr = 0x822D1C50;
	sub_82126E58(ctx, base);
	// b 0x822d1c78
	goto loc_822D1C78;
loc_822D1C54:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// bl 0x82126148
	ctx.lr = 0x822D1C68;
	sub_82126148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_822D1C78:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D1C80"))) PPC_WEAK_FUNC(sub_822D1C80);
PPC_FUNC_IMPL(__imp__sub_822D1C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10004
	ctx.r11.s64 = ctx.r11.s64 + -10004;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-10004
	ctx.r10.s64 = ctx.r10.s64 + -10004;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1CA8"))) PPC_WEAK_FUNC(sub_822D1CA8);
PPC_FUNC_IMPL(__imp__sub_822D1CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d1218
	ctx.lr = 0x822D1CC8;
	sub_822D1218(ctx, base);
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1cd8
	if (ctx.cr0.eq) goto loc_822D1CD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822D1CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1CEC"))) PPC_WEAK_FUNC(sub_822D1CEC);
PPC_FUNC_IMPL(__imp__sub_822D1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1CF0"))) PPC_WEAK_FUNC(sub_822D1CF0);
PPC_FUNC_IMPL(__imp__sub_822D1CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,1640
	ctx.r31.s64 = ctx.r11.s64 + 1640;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r30,r11,920
	ctx.r30.s64 = ctx.r11.s64 + 920;
	// bl 0x8231f810
	ctx.lr = 0x822D1D1C;
	sub_8231F810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c500
	ctx.lr = 0x822D1D30;
	sub_8239C500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1D48"))) PPC_WEAK_FUNC(sub_822D1D48);
PPC_FUNC_IMPL(__imp__sub_822D1D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82354cb0
	ctx.lr = 0x822D1D7C;
	sub_82354CB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1D9C"))) PPC_WEAK_FUNC(sub_822D1D9C);
PPC_FUNC_IMPL(__imp__sub_822D1D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1DA0"))) PPC_WEAK_FUNC(sub_822D1DA0);
PPC_FUNC_IMPL(__imp__sub_822D1DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D1DA8;
	sub_8239BA1C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,617(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1e0c
	if (ctx.cr0.eq) goto loc_822D1E0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150920
	ctx.lr = 0x822D1DDC;
	sub_82150920(ctx, base);
	// lwz r29,216(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x822d1e0c
	if (ctx.cr0.eq) goto loc_822D1E0C;
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af740
	ctx.lr = 0x822D1DF4;
	sub_821AF740(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x821af8c8
	ctx.lr = 0x822D1DFC;
	sub_821AF8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239cb70
	ctx.lr = 0x822D1E0C;
	sub_8239CB70(ctx, base);
loc_822D1E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150920
	ctx.lr = 0x822D1E14;
	sub_82150920(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// bl 0x82150030
	ctx.lr = 0x822D1E20;
	sub_82150030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8216ae30
	ctx.lr = 0x822D1E44;
	sub_8216AE30(ctx, base);
	// stfs f31,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D1E54"))) PPC_WEAK_FUNC(sub_822D1E54);
PPC_FUNC_IMPL(__imp__sub_822D1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1E58"))) PPC_WEAK_FUNC(sub_822D1E58);
PPC_FUNC_IMPL(__imp__sub_822D1E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x822D1E60;
	sub_8239BA0C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,548
	ctx.r29.s64 = ctx.r31.s64 + 548;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x822d1e98
	goto loc_822D1E98;
loc_822D1E7C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_822D1E98:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d1e7c
	if (!ctx.cr0.eq) goto loc_822D1E7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822d1ef0
	if (ctx.cr6.eq) goto loc_822D1EF0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822D1ED0;
	sub_82311678(ctx, base);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822d1ee8
	if (!ctx.cr6.lt) goto loc_822D1EE8;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8214fc70
	ctx.lr = 0x822D1EE4;
	sub_8214FC70(ctx, base);
	// b 0x822d20e4
	goto loc_822D20E4;
loc_822D1EE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1da0
	ctx.lr = 0x822D1EF0;
	sub_822D1DA0(ctx, base);
loc_822D1EF0:
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x8216a4f8
	ctx.lr = 0x822D1EF8;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x822d1f48
	if (ctx.cr0.eq) goto loc_822D1F48;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d1f48
	if (ctx.cr6.eq) goto loc_822D1F48;
	// li r5,516
	ctx.r5.s64 = 516;
	// lwz r4,696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8216ae30
	ctx.lr = 0x822D1F2C;
	sub_8216AE30(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// bne cr6,0x822d1f48
	if (!ctx.cr6.eq) goto loc_822D1F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
loc_822D1F48:
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8214fc70
	ctx.lr = 0x822D1F50;
	sub_8214FC70(ctx, base);
	// lis r25,-32128
	ctx.r25.s64 = -2105540608;
	// lwz r3,-10420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// bl 0x822ca500
	ctx.lr = 0x822D1F5C;
	sub_822CA500(ctx, base);
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1f78
	if (!ctx.cr0.eq) goto loc_822D1F78;
	// lwz r3,-11344(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11344);
	// bl 0x822b5680
	ctx.lr = 0x822D1F70;
	sub_822B5680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1f88
	if (ctx.cr0.eq) goto loc_822D1F88;
loc_822D1F78:
	// lbz r11,617(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x822d1f8c
	if (!ctx.cr0.eq) goto loc_822D1F8C;
loc_822D1F88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D1F8C:
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8216a718
	ctx.lr = 0x822D1F98;
	sub_8216A718(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d20b0
	if (!ctx.cr6.eq) goto loc_822D20B0;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d20b0
	if (!ctx.cr6.eq) goto loc_822D20B0;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822d20b0
	if (!ctx.cr6.gt) goto loc_822D20B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// beq 0x822d1fec
	if (ctx.cr0.eq) goto loc_822D1FEC;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,-11344(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11344);
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// bl 0x822b5578
	ctx.lr = 0x822D1FE4;
	sub_822B5578(ctx, base);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822d0f48
	ctx.lr = 0x822D1FEC;
	sub_822D0F48(ctx, base);
loc_822D1FEC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,28596
	ctx.r3.s64 = ctx.r11.s64 + 28596;
	// bl 0x82192cc8
	ctx.lr = 0x822D1FFC;
	sub_82192CC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,16408
	ctx.r11.s64 = ctx.r11.s64 + 16408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82192cc8
	ctx.lr = 0x822D2014;
	sub_82192CC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821af8c8
	ctx.lr = 0x822D2020;
	sub_821AF8C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// bl 0x821af8c8
	ctx.lr = 0x822D2030;
	sub_821AF8C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-1472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822d2094
	if (ctx.cr6.lt) goto loc_822D2094;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821af8c8
	ctx.lr = 0x822D2054;
	sub_821AF8C8(ctx, base);
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,28592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d20b0
	if (!ctx.cr6.gt) goto loc_822D20B0;
loc_822D2094:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// bl 0x821af8c8
	ctx.lr = 0x822D20A0;
	sub_821AF8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239cb70
	ctx.lr = 0x822D20B0;
	sub_8239CB70(ctx, base);
loc_822D20B0:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d20e4
	if (ctx.cr0.eq) goto loc_822D20E4;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x8216a4f8
	ctx.lr = 0x822D20C0;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d20e4
	if (ctx.cr0.eq) goto loc_822D20E4;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822d20e4
	if (ctx.cr6.lt) goto loc_822D20E4;
	// lwz r3,-10420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10420);
	// bl 0x822cb7f8
	ctx.lr = 0x822D20E4;
	sub_822CB7F8(ctx, base);
loc_822D20E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_822D20F4"))) PPC_WEAK_FUNC(sub_822D20F4);
PPC_FUNC_IMPL(__imp__sub_822D20F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D20F8"))) PPC_WEAK_FUNC(sub_822D20F8);
PPC_FUNC_IMPL(__imp__sub_822D20F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28632(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D2108;
	sub_8239BA1C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stb r11,616(r30)
	PPC_STORE_U8(ctx.r30.u32 + 616, ctx.r11.u8);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2130;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2140;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D214C;
	sub_8213E110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,6068
	ctx.r11.s64 = ctx.r11.s64 + 6068;
loc_822D2154:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x822d2178
	if (ctx.cr0.eq) goto loc_822D2178;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d2154
	if (ctx.cr6.eq) goto loc_822D2154;
loc_822D2178:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,617(r30)
	PPC_STORE_U8(ctx.r30.u32 + 617, ctx.r11.u8);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D2194;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d21c4
	if (!ctx.cr0.eq) goto loc_822D21C4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-10420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// bl 0x822ca500
	ctx.lr = 0x822D21A8;
	sub_822CA500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d21bc
	if (ctx.cr0.eq) goto loc_822D21BC;
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d21c4
	if (!ctx.cr0.eq) goto loc_822D21C4;
loc_822D21BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822d21c8
	goto loc_822D21C8;
loc_822D21C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D21C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r11.u32);
	// bne cr6,0x822d2220
	if (!ctx.cr6.eq) goto loc_822D2220;
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d21ec
	if (ctx.cr0.eq) goto loc_822D21EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,6040
	ctx.r29.s64 = ctx.r11.s64 + 6040;
	// b 0x822d21f4
	goto loc_822D21F4;
loc_822D21EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,6028
	ctx.r29.s64 = ctx.r11.s64 + 6028;
loc_822D21F4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2200;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2210;
	sub_8216A8D0(ctx, base);
	// stw r3,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D221C;
	sub_8213E110(ctx, base);
	// b 0x822d2228
	goto loc_822D2228;
loc_822D2220:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r11.u32);
loc_822D2228:
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2240
	if (ctx.cr0.eq) goto loc_822D2240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,22932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22932);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822d2248
	goto loc_822D2248;
loc_822D2240:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f31.f64 = double(temp.f32);
loc_822D2248:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822D2254;
	sub_82311678(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,620(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 620, temp.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D2100"))) PPC_WEAK_FUNC(sub_822D2100);
PPC_FUNC_IMPL(__imp__sub_822D2100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D2108;
	sub_8239BA1C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stb r11,616(r30)
	PPC_STORE_U8(ctx.r30.u32 + 616, ctx.r11.u8);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2130;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2140;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D214C;
	sub_8213E110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,6068
	ctx.r11.s64 = ctx.r11.s64 + 6068;
loc_822D2154:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x822d2178
	if (ctx.cr0.eq) goto loc_822D2178;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d2154
	if (ctx.cr6.eq) goto loc_822D2154;
loc_822D2178:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,617(r30)
	PPC_STORE_U8(ctx.r30.u32 + 617, ctx.r11.u8);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D2194;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d21c4
	if (!ctx.cr0.eq) goto loc_822D21C4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-10420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10420);
	// bl 0x822ca500
	ctx.lr = 0x822D21A8;
	sub_822CA500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d21bc
	if (ctx.cr0.eq) goto loc_822D21BC;
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d21c4
	if (!ctx.cr0.eq) goto loc_822D21C4;
loc_822D21BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822d21c8
	goto loc_822D21C8;
loc_822D21C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D21C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r11.u32);
	// bne cr6,0x822d2220
	if (!ctx.cr6.eq) goto loc_822D2220;
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d21ec
	if (ctx.cr0.eq) goto loc_822D21EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,6040
	ctx.r29.s64 = ctx.r11.s64 + 6040;
	// b 0x822d21f4
	goto loc_822D21F4;
loc_822D21EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,6028
	ctx.r29.s64 = ctx.r11.s64 + 6028;
loc_822D21F4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2200;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2210;
	sub_8216A8D0(ctx, base);
	// stw r3,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D221C;
	sub_8213E110(ctx, base);
	// b 0x822d2228
	goto loc_822D2228;
loc_822D2220:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r11.u32);
loc_822D2228:
	// lbz r11,617(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 617);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2240
	if (ctx.cr0.eq) goto loc_822D2240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,22932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22932);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822d2248
	goto loc_822D2248;
loc_822D2240:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f31.f64 = double(temp.f32);
loc_822D2248:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// bl 0x82311678
	ctx.lr = 0x822D2254;
	sub_82311678(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,620(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 620, temp.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D2268"))) PPC_WEAK_FUNC(sub_822D2268);
PPC_FUNC_IMPL(__imp__sub_822D2268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2280;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2290"))) PPC_WEAK_FUNC(sub_822D2290);
PPC_FUNC_IMPL(__imp__sub_822D2290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D22A8;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D22B8"))) PPC_WEAK_FUNC(sub_822D22B8);
PPC_FUNC_IMPL(__imp__sub_822D22B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28720(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28720);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D22C8;
	sub_8239BA1C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D22EC;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D22FC;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2308;
	sub_8213E110(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d2388
	if (!ctx.cr0.eq) goto loc_822D2388;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8216a610
	ctx.lr = 0x822D2334;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x822d234c
	if (!ctx.cr6.gt) goto loc_822D234C;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x822d2360
	goto loc_822D2360;
loc_822D234C:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8216a748
	ctx.lr = 0x822D2354;
	sub_8216A748(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2388
	if (!ctx.cr0.eq) goto loc_822D2388;
loc_822D2360:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d12d8
	ctx.lr = 0x822D2370;
	sub_822D12D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8216ae30
	ctx.lr = 0x822D2388;
	sub_8216AE30(ctx, base);
loc_822D2388:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D22C0"))) PPC_WEAK_FUNC(sub_822D22C0);
PPC_FUNC_IMPL(__imp__sub_822D22C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D22C8;
	sub_8239BA1C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D22EC;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D22FC;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2308;
	sub_8213E110(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d2388
	if (!ctx.cr0.eq) goto loc_822D2388;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8216a610
	ctx.lr = 0x822D2334;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x822d234c
	if (!ctx.cr6.gt) goto loc_822D234C;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x822d2360
	goto loc_822D2360;
loc_822D234C:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8216a748
	ctx.lr = 0x822D2354;
	sub_8216A748(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2388
	if (!ctx.cr0.eq) goto loc_822D2388;
loc_822D2360:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d12d8
	ctx.lr = 0x822D2370;
	sub_822D12D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8216ae30
	ctx.lr = 0x822D2388;
	sub_8216AE30(ctx, base);
loc_822D2388:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D2398"))) PPC_WEAK_FUNC(sub_822D2398);
PPC_FUNC_IMPL(__imp__sub_822D2398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D23B0;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D23C0"))) PPC_WEAK_FUNC(sub_822D23C0);
PPC_FUNC_IMPL(__imp__sub_822D23C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28800(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D23D0;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8216a610
	ctx.lr = 0x822D23E8;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822d2464
	if (!ctx.cr6.eq) goto loc_822D2464;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2404;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6016
	ctx.r4.s64 = ctx.r11.s64 + 6016;
	// bl 0x8216a8d0
	ctx.lr = 0x822D2418;
	sub_8216A8D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8213e110
	ctx.lr = 0x822D2424;
	sub_8213E110(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D242C;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2454
	if (ctx.cr0.eq) goto loc_822D2454;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,28008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e48d0
	ctx.lr = 0x822D244C;
	sub_822E48D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2458
	goto loc_822D2458;
loc_822D2454:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2458:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// bl 0x82198228
	ctx.lr = 0x822D2464;
	sub_82198228(ctx, base);
loc_822D2464:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D23C8"))) PPC_WEAK_FUNC(sub_822D23C8);
PPC_FUNC_IMPL(__imp__sub_822D23C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D23D0;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8216a610
	ctx.lr = 0x822D23E8;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822d2464
	if (!ctx.cr6.eq) goto loc_822D2464;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2404;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6016
	ctx.r4.s64 = ctx.r11.s64 + 6016;
	// bl 0x8216a8d0
	ctx.lr = 0x822D2418;
	sub_8216A8D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8213e110
	ctx.lr = 0x822D2424;
	sub_8213E110(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354c68
	ctx.lr = 0x822D242C;
	sub_82354C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2454
	if (ctx.cr0.eq) goto loc_822D2454;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,28008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e48d0
	ctx.lr = 0x822D244C;
	sub_822E48D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2458
	goto loc_822D2458;
loc_822D2454:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2458:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// bl 0x82198228
	ctx.lr = 0x822D2464;
	sub_82198228(ctx, base);
loc_822D2464:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D246C"))) PPC_WEAK_FUNC(sub_822D246C);
PPC_FUNC_IMPL(__imp__sub_822D246C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8213e110
	ctx.lr = 0x822D2484;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2494"))) PPC_WEAK_FUNC(sub_822D2494);
PPC_FUNC_IMPL(__imp__sub_822D2494) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821e1b98
	ctx.lr = 0x822D24AC;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D24BC"))) PPC_WEAK_FUNC(sub_822D24BC);
PPC_FUNC_IMPL(__imp__sub_822D24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D24C0"))) PPC_WEAK_FUNC(sub_822D24C0);
PPC_FUNC_IMPL(__imp__sub_822D24C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28888(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D24FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2520
	if (ctx.cr0.eq) goto loc_822D2520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d24fc
	if (ctx.cr6.eq) goto loc_822D24FC;
loc_822D2520:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2554
	if (!ctx.cr0.eq) goto loc_822D2554;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2534;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
	// bl 0x8216a8d0
	ctx.lr = 0x822D2548;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2554;
	sub_8213E110(ctx, base);
loc_822D2554:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D24C8"))) PPC_WEAK_FUNC(sub_822D24C8);
PPC_FUNC_IMPL(__imp__sub_822D24C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D24FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2520
	if (ctx.cr0.eq) goto loc_822D2520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d24fc
	if (ctx.cr6.eq) goto loc_822D24FC;
loc_822D2520:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2554
	if (!ctx.cr0.eq) goto loc_822D2554;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2534;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
	// bl 0x8216a8d0
	ctx.lr = 0x822D2548;
	sub_8216A8D0(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2554;
	sub_8213E110(ctx, base);
loc_822D2554:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D256C"))) PPC_WEAK_FUNC(sub_822D256C);
PPC_FUNC_IMPL(__imp__sub_822D256C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D2584;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2594"))) PPC_WEAK_FUNC(sub_822D2594);
PPC_FUNC_IMPL(__imp__sub_822D2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2598"))) PPC_WEAK_FUNC(sub_822D2598);
PPC_FUNC_IMPL(__imp__sub_822D2598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,28952(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28952);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D25A8;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d25d4
	if (ctx.cr0.eq) goto loc_822D25D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d25d8
	if (!ctx.cr6.eq) goto loc_822D25D8;
loc_822D25D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D25D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d26d4
	if (!ctx.cr0.eq) goto loc_822D26D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0fa0
	ctx.lr = 0x822D25E8;
	sub_822D0FA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d26d4
	if (!ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D25FC;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2674
	if (!ctx.cr0.eq) goto loc_822D2674;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,6096
	ctx.r10.s64 = ctx.r11.s64 + 6096;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822D2610:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2634
	if (ctx.cr0.eq) goto loc_822D2634;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2610
	if (ctx.cr6.eq) goto loc_822D2610;
loc_822D2634:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,6084
	ctx.r10.s64 = ctx.r11.s64 + 6084;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822D2648:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d266c
	if (ctx.cr0.eq) goto loc_822D266C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2648
	if (ctx.cr6.eq) goto loc_822D2648;
loc_822D266C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
loc_822D2674:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2680;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2690;
	sub_8216A8D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D269C;
	sub_8213E110(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,12
	ctx.r11.s64 = 12;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ae30
	ctx.lr = 0x822D26D4;
	sub_8216AE30(ctx, base);
loc_822D26D4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D25A0"))) PPC_WEAK_FUNC(sub_822D25A0);
PPC_FUNC_IMPL(__imp__sub_822D25A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D25A8;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d25d4
	if (ctx.cr0.eq) goto loc_822D25D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d25d8
	if (!ctx.cr6.eq) goto loc_822D25D8;
loc_822D25D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D25D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d26d4
	if (!ctx.cr0.eq) goto loc_822D26D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0fa0
	ctx.lr = 0x822D25E8;
	sub_822D0FA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d26d4
	if (!ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b3600
	ctx.lr = 0x822D25FC;
	sub_822B3600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2674
	if (!ctx.cr0.eq) goto loc_822D2674;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,6096
	ctx.r10.s64 = ctx.r11.s64 + 6096;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822D2610:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2634
	if (ctx.cr0.eq) goto loc_822D2634;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2610
	if (ctx.cr6.eq) goto loc_822D2610;
loc_822D2634:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,6084
	ctx.r10.s64 = ctx.r11.s64 + 6084;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822D2648:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d266c
	if (ctx.cr0.eq) goto loc_822D266C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2648
	if (ctx.cr6.eq) goto loc_822D2648;
loc_822D266C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
loc_822D2674:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,472(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// bl 0x8213e6a0
	ctx.lr = 0x822D2680;
	sub_8213E6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a8d0
	ctx.lr = 0x822D2690;
	sub_8216A8D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D269C;
	sub_8213E110(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,12
	ctx.r11.s64 = 12;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d26d4
	if (ctx.cr0.eq) goto loc_822D26D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ae30
	ctx.lr = 0x822D26D4;
	sub_8216AE30(ctx, base);
loc_822D26D4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D26DC"))) PPC_WEAK_FUNC(sub_822D26DC);
PPC_FUNC_IMPL(__imp__sub_822D26DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8213e110
	ctx.lr = 0x822D26F4;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2704"))) PPC_WEAK_FUNC(sub_822D2704);
PPC_FUNC_IMPL(__imp__sub_822D2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2708"))) PPC_WEAK_FUNC(sub_822D2708);
PPC_FUNC_IMPL(__imp__sub_822D2708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D2710;
	sub_8239BA18(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r11,6856
	ctx.r4.s64 = ctx.r11.s64 + 6856;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822d1cf0
	ctx.lr = 0x822D2748;
	sub_822D1CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d2778
	if (!ctx.cr0.eq) goto loc_822D2778;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29020
	ctx.r4.s64 = ctx.r11.s64 + 29020;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822d1cf0
	ctx.lr = 0x822D2770;
	sub_822D1CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2848
	if (ctx.cr0.eq) goto loc_822D2848;
loc_822D2778:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D27A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x821af8c8
	ctx.lr = 0x822D27D4;
	sub_821AF8C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x821af8c8
	ctx.lr = 0x822D27E4;
	sub_821AF8C8(ctx, base);
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,29016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29016);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2848
	if (ctx.cr6.gt) goto loc_822D2848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af8c8
	ctx.lr = 0x822D282C;
	sub_821AF8C8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195438
	ctx.lr = 0x822D2838;
	sub_82195438(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822d2848
	if (ctx.cr0.eq) goto loc_822D2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151d20
	ctx.lr = 0x822D2848;
	sub_82151D20(ctx, base);
loc_822D2848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D2860"))) PPC_WEAK_FUNC(sub_822D2860);
PPC_FUNC_IMPL(__imp__sub_822D2860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822d1ca8
	ctx.lr = 0x822D2888;
	sub_822D1CA8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D28C4"))) PPC_WEAK_FUNC(sub_822D28C4);
PPC_FUNC_IMPL(__imp__sub_822D28C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D28C8"))) PPC_WEAK_FUNC(sub_822D28C8);
PPC_FUNC_IMPL(__imp__sub_822D28C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822d28f8
	goto loc_822D28F8;
loc_822D28E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354cb0
	ctx.lr = 0x822D28F8;
	sub_82354CB0(ctx, base);
loc_822D28F8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822d28e8
	if (!ctx.cr6.eq) goto loc_822D28E8;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2920"))) PPC_WEAK_FUNC(sub_822D2920);
PPC_FUNC_IMPL(__imp__sub_822D2920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D2928;
	sub_8239BA1C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// b 0x822d298c
	goto loc_822D298C;
loc_822D2940:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2960
	if (ctx.cr0.eq) goto loc_822D2960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822D2960:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2984
	if (ctx.cr0.eq) goto loc_822D2984;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d1d48
	ctx.lr = 0x822D2984;
	sub_822D1D48(ctx, base);
loc_822D2984:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822D298C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d2940
	if (!ctx.cr0.eq) goto loc_822D2940;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D29A8"))) PPC_WEAK_FUNC(sub_822D29A8);
PPC_FUNC_IMPL(__imp__sub_822D29A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,29064(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29064);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D29B8;
	sub_8239BA08(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2d9c
	if (ctx.cr6.eq) goto loc_822D2D9C;
	// lbz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d29f0
	if (ctx.cr0.eq) goto loc_822D29F0;
	// addi r3,r30,-360
	ctx.r3.s64 = ctx.r30.s64 + -360;
	// bl 0x822d1e58
	ctx.lr = 0x822D29EC;
	sub_822D1E58(ctx, base);
	// b 0x822d2d88
	goto loc_822D2D88;
loc_822D29F0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r24,r30,236
	ctx.r24.s64 = ctx.r30.s64 + 236;
	// addi r27,r11,-6792
	ctx.r27.s64 = ctx.r11.s64 + -6792;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823116a0
	ctx.lr = 0x822D2A04;
	sub_823116A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82197e90
	ctx.lr = 0x822D2A10;
	sub_82197E90(ctx, base);
	// lbz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x822d2a9c
	if (ctx.cr0.eq) goto loc_822D2A9C;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2a9c
	if (!ctx.cr0.eq) goto loc_822D2A9C;
	// addi r29,r30,-360
	ctx.r29.s64 = ctx.r30.s64 + -360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d10a8
	ctx.lr = 0x822D2A40;
	sub_822D10A8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x822d2a9c
	if (!ctx.cr6.lt) goto loc_822D2A9C;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,6060
	ctx.r10.s64 = ctx.r10.s64 + 6060;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D2A64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2a88
	if (ctx.cr0.eq) goto loc_822D2A88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2a64
	if (ctx.cr6.eq) goto loc_822D2A64;
loc_822D2A88:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2a9c
	if (!ctx.cr0.eq) goto loc_822D2A9C;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0ff0
	ctx.lr = 0x822D2A9C;
	sub_822D0FF0(ctx, base);
loc_822D2A9C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2ab8
	if (ctx.cr0.eq) goto loc_822D2AB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d2abc
	if (!ctx.cr6.eq) goto loc_822D2ABC;
loc_822D2AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D2ABC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2d1c
	if (!ctx.cr0.eq) goto loc_822D2D1C;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2ACC;
	sub_8216A4F8(ctx, base);
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,28008
	ctx.r25.s64 = ctx.r11.s64 + 28008;
	// bne 0x822d2b34
	if (!ctx.cr0.eq) goto loc_822D2B34;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x822d2b34
	if (ctx.cr6.lt) goto loc_822D2B34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823116b0
	ctx.lr = 0x822D2B04;
	sub_823116B0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x822d2b34
	if (!ctx.cr6.lt) goto loc_822D2B34;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2b34
	if (ctx.cr0.eq) goto loc_822D2B34;
	// lwz r11,-10420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10420);
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822d2b34
	if (ctx.cr6.gt) goto loc_822D2B34;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a5a8
	ctx.lr = 0x822D2B34;
	sub_8216A5A8(ctx, base);
loc_822D2B34:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2B3C;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2d1c
	if (ctx.cr0.eq) goto loc_822D2D1C;
	// addi r27,r30,-360
	ctx.r27.s64 = ctx.r30.s64 + -360;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d12d8
	ctx.lr = 0x822D2B50;
	sub_822D12D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,28148
	ctx.r10.s64 = ctx.r11.s64 + 28148;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D2B6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2b90
	if (ctx.cr0.eq) goto loc_822D2B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2b6c
	if (ctx.cr6.eq) goto loc_822D2B6C;
loc_822D2B90:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2bb8
	if (!ctx.cr0.eq) goto loc_822D2BB8;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a718
	ctx.lr = 0x822D2BA0;
	sub_8216A718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r11,r11,62976
	ctx.r11.u64 = ctx.r11.u64 & 62976;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x822d2bb8
	if (!ctx.cr6.eq) goto loc_822D2BB8;
	// li r5,516
	ctx.r5.s64 = 516;
	// b 0x822d2d04
	goto loc_822D2D04;
loc_822D2BB8:
	// lwz r11,-10420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10420);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317e08
	ctx.lr = 0x822D2BD8;
	sub_82317E08(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8226dc98
	ctx.lr = 0x822D2BE0;
	sub_8226DC98(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x822d2cf0
	if (!ctx.cr6.lt) goto loc_822D2CF0;
	// addi r3,r30,-180
	ctx.r3.s64 = ctx.r30.s64 + -180;
	// bl 0x821af8c8
	ctx.lr = 0x822D2BF0;
	sub_821AF8C8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195438
	ctx.lr = 0x822D2BFC;
	sub_82195438(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x822d2cf0
	if (ctx.cr0.eq) goto loc_822D2CF0;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-9996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,-10000
	ctx.r29.s64 = ctx.r9.s64 + -10000;
	// bne 0x822d2c34
	if (!ctx.cr0.eq) goto loc_822D2C34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9996, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29032
	ctx.r4.s64 = ctx.r11.s64 + 29032;
	// bl 0x823559d8
	ctx.lr = 0x822D2C34;
	sub_823559D8(ctx, base);
loc_822D2C34:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D2C50;
	sub_823152B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2cf0
	if (ctx.cr0.eq) goto loc_822D2CF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317dc8
	ctx.lr = 0x822D2C60;
	sub_82317DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823559d8
	ctx.lr = 0x822D2C6C;
	sub_823559D8(ctx, base);
	// lwz r29,172(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822610c8
	ctx.lr = 0x822D2C84;
	sub_822610C8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2cf0
	if (!ctx.cr0.eq) goto loc_822D2CF0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a610
	ctx.lr = 0x822D2CAC;
	sub_8216A610(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x822d2cf0
	if (!ctx.cr6.eq) goto loc_822D2CF0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354c68
	ctx.lr = 0x822D2CBC;
	sub_82354C68(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2ce0
	if (ctx.cr0.eq) goto loc_822D2CE0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4a58
	ctx.lr = 0x822D2CD8;
	sub_822E4A58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2ce4
	goto loc_822D2CE4;
loc_822D2CE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2CE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82198228
	ctx.lr = 0x822D2CF0;
	sub_82198228(ctx, base);
loc_822D2CF0:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2CF8;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2d1c
	if (ctx.cr0.eq) goto loc_822D2D1C;
	// li r5,4
	ctx.r5.s64 = 4;
loc_822D2D04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ae30
	ctx.lr = 0x822D2D1C;
	sub_8216AE30(ctx, base);
loc_822D2D1C:
	// lbz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2d38
	if (ctx.cr0.eq) goto loc_822D2D38;
	// lbz r11,185(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822d2d3c
	if (!ctx.cr0.eq) goto loc_822D2D3C;
loc_822D2D38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D2D3C:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822d2d68
	goto loc_822D2D68;
loc_822D2D4C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_822D2D68:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d2d4c
	if (!ctx.cr0.eq) goto loc_822D2D4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214fc70
	ctx.lr = 0x822D2D88;
	sub_8214FC70(ctx, base);
loc_822D2D88:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2d9c
	if (ctx.cr0.eq) goto loc_822D2D9C;
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// bl 0x821af7b0
	ctx.lr = 0x822D2D9C;
	sub_821AF7B0(ctx, base);
loc_822D2D9C:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D29B0"))) PPC_WEAK_FUNC(sub_822D29B0);
PPC_FUNC_IMPL(__imp__sub_822D29B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D29B8;
	sub_8239BA08(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2d9c
	if (ctx.cr6.eq) goto loc_822D2D9C;
	// lbz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d29f0
	if (ctx.cr0.eq) goto loc_822D29F0;
	// addi r3,r30,-360
	ctx.r3.s64 = ctx.r30.s64 + -360;
	// bl 0x822d1e58
	ctx.lr = 0x822D29EC;
	sub_822D1E58(ctx, base);
	// b 0x822d2d88
	goto loc_822D2D88;
loc_822D29F0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r24,r30,236
	ctx.r24.s64 = ctx.r30.s64 + 236;
	// addi r27,r11,-6792
	ctx.r27.s64 = ctx.r11.s64 + -6792;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823116a0
	ctx.lr = 0x822D2A04;
	sub_823116A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82197e90
	ctx.lr = 0x822D2A10;
	sub_82197E90(ctx, base);
	// lbz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x822d2a9c
	if (ctx.cr0.eq) goto loc_822D2A9C;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2a9c
	if (!ctx.cr0.eq) goto loc_822D2A9C;
	// addi r29,r30,-360
	ctx.r29.s64 = ctx.r30.s64 + -360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d10a8
	ctx.lr = 0x822D2A40;
	sub_822D10A8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x822d2a9c
	if (!ctx.cr6.lt) goto loc_822D2A9C;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,6060
	ctx.r10.s64 = ctx.r10.s64 + 6060;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D2A64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2a88
	if (ctx.cr0.eq) goto loc_822D2A88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2a64
	if (ctx.cr6.eq) goto loc_822D2A64;
loc_822D2A88:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2a9c
	if (!ctx.cr0.eq) goto loc_822D2A9C;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0ff0
	ctx.lr = 0x822D2A9C;
	sub_822D0FF0(ctx, base);
loc_822D2A9C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2ab8
	if (ctx.cr0.eq) goto loc_822D2AB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d2abc
	if (!ctx.cr6.eq) goto loc_822D2ABC;
loc_822D2AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D2ABC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2d1c
	if (!ctx.cr0.eq) goto loc_822D2D1C;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2ACC;
	sub_8216A4F8(ctx, base);
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,28008
	ctx.r25.s64 = ctx.r11.s64 + 28008;
	// bne 0x822d2b34
	if (!ctx.cr0.eq) goto loc_822D2B34;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x822d2b34
	if (ctx.cr6.lt) goto loc_822D2B34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823116b0
	ctx.lr = 0x822D2B04;
	sub_823116B0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x822d2b34
	if (!ctx.cr6.lt) goto loc_822D2B34;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2b34
	if (ctx.cr0.eq) goto loc_822D2B34;
	// lwz r11,-10420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10420);
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822d2b34
	if (ctx.cr6.gt) goto loc_822D2B34;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a5a8
	ctx.lr = 0x822D2B34;
	sub_8216A5A8(ctx, base);
loc_822D2B34:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2B3C;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2d1c
	if (ctx.cr0.eq) goto loc_822D2D1C;
	// addi r27,r30,-360
	ctx.r27.s64 = ctx.r30.s64 + -360;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d12d8
	ctx.lr = 0x822D2B50;
	sub_822D12D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,28148
	ctx.r10.s64 = ctx.r11.s64 + 28148;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_822D2B6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2b90
	if (ctx.cr0.eq) goto loc_822D2B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d2b6c
	if (ctx.cr6.eq) goto loc_822D2B6C;
loc_822D2B90:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2bb8
	if (!ctx.cr0.eq) goto loc_822D2BB8;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a718
	ctx.lr = 0x822D2BA0;
	sub_8216A718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r11,r11,62976
	ctx.r11.u64 = ctx.r11.u64 & 62976;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x822d2bb8
	if (!ctx.cr6.eq) goto loc_822D2BB8;
	// li r5,516
	ctx.r5.s64 = 516;
	// b 0x822d2d04
	goto loc_822D2D04;
loc_822D2BB8:
	// lwz r11,-10420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10420);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317e08
	ctx.lr = 0x822D2BD8;
	sub_82317E08(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8226dc98
	ctx.lr = 0x822D2BE0;
	sub_8226DC98(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x822d2cf0
	if (!ctx.cr6.lt) goto loc_822D2CF0;
	// addi r3,r30,-180
	ctx.r3.s64 = ctx.r30.s64 + -180;
	// bl 0x821af8c8
	ctx.lr = 0x822D2BF0;
	sub_821AF8C8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195438
	ctx.lr = 0x822D2BFC;
	sub_82195438(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x822d2cf0
	if (ctx.cr0.eq) goto loc_822D2CF0;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,-9996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,-10000
	ctx.r29.s64 = ctx.r9.s64 + -10000;
	// bne 0x822d2c34
	if (!ctx.cr0.eq) goto loc_822D2C34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9996, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29032
	ctx.r4.s64 = ctx.r11.s64 + 29032;
	// bl 0x823559d8
	ctx.lr = 0x822D2C34;
	sub_823559D8(ctx, base);
loc_822D2C34:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823152b0
	ctx.lr = 0x822D2C50;
	sub_823152B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2cf0
	if (ctx.cr0.eq) goto loc_822D2CF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317dc8
	ctx.lr = 0x822D2C60;
	sub_82317DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823559d8
	ctx.lr = 0x822D2C6C;
	sub_823559D8(ctx, base);
	// lwz r29,172(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822610c8
	ctx.lr = 0x822D2C84;
	sub_822610C8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2cf0
	if (!ctx.cr0.eq) goto loc_822D2CF0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a610
	ctx.lr = 0x822D2CAC;
	sub_8216A610(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x822d2cf0
	if (!ctx.cr6.eq) goto loc_822D2CF0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354c68
	ctx.lr = 0x822D2CBC;
	sub_82354C68(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2ce0
	if (ctx.cr0.eq) goto loc_822D2CE0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4a58
	ctx.lr = 0x822D2CD8;
	sub_822E4A58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2ce4
	goto loc_822D2CE4;
loc_822D2CE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2CE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82198228
	ctx.lr = 0x822D2CF0;
	sub_82198228(ctx, base);
loc_822D2CF0:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x8216a4f8
	ctx.lr = 0x822D2CF8;
	sub_8216A4F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2d1c
	if (ctx.cr0.eq) goto loc_822D2D1C;
	// li r5,4
	ctx.r5.s64 = 4;
loc_822D2D04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ae30
	ctx.lr = 0x822D2D1C;
	sub_8216AE30(ctx, base);
loc_822D2D1C:
	// lbz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2d38
	if (ctx.cr0.eq) goto loc_822D2D38;
	// lbz r11,185(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822d2d3c
	if (!ctx.cr0.eq) goto loc_822D2D3C;
loc_822D2D38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D2D3C:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822d2d68
	goto loc_822D2D68;
loc_822D2D4C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_822D2D68:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d2d4c
	if (!ctx.cr0.eq) goto loc_822D2D4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214fc70
	ctx.lr = 0x822D2D88;
	sub_8214FC70(ctx, base);
loc_822D2D88:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2d9c
	if (ctx.cr0.eq) goto loc_822D2D9C;
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// bl 0x821af7b0
	ctx.lr = 0x822D2D9C;
	sub_821AF7B0(ctx, base);
loc_822D2D9C:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D2DAC"))) PPC_WEAK_FUNC(sub_822D2DAC);
PPC_FUNC_IMPL(__imp__sub_822D2DAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9996
	ctx.r11.s64 = ctx.r11.s64 + -9996;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9996
	ctx.r10.s64 = ctx.r10.s64 + -9996;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2DD4"))) PPC_WEAK_FUNC(sub_822D2DD4);
PPC_FUNC_IMPL(__imp__sub_822D2DD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x821e1b98
	ctx.lr = 0x822D2DEC;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2DFC"))) PPC_WEAK_FUNC(sub_822D2DFC);
PPC_FUNC_IMPL(__imp__sub_822D2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2E00"))) PPC_WEAK_FUNC(sub_822D2E00);
PPC_FUNC_IMPL(__imp__sub_822D2E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,29496(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29496);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D2E10;
	sub_8239BA08(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x822D2E40;
	sub_82317D30(ctx, base);
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9928
	ctx.r29.s64 = ctx.r10.s64 + -9928;
	// bne 0x822d2e74
	if (!ctx.cr0.eq) goto loc_822D2E74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = ctx.r11.s64 + -3612;
	// bl 0x823559d8
	ctx.lr = 0x822D2E70;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2E74:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ea4
	if (ctx.cr0.eq) goto loc_822D2EA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
loc_822D2E98:
	// bl 0x822d22c0
	ctx.lr = 0x822D2E9C;
	sub_822D22C0(ctx, base);
loc_822D2E9C:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d3528
	goto loc_822D3528;
loc_822D2EA4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,28148
	ctx.r28.s64 = ctx.r10.s64 + 28148;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9932
	ctx.r29.s64 = ctx.r10.s64 + -9932;
	// bne 0x822d2ed4
	if (!ctx.cr0.eq) goto loc_822D2ED4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D2ED0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2ED4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ef8
	if (ctx.cr0.eq) goto loc_822D2EF8;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2EF8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9936
	ctx.r29.s64 = ctx.r10.s64 + -9936;
	// bne 0x822d2f24
	if (!ctx.cr0.eq) goto loc_822D2F24;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29324
	ctx.r4.s64 = ctx.r11.s64 + 29324;
	// bl 0x823559d8
	ctx.lr = 0x822D2F20;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2F24:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2f4c
	if (ctx.cr0.eq) goto loc_822D2F4C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6052
	ctx.r4.s64 = ctx.r11.s64 + 6052;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2F4C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9940
	ctx.r29.s64 = ctx.r10.s64 + -9940;
	// bne 0x822d2f78
	if (!ctx.cr0.eq) goto loc_822D2F78;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29312
	ctx.r4.s64 = ctx.r11.s64 + 29312;
	// bl 0x823559d8
	ctx.lr = 0x822D2F74;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2F78:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2fa4
	if (ctx.cr0.eq) goto loc_822D2FA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6052
	ctx.r4.s64 = ctx.r11.s64 + 6052;
loc_822D2F9C:
	// bl 0x822d24c8
	ctx.lr = 0x822D2FA0;
	sub_822D24C8(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D2FA4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9944
	ctx.r29.s64 = ctx.r10.s64 + -9944;
	// bne 0x822d2fd0
	if (!ctx.cr0.eq) goto loc_822D2FD0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29300
	ctx.r4.s64 = ctx.r11.s64 + 29300;
	// bl 0x823559d8
	ctx.lr = 0x822D2FCC;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2FD0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ff8
	if (ctx.cr0.eq) goto loc_822D2FF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2FF8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9948
	ctx.r29.s64 = ctx.r10.s64 + -9948;
	// bne 0x822d3024
	if (!ctx.cr0.eq) goto loc_822D3024;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29284
	ctx.r4.s64 = ctx.r11.s64 + 29284;
	// bl 0x823559d8
	ctx.lr = 0x822D3020;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3024:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d304c
	if (ctx.cr0.eq) goto loc_822D304C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// b 0x822d2f9c
	goto loc_822D2F9C;
loc_822D304C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9952
	ctx.r29.s64 = ctx.r10.s64 + -9952;
	// bne 0x822d3078
	if (!ctx.cr0.eq) goto loc_822D3078;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,28136
	ctx.r4.s64 = ctx.r11.s64 + 28136;
	// bl 0x823559d8
	ctx.lr = 0x822D3074;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3078:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d30a4
	if (ctx.cr0.eq) goto loc_822D30A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
loc_822D309C:
	// bl 0x822d25a0
	ctx.lr = 0x822D30A0;
	sub_822D25A0(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D30A4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6084
	ctx.r28.s64 = ctx.r10.s64 + 6084;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9956
	ctx.r29.s64 = ctx.r10.s64 + -9956;
	// bne 0x822d30d4
	if (!ctx.cr0.eq) goto loc_822D30D4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D30D0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D30D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d30f8
	if (ctx.cr0.eq) goto loc_822D30F8;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d309c
	goto loc_822D309C;
loc_822D30F8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6096
	ctx.r28.s64 = ctx.r10.s64 + 6096;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9960
	ctx.r29.s64 = ctx.r10.s64 + -9960;
	// bne 0x822d3128
	if (!ctx.cr0.eq) goto loc_822D3128;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D3124;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3128:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d314c
	if (ctx.cr0.eq) goto loc_822D314C;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d309c
	goto loc_822D309C;
loc_822D314C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9964
	ctx.r29.s64 = ctx.r10.s64 + -9964;
	// bne 0x822d3178
	if (!ctx.cr0.eq) goto loc_822D3178;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29256
	ctx.r4.s64 = ctx.r11.s64 + 29256;
	// bl 0x823559d8
	ctx.lr = 0x822D3174;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3178:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d31b0
	if (ctx.cr0.eq) goto loc_822D31B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317dc8
	ctx.lr = 0x822D31A0;
	sub_82317DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// bl 0x822d2100
	ctx.lr = 0x822D31AC;
	sub_822D2100(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D31B0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9968
	ctx.r29.s64 = ctx.r10.s64 + -9968;
	// bne 0x822d31dc
	if (!ctx.cr0.eq) goto loc_822D31DC;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29240
	ctx.r4.s64 = ctx.r11.s64 + 29240;
	// bl 0x823559d8
	ctx.lr = 0x822D31D8;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D31DC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d3238
	if (ctx.cr0.eq) goto loc_822D3238;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = ctx.r25.s64 + -720;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x822d2708
	ctx.lr = 0x822D3204;
	sub_822D2708(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d3234
	if (ctx.cr6.eq) goto loc_822D3234;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D321C;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_822D322C:
	// bl 0x82120818
	ctx.lr = 0x822D3230;
	sub_82120818(ctx, base);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D3234:
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3238:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9972
	ctx.r29.s64 = ctx.r10.s64 + -9972;
	// bne 0x822d3264
	if (!ctx.cr0.eq) goto loc_822D3264;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x823559d8
	ctx.lr = 0x822D3260;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3264:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d32bc
	if (ctx.cr0.eq) goto loc_822D32BC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = ctx.r25.s64 + -720;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822d1b50
	ctx.lr = 0x822D328C;
	sub_822D1B50(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d32b8
	if (ctx.cr6.eq) goto loc_822D32B8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D32A4;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x822d322c
	goto loc_822D322C;
loc_822D32B8:
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D32BC:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9976
	ctx.r29.s64 = ctx.r10.s64 + -9976;
	// bne 0x822d32e8
	if (!ctx.cr0.eq) goto loc_822D32E8;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29220
	ctx.r4.s64 = ctx.r11.s64 + 29220;
	// bl 0x823559d8
	ctx.lr = 0x822D32E4;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D32E8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d332c
	if (ctx.cr0.eq) goto loc_822D332C;
	// lwz r3,-244(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -244);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d331c
	if (ctx.cr0.eq) goto loc_822D331C;
	// bl 0x8218a5d8
	ctx.lr = 0x822D3310;
	sub_8218A5D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822d3320
	if (!ctx.cr0.eq) goto loc_822D3320;
loc_822D331C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822D3320:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D332C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9980
	ctx.r29.s64 = ctx.r10.s64 + -9980;
	// bne 0x822d3358
	if (!ctx.cr0.eq) goto loc_822D3358;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29200
	ctx.r4.s64 = ctx.r11.s64 + 29200;
	// bl 0x823559d8
	ctx.lr = 0x822D3354;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3358:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d33a8
	if (ctx.cr0.eq) goto loc_822D33A8;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -248);
	// bl 0x8216a610
	ctx.lr = 0x822D337C;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822d331c
	if (!ctx.cr6.gt) goto loc_822D331C;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -248);
	// bl 0x8216a610
	ctx.lr = 0x822D3398;
	sub_8216A610(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822d3320
	if (!ctx.cr6.gt) goto loc_822D3320;
	// b 0x822d331c
	goto loc_822D331C;
loc_822D33A8:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9984
	ctx.r29.s64 = ctx.r10.s64 + -9984;
	// bne 0x822d33d4
	if (!ctx.cr0.eq) goto loc_822D33D4;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29176
	ctx.r4.s64 = ctx.r11.s64 + 29176;
	// bl 0x823559d8
	ctx.lr = 0x822D33D0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D33D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d3404
	if (ctx.cr0.eq) goto loc_822D3404;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// bl 0x822d11d0
	ctx.lr = 0x822D33F4;
	sub_822D11D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D3404:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9988
	ctx.r29.s64 = ctx.r10.s64 + -9988;
	// bne 0x822d3430
	if (!ctx.cr0.eq) goto loc_822D3430;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29160
	ctx.r4.s64 = ctx.r11.s64 + 29160;
	// bl 0x823559d8
	ctx.lr = 0x822D342C;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3430:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d345c
	if (ctx.cr0.eq) goto loc_822D345C;
	// stw r26,-200(r25)
	PPC_STORE_U32(ctx.r25.u32 + -200, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d3530
	goto loc_822D3530;
loc_822D345C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9992
	ctx.r29.s64 = ctx.r10.s64 + -9992;
	// bne 0x822d3484
	if (!ctx.cr0.eq) goto loc_822D3484;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = ctx.r11.s64 + 13528;
	// bl 0x823559d8
	ctx.lr = 0x822D3484;
	sub_823559D8(ctx, base);
loc_822D3484:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d34e0
	if (ctx.cr0.eq) goto loc_822D34E0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,-204(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -204);
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D34AC;
	sub_822B5578(ctx, base);
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d34c0
	if (!ctx.cr0.eq) goto loc_822D34C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822d34d0
	goto loc_822D34D0;
loc_822D34C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822D34D0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D34E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-200
	ctx.r4.s64 = ctx.r25.s64 + -200;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82126600
	ctx.lr = 0x822D34F4;
	sub_82126600(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d3520
	if (ctx.cr6.eq) goto loc_822D3520;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D350C;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x822d322c
	goto loc_822D322C;
loc_822D3520:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_822D3528:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_822D352C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822D3530:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D2E08"))) PPC_WEAK_FUNC(sub_822D2E08);
PPC_FUNC_IMPL(__imp__sub_822D2E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x822D2E10;
	sub_8239BA08(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x822D2E40;
	sub_82317D30(ctx, base);
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9928
	ctx.r29.s64 = ctx.r10.s64 + -9928;
	// bne 0x822d2e74
	if (!ctx.cr0.eq) goto loc_822D2E74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = ctx.r11.s64 + -3612;
	// bl 0x823559d8
	ctx.lr = 0x822D2E70;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2E74:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ea4
	if (ctx.cr0.eq) goto loc_822D2EA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
loc_822D2E98:
	// bl 0x822d22c0
	ctx.lr = 0x822D2E9C;
	sub_822D22C0(ctx, base);
loc_822D2E9C:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d3528
	goto loc_822D3528;
loc_822D2EA4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,28148
	ctx.r28.s64 = ctx.r10.s64 + 28148;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9932
	ctx.r29.s64 = ctx.r10.s64 + -9932;
	// bne 0x822d2ed4
	if (!ctx.cr0.eq) goto loc_822D2ED4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D2ED0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2ED4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ef8
	if (ctx.cr0.eq) goto loc_822D2EF8;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2EF8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9936
	ctx.r29.s64 = ctx.r10.s64 + -9936;
	// bne 0x822d2f24
	if (!ctx.cr0.eq) goto loc_822D2F24;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29324
	ctx.r4.s64 = ctx.r11.s64 + 29324;
	// bl 0x823559d8
	ctx.lr = 0x822D2F20;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2F24:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2f4c
	if (ctx.cr0.eq) goto loc_822D2F4C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6052
	ctx.r4.s64 = ctx.r11.s64 + 6052;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2F4C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9940
	ctx.r29.s64 = ctx.r10.s64 + -9940;
	// bne 0x822d2f78
	if (!ctx.cr0.eq) goto loc_822D2F78;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29312
	ctx.r4.s64 = ctx.r11.s64 + 29312;
	// bl 0x823559d8
	ctx.lr = 0x822D2F74;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2F78:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2fa4
	if (ctx.cr0.eq) goto loc_822D2FA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,6052
	ctx.r4.s64 = ctx.r11.s64 + 6052;
loc_822D2F9C:
	// bl 0x822d24c8
	ctx.lr = 0x822D2FA0;
	sub_822D24C8(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D2FA4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9944
	ctx.r29.s64 = ctx.r10.s64 + -9944;
	// bne 0x822d2fd0
	if (!ctx.cr0.eq) goto loc_822D2FD0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29300
	ctx.r4.s64 = ctx.r11.s64 + 29300;
	// bl 0x823559d8
	ctx.lr = 0x822D2FCC;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D2FD0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2ff8
	if (ctx.cr0.eq) goto loc_822D2FF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// b 0x822d2e98
	goto loc_822D2E98;
loc_822D2FF8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9948
	ctx.r29.s64 = ctx.r10.s64 + -9948;
	// bne 0x822d3024
	if (!ctx.cr0.eq) goto loc_822D3024;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29284
	ctx.r4.s64 = ctx.r11.s64 + 29284;
	// bl 0x823559d8
	ctx.lr = 0x822D3020;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3024:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d304c
	if (ctx.cr0.eq) goto loc_822D304C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,26996
	ctx.r4.s64 = ctx.r11.s64 + 26996;
	// b 0x822d2f9c
	goto loc_822D2F9C;
loc_822D304C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9952
	ctx.r29.s64 = ctx.r10.s64 + -9952;
	// bne 0x822d3078
	if (!ctx.cr0.eq) goto loc_822D3078;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,28136
	ctx.r4.s64 = ctx.r11.s64 + 28136;
	// bl 0x823559d8
	ctx.lr = 0x822D3074;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3078:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d30a4
	if (ctx.cr0.eq) goto loc_822D30A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
loc_822D309C:
	// bl 0x822d25a0
	ctx.lr = 0x822D30A0;
	sub_822D25A0(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D30A4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6084
	ctx.r28.s64 = ctx.r10.s64 + 6084;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9956
	ctx.r29.s64 = ctx.r10.s64 + -9956;
	// bne 0x822d30d4
	if (!ctx.cr0.eq) goto loc_822D30D4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D30D0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D30D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d30f8
	if (ctx.cr0.eq) goto loc_822D30F8;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d309c
	goto loc_822D309C;
loc_822D30F8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6096
	ctx.r28.s64 = ctx.r10.s64 + 6096;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9960
	ctx.r29.s64 = ctx.r10.s64 + -9960;
	// bne 0x822d3128
	if (!ctx.cr0.eq) goto loc_822D3128;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823559d8
	ctx.lr = 0x822D3124;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3128:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d314c
	if (ctx.cr0.eq) goto loc_822D314C;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822d309c
	goto loc_822D309C;
loc_822D314C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9964
	ctx.r29.s64 = ctx.r10.s64 + -9964;
	// bne 0x822d3178
	if (!ctx.cr0.eq) goto loc_822D3178;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29256
	ctx.r4.s64 = ctx.r11.s64 + 29256;
	// bl 0x823559d8
	ctx.lr = 0x822D3174;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3178:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d31b0
	if (ctx.cr0.eq) goto loc_822D31B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317dc8
	ctx.lr = 0x822D31A0;
	sub_82317DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// bl 0x822d2100
	ctx.lr = 0x822D31AC;
	sub_822D2100(ctx, base);
	// b 0x822d2e9c
	goto loc_822D2E9C;
loc_822D31B0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9968
	ctx.r29.s64 = ctx.r10.s64 + -9968;
	// bne 0x822d31dc
	if (!ctx.cr0.eq) goto loc_822D31DC;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29240
	ctx.r4.s64 = ctx.r11.s64 + 29240;
	// bl 0x823559d8
	ctx.lr = 0x822D31D8;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D31DC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d3238
	if (ctx.cr0.eq) goto loc_822D3238;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = ctx.r25.s64 + -720;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x822d2708
	ctx.lr = 0x822D3204;
	sub_822D2708(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d3234
	if (ctx.cr6.eq) goto loc_822D3234;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D321C;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_822D322C:
	// bl 0x82120818
	ctx.lr = 0x822D3230;
	sub_82120818(ctx, base);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D3234:
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3238:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9972
	ctx.r29.s64 = ctx.r10.s64 + -9972;
	// bne 0x822d3264
	if (!ctx.cr0.eq) goto loc_822D3264;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x823559d8
	ctx.lr = 0x822D3260;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3264:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d32bc
	if (ctx.cr0.eq) goto loc_822D32BC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = ctx.r25.s64 + -720;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822d1b50
	ctx.lr = 0x822D328C;
	sub_822D1B50(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d32b8
	if (ctx.cr6.eq) goto loc_822D32B8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D32A4;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x822d322c
	goto loc_822D322C;
loc_822D32B8:
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D32BC:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9976
	ctx.r29.s64 = ctx.r10.s64 + -9976;
	// bne 0x822d32e8
	if (!ctx.cr0.eq) goto loc_822D32E8;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29220
	ctx.r4.s64 = ctx.r11.s64 + 29220;
	// bl 0x823559d8
	ctx.lr = 0x822D32E4;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D32E8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d332c
	if (ctx.cr0.eq) goto loc_822D332C;
	// lwz r3,-244(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -244);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d331c
	if (ctx.cr0.eq) goto loc_822D331C;
	// bl 0x8218a5d8
	ctx.lr = 0x822D3310;
	sub_8218A5D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822d3320
	if (!ctx.cr0.eq) goto loc_822D3320;
loc_822D331C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822D3320:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D332C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9980
	ctx.r29.s64 = ctx.r10.s64 + -9980;
	// bne 0x822d3358
	if (!ctx.cr0.eq) goto loc_822D3358;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29200
	ctx.r4.s64 = ctx.r11.s64 + 29200;
	// bl 0x823559d8
	ctx.lr = 0x822D3354;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3358:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d33a8
	if (ctx.cr0.eq) goto loc_822D33A8;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -248);
	// bl 0x8216a610
	ctx.lr = 0x822D337C;
	sub_8216A610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822d331c
	if (!ctx.cr6.gt) goto loc_822D331C;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -248);
	// bl 0x8216a610
	ctx.lr = 0x822D3398;
	sub_8216A610(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822d3320
	if (!ctx.cr6.gt) goto loc_822D3320;
	// b 0x822d331c
	goto loc_822D331C;
loc_822D33A8:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9984
	ctx.r29.s64 = ctx.r10.s64 + -9984;
	// bne 0x822d33d4
	if (!ctx.cr0.eq) goto loc_822D33D4;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29176
	ctx.r4.s64 = ctx.r11.s64 + 29176;
	// bl 0x823559d8
	ctx.lr = 0x822D33D0;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D33D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d3404
	if (ctx.cr0.eq) goto loc_822D3404;
	// addi r3,r25,-720
	ctx.r3.s64 = ctx.r25.s64 + -720;
	// bl 0x822d11d0
	ctx.lr = 0x822D33F4;
	sub_822D11D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D3404:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9988
	ctx.r29.s64 = ctx.r10.s64 + -9988;
	// bne 0x822d3430
	if (!ctx.cr0.eq) goto loc_822D3430;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29160
	ctx.r4.s64 = ctx.r11.s64 + 29160;
	// bl 0x823559d8
	ctx.lr = 0x822D342C;
	sub_823559D8(ctx, base);
	// lwz r11,-9924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9924);
loc_822D3430:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d345c
	if (ctx.cr0.eq) goto loc_822D345C;
	// stw r26,-200(r25)
	PPC_STORE_U32(ctx.r25.u32 + -200, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// b 0x822d3530
	goto loc_822D3530;
loc_822D345C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9992
	ctx.r29.s64 = ctx.r10.s64 + -9992;
	// bne 0x822d3484
	if (!ctx.cr0.eq) goto loc_822D3484;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,-9924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9924, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = ctx.r11.s64 + 13528;
	// bl 0x823559d8
	ctx.lr = 0x822D3484;
	sub_823559D8(ctx, base);
loc_822D3484:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d34e0
	if (ctx.cr0.eq) goto loc_822D34E0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,-204(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -204);
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D34AC;
	sub_822B5578(ctx, base);
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d34c0
	if (!ctx.cr0.eq) goto loc_822D34C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822d34d0
	goto loc_822D34D0;
loc_822D34C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822D34D0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// b 0x822d352c
	goto loc_822D352C;
loc_822D34E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r25,-200
	ctx.r4.s64 = ctx.r25.s64 + -200;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82126600
	ctx.lr = 0x822D34F4;
	sub_82126600(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d3520
	if (ctx.cr6.eq) goto loc_822D3520;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x822D350C;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d352c
	if (ctx.cr0.eq) goto loc_822D352C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x822d322c
	goto loc_822D322C;
loc_822D3520:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_822D3528:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_822D352C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822D3530:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_822D353C"))) PPC_WEAK_FUNC(sub_822D353C);
PPC_FUNC_IMPL(__imp__sub_822D353C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3564"))) PPC_WEAK_FUNC(sub_822D3564);
PPC_FUNC_IMPL(__imp__sub_822D3564) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D358C"))) PPC_WEAK_FUNC(sub_822D358C);
PPC_FUNC_IMPL(__imp__sub_822D358C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D35B4"))) PPC_WEAK_FUNC(sub_822D35B4);
PPC_FUNC_IMPL(__imp__sub_822D35B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D35DC"))) PPC_WEAK_FUNC(sub_822D35DC);
PPC_FUNC_IMPL(__imp__sub_822D35DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3604"))) PPC_WEAK_FUNC(sub_822D3604);
PPC_FUNC_IMPL(__imp__sub_822D3604) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D362C"))) PPC_WEAK_FUNC(sub_822D362C);
PPC_FUNC_IMPL(__imp__sub_822D362C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3654"))) PPC_WEAK_FUNC(sub_822D3654);
PPC_FUNC_IMPL(__imp__sub_822D3654) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D367C"))) PPC_WEAK_FUNC(sub_822D367C);
PPC_FUNC_IMPL(__imp__sub_822D367C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D36A4"))) PPC_WEAK_FUNC(sub_822D36A4);
PPC_FUNC_IMPL(__imp__sub_822D36A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D36CC"))) PPC_WEAK_FUNC(sub_822D36CC);
PPC_FUNC_IMPL(__imp__sub_822D36CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D36F4"))) PPC_WEAK_FUNC(sub_822D36F4);
PPC_FUNC_IMPL(__imp__sub_822D36F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82120868
	ctx.lr = 0x822D370C;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D371C"))) PPC_WEAK_FUNC(sub_822D371C);
PPC_FUNC_IMPL(__imp__sub_822D371C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3744"))) PPC_WEAK_FUNC(sub_822D3744);
PPC_FUNC_IMPL(__imp__sub_822D3744) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x822D375C;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D376C"))) PPC_WEAK_FUNC(sub_822D376C);
PPC_FUNC_IMPL(__imp__sub_822D376C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3794"))) PPC_WEAK_FUNC(sub_822D3794);
PPC_FUNC_IMPL(__imp__sub_822D3794) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D37BC"))) PPC_WEAK_FUNC(sub_822D37BC);
PPC_FUNC_IMPL(__imp__sub_822D37BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D37E4"))) PPC_WEAK_FUNC(sub_822D37E4);
PPC_FUNC_IMPL(__imp__sub_822D37E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D380C"))) PPC_WEAK_FUNC(sub_822D380C);
PPC_FUNC_IMPL(__imp__sub_822D380C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9924
	ctx.r11.s64 = ctx.r11.s64 + -9924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9924
	ctx.r10.s64 = ctx.r10.s64 + -9924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3834"))) PPC_WEAK_FUNC(sub_822D3834);
PPC_FUNC_IMPL(__imp__sub_822D3834) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82120868
	ctx.lr = 0x822D384C;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D385C"))) PPC_WEAK_FUNC(sub_822D385C);
PPC_FUNC_IMPL(__imp__sub_822D385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3860"))) PPC_WEAK_FUNC(sub_822D3860);
PPC_FUNC_IMPL(__imp__sub_822D3860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8214fdd0
	ctx.lr = 0x822D3880;
	sub_8214FDD0(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,7360
	ctx.r6.s64 = ctx.r11.s64 + 7360;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = ctx.r11.s64 + 920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c500
	ctx.lr = 0x822D38A0;
	sub_8239C500(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d38c4
	if (ctx.cr0.eq) goto loc_822D38C4;
	// addi r4,r30,548
	ctx.r4.s64 = ctx.r30.s64 + 548;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x822d2860
	ctx.lr = 0x822D38C4;
	sub_822D2860(ctx, base);
loc_822D38C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D38DC"))) PPC_WEAK_FUNC(sub_822D38DC);
PPC_FUNC_IMPL(__imp__sub_822D38DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D38E0"))) PPC_WEAK_FUNC(sub_822D38E0);
PPC_FUNC_IMPL(__imp__sub_822D38E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8214feb0
	ctx.lr = 0x822D3900;
	sub_8214FEB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x822d2920
	ctx.lr = 0x822D390C;
	sub_822D2920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3924"))) PPC_WEAK_FUNC(sub_822D3924);
PPC_FUNC_IMPL(__imp__sub_822D3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3928"))) PPC_WEAK_FUNC(sub_822D3928);
PPC_FUNC_IMPL(__imp__sub_822D3928) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d28c8
	sub_822D28C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D392C"))) PPC_WEAK_FUNC(sub_822D392C);
PPC_FUNC_IMPL(__imp__sub_822D392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3930"))) PPC_WEAK_FUNC(sub_822D3930);
PPC_FUNC_IMPL(__imp__sub_822D3930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,29928(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29928);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D3940;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82153068
	ctx.lr = 0x822D3950;
	sub_82153068(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lfs f0,-20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 260, temp.u32);
	// stb r11,256(r29)
	PPC_STORE_U8(ctx.r29.u32 + 256, ctx.r11.u8);
	// stb r27,257(r29)
	PPC_STORE_U8(ctx.r29.u32 + 257, ctx.r27.u8);
	// stw r11,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r11.u32);
	// stw r11,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r11.u32);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3980;
	sub_8213E6A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213e110
	ctx.lr = 0x822D3990;
	sub_8213E110(ctx, base);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// lwz r11,-9916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d39d0
	if (!ctx.cr0.eq) goto loc_822D39D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9916, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5784
	ctx.r4.s64 = ctx.r11.s64 + 5784;
	// bl 0x823559d8
	ctx.lr = 0x822D39BC;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D39C4;
	sub_82318910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-9920(r28)
	PPC_STORE_U32(ctx.r28.u32 + -9920, ctx.r4.u32);
	// b 0x822d39d4
	goto loc_822D39D4;
loc_822D39D0:
	// lwz r4,-9920(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9920);
loc_822D39D4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822d3a08
	if (!ctx.cr6.eq) goto loc_822D3A08;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82317d30
	ctx.lr = 0x822D39EC;
	sub_82317D30(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3a4c
	if (ctx.cr0.eq) goto loc_822D3A4C;
loc_822D3A08:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D3A18;
	sub_822B5578(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822bd3a8
	ctx.lr = 0x822D3A28;
	sub_822BD3A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822bd360
	ctx.lr = 0x822D3A38;
	sub_822BD360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,-360
	ctx.r3.s64 = ctx.r29.s64 + -360;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b1ff0
	ctx.lr = 0x822D3A4C;
	sub_822B1FF0(ctx, base);
loc_822D3A4C:
	// addi r3,r29,-360
	ctx.r3.s64 = ctx.r29.s64 + -360;
	// bl 0x822d14d8
	ctx.lr = 0x822D3A54;
	sub_822D14D8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3A60;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,28148
	ctx.r4.s64 = ctx.r11.s64 + 28148;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3A74;
	sub_8216A8D0(ctx, base);
	// stw r3,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3A80;
	sub_8213E110(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3A8C;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3AA0;
	sub_8216A8D0(ctx, base);
	// stw r3,252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 252, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3AAC;
	sub_8213E110(ctx, base);
	// addi r9,r29,168
	ctx.r9.s64 = ctx.r29.s64 + 168;
	// stb r27,185(r29)
	PPC_STORE_U8(ctx.r29.u32 + 185, ctx.r27.u8);
	// stb r27,184(r29)
	PPC_STORE_U8(ctx.r29.u32 + 184, ctx.r27.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d3af0
	if (ctx.cr6.eq) goto loc_822D3AF0;
	// subf r8,r11,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r11.s64;
	// srawi. r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x822d3aec
	if (!ctx.cr0.gt) goto loc_822D3AEC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D3AD8:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3ad8
	if (ctx.cr0.gt) goto loc_822D3AD8;
loc_822D3AEC:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_822D3AF0:
	// lwz r10,-356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -356);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29884
	ctx.r4.s64 = ctx.r11.s64 + 29884;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,-352(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// bl 0x823559d8
	ctx.lr = 0x822D3B10;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D3B24;
	sub_82319250(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29872
	ctx.r4.s64 = ctx.r11.s64 + 29872;
	// stw r10,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r10.u32);
	// bl 0x823559d8
	ctx.lr = 0x822D3B3C;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e0420
	ctx.lr = 0x822D3B44;
	sub_821E0420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// stw r10,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r10.u32);
	// bl 0x823559d8
	ctx.lr = 0x822D3B5C;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e0420
	ctx.lr = 0x822D3B64;
	sub_821E0420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r10.u32);
	// lis r29,3
	ctx.r29.s64 = 196608;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3B84;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3B8C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6128
	ctx.r4.s64 = ctx.r11.s64 + 6128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BA0;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BA8;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6112
	ctx.r4.s64 = ctx.r11.s64 + 6112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BBC;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BC4;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,6016
	ctx.r28.s64 = ctx.r11.s64 + 6016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BE0;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BE8;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BFC;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C04;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6084
	ctx.r4.s64 = ctx.r11.s64 + 6084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C18;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C20;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6096
	ctx.r4.s64 = ctx.r11.s64 + 6096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C34;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C3C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6196
	ctx.r4.s64 = ctx.r11.s64 + 6196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r29,4
	ctx.r29.s64 = 262144;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C54;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C5C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6068
	ctx.r4.s64 = ctx.r11.s64 + 6068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C70;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C78;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6160
	ctx.r4.s64 = ctx.r11.s64 + 6160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C8C;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C94;
	sub_82175CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r30,8
	ctx.r30.s64 = 524288;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3CA8;
	sub_8216A8D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3CB0;
	sub_82175CE0(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D3938"))) PPC_WEAK_FUNC(sub_822D3938);
PPC_FUNC_IMPL(__imp__sub_822D3938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D3940;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82153068
	ctx.lr = 0x822D3950;
	sub_82153068(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lfs f0,-20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 260, temp.u32);
	// stb r11,256(r29)
	PPC_STORE_U8(ctx.r29.u32 + 256, ctx.r11.u8);
	// stb r27,257(r29)
	PPC_STORE_U8(ctx.r29.u32 + 257, ctx.r27.u8);
	// stw r11,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r11.u32);
	// stw r11,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r11.u32);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3980;
	sub_8213E6A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213e110
	ctx.lr = 0x822D3990;
	sub_8213E110(ctx, base);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// lwz r11,-9916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d39d0
	if (!ctx.cr0.eq) goto loc_822D39D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9916, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5784
	ctx.r4.s64 = ctx.r11.s64 + 5784;
	// bl 0x823559d8
	ctx.lr = 0x822D39BC;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318910
	ctx.lr = 0x822D39C4;
	sub_82318910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-9920(r28)
	PPC_STORE_U32(ctx.r28.u32 + -9920, ctx.r4.u32);
	// b 0x822d39d4
	goto loc_822D39D4;
loc_822D39D0:
	// lwz r4,-9920(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9920);
loc_822D39D4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822d3a08
	if (!ctx.cr6.eq) goto loc_822D3A08;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82317d30
	ctx.lr = 0x822D39EC;
	sub_82317D30(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3a4c
	if (ctx.cr0.eq) goto loc_822D3A4C;
loc_822D3A08:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r3,-11344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11344);
	// bl 0x822b5578
	ctx.lr = 0x822D3A18;
	sub_822B5578(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822bd3a8
	ctx.lr = 0x822D3A28;
	sub_822BD3A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822bd360
	ctx.lr = 0x822D3A38;
	sub_822BD360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,-360
	ctx.r3.s64 = ctx.r29.s64 + -360;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b1ff0
	ctx.lr = 0x822D3A4C;
	sub_822B1FF0(ctx, base);
loc_822D3A4C:
	// addi r3,r29,-360
	ctx.r3.s64 = ctx.r29.s64 + -360;
	// bl 0x822d14d8
	ctx.lr = 0x822D3A54;
	sub_822D14D8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3A60;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,28148
	ctx.r4.s64 = ctx.r11.s64 + 28148;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3A74;
	sub_8216A8D0(ctx, base);
	// stw r3,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3A80;
	sub_8213E110(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// bl 0x8213e6a0
	ctx.lr = 0x822D3A8C;
	sub_8213E6A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3AA0;
	sub_8216A8D0(ctx, base);
	// stw r3,252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 252, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3AAC;
	sub_8213E110(ctx, base);
	// addi r9,r29,168
	ctx.r9.s64 = ctx.r29.s64 + 168;
	// stb r27,185(r29)
	PPC_STORE_U8(ctx.r29.u32 + 185, ctx.r27.u8);
	// stb r27,184(r29)
	PPC_STORE_U8(ctx.r29.u32 + 184, ctx.r27.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d3af0
	if (ctx.cr6.eq) goto loc_822D3AF0;
	// subf r8,r11,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r11.s64;
	// srawi. r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x822d3aec
	if (!ctx.cr0.gt) goto loc_822D3AEC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D3AD8:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3ad8
	if (ctx.cr0.gt) goto loc_822D3AD8;
loc_822D3AEC:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_822D3AF0:
	// lwz r10,-356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -356);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29884
	ctx.r4.s64 = ctx.r11.s64 + 29884;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,-352(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// bl 0x823559d8
	ctx.lr = 0x822D3B10;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D3B24;
	sub_82319250(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29872
	ctx.r4.s64 = ctx.r11.s64 + 29872;
	// stw r10,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r10.u32);
	// bl 0x823559d8
	ctx.lr = 0x822D3B3C;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e0420
	ctx.lr = 0x822D3B44;
	sub_821E0420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// stw r10,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r10.u32);
	// bl 0x823559d8
	ctx.lr = 0x822D3B5C;
	sub_823559D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e0420
	ctx.lr = 0x822D3B64;
	sub_821E0420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r10.u32);
	// lis r29,3
	ctx.r29.s64 = 196608;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3B84;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3B8C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6128
	ctx.r4.s64 = ctx.r11.s64 + 6128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BA0;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BA8;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6112
	ctx.r4.s64 = ctx.r11.s64 + 6112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BBC;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BC4;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,6016
	ctx.r28.s64 = ctx.r11.s64 + 6016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BE0;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3BE8;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3BFC;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C04;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6084
	ctx.r4.s64 = ctx.r11.s64 + 6084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C18;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C20;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6096
	ctx.r4.s64 = ctx.r11.s64 + 6096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C34;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C3C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6196
	ctx.r4.s64 = ctx.r11.s64 + 6196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r29,4
	ctx.r29.s64 = 262144;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C54;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C5C;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6068
	ctx.r4.s64 = ctx.r11.s64 + 6068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C70;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C78;
	sub_82175CE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6160
	ctx.r4.s64 = ctx.r11.s64 + 6160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3C8C;
	sub_8216A8D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3C94;
	sub_82175CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r30,8
	ctx.r30.s64 = 524288;
	// bl 0x8216a8d0
	ctx.lr = 0x822D3CA8;
	sub_8216A8D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82175ce0
	ctx.lr = 0x822D3CB0;
	sub_82175CE0(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D3CB8"))) PPC_WEAK_FUNC(sub_822D3CB8);
PPC_FUNC_IMPL(__imp__sub_822D3CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9916
	ctx.r11.s64 = ctx.r11.s64 + -9916;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9916
	ctx.r10.s64 = ctx.r10.s64 + -9916;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3CE0"))) PPC_WEAK_FUNC(sub_822D3CE0);
PPC_FUNC_IMPL(__imp__sub_822D3CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3CF8;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3D08"))) PPC_WEAK_FUNC(sub_822D3D08);
PPC_FUNC_IMPL(__imp__sub_822D3D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8213e110
	ctx.lr = 0x822D3D20;
	sub_8213E110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3D30"))) PPC_WEAK_FUNC(sub_822D3D30);
PPC_FUNC_IMPL(__imp__sub_822D3D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30344(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30344);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D3D40;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x822d3dec
	if (ctx.cr6.eq) goto loc_822D3DEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r11,r11,30296
	ctx.r11.s64 = ctx.r11.s64 + 30296;
	// addi r10,r10,30284
	ctx.r10.s64 = ctx.r10.s64 + 30284;
	// addi r9,r9,30276
	ctx.r9.s64 = ctx.r9.s64 + 30276;
	// addi r8,r8,30264
	ctx.r8.s64 = ctx.r8.s64 + 30264;
	// addi r7,r7,30256
	ctx.r7.s64 = ctx.r7.s64 + 30256;
	// addi r6,r6,30248
	ctx.r6.s64 = ctx.r6.s64 + 30248;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r5,r5,30240
	ctx.r5.s64 = ctx.r5.s64 + 30240;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// stw r9,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r6.u32);
	// stw r5,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r5.u32);
	// bl 0x82317430
	ctx.lr = 0x822D3DBC;
	sub_82317430(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,764
	ctx.r11.s64 = ctx.r30.s64 + 764;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822D3DEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821261a8
	ctx.lr = 0x822D3DF8;
	sub_821261A8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r9,30208
	ctx.r9.s64 = ctx.r9.s64 + 30208;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r11,30168
	ctx.r11.s64 = ctx.r11.s64 + 30168;
	// stw r9,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// addi r8,r8,30120
	ctx.r8.s64 = ctx.r8.s64 + 30120;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,30100
	ctx.r7.s64 = ctx.r7.s64 + 30100;
	// addi r28,r30,528
	ctx.r28.s64 = ctx.r30.s64 + 528;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r8.u32);
	// addi r11,r11,30036
	ctx.r11.s64 = ctx.r11.s64 + 30036;
	// stw r7,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r7.u32);
	// addi r10,r10,30028
	ctx.r10.s64 = ctx.r10.s64 + 30028;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = ctx.r11.s64 + -716;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = ctx.r11.s64 + -760;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// stw r29,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// addi r11,r30,548
	ctx.r11.s64 = ctx.r30.s64 + 548;
	// stw r29,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// stb r29,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// bl 0x82198320
	ctx.lr = 0x822D3ED4;
	sub_82198320(ctx, base);
	// stw r29,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r29.u32);
	// stb r29,700(r30)
	PPC_STORE_U8(ctx.r30.u32 + 700, ctx.r29.u8);
	// stw r29,712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 712, ctx.r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d3f18
	if (ctx.cr6.eq) goto loc_822D3F18;
	// subf r9,r11,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x822d3f14
	if (!ctx.cr0.gt) goto loc_822D3F14;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D3F00:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3f00
	if (ctx.cr0.gt) goto loc_822D3F00;
loc_822D3F14:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_822D3F18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D3D38"))) PPC_WEAK_FUNC(sub_822D3D38);
PPC_FUNC_IMPL(__imp__sub_822D3D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D3D40;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x822d3dec
	if (ctx.cr6.eq) goto loc_822D3DEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r11,r11,30296
	ctx.r11.s64 = ctx.r11.s64 + 30296;
	// addi r10,r10,30284
	ctx.r10.s64 = ctx.r10.s64 + 30284;
	// addi r9,r9,30276
	ctx.r9.s64 = ctx.r9.s64 + 30276;
	// addi r8,r8,30264
	ctx.r8.s64 = ctx.r8.s64 + 30264;
	// addi r7,r7,30256
	ctx.r7.s64 = ctx.r7.s64 + 30256;
	// addi r6,r6,30248
	ctx.r6.s64 = ctx.r6.s64 + 30248;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r5,r5,30240
	ctx.r5.s64 = ctx.r5.s64 + 30240;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// stw r9,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r6.u32);
	// stw r5,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r5.u32);
	// bl 0x82317430
	ctx.lr = 0x822D3DBC;
	sub_82317430(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,764
	ctx.r11.s64 = ctx.r30.s64 + 764;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822D3DEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821261a8
	ctx.lr = 0x822D3DF8;
	sub_821261A8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r9,30208
	ctx.r9.s64 = ctx.r9.s64 + 30208;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r11,30168
	ctx.r11.s64 = ctx.r11.s64 + 30168;
	// stw r9,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// addi r8,r8,30120
	ctx.r8.s64 = ctx.r8.s64 + 30120;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,30100
	ctx.r7.s64 = ctx.r7.s64 + 30100;
	// addi r28,r30,528
	ctx.r28.s64 = ctx.r30.s64 + 528;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r8.u32);
	// addi r11,r11,30036
	ctx.r11.s64 = ctx.r11.s64 + 30036;
	// stw r7,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r7.u32);
	// addi r10,r10,30028
	ctx.r10.s64 = ctx.r10.s64 + 30028;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = ctx.r11.s64 + -716;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = ctx.r11.s64 + -760;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// stw r29,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// addi r11,r30,548
	ctx.r11.s64 = ctx.r30.s64 + 548;
	// stw r29,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// stb r29,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// bl 0x82198320
	ctx.lr = 0x822D3ED4;
	sub_82198320(ctx, base);
	// stw r29,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r29.u32);
	// stb r29,700(r30)
	PPC_STORE_U8(ctx.r30.u32 + 700, ctx.r29.u8);
	// stw r29,712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 712, ctx.r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d3f18
	if (ctx.cr6.eq) goto loc_822D3F18;
	// subf r9,r11,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x822d3f14
	if (!ctx.cr0.gt) goto loc_822D3F14;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822D3F00:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3f00
	if (ctx.cr0.gt) goto loc_822D3F00;
loc_822D3F14:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_822D3F18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D3F24"))) PPC_WEAK_FUNC(sub_822D3F24);
PPC_FUNC_IMPL(__imp__sub_822D3F24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3f58
	if (ctx.cr0.eq) goto loc_822D3F58;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// bl 0x82317498
	ctx.lr = 0x822D3F58;
	sub_82317498(ctx, base);
loc_822D3F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3F68"))) PPC_WEAK_FUNC(sub_822D3F68);
PPC_FUNC_IMPL(__imp__sub_822D3F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x82126418
	ctx.lr = 0x822D3F84;
	sub_82126418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3F94"))) PPC_WEAK_FUNC(sub_822D3F94);
PPC_FUNC_IMPL(__imp__sub_822D3F94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// bl 0x8233b368
	ctx.lr = 0x822D3FB0;
	sub_8233B368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3FC0"))) PPC_WEAK_FUNC(sub_822D3FC0);
PPC_FUNC_IMPL(__imp__sub_822D3FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,548
	ctx.r3.s64 = ctx.r11.s64 + 548;
	// bl 0x822d3928
	ctx.lr = 0x822D3FDC;
	sub_822D3928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3FEC"))) PPC_WEAK_FUNC(sub_822D3FEC);
PPC_FUNC_IMPL(__imp__sub_822D3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3FF0"))) PPC_WEAK_FUNC(sub_822D3FF0);
PPC_FUNC_IMPL(__imp__sub_822D3FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b29b0
	ctx.lr = 0x822D4008;
	sub_822B29B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4020"))) PPC_WEAK_FUNC(sub_822D4020);
PPC_FUNC_IMPL(__imp__sub_822D4020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82126140
	sub_82126140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4030"))) PPC_WEAK_FUNC(sub_822D4030);
PPC_FUNC_IMPL(__imp__sub_822D4030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82151f48
	sub_82151F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4040"))) PPC_WEAK_FUNC(sub_822D4040);
PPC_FUNC_IMPL(__imp__sub_822D4040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82126138
	sub_82126138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4050"))) PPC_WEAK_FUNC(sub_822D4050);
PPC_FUNC_IMPL(__imp__sub_822D4050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-280
	ctx.r3.s64 = ctx.r3.s64 + -280;
	// b 0x82126390
	sub_82126390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4060"))) PPC_WEAK_FUNC(sub_822D4060);
PPC_FUNC_IMPL(__imp__sub_822D4060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-280
	ctx.r3.s64 = ctx.r3.s64 + -280;
	// b 0x821b82c8
	sub_821B82C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4070"))) PPC_WEAK_FUNC(sub_822D4070);
PPC_FUNC_IMPL(__imp__sub_822D4070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82126088
	sub_82126088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4080"))) PPC_WEAK_FUNC(sub_822D4080);
PPC_FUNC_IMPL(__imp__sub_822D4080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-588
	ctx.r3.s64 = ctx.r3.s64 + -588;
	// b 0x82126360
	sub_82126360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4090"))) PPC_WEAK_FUNC(sub_822D4090);
PPC_FUNC_IMPL(__imp__sub_822D4090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x822d3ff0
	sub_822D3FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D409C"))) PPC_WEAK_FUNC(sub_822D409C);
PPC_FUNC_IMPL(__imp__sub_822D409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D40A0"))) PPC_WEAK_FUNC(sub_822D40A0);
PPC_FUNC_IMPL(__imp__sub_822D40A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x821260e0
	sub_821260E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D40B0"))) PPC_WEAK_FUNC(sub_822D40B0);
PPC_FUNC_IMPL(__imp__sub_822D40B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x822d4428
	sub_822D4428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D40BC"))) PPC_WEAK_FUNC(sub_822D40BC);
PPC_FUNC_IMPL(__imp__sub_822D40BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D40C0"))) PPC_WEAK_FUNC(sub_822D40C0);
PPC_FUNC_IMPL(__imp__sub_822D40C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30416(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30416);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D40D0;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	ctx.r27.s64 = -2105540608;
	// lwz r11,-9908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d4144
	if (!ctx.cr0.eq) goto loc_822D4144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9908, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x822D410C;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822b29b0
	ctx.lr = 0x822D4118;
	sub_822B29B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x822D412C;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x822D413C;
	sub_82270D08(ctx, base);
	// stw r3,-9912(r27)
	PPC_STORE_U32(ctx.r27.u32 + -9912, ctx.r3.u32);
	// b 0x822d4148
	goto loc_822D4148;
loc_822D4144:
	// lwz r3,-9912(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9912);
loc_822D4148:
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4184
	if (ctx.cr0.eq) goto loc_822D4184;
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822d4200
	goto loc_822D4200;
loc_822D4184:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x822D4190;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d41e4
	if (!ctx.cr0.eq) goto loc_822D41E4;
	// addic. r11,r30,-720
	ctx.xer.ca = ctx.r30.u32 > 719;
	ctx.r11.s64 = ctx.r30.s64 + -720;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d41a8
	if (!ctx.cr0.eq) goto loc_822D41A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d41b8
	goto loc_822D41B8;
loc_822D41A8:
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
loc_822D41B8:
	// bl 0x8231c700
	ctx.lr = 0x822D41BC;
	sub_8231C700(ctx, base);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-716
	ctx.r4.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D41E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D41E4:
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D4200:
	// bctrl 
	ctx.lr = 0x822D4204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D40C8"))) PPC_WEAK_FUNC(sub_822D40C8);
PPC_FUNC_IMPL(__imp__sub_822D40C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D40D0;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	ctx.r27.s64 = -2105540608;
	// lwz r11,-9908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d4144
	if (!ctx.cr0.eq) goto loc_822D4144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9908, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x822D410C;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822b29b0
	ctx.lr = 0x822D4118;
	sub_822B29B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x822D412C;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x822D413C;
	sub_82270D08(ctx, base);
	// stw r3,-9912(r27)
	PPC_STORE_U32(ctx.r27.u32 + -9912, ctx.r3.u32);
	// b 0x822d4148
	goto loc_822D4148;
loc_822D4144:
	// lwz r3,-9912(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9912);
loc_822D4148:
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4184
	if (ctx.cr0.eq) goto loc_822D4184;
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822d4200
	goto loc_822D4200;
loc_822D4184:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x822D4190;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d41e4
	if (!ctx.cr0.eq) goto loc_822D41E4;
	// addic. r11,r30,-720
	ctx.xer.ca = ctx.r30.u32 > 719;
	ctx.r11.s64 = ctx.r30.s64 + -720;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d41a8
	if (!ctx.cr0.eq) goto loc_822D41A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d41b8
	goto loc_822D41B8;
loc_822D41A8:
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
loc_822D41B8:
	// bl 0x8231c700
	ctx.lr = 0x822D41BC;
	sub_8231C700(ctx, base);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-716
	ctx.r4.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D41E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D41E4:
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = ctx.r11.s64 + -716;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D4200:
	// bctrl 
	ctx.lr = 0x822D4204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D420C"))) PPC_WEAK_FUNC(sub_822D420C);
PPC_FUNC_IMPL(__imp__sub_822D420C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9908
	ctx.r11.s64 = ctx.r11.s64 + -9908;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9908
	ctx.r10.s64 = ctx.r10.s64 + -9908;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4234"))) PPC_WEAK_FUNC(sub_822D4234);
PPC_FUNC_IMPL(__imp__sub_822D4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4238"))) PPC_WEAK_FUNC(sub_822D4238);
PPC_FUNC_IMPL(__imp__sub_822D4238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x822d1bc0
	sub_822D1BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4244"))) PPC_WEAK_FUNC(sub_822D4244);
PPC_FUNC_IMPL(__imp__sub_822D4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4248"))) PPC_WEAK_FUNC(sub_822D4248);
PPC_FUNC_IMPL(__imp__sub_822D4248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x822d40c8
	sub_822D40C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4254"))) PPC_WEAK_FUNC(sub_822D4254);
PPC_FUNC_IMPL(__imp__sub_822D4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4258"))) PPC_WEAK_FUNC(sub_822D4258);
PPC_FUNC_IMPL(__imp__sub_822D4258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x822d2e08
	sub_822D2E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4264"))) PPC_WEAK_FUNC(sub_822D4264);
PPC_FUNC_IMPL(__imp__sub_822D4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4268"))) PPC_WEAK_FUNC(sub_822D4268);
PPC_FUNC_IMPL(__imp__sub_822D4268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30504(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30504);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r9,30208
	ctx.r9.s64 = ctx.r9.s64 + 30208;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,30168
	ctx.r11.s64 = ctx.r11.s64 + 30168;
	// stw r9,-556(r30)
	PPC_STORE_U32(ctx.r30.u32 + -556, ctx.r9.u32);
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// lwz r9,-716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// addi r8,r8,30120
	ctx.r8.s64 = ctx.r8.s64 + 30120;
	// addi r7,r7,30100
	ctx.r7.s64 = ctx.r7.s64 + 30100;
	// stw r11,-720(r30)
	PPC_STORE_U32(ctx.r30.u32 + -720, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,-592(r30)
	PPC_STORE_U32(ctx.r30.u32 + -592, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,-540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -540, ctx.r8.u32);
	// addi r11,r11,30036
	ctx.r11.s64 = ctx.r11.s64 + 30036;
	// stw r7,-360(r30)
	PPC_STORE_U32(ctx.r30.u32 + -360, ctx.r7.u32);
	// addi r10,r10,30028
	ctx.r10.s64 = ctx.r10.s64 + 30028;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,-716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -716, ctx.r11.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -716, ctx.r10.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = ctx.r11.s64 + -716;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r10.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = ctx.r11.s64 + -760;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r10.u32);
	// addi r3,r30,-124
	ctx.r3.s64 = ctx.r30.s64 + -124;
	// bl 0x821983a0
	ctx.lr = 0x822D432C;
	sub_821983A0(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = ctx.r30.s64 + -172;
	// bl 0x822d28c8
	ctx.lr = 0x822D4334;
	sub_822D28C8(ctx, base);
	// lwz r4,-192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -192);
	// lwz r11,-188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -188);
	// b 0x822d4344
	goto loc_822D4344;
loc_822D4340:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822D4344:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d4340
	if (!ctx.cr0.eq) goto loc_822D4340;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d4378
	if (ctx.cr6.eq) goto loc_822D4378;
	// lwz r11,-184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -184);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354cb0
	ctx.lr = 0x822D4378;
	sub_82354CB0(ctx, base);
loc_822D4378:
	// addi r3,r30,-200
	ctx.r3.s64 = ctx.r30.s64 + -200;
	// bl 0x82155a50
	ctx.lr = 0x822D4380;
	sub_82155A50(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4270"))) PPC_WEAK_FUNC(sub_822D4270);
PPC_FUNC_IMPL(__imp__sub_822D4270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r9,30208
	ctx.r9.s64 = ctx.r9.s64 + 30208;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,30168
	ctx.r11.s64 = ctx.r11.s64 + 30168;
	// stw r9,-556(r30)
	PPC_STORE_U32(ctx.r30.u32 + -556, ctx.r9.u32);
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// lwz r9,-716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// addi r8,r8,30120
	ctx.r8.s64 = ctx.r8.s64 + 30120;
	// addi r7,r7,30100
	ctx.r7.s64 = ctx.r7.s64 + 30100;
	// stw r11,-720(r30)
	PPC_STORE_U32(ctx.r30.u32 + -720, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,-592(r30)
	PPC_STORE_U32(ctx.r30.u32 + -592, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,-540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -540, ctx.r8.u32);
	// addi r11,r11,30036
	ctx.r11.s64 = ctx.r11.s64 + 30036;
	// stw r7,-360(r30)
	PPC_STORE_U32(ctx.r30.u32 + -360, ctx.r7.u32);
	// addi r10,r10,30028
	ctx.r10.s64 = ctx.r10.s64 + 30028;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,-716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -716, ctx.r11.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -716, ctx.r10.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = ctx.r11.s64 + -716;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r10.u32);
	// lwz r11,-716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -716);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = ctx.r11.s64 + -760;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r10.u32);
	// addi r3,r30,-124
	ctx.r3.s64 = ctx.r30.s64 + -124;
	// bl 0x821983a0
	ctx.lr = 0x822D432C;
	sub_821983A0(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = ctx.r30.s64 + -172;
	// bl 0x822d28c8
	ctx.lr = 0x822D4334;
	sub_822D28C8(ctx, base);
	// lwz r4,-192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -192);
	// lwz r11,-188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -188);
	// b 0x822d4344
	goto loc_822D4344;
loc_822D4340:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822D4344:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d4340
	if (!ctx.cr0.eq) goto loc_822D4340;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d4378
	if (ctx.cr6.eq) goto loc_822D4378;
	// lwz r11,-184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -184);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354cb0
	ctx.lr = 0x822D4378;
	sub_82354CB0(ctx, base);
loc_822D4378:
	// addi r3,r30,-200
	ctx.r3.s64 = ctx.r30.s64 + -200;
	// bl 0x82155a50
	ctx.lr = 0x822D4380;
	sub_82155A50(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4398"))) PPC_WEAK_FUNC(sub_822D4398);
PPC_FUNC_IMPL(__imp__sub_822D4398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,-720
	ctx.r11.s64 = ctx.r11.s64 + -720;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x82126418
	ctx.lr = 0x822D43B8;
	sub_82126418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D43C8"))) PPC_WEAK_FUNC(sub_822D43C8);
PPC_FUNC_IMPL(__imp__sub_822D43C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,-720
	ctx.r11.s64 = ctx.r11.s64 + -720;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// bl 0x8233b368
	ctx.lr = 0x822D43E8;
	sub_8233B368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D43F8"))) PPC_WEAK_FUNC(sub_822D43F8);
PPC_FUNC_IMPL(__imp__sub_822D43F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,-720
	ctx.r11.s64 = ctx.r11.s64 + -720;
	// addi r3,r11,548
	ctx.r3.s64 = ctx.r11.s64 + 548;
	// bl 0x822d3928
	ctx.lr = 0x822D4418;
	sub_822D3928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4428"))) PPC_WEAK_FUNC(sub_822D4428);
PPC_FUNC_IMPL(__imp__sub_822D4428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D4430;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-720
	ctx.r30.s64 = ctx.r3.s64 + -720;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,720
	ctx.r31.s64 = ctx.r30.s64 + 720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4270
	ctx.lr = 0x822D4448;
	sub_822D4270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317498
	ctx.lr = 0x822D4450;
	sub_82317498(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4460
	if (ctx.cr0.eq) goto loc_822D4460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823547d8
	ctx.lr = 0x822D4460;
	sub_823547D8(ctx, base);
loc_822D4460:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D446C"))) PPC_WEAK_FUNC(sub_822D446C);
PPC_FUNC_IMPL(__imp__sub_822D446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4470"))) PPC_WEAK_FUNC(sub_822D4470);
PPC_FUNC_IMPL(__imp__sub_822D4470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30744(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822d44c4
	if (ctx.cr6.eq) goto loc_822D44C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r11,r11,30712
	ctx.r11.s64 = ctx.r11.s64 + 30712;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82317430
	ctx.lr = 0x822D44BC;
	sub_82317430(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822D44C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375d48
	ctx.lr = 0x822D44D0;
	sub_82375D48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,30660
	ctx.r11.s64 = ctx.r11.s64 + 30660;
	// addi r10,r10,30596
	ctx.r10.s64 = ctx.r10.s64 + 30596;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82354c68
	ctx.lr = 0x822D450C;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d4524
	if (ctx.cr0.eq) goto loc_822D4524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82279c90
	ctx.lr = 0x822D4520;
	sub_82279C90(ctx, base);
	// b 0x822d4528
	goto loc_822D4528;
loc_822D4524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D4528:
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4478"))) PPC_WEAK_FUNC(sub_822D4478);
PPC_FUNC_IMPL(__imp__sub_822D4478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822d44c4
	if (ctx.cr6.eq) goto loc_822D44C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r11,r11,30712
	ctx.r11.s64 = ctx.r11.s64 + 30712;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82317430
	ctx.lr = 0x822D44BC;
	sub_82317430(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822D44C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375d48
	ctx.lr = 0x822D44D0;
	sub_82375D48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,30660
	ctx.r11.s64 = ctx.r11.s64 + 30660;
	// addi r10,r10,30596
	ctx.r10.s64 = ctx.r10.s64 + 30596;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82354c68
	ctx.lr = 0x822D450C;
	sub_82354C68(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d4524
	if (ctx.cr0.eq) goto loc_822D4524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82279c90
	ctx.lr = 0x822D4520;
	sub_82279C90(ctx, base);
	// b 0x822d4528
	goto loc_822D4528;
loc_822D4524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D4528:
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4548"))) PPC_WEAK_FUNC(sub_822D4548);
PPC_FUNC_IMPL(__imp__sub_822D4548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d457c
	if (ctx.cr0.eq) goto loc_822D457C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82317498
	ctx.lr = 0x822D457C;
	sub_82317498(ctx, base);
loc_822D457C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D458C"))) PPC_WEAK_FUNC(sub_822D458C);
PPC_FUNC_IMPL(__imp__sub_822D458C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x823761d8
	ctx.lr = 0x822D45A8;
	sub_823761D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D45B8"))) PPC_WEAK_FUNC(sub_822D45B8);
PPC_FUNC_IMPL(__imp__sub_822D45B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e1b98
	ctx.lr = 0x822D45D0;
	sub_821E1B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D45E0"))) PPC_WEAK_FUNC(sub_822D45E0);
PPC_FUNC_IMPL(__imp__sub_822D45E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b2890
	ctx.lr = 0x822D45F8;
	sub_822B2890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4610"))) PPC_WEAK_FUNC(sub_822D4610);
PPC_FUNC_IMPL(__imp__sub_822D4610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82376090
	ctx.lr = 0x822D4620;
	sub_82376090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4640
	if (ctx.cr0.eq) goto loc_822D4640;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,23076
	ctx.r3.s64 = ctx.r11.s64 + 23076;
	// bl 0x822af0e8
	ctx.lr = 0x822D4634;
	sub_822AF0E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822d4644
	if (!ctx.cr0.eq) goto loc_822D4644;
loc_822D4640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D4644:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4658"))) PPC_WEAK_FUNC(sub_822D4658);
PPC_FUNC_IMPL(__imp__sub_822D4658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823762c0
	ctx.lr = 0x822D4670;
	sub_823762C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d468c
	if (!ctx.cr0.eq) goto loc_822D468C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822791d0
	ctx.lr = 0x822D4680;
	sub_822791D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x822d4690
	if (!ctx.cr0.eq) goto loc_822D4690;
loc_822D468C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D4690:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D46A8"))) PPC_WEAK_FUNC(sub_822D46A8);
PPC_FUNC_IMPL(__imp__sub_822D46A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82375ea0
	sub_82375EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D46B8"))) PPC_WEAK_FUNC(sub_822D46B8);
PPC_FUNC_IMPL(__imp__sub_822D46B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82375e70
	sub_82375E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D46C8"))) PPC_WEAK_FUNC(sub_822D46C8);
PPC_FUNC_IMPL(__imp__sub_822D46C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x822d45e0
	sub_822D45E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D46D4"))) PPC_WEAK_FUNC(sub_822D46D4);
PPC_FUNC_IMPL(__imp__sub_822D46D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D46D8"))) PPC_WEAK_FUNC(sub_822D46D8);
PPC_FUNC_IMPL(__imp__sub_822D46D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x822d4d20
	sub_822D4D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D46E4"))) PPC_WEAK_FUNC(sub_822D46E4);
PPC_FUNC_IMPL(__imp__sub_822D46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D46E8"))) PPC_WEAK_FUNC(sub_822D46E8);
PPC_FUNC_IMPL(__imp__sub_822D46E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30816(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30816);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D46F8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	ctx.r27.s64 = -2105540608;
	// lwz r11,-9900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d476c
	if (!ctx.cr0.eq) goto loc_822D476C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9900, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x822D4734;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822b2890
	ctx.lr = 0x822D4740;
	sub_822B2890(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x822D4754;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x822D4764;
	sub_82270D08(ctx, base);
	// stw r3,-9904(r27)
	PPC_STORE_U32(ctx.r27.u32 + -9904, ctx.r3.u32);
	// b 0x822d4770
	goto loc_822D4770;
loc_822D476C:
	// lwz r3,-9904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9904);
loc_822D4770:
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d47ac
	if (ctx.cr0.eq) goto loc_822D47AC;
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822d4828
	goto loc_822D4828;
loc_822D47AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x822D47B8;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d480c
	if (!ctx.cr0.eq) goto loc_822D480C;
	// addic. r11,r30,-64
	ctx.xer.ca = ctx.r30.u32 > 63;
	ctx.r11.s64 = ctx.r30.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d47d0
	if (!ctx.cr0.eq) goto loc_822D47D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d47e0
	goto loc_822D47E0;
loc_822D47D0:
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
loc_822D47E0:
	// bl 0x8231c700
	ctx.lr = 0x822D47E4;
	sub_8231C700(ctx, base);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D4808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D480C:
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D4828:
	// bctrl 
	ctx.lr = 0x822D482C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D46F0"))) PPC_WEAK_FUNC(sub_822D46F0);
PPC_FUNC_IMPL(__imp__sub_822D46F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x822D46F8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	ctx.r27.s64 = -2105540608;
	// lwz r11,-9900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d476c
	if (!ctx.cr0.eq) goto loc_822D476C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9900, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x822D4734;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822b2890
	ctx.lr = 0x822D4740;
	sub_822B2890(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x822D4754;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x822D4764;
	sub_82270D08(ctx, base);
	// stw r3,-9904(r27)
	PPC_STORE_U32(ctx.r27.u32 + -9904, ctx.r3.u32);
	// b 0x822d4770
	goto loc_822D4770;
loc_822D476C:
	// lwz r3,-9904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9904);
loc_822D4770:
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r11,18972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18972);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d47ac
	if (ctx.cr0.eq) goto loc_822D47AC;
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822d4828
	goto loc_822D4828;
loc_822D47AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x822D47B8;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d480c
	if (!ctx.cr0.eq) goto loc_822D480C;
	// addic. r11,r30,-64
	ctx.xer.ca = ctx.r30.u32 > 63;
	ctx.r11.s64 = ctx.r30.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d47d0
	if (!ctx.cr0.eq) goto loc_822D47D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d47e0
	goto loc_822D47E0;
loc_822D47D0:
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
loc_822D47E0:
	// bl 0x8231c700
	ctx.lr = 0x822D47E4;
	sub_8231C700(ctx, base);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D4808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D480C:
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D4828:
	// bctrl 
	ctx.lr = 0x822D482C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_822D4834"))) PPC_WEAK_FUNC(sub_822D4834);
PPC_FUNC_IMPL(__imp__sub_822D4834) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9900
	ctx.r11.s64 = ctx.r11.s64 + -9900;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9900
	ctx.r10.s64 = ctx.r10.s64 + -9900;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D485C"))) PPC_WEAK_FUNC(sub_822D485C);
PPC_FUNC_IMPL(__imp__sub_822D485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4860"))) PPC_WEAK_FUNC(sub_822D4860);
PPC_FUNC_IMPL(__imp__sub_822D4860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,30888(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D4870;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,30660
	ctx.r11.s64 = ctx.r11.s64 + 30660;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,30596
	ctx.r10.s64 = ctx.r10.s64 + 30596;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,-64(r30)
	PPC_STORE_U32(ctx.r30.u32 + -64, ctx.r11.u32);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r10.u32);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r10.u32);
	// lwz r29,-8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x822d48d4
	if (ctx.cr0.eq) goto loc_822D48D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279498
	ctx.lr = 0x822D48CC;
	sub_82279498(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e1b98
	ctx.lr = 0x822D48D4;
	sub_821E1B98(ctx, base);
loc_822D48D4:
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bl 0x823761d8
	ctx.lr = 0x822D48DC;
	sub_823761D8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D4868"))) PPC_WEAK_FUNC(sub_822D4868);
PPC_FUNC_IMPL(__imp__sub_822D4868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D4870;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,30660
	ctx.r11.s64 = ctx.r11.s64 + 30660;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,30596
	ctx.r10.s64 = ctx.r10.s64 + 30596;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,-64(r30)
	PPC_STORE_U32(ctx.r30.u32 + -64, ctx.r11.u32);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r10.u32);
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r10.u32);
	// lwz r29,-8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x822d48d4
	if (ctx.cr0.eq) goto loc_822D48D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279498
	ctx.lr = 0x822D48CC;
	sub_82279498(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e1b98
	ctx.lr = 0x822D48D4;
	sub_821E1B98(ctx, base);
loc_822D48D4:
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bl 0x823761d8
	ctx.lr = 0x822D48DC;
	sub_823761D8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D48E4"))) PPC_WEAK_FUNC(sub_822D48E4);
PPC_FUNC_IMPL(__imp__sub_822D48E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x823761d8
	ctx.lr = 0x822D4904;
	sub_823761D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4914"))) PPC_WEAK_FUNC(sub_822D4914);
PPC_FUNC_IMPL(__imp__sub_822D4914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4918"))) PPC_WEAK_FUNC(sub_822D4918);
PPC_FUNC_IMPL(__imp__sub_822D4918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,31024(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31024);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D4928;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279b60
	ctx.lr = 0x822D493C;
	sub_82279B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// bl 0x823559d8
	ctx.lr = 0x822D494C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-11344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11344);
	// bl 0x822b3710
	ctx.lr = 0x822D4960;
	sub_822B3710(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319250
	ctx.lr = 0x822D496C;
	sub_82319250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d4a9c
	if (ctx.cr0.eq) goto loc_822D4A9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279570
	ctx.lr = 0x822D4980;
	sub_82279570(ctx, base);
	// lwz r3,-11344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11344);
	// bl 0x822b4be0
	ctx.lr = 0x822D4988;
	sub_822B4BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823559d8
	ctx.lr = 0x822D499C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D49B0;
	sub_82319250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317dc8
	ctx.lr = 0x822D49C0;
	sub_82317DC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// bl 0x821207d0
	ctx.lr = 0x822D49D4;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120008
	ctx.lr = 0x822D49E0;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D49F0;
	sub_82279A18(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x822D49F8;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// bl 0x821207d0
	ctx.lr = 0x822D4A08;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82120008
	ctx.lr = 0x822D4A14;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A24;
	sub_82279A18(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82352a80
	ctx.lr = 0x822D4A2C;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// bl 0x821207d0
	ctx.lr = 0x822D4A3C;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82120008
	ctx.lr = 0x822D4A48;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A58;
	sub_82279A18(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82352a80
	ctx.lr = 0x822D4A60;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// bl 0x821207d0
	ctx.lr = 0x822D4A70;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82120008
	ctx.lr = 0x822D4A7C;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A8C;
	sub_82279A18(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82352a80
	ctx.lr = 0x822D4A94;
	sub_82352A80(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279970
	ctx.lr = 0x822D4A9C;
	sub_82279970(ctx, base);
loc_822D4A9C:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D4920"))) PPC_WEAK_FUNC(sub_822D4920);
PPC_FUNC_IMPL(__imp__sub_822D4920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D4928;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279b60
	ctx.lr = 0x822D493C;
	sub_82279B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// bl 0x823559d8
	ctx.lr = 0x822D494C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-11344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11344);
	// bl 0x822b3710
	ctx.lr = 0x822D4960;
	sub_822B3710(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319250
	ctx.lr = 0x822D496C;
	sub_82319250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d4a9c
	if (ctx.cr0.eq) goto loc_822D4A9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279570
	ctx.lr = 0x822D4980;
	sub_82279570(ctx, base);
	// lwz r3,-11344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11344);
	// bl 0x822b4be0
	ctx.lr = 0x822D4988;
	sub_822B4BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823559d8
	ctx.lr = 0x822D499C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82319250
	ctx.lr = 0x822D49B0;
	sub_82319250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82317dc8
	ctx.lr = 0x822D49C0;
	sub_82317DC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// bl 0x821207d0
	ctx.lr = 0x822D49D4;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120008
	ctx.lr = 0x822D49E0;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D49F0;
	sub_82279A18(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x822D49F8;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// bl 0x821207d0
	ctx.lr = 0x822D4A08;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82120008
	ctx.lr = 0x822D4A14;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A24;
	sub_82279A18(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82352a80
	ctx.lr = 0x822D4A2C;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// bl 0x821207d0
	ctx.lr = 0x822D4A3C;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82120008
	ctx.lr = 0x822D4A48;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A58;
	sub_82279A18(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82352a80
	ctx.lr = 0x822D4A60;
	sub_82352A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// bl 0x821207d0
	ctx.lr = 0x822D4A70;
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82120008
	ctx.lr = 0x822D4A7C;
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279a18
	ctx.lr = 0x822D4A8C;
	sub_82279A18(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82352a80
	ctx.lr = 0x822D4A94;
	sub_82352A80(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82279970
	ctx.lr = 0x822D4A9C;
	sub_82279970(ctx, base);
loc_822D4A9C:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D4AA4"))) PPC_WEAK_FUNC(sub_822D4AA4);
PPC_FUNC_IMPL(__imp__sub_822D4AA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235d080
	ctx.lr = 0x822D4ABC;
	sub_8235D080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4ACC"))) PPC_WEAK_FUNC(sub_822D4ACC);
PPC_FUNC_IMPL(__imp__sub_822D4ACC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8235d080
	ctx.lr = 0x822D4AE4;
	sub_8235D080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4AF4"))) PPC_WEAK_FUNC(sub_822D4AF4);
PPC_FUNC_IMPL(__imp__sub_822D4AF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8235d080
	ctx.lr = 0x822D4B0C;
	sub_8235D080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4B1C"))) PPC_WEAK_FUNC(sub_822D4B1C);
PPC_FUNC_IMPL(__imp__sub_822D4B1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8235d080
	ctx.lr = 0x822D4B34;
	sub_8235D080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4B44"))) PPC_WEAK_FUNC(sub_822D4B44);
PPC_FUNC_IMPL(__imp__sub_822D4B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4B48"))) PPC_WEAK_FUNC(sub_822D4B48);
PPC_FUNC_IMPL(__imp__sub_822D4B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,31184(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31184);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x822D4B58;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x822D4B84;
	sub_82317D30(ctx, base);
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,-9888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9888);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9892
	ctx.r29.s64 = ctx.r10.s64 + -9892;
	// bne 0x822d4bb8
	if (!ctx.cr0.eq) goto loc_822D4BB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9888(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9888, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,31148
	ctx.r4.s64 = ctx.r11.s64 + 31148;
	// bl 0x823559d8
	ctx.lr = 0x822D4BB4;
	sub_823559D8(ctx, base);
	// lwz r11,-9888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9888);
loc_822D4BB8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4be0
	if (ctx.cr0.eq) goto loc_822D4BE0;
	// addi r3,r25,-64
	ctx.r3.s64 = ctx.r25.s64 + -64;
	// bl 0x822d4920
	ctx.lr = 0x822D4BD8;
	sub_822D4920(ctx, base);
loc_822D4BD8:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// b 0x822d4c78
	goto loc_822D4C78;
loc_822D4BE0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9896
	ctx.r29.s64 = ctx.r10.s64 + -9896;
	// bne 0x822d4c08
	if (!ctx.cr0.eq) goto loc_822D4C08;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-9888(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9888, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,31136
	ctx.r4.s64 = ctx.r11.s64 + 31136;
	// bl 0x823559d8
	ctx.lr = 0x822D4C08;
	sub_823559D8(ctx, base);
loc_822D4C08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4c2c
	if (ctx.cr0.eq) goto loc_822D4C2C;
	// lwz r3,-8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// bl 0x82279b60
	ctx.lr = 0x822D4C28;
	sub_82279B60(ctx, base);
	// b 0x822d4bd8
	goto loc_822D4BD8;
loc_822D4C2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82377060
	ctx.lr = 0x822D4C40;
	sub_82377060(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d4c70
	if (ctx.cr6.eq) goto loc_822D4C70;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x822D4C58;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4c7c
	if (ctx.cr0.eq) goto loc_822D4C7C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822D4C6C;
	sub_82120818(ctx, base);
	// b 0x822d4c7c
	goto loc_822D4C7C;
loc_822D4C70:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_822D4C78:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_822D4C7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_822D4B50"))) PPC_WEAK_FUNC(sub_822D4B50);
PPC_FUNC_IMPL(__imp__sub_822D4B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x822D4B58;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x822D4B84;
	sub_82317D30(ctx, base);
	// lis r30,-32128
	ctx.r30.s64 = -2105540608;
	// lwz r11,-9888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9888);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9892
	ctx.r29.s64 = ctx.r10.s64 + -9892;
	// bne 0x822d4bb8
	if (!ctx.cr0.eq) goto loc_822D4BB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-9888(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9888, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,31148
	ctx.r4.s64 = ctx.r11.s64 + 31148;
	// bl 0x823559d8
	ctx.lr = 0x822D4BB4;
	sub_823559D8(ctx, base);
	// lwz r11,-9888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9888);
loc_822D4BB8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4be0
	if (ctx.cr0.eq) goto loc_822D4BE0;
	// addi r3,r25,-64
	ctx.r3.s64 = ctx.r25.s64 + -64;
	// bl 0x822d4920
	ctx.lr = 0x822D4BD8;
	sub_822D4920(ctx, base);
loc_822D4BD8:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// b 0x822d4c78
	goto loc_822D4C78;
loc_822D4BE0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r29,r10,-9896
	ctx.r29.s64 = ctx.r10.s64 + -9896;
	// bne 0x822d4c08
	if (!ctx.cr0.eq) goto loc_822D4C08;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-9888(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9888, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,31136
	ctx.r4.s64 = ctx.r11.s64 + 31136;
	// bl 0x823559d8
	ctx.lr = 0x822D4C08;
	sub_823559D8(ctx, base);
loc_822D4C08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4c2c
	if (ctx.cr0.eq) goto loc_822D4C2C;
	// lwz r3,-8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// bl 0x82279b60
	ctx.lr = 0x822D4C28;
	sub_82279B60(ctx, base);
	// b 0x822d4bd8
	goto loc_822D4BD8;
loc_822D4C2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82377060
	ctx.lr = 0x822D4C40;
	sub_82377060(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d4c70
	if (ctx.cr6.eq) goto loc_822D4C70;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x822D4C58;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4c7c
	if (ctx.cr0.eq) goto loc_822D4C7C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x822D4C6C;
	sub_82120818(ctx, base);
	// b 0x822d4c7c
	goto loc_822D4C7C;
loc_822D4C70:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_822D4C78:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_822D4C7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_822D4C88"))) PPC_WEAK_FUNC(sub_822D4C88);
PPC_FUNC_IMPL(__imp__sub_822D4C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9888
	ctx.r11.s64 = ctx.r11.s64 + -9888;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9888
	ctx.r10.s64 = ctx.r10.s64 + -9888;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4CB0"))) PPC_WEAK_FUNC(sub_822D4CB0);
PPC_FUNC_IMPL(__imp__sub_822D4CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9888
	ctx.r11.s64 = ctx.r11.s64 + -9888;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-9888
	ctx.r10.s64 = ctx.r10.s64 + -9888;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4CD8"))) PPC_WEAK_FUNC(sub_822D4CD8);
PPC_FUNC_IMPL(__imp__sub_822D4CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82120868
	ctx.lr = 0x822D4CF0;
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4D00"))) PPC_WEAK_FUNC(sub_822D4D00);
PPC_FUNC_IMPL(__imp__sub_822D4D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x822d4b50
	sub_822D4B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4D0C"))) PPC_WEAK_FUNC(sub_822D4D0C);
PPC_FUNC_IMPL(__imp__sub_822D4D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4D10"))) PPC_WEAK_FUNC(sub_822D4D10);
PPC_FUNC_IMPL(__imp__sub_822D4D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x822d46f0
	sub_822D46F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4D1C"))) PPC_WEAK_FUNC(sub_822D4D1C);
PPC_FUNC_IMPL(__imp__sub_822D4D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4D20"))) PPC_WEAK_FUNC(sub_822D4D20);
PPC_FUNC_IMPL(__imp__sub_822D4D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x822D4D28;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-64
	ctx.r30.s64 = ctx.r3.s64 + -64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4868
	ctx.lr = 0x822D4D40;
	sub_822D4868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317498
	ctx.lr = 0x822D4D48;
	sub_82317498(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4d58
	if (ctx.cr0.eq) goto loc_822D4D58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e1b98
	ctx.lr = 0x822D4D58;
	sub_821E1B98(ctx, base);
loc_822D4D58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_822D4D64"))) PPC_WEAK_FUNC(sub_822D4D64);
PPC_FUNC_IMPL(__imp__sub_822D4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4D68"))) PPC_WEAK_FUNC(sub_822D4D68);
PPC_FUNC_IMPL(__imp__sub_822D4D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,31416(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31416);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D4D78;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x822d4db4
	if (ctx.cr6.eq) goto loc_822D4DB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// addi r11,r11,31400
	ctx.r11.s64 = ctx.r11.s64 + 31400;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82317430
	ctx.lr = 0x822D4DB0;
	sub_82317430(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_822D4DB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375d48
	ctx.lr = 0x822D4DC0;
	sub_82375D48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31348
	ctx.r11.s64 = ctx.r11.s64 + 31348;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,31284
	ctx.r10.s64 = ctx.r10.s64 + 31284;
	// lfs f13,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = ctx.r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// stb r29,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r29.u8);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stb r29,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r29.u8);
	// stb r28,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_822D4D70"))) PPC_WEAK_FUNC(sub_822D4D70);
PPC_FUNC_IMPL(__imp__sub_822D4D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x822D4D78;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x822d4db4
	if (ctx.cr6.eq) goto loc_822D4DB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// addi r11,r11,31400
	ctx.r11.s64 = ctx.r11.s64 + 31400;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82317430
	ctx.lr = 0x822D4DB0;
	sub_82317430(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_822D4DB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375d48
	ctx.lr = 0x822D4DC0;
	sub_82375D48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31348
	ctx.r11.s64 = ctx.r11.s64 + 31348;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,31284
	ctx.r10.s64 = ctx.r10.s64 + 31284;
	// lfs f13,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = ctx.r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// stb r29,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r29.u8);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stb r29,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r29.u8);
	// stb r28,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

