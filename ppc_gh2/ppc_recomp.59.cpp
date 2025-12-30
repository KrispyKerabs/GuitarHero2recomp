#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8224B808"))) PPC_WEAK_FUNC(sub_8224B808);
PPC_FUNC_IMPL(__imp__sub_8224B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-2192(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -2192);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224B818;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = ctx.r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r25,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r25.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82356658
	ctx.lr = 0x8224B84C;
	sub_82356658(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224b868
	if (ctx.cr0.eq) goto loc_8224B868;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82319790
	ctx.lr = 0x8224B860;
	sub_82319790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8224b86c
	goto loc_8224B86C;
loc_8224B868:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8224B86C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82132e98
	ctx.lr = 0x8224B874;
	sub_82132E98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c8d20
	ctx.lr = 0x8224B884;
	sub_821C8D20(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224b8f0
	if (ctx.cr6.eq) goto loc_8224B8F0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8224B898:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8224b8dc
	if (ctx.cr6.eq) goto loc_8224B8DC;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bl 0x82317b30
	ctx.lr = 0x8224B8C8;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224b8dc
	if (ctx.cr0.eq) goto loc_8224B8DC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x8224B8DC;
	sub_82120818(ctx, base);
loc_8224B8DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c8da0
	ctx.lr = 0x8224B8E4;
	sub_821C8DA0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224b898
	if (!ctx.cr6.eq) goto loc_8224B898;
loc_8224B8F0:
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317b30
	ctx.lr = 0x8224B914;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224b928
	if (ctx.cr0.eq) goto loc_8224B928;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x8224B928;
	sub_82120818(ctx, base);
loc_8224B928:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82319f00
	ctx.lr = 0x8224B934;
	sub_82319F00(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82317880
	ctx.lr = 0x8224B940;
	sub_82317880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,18448
	ctx.r11.s64 = ctx.r11.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82120818
	ctx.lr = 0x8224B95C;
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224B810"))) PPC_WEAK_FUNC(sub_8224B810);
PPC_FUNC_IMPL(__imp__sub_8224B810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224B818;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = ctx.r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r25,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r25.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82356658
	ctx.lr = 0x8224B84C;
	sub_82356658(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224b868
	if (ctx.cr0.eq) goto loc_8224B868;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82319790
	ctx.lr = 0x8224B860;
	sub_82319790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8224b86c
	goto loc_8224B86C;
loc_8224B868:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8224B86C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82132e98
	ctx.lr = 0x8224B874;
	sub_82132E98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c8d20
	ctx.lr = 0x8224B884;
	sub_821C8D20(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224b8f0
	if (ctx.cr6.eq) goto loc_8224B8F0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8224B898:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8224b8dc
	if (ctx.cr6.eq) goto loc_8224B8DC;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bl 0x82317b30
	ctx.lr = 0x8224B8C8;
	sub_82317B30(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224b8dc
	if (ctx.cr0.eq) goto loc_8224B8DC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x8224B8DC;
	sub_82120818(ctx, base);
loc_8224B8DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c8da0
	ctx.lr = 0x8224B8E4;
	sub_821C8DA0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224b898
	if (!ctx.cr6.eq) goto loc_8224B898;
loc_8224B8F0:
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317b30
	ctx.lr = 0x8224B914;
	sub_82317B30(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224b928
	if (ctx.cr0.eq) goto loc_8224B928;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120818
	ctx.lr = 0x8224B928;
	sub_82120818(ctx, base);
loc_8224B928:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82319f00
	ctx.lr = 0x8224B934;
	sub_82319F00(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82317880
	ctx.lr = 0x8224B940;
	sub_82317880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,18448
	ctx.r11.s64 = ctx.r11.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82120818
	ctx.lr = 0x8224B95C;
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224B968"))) PPC_WEAK_FUNC(sub_8224B968);
PPC_FUNC_IMPL(__imp__sub_8224B968) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821206f0
	ctx.lr = 0x8224B980;
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224B990"))) PPC_WEAK_FUNC(sub_8224B990);
PPC_FUNC_IMPL(__imp__sub_8224B990) {
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
	// bl 0x821332d8
	ctx.lr = 0x8224B9A8;
	sub_821332D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224B9B8"))) PPC_WEAK_FUNC(sub_8224B9B8);
PPC_FUNC_IMPL(__imp__sub_8224B9B8) {
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
	ctx.lr = 0x8224B9D0;
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

__attribute__((alias("__imp__sub_8224B9E0"))) PPC_WEAK_FUNC(sub_8224B9E0);
PPC_FUNC_IMPL(__imp__sub_8224B9E0) {
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
	ctx.lr = 0x8224B9F8;
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

__attribute__((alias("__imp__sub_8224BA08"))) PPC_WEAK_FUNC(sub_8224BA08);
PPC_FUNC_IMPL(__imp__sub_8224BA08) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ba38
	if (ctx.cr0.eq) goto loc_8224BA38;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82120868
	ctx.lr = 0x8224BA38;
	sub_82120868(ctx, base);
loc_8224BA38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224BA48"))) PPC_WEAK_FUNC(sub_8224BA48);
PPC_FUNC_IMPL(__imp__sub_8224BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224BA50;
	sub_8239BA1C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8224ba70
	goto loc_8224BA70;
loc_8224BA68:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8224BA70:
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8224ba68
	if (!ctx.cr0.eq) goto loc_8224BA68;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359068
	ctx.lr = 0x8224BA9C;
	sub_82359068(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8224bab0
	goto loc_8224BAB0;
loc_8224BAA4:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x8224ae50
	ctx.lr = 0x8224BAAC;
	sub_8224AE50(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8224BAB0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224baa4
	if (!ctx.cr0.eq) goto loc_8224BAA4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224BAD4"))) PPC_WEAK_FUNC(sub_8224BAD4);
PPC_FUNC_IMPL(__imp__sub_8224BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BAD8"))) PPC_WEAK_FUNC(sub_8224BAD8);
PPC_FUNC_IMPL(__imp__sub_8224BAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-2080(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -2080);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bb08
	if (ctx.cr6.eq) goto loc_8224BB08;
	// bl 0x8224b500
	ctx.lr = 0x8224BB08;
	sub_8224B500(ctx, base);
loc_8224BB08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224BAE0"))) PPC_WEAK_FUNC(sub_8224BAE0);
PPC_FUNC_IMPL(__imp__sub_8224BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bb08
	if (ctx.cr6.eq) goto loc_8224BB08;
	// bl 0x8224b500
	ctx.lr = 0x8224BB08;
	sub_8224B500(ctx, base);
loc_8224BB08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224BB1C"))) PPC_WEAK_FUNC(sub_8224BB1C);
PPC_FUNC_IMPL(__imp__sub_8224BB1C) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822e41f0
	ctx.lr = 0x8224BB38;
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

__attribute__((alias("__imp__sub_8224BB48"))) PPC_WEAK_FUNC(sub_8224BB48);
PPC_FUNC_IMPL(__imp__sub_8224BB48) {
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
	// b 0x8224bb90
	goto loc_8224BB90;
loc_8224BB68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8224BB90:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224bb68
	if (!ctx.cr0.eq) goto loc_8224BB68;
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

__attribute__((alias("__imp__sub_8224BBC8"))) PPC_WEAK_FUNC(sub_8224BBC8);
PPC_FUNC_IMPL(__imp__sub_8224BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1980(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1980);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba18
	ctx.lr = 0x8224BBE0;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_8224BBFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224bc24
	if (ctx.cr6.eq) goto loc_8224BC24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224aa20
	ctx.lr = 0x8224BC10;
	sub_8224AA20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// b 0x8224bbfc
	goto loc_8224BBFC;
loc_8224BC24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224BBD0"))) PPC_WEAK_FUNC(sub_8224BBD0);
PPC_FUNC_IMPL(__imp__sub_8224BBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba18
	ctx.lr = 0x8224BBE0;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_8224BBFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224bc24
	if (ctx.cr6.eq) goto loc_8224BC24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224aa20
	ctx.lr = 0x8224BC10;
	sub_8224AA20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// b 0x8224bbfc
	goto loc_8224BBFC;
loc_8224BC24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224BC30"))) PPC_WEAK_FUNC(sub_8224BC30);
PPC_FUNC_IMPL(__imp__sub_8224BC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1980(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1980);
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
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8224ad70
	ctx.lr = 0x8224BC58;
	sub_8224AD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224BC64;
	sub_8239C6C8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BC38"))) PPC_WEAK_FUNC(sub_8224BC38);
PPC_FUNC_IMPL(__imp__sub_8224BC38) {
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
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8224ad70
	ctx.lr = 0x8224BC58;
	sub_8224AD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224BC64;
	sub_8239C6C8(ctx, base);
}

__attribute__((alias("__imp__sub_8224BC68"))) PPC_WEAK_FUNC(sub_8224BC68);
PPC_FUNC_IMPL(__imp__sub_8224BC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1876(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1876);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba18
	ctx.lr = 0x8224BC80;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_8224BC9C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8224bcc4
	if (ctx.cr6.eq) goto loc_8224BCC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224aa20
	ctx.lr = 0x8224BCB0;
	sub_8224AA20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// b 0x8224bc9c
	goto loc_8224BC9C;
loc_8224BCC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224BC70"))) PPC_WEAK_FUNC(sub_8224BC70);
PPC_FUNC_IMPL(__imp__sub_8224BC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba18
	ctx.lr = 0x8224BC80;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_8224BC9C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8224bcc4
	if (ctx.cr6.eq) goto loc_8224BCC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224aa20
	ctx.lr = 0x8224BCB0;
	sub_8224AA20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// b 0x8224bc9c
	goto loc_8224BC9C;
loc_8224BCC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224BCD0"))) PPC_WEAK_FUNC(sub_8224BCD0);
PPC_FUNC_IMPL(__imp__sub_8224BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1876(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1876);
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
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8224ad70
	ctx.lr = 0x8224BCF8;
	sub_8224AD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224BD04;
	sub_8239C6C8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BCD8"))) PPC_WEAK_FUNC(sub_8224BCD8);
PPC_FUNC_IMPL(__imp__sub_8224BCD8) {
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
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8224ad70
	ctx.lr = 0x8224BCF8;
	sub_8224AD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224BD04;
	sub_8239C6C8(ctx, base);
}

__attribute__((alias("__imp__sub_8224BD08"))) PPC_WEAK_FUNC(sub_8224BD08);
PPC_FUNC_IMPL(__imp__sub_8224BD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224BD10;
	sub_8239BA14(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82359068
	ctx.lr = 0x8224BD34;
	sub_82359068(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-364(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -364);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359068
	ctx.lr = 0x8224BD4C;
	sub_82359068(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-332(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -332);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359068
	ctx.lr = 0x8224BD64;
	sub_82359068(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,-252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// addi r11,r11,-3796
	ctx.r11.s64 = ctx.r11.s64 + -3796;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82276cd8
	ctx.lr = 0x8224BD78;
	sub_82276CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823590d0
	ctx.lr = 0x8224BD84;
	sub_823590D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-368
	ctx.r3.s64 = ctx.r30.s64 + -368;
	// bl 0x823734c0
	ctx.lr = 0x8224BD90;
	sub_823734C0(ctx, base);
	// lwz r11,-388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bdcc
	if (ctx.cr0.eq) goto loc_8224BDCC;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r29,32
	ctx.r28.s64 = ctx.r29.s64 + 32;
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// bl 0x8213d588
	ctx.lr = 0x8224BDB4;
	sub_8213D588(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213d588
	ctx.lr = 0x8224BDBC;
	sub_8213D588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213d588
	ctx.lr = 0x8224BDC4;
	sub_8213D588(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// b 0x8224bdf0
	goto loc_8224BDF0;
loc_8224BDCC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// bl 0x8213d588
	ctx.lr = 0x8224BDDC;
	sub_8213D588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213d588
	ctx.lr = 0x8224BDE4;
	sub_8213D588(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8213d588
	ctx.lr = 0x8224BDEC;
	sub_8213D588(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8224BDF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d588
	ctx.lr = 0x8224BDF8;
	sub_8213D588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// addi r31,r30,-324
	ctx.r31.s64 = ctx.r30.s64 + -324;
	// bl 0x8220b8e0
	ctx.lr = 0x8224BE08;
	sub_8220B8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8224ba48
	ctx.lr = 0x8224BE10;
	sub_8224BA48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224BE18"))) PPC_WEAK_FUNC(sub_8224BE18);
PPC_FUNC_IMPL(__imp__sub_8224BE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1704(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1704);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224BE28;
	sub_8239BA0C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224BE58;
	sub_82317D30(ctx, base);
	// lis r29,-32137
	ctx.r29.s64 = -2106130432;
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13080
	ctx.r28.s64 = ctx.r10.s64 + 13080;
	// bne 0x8224be8c
	if (!ctx.cr0.eq) goto loc_8224BE8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// bl 0x823559d8
	ctx.lr = 0x8224BE88;
	sub_823559D8(ctx, base);
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BE8C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224bef4
	if (ctx.cr0.eq) goto loc_8224BEF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82317d08
	ctx.lr = 0x8224BEB4;
	sub_82317D08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82317e08
	ctx.lr = 0x8224BEC8;
	sub_82317E08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317e08
	ctx.lr = 0x8224BEDC;
	sub_82317E08(ctx, base);
	// addi r3,r26,-836
	ctx.r3.s64 = ctx.r26.s64 + -836;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8224a660
	ctx.lr = 0x8224BEEC;
	sub_8224A660(ctx, base);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// b 0x8224c0d0
	goto loc_8224C0D0;
loc_8224BEF4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13076
	ctx.r28.s64 = ctx.r10.s64 + 13076;
	// bne 0x8224bf20
	if (!ctx.cr0.eq) goto loc_8224BF20;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1804
	ctx.r4.s64 = ctx.r11.s64 + -1804;
	// bl 0x823559d8
	ctx.lr = 0x8224BF1C;
	sub_823559D8(ctx, base);
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BF20:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224bf7c
	if (ctx.cr0.eq) goto loc_8224BF7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-836
	ctx.r4.s64 = ctx.r26.s64 + -836;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8224b620
	ctx.lr = 0x8224BF48;
	sub_8224B620(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224bf78
	if (ctx.cr6.eq) goto loc_8224BF78;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224BF60;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224BF70:
	// bl 0x82120818
	ctx.lr = 0x8224BF74;
	sub_82120818(ctx, base);
	// b 0x8224c0d4
	goto loc_8224C0D4;
loc_8224BF78:
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BF7C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13072
	ctx.r28.s64 = ctx.r10.s64 + 13072;
	// bne 0x8224bfa4
	if (!ctx.cr0.eq) goto loc_8224BFA4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1824
	ctx.r4.s64 = ctx.r11.s64 + -1824;
	// bl 0x823559d8
	ctx.lr = 0x8224BFA4;
	sub_823559D8(ctx, base);
loc_8224BFA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bff8
	if (ctx.cr0.eq) goto loc_8224BFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-836
	ctx.r4.s64 = ctx.r26.s64 + -836;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224b810
	ctx.lr = 0x8224BFCC;
	sub_8224B810(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224bff8
	if (ctx.cr6.eq) goto loc_8224BFF8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224BFE4;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224BFF8:
	// addic. r11,r26,-240
	ctx.xer.ca = ctx.r26.u32 > 239;
	ctx.r11.s64 = ctx.r26.s64 + -240;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c040
	if (ctx.cr0.eq) goto loc_8224C040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82268d88
	ctx.lr = 0x8224C014;
	sub_82268D88(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c040
	if (ctx.cr6.eq) goto loc_8224C040;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C02C;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C040:
	// addic. r11,r26,-144
	ctx.xer.ca = ctx.r26.u32 > 143;
	ctx.r11.s64 = ctx.r26.s64 + -144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c088
	if (ctx.cr0.eq) goto loc_8224C088;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-144
	ctx.r4.s64 = ctx.r26.s64 + -144;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82265060
	ctx.lr = 0x8224C05C;
	sub_82265060(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c088
	if (ctx.cr6.eq) goto loc_8224C088;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C074;
	sub_82317720(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C088:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82374438
	ctx.lr = 0x8224C09C;
	sub_82374438(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c0c8
	if (ctx.cr6.eq) goto loc_8224C0C8;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C0B4;
	sub_82317720(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C0C8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8224C0D0:
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_8224C0D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224BE20"))) PPC_WEAK_FUNC(sub_8224BE20);
PPC_FUNC_IMPL(__imp__sub_8224BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224BE28;
	sub_8239BA0C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224BE58;
	sub_82317D30(ctx, base);
	// lis r29,-32137
	ctx.r29.s64 = -2106130432;
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13080
	ctx.r28.s64 = ctx.r10.s64 + 13080;
	// bne 0x8224be8c
	if (!ctx.cr0.eq) goto loc_8224BE8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// bl 0x823559d8
	ctx.lr = 0x8224BE88;
	sub_823559D8(ctx, base);
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BE8C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224bef4
	if (ctx.cr0.eq) goto loc_8224BEF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82317d08
	ctx.lr = 0x8224BEB4;
	sub_82317D08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82317e08
	ctx.lr = 0x8224BEC8;
	sub_82317E08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82317e08
	ctx.lr = 0x8224BEDC;
	sub_82317E08(ctx, base);
	// addi r3,r26,-836
	ctx.r3.s64 = ctx.r26.s64 + -836;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8224a660
	ctx.lr = 0x8224BEEC;
	sub_8224A660(ctx, base);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// b 0x8224c0d0
	goto loc_8224C0D0;
loc_8224BEF4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13076
	ctx.r28.s64 = ctx.r10.s64 + 13076;
	// bne 0x8224bf20
	if (!ctx.cr0.eq) goto loc_8224BF20;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1804
	ctx.r4.s64 = ctx.r11.s64 + -1804;
	// bl 0x823559d8
	ctx.lr = 0x8224BF1C;
	sub_823559D8(ctx, base);
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BF20:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224bf7c
	if (ctx.cr0.eq) goto loc_8224BF7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-836
	ctx.r4.s64 = ctx.r26.s64 + -836;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8224b620
	ctx.lr = 0x8224BF48;
	sub_8224B620(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224bf78
	if (ctx.cr6.eq) goto loc_8224BF78;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224BF60;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224BF70:
	// bl 0x82120818
	ctx.lr = 0x8224BF74;
	sub_82120818(ctx, base);
	// b 0x8224c0d4
	goto loc_8224C0D4;
loc_8224BF78:
	// lwz r11,13084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13084);
loc_8224BF7C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13072
	ctx.r28.s64 = ctx.r10.s64 + 13072;
	// bne 0x8224bfa4
	if (!ctx.cr0.eq) goto loc_8224BFA4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,13084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13084, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1824
	ctx.r4.s64 = ctx.r11.s64 + -1824;
	// bl 0x823559d8
	ctx.lr = 0x8224BFA4;
	sub_823559D8(ctx, base);
loc_8224BFA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bff8
	if (ctx.cr0.eq) goto loc_8224BFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-836
	ctx.r4.s64 = ctx.r26.s64 + -836;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224b810
	ctx.lr = 0x8224BFCC;
	sub_8224B810(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224bff8
	if (ctx.cr6.eq) goto loc_8224BFF8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224BFE4;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224BFF8:
	// addic. r11,r26,-240
	ctx.xer.ca = ctx.r26.u32 > 239;
	ctx.r11.s64 = ctx.r26.s64 + -240;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c040
	if (ctx.cr0.eq) goto loc_8224C040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82268d88
	ctx.lr = 0x8224C014;
	sub_82268D88(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c040
	if (ctx.cr6.eq) goto loc_8224C040;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C02C;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C040:
	// addic. r11,r26,-144
	ctx.xer.ca = ctx.r26.u32 > 143;
	ctx.r11.s64 = ctx.r26.s64 + -144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c088
	if (ctx.cr0.eq) goto loc_8224C088;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-144
	ctx.r4.s64 = ctx.r26.s64 + -144;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82265060
	ctx.lr = 0x8224C05C;
	sub_82265060(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c088
	if (ctx.cr6.eq) goto loc_8224C088;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C074;
	sub_82317720(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C088:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82374438
	ctx.lr = 0x8224C09C;
	sub_82374438(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224c0c8
	if (ctx.cr6.eq) goto loc_8224C0C8;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317720
	ctx.lr = 0x8224C0B4;
	sub_82317720(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0d4
	if (ctx.cr0.eq) goto loc_8224C0D4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// b 0x8224bf70
	goto loc_8224BF70;
loc_8224C0C8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8224C0D0:
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_8224C0D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224C0E4"))) PPC_WEAK_FUNC(sub_8224C0E4);
PPC_FUNC_IMPL(__imp__sub_8224C0E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13084
	ctx.r11.s64 = ctx.r11.s64 + 13084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13084
	ctx.r10.s64 = ctx.r10.s64 + 13084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C10C"))) PPC_WEAK_FUNC(sub_8224C10C);
PPC_FUNC_IMPL(__imp__sub_8224C10C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13084
	ctx.r11.s64 = ctx.r11.s64 + 13084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13084
	ctx.r10.s64 = ctx.r10.s64 + 13084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C134"))) PPC_WEAK_FUNC(sub_8224C134);
PPC_FUNC_IMPL(__imp__sub_8224C134) {
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
	ctx.lr = 0x8224C14C;
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

__attribute__((alias("__imp__sub_8224C15C"))) PPC_WEAK_FUNC(sub_8224C15C);
PPC_FUNC_IMPL(__imp__sub_8224C15C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13084
	ctx.r11.s64 = ctx.r11.s64 + 13084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13084
	ctx.r10.s64 = ctx.r10.s64 + 13084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C184"))) PPC_WEAK_FUNC(sub_8224C184);
PPC_FUNC_IMPL(__imp__sub_8224C184) {
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
	ctx.lr = 0x8224C19C;
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

__attribute__((alias("__imp__sub_8224C1AC"))) PPC_WEAK_FUNC(sub_8224C1AC);
PPC_FUNC_IMPL(__imp__sub_8224C1AC) {
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
	ctx.lr = 0x8224C1C4;
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

__attribute__((alias("__imp__sub_8224C1D4"))) PPC_WEAK_FUNC(sub_8224C1D4);
PPC_FUNC_IMPL(__imp__sub_8224C1D4) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82120868
	ctx.lr = 0x8224C1EC;
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

__attribute__((alias("__imp__sub_8224C1FC"))) PPC_WEAK_FUNC(sub_8224C1FC);
PPC_FUNC_IMPL(__imp__sub_8224C1FC) {
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
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82120868
	ctx.lr = 0x8224C214;
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

__attribute__((alias("__imp__sub_8224C224"))) PPC_WEAK_FUNC(sub_8224C224);
PPC_FUNC_IMPL(__imp__sub_8224C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C228"))) PPC_WEAK_FUNC(sub_8224C228);
PPC_FUNC_IMPL(__imp__sub_8224C228) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224b4a0
	sub_8224B4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224C22C"))) PPC_WEAK_FUNC(sub_8224C22C);
PPC_FUNC_IMPL(__imp__sub_8224C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C230"))) PPC_WEAK_FUNC(sub_8224C230);
PPC_FUNC_IMPL(__imp__sub_8224C230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224C238;
	sub_8239BA14(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,20
	ctx.r11.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	ctx.r30.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8224c278
	if (!ctx.cr0.gt) goto loc_8224C278;
	// subf r27,r29,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r29.s64;
loc_8224C260:
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C26C;
	sub_82352C28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bgt 0x8224c260
	if (ctx.cr0.gt) goto loc_8224C260;
loc_8224C278:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224ad70
	ctx.lr = 0x8224C288;
	sub_8224AD70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224C298"))) PPC_WEAK_FUNC(sub_8224C298);
PPC_FUNC_IMPL(__imp__sub_8224C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224C2A0;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8224c2cc
	goto loc_8224C2CC;
loc_8224C2B0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8224ad00
	ctx.lr = 0x8224C2C0;
	sub_8224AD00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354cb0
	ctx.lr = 0x8224C2CC;
	sub_82354CB0(ctx, base);
loc_8224C2CC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224c2b0
	if (!ctx.cr6.eq) goto loc_8224C2B0;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224C2E4"))) PPC_WEAK_FUNC(sub_8224C2E4);
PPC_FUNC_IMPL(__imp__sub_8224C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C2E8"))) PPC_WEAK_FUNC(sub_8224C2E8);
PPC_FUNC_IMPL(__imp__sub_8224C2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224C2F0;
	sub_8239BA18(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// b 0x8224c334
	goto loc_8224C334;
loc_8224C304:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8224ad00
	ctx.lr = 0x8224C328;
	sub_8224AD00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354cb0
	ctx.lr = 0x8224C334;
	sub_82354CB0(ctx, base);
loc_8224C334:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224c304
	if (!ctx.cr0.eq) goto loc_8224C304;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224C368"))) PPC_WEAK_FUNC(sub_8224C368);
PPC_FUNC_IMPL(__imp__sub_8224C368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1476(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1476);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba1c
	ctx.lr = 0x8224C380;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8224a948
	ctx.lr = 0x8224C398;
	sub_8224A948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8224bae0
	ctx.lr = 0x8224C3AC;
	sub_8224BAE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224C370"))) PPC_WEAK_FUNC(sub_8224C370);
PPC_FUNC_IMPL(__imp__sub_8224C370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba1c
	ctx.lr = 0x8224C380;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8224a948
	ctx.lr = 0x8224C398;
	sub_8224A948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8224bae0
	ctx.lr = 0x8224C3AC;
	sub_8224BAE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224C3BC"))) PPC_WEAK_FUNC(sub_8224C3BC);
PPC_FUNC_IMPL(__imp__sub_8224C3BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1476(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1476);
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82354cb0
	ctx.lr = 0x8224C3E0;
	sub_82354CB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224C3EC;
	sub_8239C6C8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C3C4"))) PPC_WEAK_FUNC(sub_8224C3C4);
PPC_FUNC_IMPL(__imp__sub_8224C3C4) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82354cb0
	ctx.lr = 0x8224C3E0;
	sub_82354CB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224C3EC;
	sub_8239C6C8(ctx, base);
}

__attribute__((alias("__imp__sub_8224C3F0"))) PPC_WEAK_FUNC(sub_8224C3F0);
PPC_FUNC_IMPL(__imp__sub_8224C3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1416(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1416);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x8224C400;
	sub_8239BA08(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224c434
	if (ctx.cr6.lt) goto loc_8224C434;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8224c438
	if (ctx.cr6.lt) goto loc_8224C438;
loc_8224C434:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224C438:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c488
	if (ctx.cr0.eq) goto loc_8224C488;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823533f8
	ctx.lr = 0x8224C44C;
	sub_823533F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8224c3f8
	ctx.lr = 0x8224C47C;
	sub_8224C3F8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x8224C484;
	sub_82352A80(ctx, base);
	// b 0x8224c570
	goto loc_8224C570;
loc_8224C488:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r25,20
	ctx.r25.s64 = 20;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// divw r26,r11,r25
	ctx.r26.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8224c51c
	if (!ctx.cr6.gt) goto loc_8224C51C;
	// mulli r26,r27,20
	ctx.r26.s64 = ctx.r27.s64 * 20;
	// subf r27,r26,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r26.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224C4BC;
	sub_8224BC70(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw. r29,r11,r25
	ctx.r29.s32 = ctx.r11.s32 / ctx.r25.s32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8224c4f0
	if (!ctx.cr0.gt) goto loc_8224C4F0;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
loc_8224C4D8:
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C4E8;
	sub_82352C28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x8224c4d8
	if (ctx.cr0.gt) goto loc_8224C4D8;
loc_8224C4F0:
	// add r29,r26,r28
	ctx.r29.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8224c570
	if (ctx.cr6.eq) goto loc_8224C570;
loc_8224C500:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C50C;
	sub_82352C28(ctx, base);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8224c500
	if (!ctx.cr6.eq) goto loc_8224C500;
	// b 0x8224c570
	goto loc_8224C570;
loc_8224C51C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224bbd0
	ctx.lr = 0x8224C52C;
	sub_8224BBD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// bl 0x8224bc70
	ctx.lr = 0x8224C544;
	sub_8224BC70(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x8224c568
	goto loc_8224C568;
loc_8224C558:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C564;
	sub_82352C28(ctx, base);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
loc_8224C568:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224c558
	if (!ctx.cr6.eq) goto loc_8224C558;
loc_8224C570:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_8224C3F8"))) PPC_WEAK_FUNC(sub_8224C3F8);
PPC_FUNC_IMPL(__imp__sub_8224C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba08
	ctx.lr = 0x8224C400;
	sub_8239BA08(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224c434
	if (ctx.cr6.lt) goto loc_8224C434;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8224c438
	if (ctx.cr6.lt) goto loc_8224C438;
loc_8224C434:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224C438:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c488
	if (ctx.cr0.eq) goto loc_8224C488;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823533f8
	ctx.lr = 0x8224C44C;
	sub_823533F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8224c3f8
	ctx.lr = 0x8224C47C;
	sub_8224C3F8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x8224C484;
	sub_82352A80(ctx, base);
	// b 0x8224c570
	goto loc_8224C570;
loc_8224C488:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r25,20
	ctx.r25.s64 = 20;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// divw r26,r11,r25
	ctx.r26.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8224c51c
	if (!ctx.cr6.gt) goto loc_8224C51C;
	// mulli r26,r27,20
	ctx.r26.s64 = ctx.r27.s64 * 20;
	// subf r27,r26,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r26.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224C4BC;
	sub_8224BC70(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw. r29,r11,r25
	ctx.r29.s32 = ctx.r11.s32 / ctx.r25.s32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8224c4f0
	if (!ctx.cr0.gt) goto loc_8224C4F0;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
loc_8224C4D8:
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C4E8;
	sub_82352C28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x8224c4d8
	if (ctx.cr0.gt) goto loc_8224C4D8;
loc_8224C4F0:
	// add r29,r26,r28
	ctx.r29.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8224c570
	if (ctx.cr6.eq) goto loc_8224C570;
loc_8224C500:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C50C;
	sub_82352C28(ctx, base);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8224c500
	if (!ctx.cr6.eq) goto loc_8224C500;
	// b 0x8224c570
	goto loc_8224C570;
loc_8224C51C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224bbd0
	ctx.lr = 0x8224C52C;
	sub_8224BBD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// bl 0x8224bc70
	ctx.lr = 0x8224C544;
	sub_8224BC70(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x8224c568
	goto loc_8224C568;
loc_8224C558:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82352c28
	ctx.lr = 0x8224C564;
	sub_82352C28(ctx, base);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
loc_8224C568:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224c558
	if (!ctx.cr6.eq) goto loc_8224C558;
loc_8224C570:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba58
	// ERROR 8239BA58
	return;
}

__attribute__((alias("__imp__sub_8224C578"))) PPC_WEAK_FUNC(sub_8224C578);
PPC_FUNC_IMPL(__imp__sub_8224C578) {
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
	// bl 0x8235d080
	ctx.lr = 0x8224C590;
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

__attribute__((alias("__imp__sub_8224C5A0"))) PPC_WEAK_FUNC(sub_8224C5A0);
PPC_FUNC_IMPL(__imp__sub_8224C5A0) {
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
	// bl 0x8224c370
	ctx.lr = 0x8224C5C8;
	sub_8224C370(ctx, base);
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

__attribute__((alias("__imp__sub_8224C604"))) PPC_WEAK_FUNC(sub_8224C604);
PPC_FUNC_IMPL(__imp__sub_8224C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C608"))) PPC_WEAK_FUNC(sub_8224C608);
PPC_FUNC_IMPL(__imp__sub_8224C608) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8224bb48
	ctx.lr = 0x8224C63C;
	sub_8224BB48(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 * 20;
	// bl 0x82354cb0
	ctx.lr = 0x8224C658;
	sub_82354CB0(ctx, base);
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

__attribute__((alias("__imp__sub_8224C66C"))) PPC_WEAK_FUNC(sub_8224C66C);
PPC_FUNC_IMPL(__imp__sub_8224C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C670"))) PPC_WEAK_FUNC(sub_8224C670);
PPC_FUNC_IMPL(__imp__sub_8224C670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224C678;
	sub_8239BA18(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x8224c6b0
	goto loc_8224C6B0;
loc_8224C690:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8224c5a0
	ctx.lr = 0x8224C6AC;
	sub_8224C5A0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8224C6B0:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224c690
	if (!ctx.cr0.eq) goto loc_8224C690;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224C6D0"))) PPC_WEAK_FUNC(sub_8224C6D0);
PPC_FUNC_IMPL(__imp__sub_8224C6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1320(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1320);
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
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8224b4a0
	ctx.lr = 0x8224C700;
	sub_8224B4A0(ctx, base);
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a078
	ctx.lr = 0x8224C70C;
	sub_8213A078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128758
	ctx.lr = 0x8224C714;
	sub_82128758(ctx, base);
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

__attribute__((alias("__imp__sub_8224C6D8"))) PPC_WEAK_FUNC(sub_8224C6D8);
PPC_FUNC_IMPL(__imp__sub_8224C6D8) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8224b4a0
	ctx.lr = 0x8224C700;
	sub_8224B4A0(ctx, base);
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a078
	ctx.lr = 0x8224C70C;
	sub_8213A078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128758
	ctx.lr = 0x8224C714;
	sub_82128758(ctx, base);
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

__attribute__((alias("__imp__sub_8224C72C"))) PPC_WEAK_FUNC(sub_8224C72C);
PPC_FUNC_IMPL(__imp__sub_8224C72C) {
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
	// addi r11,r11,-468
	ctx.r11.s64 = ctx.r11.s64 + -468;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// bl 0x82128758
	ctx.lr = 0x8224C74C;
	sub_82128758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C75C"))) PPC_WEAK_FUNC(sub_8224C75C);
PPC_FUNC_IMPL(__imp__sub_8224C75C) {
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
	// addi r11,r11,-468
	ctx.r11.s64 = ctx.r11.s64 + -468;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// bl 0x8213a590
	ctx.lr = 0x8224C77C;
	sub_8213A590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C78C"))) PPC_WEAK_FUNC(sub_8224C78C);
PPC_FUNC_IMPL(__imp__sub_8224C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C790"))) PPC_WEAK_FUNC(sub_8224C790);
PPC_FUNC_IMPL(__imp__sub_8224C790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1248(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1248);
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
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x8224bb48
	ctx.lr = 0x8224C7D8;
	sub_8224BB48(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8224c7fc
	if (ctx.cr0.eq) goto loc_8224C7FC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 * 20;
	// bl 0x82354cb0
	ctx.lr = 0x8224C7FC;
	sub_82354CB0(ctx, base);
loc_8224C7FC:
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

__attribute__((alias("__imp__sub_8224C798"))) PPC_WEAK_FUNC(sub_8224C798);
PPC_FUNC_IMPL(__imp__sub_8224C798) {
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
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x8224bb48
	ctx.lr = 0x8224C7D8;
	sub_8224BB48(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8224c7fc
	if (ctx.cr0.eq) goto loc_8224C7FC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 * 20;
	// bl 0x82354cb0
	ctx.lr = 0x8224C7FC;
	sub_82354CB0(ctx, base);
loc_8224C7FC:
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

__attribute__((alias("__imp__sub_8224C814"))) PPC_WEAK_FUNC(sub_8224C814);
PPC_FUNC_IMPL(__imp__sub_8224C814) {
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
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x823310e8
	ctx.lr = 0x8224C82C;
	sub_823310E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224C83C"))) PPC_WEAK_FUNC(sub_8224C83C);
PPC_FUNC_IMPL(__imp__sub_8224C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C840"))) PPC_WEAK_FUNC(sub_8224C840);
PPC_FUNC_IMPL(__imp__sub_8224C840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1176(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1176);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224C850;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8224c8d8
	if (!ctx.cr6.eq) goto loc_8224C8D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8224c88c
	goto loc_8224C88C;
loc_8224C884:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8224C88C:
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8224c884
	if (!ctx.cr0.eq) goto loc_8224C884;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82317b30
	ctx.lr = 0x8224C8BC;
	sub_82317B30(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c8d0
	if (ctx.cr0.eq) goto loc_8224C8D0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x8224C8D0;
	sub_82120818(ctx, base);
loc_8224C8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224c9d0
	goto loc_8224C9D0;
loc_8224C8D8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317d08
	ctx.lr = 0x8224C8EC;
	sub_82317D08(ctx, base);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224c904
	if (ctx.cr0.eq) goto loc_8224C904;
loc_8224C8F8:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224c8f8
	if (!ctx.cr0.eq) goto loc_8224C8F8;
loc_8224C904:
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224c9b8
	if (ctx.cr6.lt) goto loc_8224C9B8;
	// andi. r11,r26,19
	ctx.r11.u64 = ctx.r26.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224c9b8
	if (!ctx.cr0.eq) goto loc_8224C9B8;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x8224c950
	if (!ctx.cr6.eq) goto loc_8224C950;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8224ad00
	ctx.lr = 0x8224C940;
	sub_8224AD00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354cb0
	ctx.lr = 0x8224C94C;
	sub_82354CB0(ctx, base);
	// b 0x8224c8d0
	goto loc_8224C8D0;
loc_8224C950:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bne cr6,0x8224c9b0
	if (!ctx.cr6.eq) goto loc_8224C9B0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8224add8
	ctx.lr = 0x8224C964;
	sub_8224ADD8(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224b040
	ctx.lr = 0x8224C97C;
	sub_8224B040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c9a8
	if (ctx.cr0.eq) goto loc_8224C9A8;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8224c5a0
	ctx.lr = 0x8224C99C;
	sub_8224C5A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224ad00
	ctx.lr = 0x8224C9A4;
	sub_8224AD00(ctx, base);
	// b 0x8224c8d0
	goto loc_8224C8D0;
loc_8224C9A8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224ad00
	ctx.lr = 0x8224C9B0;
	sub_8224AD00(ctx, base);
loc_8224C9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224c9d0
	goto loc_8224C9D0;
loc_8224C9B8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8224b040
	ctx.lr = 0x8224C9D0;
	sub_8224B040(ctx, base);
loc_8224C9D0:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224C848"))) PPC_WEAK_FUNC(sub_8224C848);
PPC_FUNC_IMPL(__imp__sub_8224C848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224C850;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8224c8d8
	if (!ctx.cr6.eq) goto loc_8224C8D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8224c88c
	goto loc_8224C88C;
loc_8224C884:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8224C88C:
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8224c884
	if (!ctx.cr0.eq) goto loc_8224C884;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82317b30
	ctx.lr = 0x8224C8BC;
	sub_82317B30(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c8d0
	if (ctx.cr0.eq) goto loc_8224C8D0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x8224C8D0;
	sub_82120818(ctx, base);
loc_8224C8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224c9d0
	goto loc_8224C9D0;
loc_8224C8D8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317d08
	ctx.lr = 0x8224C8EC;
	sub_82317D08(ctx, base);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224c904
	if (ctx.cr0.eq) goto loc_8224C904;
loc_8224C8F8:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224c8f8
	if (!ctx.cr0.eq) goto loc_8224C8F8;
loc_8224C904:
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224c9b8
	if (ctx.cr6.lt) goto loc_8224C9B8;
	// andi. r11,r26,19
	ctx.r11.u64 = ctx.r26.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224c9b8
	if (!ctx.cr0.eq) goto loc_8224C9B8;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x8224c950
	if (!ctx.cr6.eq) goto loc_8224C950;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8224ad00
	ctx.lr = 0x8224C940;
	sub_8224AD00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354cb0
	ctx.lr = 0x8224C94C;
	sub_82354CB0(ctx, base);
	// b 0x8224c8d0
	goto loc_8224C8D0;
loc_8224C950:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bne cr6,0x8224c9b0
	if (!ctx.cr6.eq) goto loc_8224C9B0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8224add8
	ctx.lr = 0x8224C964;
	sub_8224ADD8(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224b040
	ctx.lr = 0x8224C97C;
	sub_8224B040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c9a8
	if (ctx.cr0.eq) goto loc_8224C9A8;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8224c5a0
	ctx.lr = 0x8224C99C;
	sub_8224C5A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224ad00
	ctx.lr = 0x8224C9A4;
	sub_8224AD00(ctx, base);
	// b 0x8224c8d0
	goto loc_8224C8D0;
loc_8224C9A8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8224ad00
	ctx.lr = 0x8224C9B0;
	sub_8224AD00(ctx, base);
loc_8224C9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224c9d0
	goto loc_8224C9D0;
loc_8224C9B8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8224b040
	ctx.lr = 0x8224C9D0;
	sub_8224B040(ctx, base);
loc_8224C9D0:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224C9D8"))) PPC_WEAK_FUNC(sub_8224C9D8);
PPC_FUNC_IMPL(__imp__sub_8224C9D8) {
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
	ctx.lr = 0x8224C9F0;
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

__attribute__((alias("__imp__sub_8224CA00"))) PPC_WEAK_FUNC(sub_8224CA00);
PPC_FUNC_IMPL(__imp__sub_8224CA00) {
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
	// bl 0x8224ad00
	ctx.lr = 0x8224CA18;
	sub_8224AD00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CA28"))) PPC_WEAK_FUNC(sub_8224CA28);
PPC_FUNC_IMPL(__imp__sub_8224CA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1028(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1028);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba00
	ctx.lr = 0x8224CA40;
	sub_8239BA00(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8224ca88
	if (ctx.cr6.lt) goto loc_8224CA88;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
loc_8224CA88:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// bl 0x8224a9b0
	ctx.lr = 0x8224CAA8;
	sub_8224A9B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224CAC8;
	sub_8224BC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// bne cr6,0x8224caf0
	if (!ctx.cr6.eq) goto loc_8224CAF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82133188
	ctx.lr = 0x8224CAE4;
	sub_82133188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// b 0x8224cb08
	goto loc_8224CB08;
loc_8224CAF0:
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8224bbd0
	ctx.lr = 0x8224CB00;
	sub_8224BBD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8224CB08:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224cb30
	if (!ctx.cr0.eq) goto loc_8224CB30;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224CB28;
	sub_8224BC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8224CB30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224c608
	ctx.lr = 0x8224CB38;
	sub_8224C608(ctx, base);
	// mulli r11,r24,20
	ctx.r11.s64 = ctx.r24.s64 * 20;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba50
	// ERROR 8239BA50
	return;
}

__attribute__((alias("__imp__sub_8224CA30"))) PPC_WEAK_FUNC(sub_8224CA30);
PPC_FUNC_IMPL(__imp__sub_8224CA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x8239ba00
	ctx.lr = 0x8224CA40;
	sub_8239BA00(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8224ca88
	if (ctx.cr6.lt) goto loc_8224CA88;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
loc_8224CA88:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// bl 0x8224a9b0
	ctx.lr = 0x8224CAA8;
	sub_8224A9B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224CAC8;
	sub_8224BC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// bne cr6,0x8224caf0
	if (!ctx.cr6.eq) goto loc_8224CAF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82133188
	ctx.lr = 0x8224CAE4;
	sub_82133188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// b 0x8224cb08
	goto loc_8224CB08;
loc_8224CAF0:
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8224bbd0
	ctx.lr = 0x8224CB00;
	sub_8224BBD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8224CB08:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224cb30
	if (!ctx.cr0.eq) goto loc_8224CB30;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8224bc70
	ctx.lr = 0x8224CB28;
	sub_8224BC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8224CB30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224c608
	ctx.lr = 0x8224CB38;
	sub_8224C608(ctx, base);
	// mulli r11,r24,20
	ctx.r11.s64 = ctx.r24.s64 * 20;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8239ba50
	// ERROR 8239BA50
	return;
}

__attribute__((alias("__imp__sub_8224CB54"))) PPC_WEAK_FUNC(sub_8224CB54);
PPC_FUNC_IMPL(__imp__sub_8224CB54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-1028(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -1028);
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
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224ad70
	ctx.lr = 0x8224CB80;
	sub_8224AD70(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 * 20;
	// bl 0x82354cb0
	ctx.lr = 0x8224CB90;
	sub_82354CB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224CB9C;
	sub_8239C6C8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CB5C"))) PPC_WEAK_FUNC(sub_8224CB5C);
PPC_FUNC_IMPL(__imp__sub_8224CB5C) {
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
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224ad70
	ctx.lr = 0x8224CB80;
	sub_8224AD70(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 * 20;
	// bl 0x82354cb0
	ctx.lr = 0x8224CB90;
	sub_82354CB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c6c8
	ctx.lr = 0x8224CB9C;
	sub_8239C6C8(ctx, base);
}

__attribute__((alias("__imp__sub_8224CBA0"))) PPC_WEAK_FUNC(sub_8224CBA0);
PPC_FUNC_IMPL(__imp__sub_8224CBA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224c298
	sub_8224C298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CBA4"))) PPC_WEAK_FUNC(sub_8224CBA4);
PPC_FUNC_IMPL(__imp__sub_8224CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CBA8"))) PPC_WEAK_FUNC(sub_8224CBA8);
PPC_FUNC_IMPL(__imp__sub_8224CBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-672(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -672);
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
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r9,-760
	ctx.r9.s64 = ctx.r9.s64 + -760;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,-808
	ctx.r11.s64 = ctx.r11.s64 + -808;
	// stw r9,-672(r30)
	PPC_STORE_U32(ctx.r30.u32 + -672, ctx.r9.u32);
	// addi r10,r10,-848
	ctx.r10.s64 = ctx.r10.s64 + -848;
	// lwz r9,-832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// addi r8,r8,-856
	ctx.r8.s64 = ctx.r8.s64 + -856;
	// addi r7,r7,-876
	ctx.r7.s64 = ctx.r7.s64 + -876;
	// stw r11,-836(r30)
	PPC_STORE_U32(ctx.r30.u32 + -836, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r10,-708(r30)
	PPC_STORE_U32(ctx.r30.u32 + -708, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r8,-656(r30)
	PPC_STORE_U32(ctx.r30.u32 + -656, ctx.r8.u32);
	// addi r11,r11,-940
	ctx.r11.s64 = ctx.r11.s64 + -940;
	// stw r7,-476(r30)
	PPC_STORE_U32(ctx.r30.u32 + -476, ctx.r7.u32);
	// addi r10,r10,-948
	ctx.r10.s64 = ctx.r10.s64 + -948;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,-832(r9)
	PPC_STORE_U32(ctx.r9.u32 + -832, ctx.r11.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -832, ctx.r10.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-832
	ctx.r10.s64 = ctx.r11.s64 + -832;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -836, ctx.r10.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-876
	ctx.r10.s64 = ctx.r11.s64 + -876;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -836, ctx.r10.u32);
	// lwz r3,-340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -340);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224cc84
	if (ctx.cr0.eq) goto loc_8224CC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CC84:
	// lwz r3,-336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -336);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224cca4
	if (ctx.cr0.eq) goto loc_8224CCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCA4:
	// lwz r11,-248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -248);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ccd4
	if (ctx.cr0.eq) goto loc_8224CCD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCD4:
	// lwz r3,-272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -272);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224ccf4
	if (ctx.cr0.eq) goto loc_8224CCF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCF4:
	// addi r3,r30,-144
	ctx.r3.s64 = ctx.r30.s64 + -144;
	// bl 0x82264060
	ctx.lr = 0x8224CCFC;
	sub_82264060(ctx, base);
	// addi r3,r30,-240
	ctx.r3.s64 = ctx.r30.s64 + -240;
	// bl 0x82267d68
	ctx.lr = 0x8224CD04;
	sub_82267D68(ctx, base);
	// addi r3,r30,-268
	ctx.r3.s64 = ctx.r30.s64 + -268;
	// bl 0x82352a80
	ctx.lr = 0x8224CD0C;
	sub_82352A80(ctx, base);
	// addi r3,r30,-292
	ctx.r3.s64 = ctx.r30.s64 + -292;
	// bl 0x8224b378
	ctx.lr = 0x8224CD14;
	sub_8224B378(ctx, base);
	// addi r3,r30,-312
	ctx.r3.s64 = ctx.r30.s64 + -312;
	// bl 0x82153810
	ctx.lr = 0x8224CD1C;
	sub_82153810(ctx, base);
	// addi r3,r30,-324
	ctx.r3.s64 = ctx.r30.s64 + -324;
	// bl 0x8224c298
	ctx.lr = 0x8224CD24;
	sub_8224C298(ctx, base);
	// addi r3,r30,-368
	ctx.r3.s64 = ctx.r30.s64 + -368;
	// bl 0x8224c6d8
	ctx.lr = 0x8224CD2C;
	sub_8224C6D8(ctx, base);
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

__attribute__((alias("__imp__sub_8224CBB0"))) PPC_WEAK_FUNC(sub_8224CBB0);
PPC_FUNC_IMPL(__imp__sub_8224CBB0) {
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
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r9,-760
	ctx.r9.s64 = ctx.r9.s64 + -760;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,-808
	ctx.r11.s64 = ctx.r11.s64 + -808;
	// stw r9,-672(r30)
	PPC_STORE_U32(ctx.r30.u32 + -672, ctx.r9.u32);
	// addi r10,r10,-848
	ctx.r10.s64 = ctx.r10.s64 + -848;
	// lwz r9,-832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// addi r8,r8,-856
	ctx.r8.s64 = ctx.r8.s64 + -856;
	// addi r7,r7,-876
	ctx.r7.s64 = ctx.r7.s64 + -876;
	// stw r11,-836(r30)
	PPC_STORE_U32(ctx.r30.u32 + -836, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r10,-708(r30)
	PPC_STORE_U32(ctx.r30.u32 + -708, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r8,-656(r30)
	PPC_STORE_U32(ctx.r30.u32 + -656, ctx.r8.u32);
	// addi r11,r11,-940
	ctx.r11.s64 = ctx.r11.s64 + -940;
	// stw r7,-476(r30)
	PPC_STORE_U32(ctx.r30.u32 + -476, ctx.r7.u32);
	// addi r10,r10,-948
	ctx.r10.s64 = ctx.r10.s64 + -948;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r11,-832(r9)
	PPC_STORE_U32(ctx.r9.u32 + -832, ctx.r11.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -832, ctx.r10.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-832
	ctx.r10.s64 = ctx.r11.s64 + -832;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -836, ctx.r10.u32);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-876
	ctx.r10.s64 = ctx.r11.s64 + -876;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -836, ctx.r10.u32);
	// lwz r3,-340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -340);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224cc84
	if (ctx.cr0.eq) goto loc_8224CC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CC84:
	// lwz r3,-336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -336);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224cca4
	if (ctx.cr0.eq) goto loc_8224CCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCA4:
	// lwz r11,-248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -248);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ccd4
	if (ctx.cr0.eq) goto loc_8224CCD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCD4:
	// lwz r3,-272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -272);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224ccf4
	if (ctx.cr0.eq) goto loc_8224CCF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CCF4:
	// addi r3,r30,-144
	ctx.r3.s64 = ctx.r30.s64 + -144;
	// bl 0x82264060
	ctx.lr = 0x8224CCFC;
	sub_82264060(ctx, base);
	// addi r3,r30,-240
	ctx.r3.s64 = ctx.r30.s64 + -240;
	// bl 0x82267d68
	ctx.lr = 0x8224CD04;
	sub_82267D68(ctx, base);
	// addi r3,r30,-268
	ctx.r3.s64 = ctx.r30.s64 + -268;
	// bl 0x82352a80
	ctx.lr = 0x8224CD0C;
	sub_82352A80(ctx, base);
	// addi r3,r30,-292
	ctx.r3.s64 = ctx.r30.s64 + -292;
	// bl 0x8224b378
	ctx.lr = 0x8224CD14;
	sub_8224B378(ctx, base);
	// addi r3,r30,-312
	ctx.r3.s64 = ctx.r30.s64 + -312;
	// bl 0x82153810
	ctx.lr = 0x8224CD1C;
	sub_82153810(ctx, base);
	// addi r3,r30,-324
	ctx.r3.s64 = ctx.r30.s64 + -324;
	// bl 0x8224c298
	ctx.lr = 0x8224CD24;
	sub_8224C298(ctx, base);
	// addi r3,r30,-368
	ctx.r3.s64 = ctx.r30.s64 + -368;
	// bl 0x8224c6d8
	ctx.lr = 0x8224CD2C;
	sub_8224C6D8(ctx, base);
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

__attribute__((alias("__imp__sub_8224CD44"))) PPC_WEAK_FUNC(sub_8224CD44);
PPC_FUNC_IMPL(__imp__sub_8224CD44) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,468
	ctx.r3.s64 = ctx.r11.s64 + 468;
	// bl 0x8224c6d8
	ctx.lr = 0x8224CD64;
	sub_8224C6D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CD74"))) PPC_WEAK_FUNC(sub_8224CD74);
PPC_FUNC_IMPL(__imp__sub_8224CD74) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// bl 0x8224cba0
	ctx.lr = 0x8224CD94;
	sub_8224CBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CDA4"))) PPC_WEAK_FUNC(sub_8224CDA4);
PPC_FUNC_IMPL(__imp__sub_8224CDA4) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,524
	ctx.r3.s64 = ctx.r11.s64 + 524;
	// bl 0x82153810
	ctx.lr = 0x8224CDC4;
	sub_82153810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CDD4"))) PPC_WEAK_FUNC(sub_8224CDD4);
PPC_FUNC_IMPL(__imp__sub_8224CDD4) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// bl 0x8224b378
	ctx.lr = 0x8224CDF4;
	sub_8224B378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CE04"))) PPC_WEAK_FUNC(sub_8224CE04);
PPC_FUNC_IMPL(__imp__sub_8224CE04) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,568
	ctx.r3.s64 = ctx.r11.s64 + 568;
	// bl 0x8235d080
	ctx.lr = 0x8224CE24;
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

__attribute__((alias("__imp__sub_8224CE34"))) PPC_WEAK_FUNC(sub_8224CE34);
PPC_FUNC_IMPL(__imp__sub_8224CE34) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82267d68
	ctx.lr = 0x8224CE54;
	sub_82267D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CE64"))) PPC_WEAK_FUNC(sub_8224CE64);
PPC_FUNC_IMPL(__imp__sub_8224CE64) {
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
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// addi r3,r11,692
	ctx.r3.s64 = ctx.r11.s64 + 692;
	// bl 0x82264060
	ctx.lr = 0x8224CE84;
	sub_82264060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224CE94"))) PPC_WEAK_FUNC(sub_8224CE94);
PPC_FUNC_IMPL(__imp__sub_8224CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CE98"))) PPC_WEAK_FUNC(sub_8224CE98);
PPC_FUNC_IMPL(__imp__sub_8224CE98) {
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
	// bl 0x822242a0
	ctx.lr = 0x8224CEB0;
	sub_822242A0(ctx, base);
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

__attribute__((alias("__imp__sub_8224CEC8"))) PPC_WEAK_FUNC(sub_8224CEC8);
PPC_FUNC_IMPL(__imp__sub_8224CEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82126390
	sub_82126390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CED8"))) PPC_WEAK_FUNC(sub_8224CED8);
PPC_FUNC_IMPL(__imp__sub_8224CED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-704
	ctx.r3.s64 = ctx.r3.s64 + -704;
	// b 0x82126360
	sub_82126360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CEE8"))) PPC_WEAK_FUNC(sub_8224CEE8);
PPC_FUNC_IMPL(__imp__sub_8224CEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x821b82c8
	sub_821B82C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CEF8"))) PPC_WEAK_FUNC(sub_8224CEF8);
PPC_FUNC_IMPL(__imp__sub_8224CEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x821b81f0
	sub_821B81F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CF08"))) PPC_WEAK_FUNC(sub_8224CF08);
PPC_FUNC_IMPL(__imp__sub_8224CF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x8224ce98
	sub_8224CE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CF14"))) PPC_WEAK_FUNC(sub_8224CF14);
PPC_FUNC_IMPL(__imp__sub_8224CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CF18"))) PPC_WEAK_FUNC(sub_8224CF18);
PPC_FUNC_IMPL(__imp__sub_8224CF18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224dcd0
	sub_8224DCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CF24"))) PPC_WEAK_FUNC(sub_8224CF24);
PPC_FUNC_IMPL(__imp__sub_8224CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CF28"))) PPC_WEAK_FUNC(sub_8224CF28);
PPC_FUNC_IMPL(__imp__sub_8224CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-560(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -560);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224CF38;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cfac
	if (!ctx.cr0.eq) goto loc_8224CFAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224CF74;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822242a0
	ctx.lr = 0x8224CF80;
	sub_822242A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224CF94;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224CFA4;
	sub_82270D08(ctx, base);
	// stw r3,13088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13088, ctx.r3.u32);
	// b 0x8224cfb0
	goto loc_8224CFB0;
loc_8224CFAC:
	// lwz r3,13088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13088);
loc_8224CFB0:
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
	// beq 0x8224cfec
	if (ctx.cr0.eq) goto loc_8224CFEC;
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224d068
	goto loc_8224D068;
loc_8224CFEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224CFF8;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224d04c
	if (!ctx.cr0.eq) goto loc_8224D04C;
	// addic. r11,r30,-836
	ctx.xer.ca = ctx.r30.u32 > 835;
	ctx.r11.s64 = ctx.r30.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224d010
	if (!ctx.cr0.eq) goto loc_8224D010;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224d020
	goto loc_8224D020;
loc_8224D010:
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
loc_8224D020:
	// bl 0x8231c700
	ctx.lr = 0x8224D024;
	sub_8231C700(ctx, base);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224D04C:
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224D068:
	// bctrl 
	ctx.lr = 0x8224D06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224CF30"))) PPC_WEAK_FUNC(sub_8224CF30);
PPC_FUNC_IMPL(__imp__sub_8224CF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224CF38;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cfac
	if (!ctx.cr0.eq) goto loc_8224CFAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224CF74;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822242a0
	ctx.lr = 0x8224CF80;
	sub_822242A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224CF94;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224CFA4;
	sub_82270D08(ctx, base);
	// stw r3,13088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13088, ctx.r3.u32);
	// b 0x8224cfb0
	goto loc_8224CFB0;
loc_8224CFAC:
	// lwz r3,13088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13088);
loc_8224CFB0:
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
	// beq 0x8224cfec
	if (ctx.cr0.eq) goto loc_8224CFEC;
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224d068
	goto loc_8224D068;
loc_8224CFEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224CFF8;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224d04c
	if (!ctx.cr0.eq) goto loc_8224D04C;
	// addic. r11,r30,-836
	ctx.xer.ca = ctx.r30.u32 > 835;
	ctx.r11.s64 = ctx.r30.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224d010
	if (!ctx.cr0.eq) goto loc_8224D010;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224d020
	goto loc_8224D020;
loc_8224D010:
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
loc_8224D020:
	// bl 0x8231c700
	ctx.lr = 0x8224D024;
	sub_8231C700(ctx, base);
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224D04C:
	// lwz r11,-832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224D068:
	// bctrl 
	ctx.lr = 0x8224D06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224D074"))) PPC_WEAK_FUNC(sub_8224D074);
PPC_FUNC_IMPL(__imp__sub_8224D074) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13092
	ctx.r11.s64 = ctx.r11.s64 + 13092;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13092
	ctx.r10.s64 = ctx.r10.s64 + 13092;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D09C"))) PPC_WEAK_FUNC(sub_8224D09C);
PPC_FUNC_IMPL(__imp__sub_8224D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D0A0"))) PPC_WEAK_FUNC(sub_8224D0A0);
PPC_FUNC_IMPL(__imp__sub_8224D0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224cf30
	sub_8224CF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224D0AC"))) PPC_WEAK_FUNC(sub_8224D0AC);
PPC_FUNC_IMPL(__imp__sub_8224D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D0B0"))) PPC_WEAK_FUNC(sub_8224D0B0);
PPC_FUNC_IMPL(__imp__sub_8224D0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x8224be20
	sub_8224BE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224D0BC"))) PPC_WEAK_FUNC(sub_8224D0BC);
PPC_FUNC_IMPL(__imp__sub_8224D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D0C0"))) PPC_WEAK_FUNC(sub_8224D0C0);
PPC_FUNC_IMPL(__imp__sub_8224D0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224bd08
	sub_8224BD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224D0CC"))) PPC_WEAK_FUNC(sub_8224D0CC);
PPC_FUNC_IMPL(__imp__sub_8224D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D0D0"))) PPC_WEAK_FUNC(sub_8224D0D0);
PPC_FUNC_IMPL(__imp__sub_8224D0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-344(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -344);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224D0E0;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x8224D108;
	sub_82317D30(ctx, base);
	// lis r30,-32137
	ctx.r30.s64 = -2106130432;
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13120
	ctx.r29.s64 = ctx.r10.s64 + 13120;
	// bne 0x8224d13c
	if (!ctx.cr0.eq) goto loc_8224D13C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// bl 0x823559d8
	ctx.lr = 0x8224D138;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D13C:
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
	// beq 0x8224d170
	if (ctx.cr0.eq) goto loc_8224D170;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-364
	ctx.r3.s64 = ctx.r26.s64 + -364;
loc_8224D168:
	// bl 0x8212de08
	ctx.lr = 0x8224D16C;
	sub_8212DE08(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D170:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13116
	ctx.r29.s64 = ctx.r10.s64 + 13116;
	// bne 0x8224d19c
	if (!ctx.cr0.eq) goto loc_8224D19C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-424
	ctx.r4.s64 = ctx.r11.s64 + -424;
	// bl 0x823559d8
	ctx.lr = 0x8224D198;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D19C:
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
	// beq 0x8224d1cc
	if (ctx.cr0.eq) goto loc_8224D1CC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-332
	ctx.r3.s64 = ctx.r26.s64 + -332;
	// b 0x8224d168
	goto loc_8224D168;
loc_8224D1CC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13112
	ctx.r29.s64 = ctx.r10.s64 + 13112;
	// bne 0x8224d1f8
	if (!ctx.cr0.eq) goto loc_8224D1F8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// bl 0x823559d8
	ctx.lr = 0x8224D1F4;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D1F8:
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
	// beq 0x8224d254
	if (ctx.cr0.eq) goto loc_8224D254;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-268
	ctx.r3.s64 = ctx.r26.s64 + -268;
	// bl 0x82326880
	ctx.lr = 0x8224D228;
	sub_82326880(ctx, base);
loc_8224D228:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d24c
	if (ctx.cr0.eq) goto loc_8224D24C;
	// andi. r11,r27,17
	ctx.r11.u64 = ctx.r27.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224d244
	if (!ctx.cr0.eq) goto loc_8224D244;
	// addi r3,r26,-836
	ctx.r3.s64 = ctx.r26.s64 + -836;
	// bl 0x8224a6c8
	ctx.lr = 0x8224D244;
	sub_8224A6C8(ctx, base);
loc_8224D244:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D254:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13108
	ctx.r29.s64 = ctx.r10.s64 + 13108;
	// bne 0x8224d280
	if (!ctx.cr0.eq) goto loc_8224D280;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-452
	ctx.r4.s64 = ctx.r11.s64 + -452;
	// bl 0x823559d8
	ctx.lr = 0x8224D27C;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D280:
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
	// beq 0x8224d2b4
	if (ctx.cr0.eq) goto loc_8224D2B4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-244
	ctx.r3.s64 = ctx.r26.s64 + -244;
	// bl 0x8212deb8
	ctx.lr = 0x8224D2B0;
	sub_8212DEB8(ctx, base);
	// b 0x8224d228
	goto loc_8224D228;
loc_8224D2B4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13104
	ctx.r29.s64 = ctx.r10.s64 + 13104;
	// bne 0x8224d2e0
	if (!ctx.cr0.eq) goto loc_8224D2E0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-464
	ctx.r4.s64 = ctx.r11.s64 + -464;
	// bl 0x823559d8
	ctx.lr = 0x8224D2DC;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D2E0:
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
	// beq 0x8224d314
	if (ctx.cr0.eq) goto loc_8224D314;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-8
	ctx.r3.s64 = ctx.r26.s64 + -8;
	// bl 0x8212deb8
	ctx.lr = 0x8224D310;
	sub_8212DEB8(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D314:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13100
	ctx.r29.s64 = ctx.r10.s64 + 13100;
	// bne 0x8224d340
	if (!ctx.cr0.eq) goto loc_8224D340;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x823559d8
	ctx.lr = 0x8224D33C;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D340:
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
	// beq 0x8224d3e8
	if (ctx.cr0.eq) goto loc_8224D3E8;
	// andi. r30,r27,17
	ctx.r30.u64 = ctx.r27.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8224d390
	if (!ctx.cr0.eq) goto loc_8224D390;
	// lwz r11,-304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -304);
	// b 0x8224d37c
	goto loc_8224D37C;
loc_8224D36C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224D37C:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224d36c
	if (!ctx.cr0.eq) goto loc_8224D36C;
loc_8224D390:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-312
	ctx.r3.s64 = ctx.r26.s64 + -312;
	// bl 0x8220bcb8
	ctx.lr = 0x8224D3A8;
	sub_8220BCB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d24c
	if (ctx.cr0.eq) goto loc_8224D24C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8224d244
	if (!ctx.cr6.eq) goto loc_8224D244;
	// lwz r11,-304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -304);
	// b 0x8224d3d0
	goto loc_8224D3D0;
loc_8224D3C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224D3D0:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224d3c0
	if (!ctx.cr0.eq) goto loc_8224D3C0;
	// b 0x8224d244
	goto loc_8224D244;
loc_8224D3E8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13096
	ctx.r29.s64 = ctx.r10.s64 + 13096;
	// bne 0x8224d410
	if (!ctx.cr0.eq) goto loc_8224D410;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-496
	ctx.r4.s64 = ctx.r11.s64 + -496;
	// bl 0x823559d8
	ctx.lr = 0x8224D410;
	sub_823559D8(ctx, base);
loc_8224D410:
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
	// beq 0x8224d444
	if (ctx.cr0.eq) goto loc_8224D444;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-324
	ctx.r3.s64 = ctx.r26.s64 + -324;
	// bl 0x8224c848
	ctx.lr = 0x8224D440;
	sub_8224C848(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D444:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,-368
	ctx.r3.s64 = ctx.r26.s64 + -368;
	// bl 0x82373870
	ctx.lr = 0x8224D458;
	sub_82373870(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8224D468:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224D0D8"))) PPC_WEAK_FUNC(sub_8224D0D8);
PPC_FUNC_IMPL(__imp__sub_8224D0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224D0E0;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x8224D108;
	sub_82317D30(ctx, base);
	// lis r30,-32137
	ctx.r30.s64 = -2106130432;
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13120
	ctx.r29.s64 = ctx.r10.s64 + 13120;
	// bne 0x8224d13c
	if (!ctx.cr0.eq) goto loc_8224D13C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// bl 0x823559d8
	ctx.lr = 0x8224D138;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D13C:
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
	// beq 0x8224d170
	if (ctx.cr0.eq) goto loc_8224D170;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-364
	ctx.r3.s64 = ctx.r26.s64 + -364;
loc_8224D168:
	// bl 0x8212de08
	ctx.lr = 0x8224D16C;
	sub_8212DE08(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D170:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13116
	ctx.r29.s64 = ctx.r10.s64 + 13116;
	// bne 0x8224d19c
	if (!ctx.cr0.eq) goto loc_8224D19C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-424
	ctx.r4.s64 = ctx.r11.s64 + -424;
	// bl 0x823559d8
	ctx.lr = 0x8224D198;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D19C:
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
	// beq 0x8224d1cc
	if (ctx.cr0.eq) goto loc_8224D1CC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-332
	ctx.r3.s64 = ctx.r26.s64 + -332;
	// b 0x8224d168
	goto loc_8224D168;
loc_8224D1CC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13112
	ctx.r29.s64 = ctx.r10.s64 + 13112;
	// bne 0x8224d1f8
	if (!ctx.cr0.eq) goto loc_8224D1F8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// bl 0x823559d8
	ctx.lr = 0x8224D1F4;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D1F8:
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
	// beq 0x8224d254
	if (ctx.cr0.eq) goto loc_8224D254;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-268
	ctx.r3.s64 = ctx.r26.s64 + -268;
	// bl 0x82326880
	ctx.lr = 0x8224D228;
	sub_82326880(ctx, base);
loc_8224D228:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d24c
	if (ctx.cr0.eq) goto loc_8224D24C;
	// andi. r11,r27,17
	ctx.r11.u64 = ctx.r27.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224d244
	if (!ctx.cr0.eq) goto loc_8224D244;
	// addi r3,r26,-836
	ctx.r3.s64 = ctx.r26.s64 + -836;
	// bl 0x8224a6c8
	ctx.lr = 0x8224D244;
	sub_8224A6C8(ctx, base);
loc_8224D244:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D254:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13108
	ctx.r29.s64 = ctx.r10.s64 + 13108;
	// bne 0x8224d280
	if (!ctx.cr0.eq) goto loc_8224D280;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-452
	ctx.r4.s64 = ctx.r11.s64 + -452;
	// bl 0x823559d8
	ctx.lr = 0x8224D27C;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D280:
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
	// beq 0x8224d2b4
	if (ctx.cr0.eq) goto loc_8224D2B4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-244
	ctx.r3.s64 = ctx.r26.s64 + -244;
	// bl 0x8212deb8
	ctx.lr = 0x8224D2B0;
	sub_8212DEB8(ctx, base);
	// b 0x8224d228
	goto loc_8224D228;
loc_8224D2B4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13104
	ctx.r29.s64 = ctx.r10.s64 + 13104;
	// bne 0x8224d2e0
	if (!ctx.cr0.eq) goto loc_8224D2E0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-464
	ctx.r4.s64 = ctx.r11.s64 + -464;
	// bl 0x823559d8
	ctx.lr = 0x8224D2DC;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D2E0:
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
	// beq 0x8224d314
	if (ctx.cr0.eq) goto loc_8224D314;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-8
	ctx.r3.s64 = ctx.r26.s64 + -8;
	// bl 0x8212deb8
	ctx.lr = 0x8224D310;
	sub_8212DEB8(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D314:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13100
	ctx.r29.s64 = ctx.r10.s64 + 13100;
	// bne 0x8224d340
	if (!ctx.cr0.eq) goto loc_8224D340;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x823559d8
	ctx.lr = 0x8224D33C;
	sub_823559D8(ctx, base);
	// lwz r11,13124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13124);
loc_8224D340:
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
	// beq 0x8224d3e8
	if (ctx.cr0.eq) goto loc_8224D3E8;
	// andi. r30,r27,17
	ctx.r30.u64 = ctx.r27.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8224d390
	if (!ctx.cr0.eq) goto loc_8224D390;
	// lwz r11,-304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -304);
	// b 0x8224d37c
	goto loc_8224D37C;
loc_8224D36C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224D37C:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224d36c
	if (!ctx.cr0.eq) goto loc_8224D36C;
loc_8224D390:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-312
	ctx.r3.s64 = ctx.r26.s64 + -312;
	// bl 0x8220bcb8
	ctx.lr = 0x8224D3A8;
	sub_8220BCB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d24c
	if (ctx.cr0.eq) goto loc_8224D24C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8224d244
	if (!ctx.cr6.eq) goto loc_8224D244;
	// lwz r11,-304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -304);
	// b 0x8224d3d0
	goto loc_8224D3D0;
loc_8224D3C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224D3D0:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224d3c0
	if (!ctx.cr0.eq) goto loc_8224D3C0;
	// b 0x8224d244
	goto loc_8224D244;
loc_8224D3E8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r29,r10,13096
	ctx.r29.s64 = ctx.r10.s64 + 13096;
	// bne 0x8224d410
	if (!ctx.cr0.eq) goto loc_8224D410;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,13124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-496
	ctx.r4.s64 = ctx.r11.s64 + -496;
	// bl 0x823559d8
	ctx.lr = 0x8224D410;
	sub_823559D8(ctx, base);
loc_8224D410:
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
	// beq 0x8224d444
	if (ctx.cr0.eq) goto loc_8224D444;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,-324
	ctx.r3.s64 = ctx.r26.s64 + -324;
	// bl 0x8224c848
	ctx.lr = 0x8224D440;
	sub_8224C848(ctx, base);
	// b 0x8224d468
	goto loc_8224D468;
loc_8224D444:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,-368
	ctx.r3.s64 = ctx.r26.s64 + -368;
	// bl 0x82373870
	ctx.lr = 0x8224D458;
	sub_82373870(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8224D468:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224D470"))) PPC_WEAK_FUNC(sub_8224D470);
PPC_FUNC_IMPL(__imp__sub_8224D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D498"))) PPC_WEAK_FUNC(sub_8224D498);
PPC_FUNC_IMPL(__imp__sub_8224D498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D4C0"))) PPC_WEAK_FUNC(sub_8224D4C0);
PPC_FUNC_IMPL(__imp__sub_8224D4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D4E8"))) PPC_WEAK_FUNC(sub_8224D4E8);
PPC_FUNC_IMPL(__imp__sub_8224D4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D510"))) PPC_WEAK_FUNC(sub_8224D510);
PPC_FUNC_IMPL(__imp__sub_8224D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D538"))) PPC_WEAK_FUNC(sub_8224D538);
PPC_FUNC_IMPL(__imp__sub_8224D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D560"))) PPC_WEAK_FUNC(sub_8224D560);
PPC_FUNC_IMPL(__imp__sub_8224D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13124
	ctx.r10.s64 = ctx.r10.s64 + 13124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D588"))) PPC_WEAK_FUNC(sub_8224D588);
PPC_FUNC_IMPL(__imp__sub_8224D588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224D590;
	sub_8239BA1C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8224d5b4
	goto loc_8224D5B4;
loc_8224D5A8:
	// bge cr6,0x8224d5d0
	if (!ctx.cr6.lt) goto loc_8224D5D0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8224D5B4:
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8224d5a8
	if (!ctx.cr0.eq) goto loc_8224D5A8;
loc_8224D5D0:
	// bne cr6,0x8224d5f4
	if (!ctx.cr6.eq) goto loc_8224D5F4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224c2e8
	ctx.lr = 0x8224D5F0;
	sub_8224C2E8(ctx, base);
	// b 0x8224d61c
	goto loc_8224D61C;
loc_8224D5F4:
	// subf. r30,r11,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224d61c
	if (ctx.cr0.eq) goto loc_8224D61C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_8224D600:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224c5a0
	ctx.lr = 0x8224D614;
	sub_8224C5A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8224d600
	if (!ctx.cr0.eq) goto loc_8224D600;
loc_8224D61C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224D624"))) PPC_WEAK_FUNC(sub_8224D624);
PPC_FUNC_IMPL(__imp__sub_8224D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D628"))) PPC_WEAK_FUNC(sub_8224D628);
PPC_FUNC_IMPL(__imp__sub_8224D628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,-144(r2)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r2.u32 + -144);
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
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8224c670
	ctx.lr = 0x8224D684;
	sub_8224C670(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8224D630"))) PPC_WEAK_FUNC(sub_8224D630);
PPC_FUNC_IMPL(__imp__sub_8224D630) {
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
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8224c670
	ctx.lr = 0x8224D684;
	sub_8224C670(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8224D6A0"))) PPC_WEAK_FUNC(sub_8224D6A0);
PPC_FUNC_IMPL(__imp__sub_8224D6A0) {
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
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8224cba0
	ctx.lr = 0x8224D6B8;
	sub_8224CBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D6C8"))) PPC_WEAK_FUNC(sub_8224D6C8);
PPC_FUNC_IMPL(__imp__sub_8224D6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224d0d8
	sub_8224D0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224D6D4"))) PPC_WEAK_FUNC(sub_8224D6D4);
PPC_FUNC_IMPL(__imp__sub_8224D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D6D8"))) PPC_WEAK_FUNC(sub_8224D6D8);
PPC_FUNC_IMPL(__imp__sub_8224D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,40(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224D6E8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8224d794
	if (ctx.cr6.eq) goto loc_8224D794;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addi r10,r10,-52
	ctx.r10.s64 = ctx.r10.s64 + -52;
	// addi r9,r9,-60
	ctx.r9.s64 = ctx.r9.s64 + -60;
	// addi r8,r8,-72
	ctx.r8.s64 = ctx.r8.s64 + -72;
	// addi r7,r7,-80
	ctx.r7.s64 = ctx.r7.s64 + -80;
	// addi r6,r6,-88
	ctx.r6.s64 = ctx.r6.s64 + -88;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r5,r5,-96
	ctx.r5.s64 = ctx.r5.s64 + -96;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,836
	ctx.r3.s64 = ctx.r30.s64 + 836;
	// stw r9,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r6.u32);
	// stw r5,884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 884, ctx.r5.u32);
	// bl 0x82317430
	ctx.lr = 0x8224D768;
	sub_82317430(ctx, base);
	// addi r11,r30,880
	ctx.r11.s64 = ctx.r30.s64 + 880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
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
loc_8224D794:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374928
	ctx.lr = 0x8224D7A0;
	sub_82374928(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r8,-856
	ctx.r8.s64 = ctx.r8.s64 + -856;
	// lfs f12,-31356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31356);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-848
	ctx.r10.s64 = ctx.r10.s64 + -848;
	// stw r8,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r8.u32);
	// addi r9,r9,-760
	ctx.r9.s64 = ctx.r9.s64 + -760;
	// addi r11,r11,-808
	ctx.r11.s64 = ctx.r11.s64 + -808;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,-876
	ctx.r7.s64 = ctx.r7.s64 + -876;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r9,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r7,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,2552(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,-940
	ctx.r6.s64 = ctx.r11.s64 + -940;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-948
	ctx.r10.s64 = ctx.r11.s64 + -948;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-832
	ctx.r9.s64 = ctx.r10.s64 + -832;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-876
	ctx.r9.s64 = ctx.r10.s64 + -876;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// stfs f12,468(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 468, temp.u32);
	// stfs f0,472(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 472, temp.u32);
	// stw r26,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r26.u32);
	// stfs f0,476(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 476, temp.u32);
	// stfs f0,480(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 480, temp.u32);
	// stfs f0,484(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 484, temp.u32);
	// stfs f13,488(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 488, temp.u32);
	// stfs f13,492(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 492, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f13,504(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 504, temp.u32);
	// stfs f0,508(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 508, temp.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-21064
	ctx.r11.s64 = ctx.r11.s64 + -21064;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r29,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r29.u32);
	// stw r11,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r29.u32);
	// stw r10,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-2748
	ctx.r11.s64 = ctx.r11.s64 + -2748;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r29,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r29.u32);
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r29.u32);
	// stw r10,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r10.u32);
	// addi r28,r30,568
	ctx.r28.s64 = ctx.r30.s64 + 568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823528f8
	ctx.lr = 0x8224D904;
	sub_823528F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// stb r29,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r29.u8);
	// bl 0x82267f58
	ctx.lr = 0x8224D924;
	sub_82267F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x82264440
	ctx.lr = 0x8224D930;
	sub_82264440(ctx, base);
	// stb r29,828(r30)
	PPC_STORE_U8(ctx.r30.u32 + 828, ctx.r29.u8);
	// bl 0x821e22d8
	ctx.lr = 0x8224D938;
	sub_821E22D8(ctx, base);
	// stw r3,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r3.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// bl 0x821503b0
	ctx.lr = 0x8224D950;
	sub_821503B0(ctx, base);
	// stw r3,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r3.u32);
	// bl 0x821e22d8
	ctx.lr = 0x8224D958;
	sub_821E22D8(ctx, base);
	// stw r3,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stw r29,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r29.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stb r26,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r26.u8);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224D6E0"))) PPC_WEAK_FUNC(sub_8224D6E0);
PPC_FUNC_IMPL(__imp__sub_8224D6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224D6E8;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8224d794
	if (ctx.cr6.eq) goto loc_8224D794;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addi r10,r10,-52
	ctx.r10.s64 = ctx.r10.s64 + -52;
	// addi r9,r9,-60
	ctx.r9.s64 = ctx.r9.s64 + -60;
	// addi r8,r8,-72
	ctx.r8.s64 = ctx.r8.s64 + -72;
	// addi r7,r7,-80
	ctx.r7.s64 = ctx.r7.s64 + -80;
	// addi r6,r6,-88
	ctx.r6.s64 = ctx.r6.s64 + -88;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r5,r5,-96
	ctx.r5.s64 = ctx.r5.s64 + -96;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,836
	ctx.r3.s64 = ctx.r30.s64 + 836;
	// stw r9,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r6.u32);
	// stw r5,884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 884, ctx.r5.u32);
	// bl 0x82317430
	ctx.lr = 0x8224D768;
	sub_82317430(ctx, base);
	// addi r11,r30,880
	ctx.r11.s64 = ctx.r30.s64 + 880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
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
loc_8224D794:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374928
	ctx.lr = 0x8224D7A0;
	sub_82374928(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r8,-856
	ctx.r8.s64 = ctx.r8.s64 + -856;
	// lfs f12,-31356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31356);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-848
	ctx.r10.s64 = ctx.r10.s64 + -848;
	// stw r8,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r8.u32);
	// addi r9,r9,-760
	ctx.r9.s64 = ctx.r9.s64 + -760;
	// addi r11,r11,-808
	ctx.r11.s64 = ctx.r11.s64 + -808;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,-876
	ctx.r7.s64 = ctx.r7.s64 + -876;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r9,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r7,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,2552(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,-940
	ctx.r6.s64 = ctx.r11.s64 + -940;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-948
	ctx.r10.s64 = ctx.r11.s64 + -948;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-832
	ctx.r9.s64 = ctx.r10.s64 + -832;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-876
	ctx.r9.s64 = ctx.r10.s64 + -876;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// stfs f12,468(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 468, temp.u32);
	// stfs f0,472(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 472, temp.u32);
	// stw r26,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r26.u32);
	// stfs f0,476(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 476, temp.u32);
	// stfs f0,480(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 480, temp.u32);
	// stfs f0,484(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 484, temp.u32);
	// stfs f13,488(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 488, temp.u32);
	// stfs f13,492(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 492, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f13,504(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 504, temp.u32);
	// stfs f0,508(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 508, temp.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-21064
	ctx.r11.s64 = ctx.r11.s64 + -21064;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r29,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r29.u32);
	// stw r11,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r29.u32);
	// stw r10,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-2748
	ctx.r11.s64 = ctx.r11.s64 + -2748;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r29,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r29.u32);
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r29.u32);
	// stw r10,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r10.u32);
	// addi r28,r30,568
	ctx.r28.s64 = ctx.r30.s64 + 568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823528f8
	ctx.lr = 0x8224D904;
	sub_823528F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// stb r29,592(r30)
	PPC_STORE_U8(ctx.r30.u32 + 592, ctx.r29.u8);
	// bl 0x82267f58
	ctx.lr = 0x8224D924;
	sub_82267F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x82264440
	ctx.lr = 0x8224D930;
	sub_82264440(ctx, base);
	// stb r29,828(r30)
	PPC_STORE_U8(ctx.r30.u32 + 828, ctx.r29.u8);
	// bl 0x821e22d8
	ctx.lr = 0x8224D938;
	sub_821E22D8(ctx, base);
	// stw r3,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r3.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// bl 0x821503b0
	ctx.lr = 0x8224D950;
	sub_821503B0(ctx, base);
	// stw r3,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r3.u32);
	// bl 0x821e22d8
	ctx.lr = 0x8224D958;
	sub_821E22D8(ctx, base);
	// stw r3,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stw r29,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r29.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stb r26,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r26.u8);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224D9A0"))) PPC_WEAK_FUNC(sub_8224D9A0);
PPC_FUNC_IMPL(__imp__sub_8224D9A0) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d9d4
	if (ctx.cr0.eq) goto loc_8224D9D4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,836
	ctx.r3.s64 = ctx.r11.s64 + 836;
	// bl 0x82317498
	ctx.lr = 0x8224D9D4;
	sub_82317498(ctx, base);
loc_8224D9D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224D9E4"))) PPC_WEAK_FUNC(sub_8224D9E4);
PPC_FUNC_IMPL(__imp__sub_8224D9E4) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,468
	ctx.r3.s64 = ctx.r11.s64 + 468;
	// bl 0x8224c6d8
	ctx.lr = 0x8224DA00;
	sub_8224C6D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DA10"))) PPC_WEAK_FUNC(sub_8224DA10);
PPC_FUNC_IMPL(__imp__sub_8224DA10) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// bl 0x8224cba0
	ctx.lr = 0x8224DA2C;
	sub_8224CBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DA3C"))) PPC_WEAK_FUNC(sub_8224DA3C);
PPC_FUNC_IMPL(__imp__sub_8224DA3C) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,524
	ctx.r3.s64 = ctx.r11.s64 + 524;
	// bl 0x82153810
	ctx.lr = 0x8224DA58;
	sub_82153810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DA68"))) PPC_WEAK_FUNC(sub_8224DA68);
PPC_FUNC_IMPL(__imp__sub_8224DA68) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// bl 0x8224b378
	ctx.lr = 0x8224DA84;
	sub_8224B378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DA94"))) PPC_WEAK_FUNC(sub_8224DA94);
PPC_FUNC_IMPL(__imp__sub_8224DA94) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,568
	ctx.r3.s64 = ctx.r11.s64 + 568;
	// bl 0x8235d080
	ctx.lr = 0x8224DAB0;
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

__attribute__((alias("__imp__sub_8224DAC0"))) PPC_WEAK_FUNC(sub_8224DAC0);
PPC_FUNC_IMPL(__imp__sub_8224DAC0) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82267d68
	ctx.lr = 0x8224DADC;
	sub_82267D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DAEC"))) PPC_WEAK_FUNC(sub_8224DAEC);
PPC_FUNC_IMPL(__imp__sub_8224DAEC) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,692
	ctx.r3.s64 = ctx.r11.s64 + 692;
	// bl 0x82264060
	ctx.lr = 0x8224DB08;
	sub_82264060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DB18"))) PPC_WEAK_FUNC(sub_8224DB18);
PPC_FUNC_IMPL(__imp__sub_8224DB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,136(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224DB28;
	sub_8239BA1C(ctx, base);
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
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8224add8
	ctx.lr = 0x8224DB44;
	sub_8224ADD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224d588
	ctx.lr = 0x8224DB54;
	sub_8224D588(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8224ad00
	ctx.lr = 0x8224DB5C;
	sub_8224AD00(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224DB20"))) PPC_WEAK_FUNC(sub_8224DB20);
PPC_FUNC_IMPL(__imp__sub_8224DB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224DB28;
	sub_8239BA1C(ctx, base);
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
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8224add8
	ctx.lr = 0x8224DB44;
	sub_8224ADD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224d588
	ctx.lr = 0x8224DB54;
	sub_8224D588(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8224ad00
	ctx.lr = 0x8224DB5C;
	sub_8224AD00(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224DB64"))) PPC_WEAK_FUNC(sub_8224DB64);
PPC_FUNC_IMPL(__imp__sub_8224DB64) {
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
	// bl 0x8224ad00
	ctx.lr = 0x8224DB7C;
	sub_8224AD00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DB8C"))) PPC_WEAK_FUNC(sub_8224DB8C);
PPC_FUNC_IMPL(__imp__sub_8224DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DB90"))) PPC_WEAK_FUNC(sub_8224DB90);
PPC_FUNC_IMPL(__imp__sub_8224DB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224DB98;
	sub_8239BA18(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82359028
	ctx.lr = 0x8224DBB0;
	sub_82359028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224db20
	ctx.lr = 0x8224DBBC;
	sub_8224DB20(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8224dbdc
	goto loc_8224DBDC;
loc_8224DBC4:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 + 12;
	// bl 0x821d78a0
	ctx.lr = 0x8224DBD0;
	sub_821D78A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82132e30
	ctx.lr = 0x8224DBD8;
	sub_82132E30(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8224DBDC:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224dbc4
	if (!ctx.cr0.eq) goto loc_8224DBC4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224DC00"))) PPC_WEAK_FUNC(sub_8224DC00);
PPC_FUNC_IMPL(__imp__sub_8224DC00) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8224dc54
	if (ctx.cr6.eq) goto loc_8224DC54;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8224dc40
	if (ctx.cr6.lt) goto loc_8224DC40;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c3f8
	ctx.lr = 0x8224DC3C;
	sub_8224C3F8(ctx, base);
	// b 0x8224dc54
	goto loc_8224DC54;
loc_8224DC40:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8224ca30
	ctx.lr = 0x8224DC54;
	sub_8224CA30(ctx, base);
loc_8224DC54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224DC64"))) PPC_WEAK_FUNC(sub_8224DC64);
PPC_FUNC_IMPL(__imp__sub_8224DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DC68"))) PPC_WEAK_FUNC(sub_8224DC68);
PPC_FUNC_IMPL(__imp__sub_8224DC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224DC70;
	sub_8239BA18(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822e41f0
	ctx.lr = 0x8224DC90;
	sub_822E41F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224d630
	ctx.lr = 0x8224DCA4;
	sub_8224D630(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82370c38
	ctx.lr = 0x8224DCBC;
	sub_82370C38(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224c298
	ctx.lr = 0x8224DCC4;
	sub_8224C298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224DCCC"))) PPC_WEAK_FUNC(sub_8224DCCC);
PPC_FUNC_IMPL(__imp__sub_8224DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DCD0"))) PPC_WEAK_FUNC(sub_8224DCD0);
PPC_FUNC_IMPL(__imp__sub_8224DCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224DCD8;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-836
	ctx.r30.s64 = ctx.r3.s64 + -836;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,836
	ctx.r31.s64 = ctx.r30.s64 + 836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224cbb0
	ctx.lr = 0x8224DCF0;
	sub_8224CBB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317498
	ctx.lr = 0x8224DCF8;
	sub_82317498(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224dd08
	if (ctx.cr0.eq) goto loc_8224DD08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823547d8
	ctx.lr = 0x8224DD08;
	sub_823547D8(ctx, base);
loc_8224DD08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224DD14"))) PPC_WEAK_FUNC(sub_8224DD14);
PPC_FUNC_IMPL(__imp__sub_8224DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DD18"))) PPC_WEAK_FUNC(sub_8224DD18);
PPC_FUNC_IMPL(__imp__sub_8224DD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,216(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9f4
	ctx.lr = 0x8224DD28;
	sub_8239B9F4(ctx, base);
	// addi r31,r1,-416
	ctx.r31.s64 = ctx.r1.s64 + -416;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821284d0
	ctx.lr = 0x8224DD3C;
	sub_821284D0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bge cr6,0x8224dd58
	if (!ctx.cr6.lt) goto loc_8224DD58;
	// addi r3,r21,-396
	ctx.r3.s64 = ctx.r21.s64 + -396;
	// bl 0x821ba3e0
	ctx.lr = 0x8224DD54;
	sub_821BA3E0(ctx, base);
	// b 0x8224dd60
	goto loc_8224DD60;
loc_8224DD58:
	// addi r3,r21,-368
	ctx.r3.s64 = ctx.r21.s64 + -368;
	// bl 0x82374150
	ctx.lr = 0x8224DD60;
	sub_82374150(ctx, base);
loc_8224DD60:
	// addic. r11,r19,-5
	ctx.xer.ca = ctx.r19.u32 > 4;
	ctx.r11.s64 = ctx.r19.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// bne 0x8224ddc0
	if (!ctx.cr0.eq) goto loc_8224DDC0;
	// addic. r11,r21,-836
	ctx.xer.ca = ctx.r21.u32 > 835;
	ctx.r11.s64 = ctx.r21.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224dd7c
	if (!ctx.cr0.eq) goto loc_8224DD7C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8224dd8c
	goto loc_8224DD8C;
loc_8224DD7C:
	// lwz r11,-832(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
loc_8224DD8C:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213a840
	ctx.lr = 0x8224DDAC;
	sub_8213A840(ctx, base);
	// addi r3,r21,-396
	ctx.r3.s64 = ctx.r21.s64 + -396;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8213a168
	ctx.lr = 0x8224DDB8;
	sub_8213A168(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8213a078
	ctx.lr = 0x8224DDC0;
	sub_8213A078(ctx, base);
loc_8224DDC0:
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// bge cr6,0x8224df2c
	if (!ctx.cr6.lt) goto loc_8224DF2C;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r22,20
	ctx.r22.s64 = 20;
	// addi r28,r11,13128
	ctx.r28.s64 = ctx.r11.s64 + 13128;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw. r11,r11,r22
	ctx.r11.s32 = ctx.r11.s32 / ctx.r22.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224df18
	if (ctx.cr0.eq) goto loc_8224DF18;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r26,r21,-836
	ctx.r26.s64 = ctx.r21.s64 + -836;
	// addi r25,r11,920
	ctx.r25.s64 = ctx.r11.s64 + 920;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r24,r11,1664
	ctx.r24.s64 = ctx.r11.s64 + 1664;
loc_8224DE04:
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823229f8
	ctx.lr = 0x8224DE14;
	sub_823229F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82317128
	ctx.lr = 0x8224DE1C;
	sub_82317128(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c500
	ctx.lr = 0x8224DE30;
	sub_8239C500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359208
	ctx.lr = 0x8224DE60;
	sub_82359208(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x821b0968
	ctx.lr = 0x8224DE94;
	sub_821B0968(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821220d0
	ctx.lr = 0x8224DEA0;
	sub_821220D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359028
	ctx.lr = 0x8224DEB0;
	sub_82359028(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,136(r30)
	PPC_STORE_U8(ctx.r30.u32 + 136, ctx.r11.u8);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// bl 0x82359208
	ctx.lr = 0x8224DED0;
	sub_82359208(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224def8
	if (ctx.cr0.eq) goto loc_8224DEF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b8780
	ctx.lr = 0x8224DEEC;
	sub_821B8780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,424
	ctx.r3.s64 = ctx.r30.s64 + 424;
	// bl 0x8214ffc8
	ctx.lr = 0x8224DEF8;
	sub_8214FFC8(ctx, base);
loc_8224DEF8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw r11,r11,r22
	ctx.r11.s32 = ctx.r11.s32 / ctx.r22.s32;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224de04
	if (ctx.cr6.lt) goto loc_8224DE04;
loc_8224DF18:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8224df2c
	if (ctx.cr6.eq) goto loc_8224DF2C;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8224c230
	ctx.lr = 0x8224DF2C;
	sub_8224C230(ctx, base);
loc_8224DF2C:
	// cmpwi cr6,r19,10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 10, ctx.xer);
	// ble cr6,0x8224df8c
	if (!ctx.cr6.gt) goto loc_8224DF8C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// bl 0x8213d608
	ctx.lr = 0x8224DF48;
	sub_8213D608(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF50;
	sub_8213D608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF58;
	sub_8213D608(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF64;
	sub_8213D608(ctx, base);
	// lwz r30,-388(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + -388);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224dfac
	if (ctx.cr0.eq) goto loc_8224DFAC;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8239cb70
	ctx.lr = 0x8224DF80;
	sub_8239CB70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af740
	ctx.lr = 0x8224DF88;
	sub_821AF740(ctx, base);
	// b 0x8224dfac
	goto loc_8224DFAC;
loc_8224DF8C:
	// cmpwi cr6,r19,6
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 6, ctx.xer);
	// ble cr6,0x8224dfac
	if (!ctx.cr6.gt) goto loc_8224DFAC;
	// lwz r11,-388(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -388);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224dfac
	if (ctx.cr0.eq) goto loc_8224DFAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x821b0968
	ctx.lr = 0x8224DFAC;
	sub_821B0968(ctx, base);
loc_8224DFAC:
	// cmpwi cr6,r19,11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 11, ctx.xer);
	// ble cr6,0x8224e05c
	if (!ctx.cr6.gt) goto loc_8224E05C;
	// lwz r11,-304(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -304);
	// b 0x8224dfcc
	goto loc_8224DFCC;
loc_8224DFBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224DFCC:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224dfbc
	if (!ctx.cr0.eq) goto loc_8224DFBC;
	// addi r4,r21,-312
	ctx.r4.s64 = ctx.r21.s64 + -312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821539e0
	ctx.lr = 0x8224DFEC;
	sub_821539E0(ctx, base);
	// lwz r11,-304(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -304);
	// b 0x8224e000
	goto loc_8224E000;
loc_8224DFF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r20,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r20.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224E000:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224dff4
	if (!ctx.cr0.eq) goto loc_8224DFF4;
	// addi r28,r21,-324
	ctx.r28.s64 = ctx.r21.s64 + -324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224db90
	ctx.lr = 0x8224E024;
	sub_8224DB90(ctx, base);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8224e044
	goto loc_8224E044;
loc_8224E02C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224e040
	if (ctx.cr0.eq) goto loc_8224E040;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x821d61d8
	ctx.lr = 0x8224E040;
	sub_821D61D8(ctx, base);
loc_8224E040:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8224E044:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e02c
	if (!ctx.cr0.eq) goto loc_8224E02C;
loc_8224E05C:
	// addi r3,r21,-836
	ctx.r3.s64 = ctx.r21.s64 + -836;
	// bl 0x8224a6c8
	ctx.lr = 0x8224E064;
	sub_8224A6C8(ctx, base);
	// addi r1,r31,416
	ctx.r1.s64 = ctx.r31.s64 + 416;
	// b 0x8239ba44
	// ERROR 8239BA44
	return;
}

__attribute__((alias("__imp__sub_8224DD20"))) PPC_WEAK_FUNC(sub_8224DD20);
PPC_FUNC_IMPL(__imp__sub_8224DD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239b9f4
	ctx.lr = 0x8224DD28;
	sub_8239B9F4(ctx, base);
	// addi r31,r1,-416
	ctx.r31.s64 = ctx.r1.s64 + -416;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821284d0
	ctx.lr = 0x8224DD3C;
	sub_821284D0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bge cr6,0x8224dd58
	if (!ctx.cr6.lt) goto loc_8224DD58;
	// addi r3,r21,-396
	ctx.r3.s64 = ctx.r21.s64 + -396;
	// bl 0x821ba3e0
	ctx.lr = 0x8224DD54;
	sub_821BA3E0(ctx, base);
	// b 0x8224dd60
	goto loc_8224DD60;
loc_8224DD58:
	// addi r3,r21,-368
	ctx.r3.s64 = ctx.r21.s64 + -368;
	// bl 0x82374150
	ctx.lr = 0x8224DD60;
	sub_82374150(ctx, base);
loc_8224DD60:
	// addic. r11,r19,-5
	ctx.xer.ca = ctx.r19.u32 > 4;
	ctx.r11.s64 = ctx.r19.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// bne 0x8224ddc0
	if (!ctx.cr0.eq) goto loc_8224DDC0;
	// addic. r11,r21,-836
	ctx.xer.ca = ctx.r21.u32 > 835;
	ctx.r11.s64 = ctx.r21.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224dd7c
	if (!ctx.cr0.eq) goto loc_8224DD7C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8224dd8c
	goto loc_8224DD8C;
loc_8224DD7C:
	// lwz r11,-832(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
loc_8224DD8C:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213a840
	ctx.lr = 0x8224DDAC;
	sub_8213A840(ctx, base);
	// addi r3,r21,-396
	ctx.r3.s64 = ctx.r21.s64 + -396;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8213a168
	ctx.lr = 0x8224DDB8;
	sub_8213A168(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8213a078
	ctx.lr = 0x8224DDC0;
	sub_8213A078(ctx, base);
loc_8224DDC0:
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// bge cr6,0x8224df2c
	if (!ctx.cr6.lt) goto loc_8224DF2C;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r22,20
	ctx.r22.s64 = 20;
	// addi r28,r11,13128
	ctx.r28.s64 = ctx.r11.s64 + 13128;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw. r11,r11,r22
	ctx.r11.s32 = ctx.r11.s32 / ctx.r22.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224df18
	if (ctx.cr0.eq) goto loc_8224DF18;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r26,r21,-836
	ctx.r26.s64 = ctx.r21.s64 + -836;
	// addi r25,r11,920
	ctx.r25.s64 = ctx.r11.s64 + 920;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r24,r11,1664
	ctx.r24.s64 = ctx.r11.s64 + 1664;
loc_8224DE04:
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823229f8
	ctx.lr = 0x8224DE14;
	sub_823229F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82317128
	ctx.lr = 0x8224DE1C;
	sub_82317128(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c500
	ctx.lr = 0x8224DE30;
	sub_8239C500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359208
	ctx.lr = 0x8224DE60;
	sub_82359208(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x821b0968
	ctx.lr = 0x8224DE94;
	sub_821B0968(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821220d0
	ctx.lr = 0x8224DEA0;
	sub_821220D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359028
	ctx.lr = 0x8224DEB0;
	sub_82359028(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,136(r30)
	PPC_STORE_U8(ctx.r30.u32 + 136, ctx.r11.u8);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// bl 0x82359208
	ctx.lr = 0x8224DED0;
	sub_82359208(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224def8
	if (ctx.cr0.eq) goto loc_8224DEF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b8780
	ctx.lr = 0x8224DEEC;
	sub_821B8780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,424
	ctx.r3.s64 = ctx.r30.s64 + 424;
	// bl 0x8214ffc8
	ctx.lr = 0x8224DEF8;
	sub_8214FFC8(ctx, base);
loc_8224DEF8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw r11,r11,r22
	ctx.r11.s32 = ctx.r11.s32 / ctx.r22.s32;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224de04
	if (ctx.cr6.lt) goto loc_8224DE04;
loc_8224DF18:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8224df2c
	if (ctx.cr6.eq) goto loc_8224DF2C;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8224c230
	ctx.lr = 0x8224DF2C;
	sub_8224C230(ctx, base);
loc_8224DF2C:
	// cmpwi cr6,r19,10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 10, ctx.xer);
	// ble cr6,0x8224df8c
	if (!ctx.cr6.gt) goto loc_8224DF8C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// bl 0x8213d608
	ctx.lr = 0x8224DF48;
	sub_8213D608(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF50;
	sub_8213D608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF58;
	sub_8213D608(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d608
	ctx.lr = 0x8224DF64;
	sub_8213D608(ctx, base);
	// lwz r30,-388(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + -388);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224dfac
	if (ctx.cr0.eq) goto loc_8224DFAC;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8239cb70
	ctx.lr = 0x8224DF80;
	sub_8239CB70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af740
	ctx.lr = 0x8224DF88;
	sub_821AF740(ctx, base);
	// b 0x8224dfac
	goto loc_8224DFAC;
loc_8224DF8C:
	// cmpwi cr6,r19,6
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 6, ctx.xer);
	// ble cr6,0x8224dfac
	if (!ctx.cr6.gt) goto loc_8224DFAC;
	// lwz r11,-388(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -388);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224dfac
	if (ctx.cr0.eq) goto loc_8224DFAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x821b0968
	ctx.lr = 0x8224DFAC;
	sub_821B0968(ctx, base);
loc_8224DFAC:
	// cmpwi cr6,r19,11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 11, ctx.xer);
	// ble cr6,0x8224e05c
	if (!ctx.cr6.gt) goto loc_8224E05C;
	// lwz r11,-304(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -304);
	// b 0x8224dfcc
	goto loc_8224DFCC;
loc_8224DFBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224DFCC:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224dfbc
	if (!ctx.cr0.eq) goto loc_8224DFBC;
	// addi r4,r21,-312
	ctx.r4.s64 = ctx.r21.s64 + -312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821539e0
	ctx.lr = 0x8224DFEC;
	sub_821539E0(ctx, base);
	// lwz r11,-304(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -304);
	// b 0x8224e000
	goto loc_8224E000;
loc_8224DFF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r20,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r20.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224E000:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224dff4
	if (!ctx.cr0.eq) goto loc_8224DFF4;
	// addi r28,r21,-324
	ctx.r28.s64 = ctx.r21.s64 + -324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224db90
	ctx.lr = 0x8224E024;
	sub_8224DB90(ctx, base);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8224e044
	goto loc_8224E044;
loc_8224E02C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224e040
	if (ctx.cr0.eq) goto loc_8224E040;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x821d61d8
	ctx.lr = 0x8224E040;
	sub_821D61D8(ctx, base);
loc_8224E040:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8224E044:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e02c
	if (!ctx.cr0.eq) goto loc_8224E02C;
loc_8224E05C:
	// addi r3,r21,-836
	ctx.r3.s64 = ctx.r21.s64 + -836;
	// bl 0x8224a6c8
	ctx.lr = 0x8224E064;
	sub_8224A6C8(ctx, base);
	// addi r1,r31,416
	ctx.r1.s64 = ctx.r31.s64 + 416;
	// b 0x8239ba44
	// ERROR 8239BA44
	return;
}

__attribute__((alias("__imp__sub_8224E06C"))) PPC_WEAK_FUNC(sub_8224E06C);
PPC_FUNC_IMPL(__imp__sub_8224E06C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-416
	ctx.r31.s64 = ctx.r12.s64 + -416;
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
	// bl 0x82126720
	ctx.lr = 0x8224E084;
	sub_82126720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E094"))) PPC_WEAK_FUNC(sub_8224E094);
PPC_FUNC_IMPL(__imp__sub_8224E094) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-416
	ctx.r31.s64 = ctx.r12.s64 + -416;
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
	// bl 0x8213a590
	ctx.lr = 0x8224E0AC;
	sub_8213A590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E0BC"))) PPC_WEAK_FUNC(sub_8224E0BC);
PPC_FUNC_IMPL(__imp__sub_8224E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E0C0"))) PPC_WEAK_FUNC(sub_8224E0C0);
PPC_FUNC_IMPL(__imp__sub_8224E0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224dd20
	sub_8224DD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224E0CC"))) PPC_WEAK_FUNC(sub_8224E0CC);
PPC_FUNC_IMPL(__imp__sub_8224E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E0D0"))) PPC_WEAK_FUNC(sub_8224E0D0);
PPC_FUNC_IMPL(__imp__sub_8224E0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224E0D8;
	sub_8239BA10(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8224e1a0
	if (ctx.cr6.eq) goto loc_8224E1A0;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x8224e13c
	goto loc_8224E13C;
loc_8224E0F8:
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224e154
	if (ctx.cr0.eq) goto loc_8224E154;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x821c5570
	ctx.lr = 0x8224E130;
	sub_821C5570(ctx, base);
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// bl 0x82352c28
	ctx.lr = 0x8224E13C;
	sub_82352C28(ctx, base);
loc_8224E13C:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e0f8
	if (!ctx.cr0.eq) goto loc_8224E0F8;
loc_8224E154:
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e184
	if (ctx.cr0.eq) goto loc_8224E184;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8224c2e8
	ctx.lr = 0x8224E180;
	sub_8224C2E8(ctx, base);
	// b 0x8224e1a0
	goto loc_8224E1A0;
loc_8224E184:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224dc68
	ctx.lr = 0x8224E1A0;
	sub_8224DC68(ctx, base);
loc_8224E1A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224E1AC"))) PPC_WEAK_FUNC(sub_8224E1AC);
PPC_FUNC_IMPL(__imp__sub_8224E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E1B0"))) PPC_WEAK_FUNC(sub_8224E1B0);
PPC_FUNC_IMPL(__imp__sub_8224E1B0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r7,r8
	ctx.r7.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8224e200
	if (!ctx.cr6.lt) goto loc_8224E200;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8224e214
	if (ctx.cr6.eq) goto loc_8224E214;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x8224c230
	ctx.lr = 0x8224E1FC;
	sub_8224C230(ctx, base);
	// b 0x8224e214
	goto loc_8224E214;
loc_8224E200:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8224dc00
	ctx.lr = 0x8224E214;
	sub_8224DC00(ctx, base);
loc_8224E214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E224"))) PPC_WEAK_FUNC(sub_8224E224);
PPC_FUNC_IMPL(__imp__sub_8224E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E228"))) PPC_WEAK_FUNC(sub_8224E228);
PPC_FUNC_IMPL(__imp__sub_8224E228) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8224e28c
	if (ctx.cr6.eq) goto loc_8224E28C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8224e260
	goto loc_8224E260;
loc_8224E258:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8224E260:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224e258
	if (!ctx.cr0.eq) goto loc_8224E258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224db20
	ctx.lr = 0x8224E280;
	sub_8224DB20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e0d0
	ctx.lr = 0x8224E28C;
	sub_8224E0D0(ctx, base);
loc_8224E28C:
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

__attribute__((alias("__imp__sub_8224E2A4"))) PPC_WEAK_FUNC(sub_8224E2A4);
PPC_FUNC_IMPL(__imp__sub_8224E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E2A8"))) PPC_WEAK_FUNC(sub_8224E2A8);
PPC_FUNC_IMPL(__imp__sub_8224E2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,336(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224E2B8;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E2D4;
	sub_82359028(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823528f8
	ctx.lr = 0x8224E2DC;
	sub_823528F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8224e1b0
	ctx.lr = 0x8224E2F8;
	sub_8224E1B0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x8224E300;
	sub_82352A80(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8224e314
	goto loc_8224E314;
loc_8224E308:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82132e30
	ctx.lr = 0x8224E310;
	sub_82132E30(ctx, base);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
loc_8224E314:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224e308
	if (!ctx.cr6.eq) goto loc_8224E308;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224E2B0"))) PPC_WEAK_FUNC(sub_8224E2B0);
PPC_FUNC_IMPL(__imp__sub_8224E2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224E2B8;
	sub_8239BA18(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E2D4;
	sub_82359028(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823528f8
	ctx.lr = 0x8224E2DC;
	sub_823528F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2488
	ctx.r11.s64 = ctx.r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8224e1b0
	ctx.lr = 0x8224E2F8;
	sub_8224E1B0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82352a80
	ctx.lr = 0x8224E300;
	sub_82352A80(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8224e314
	goto loc_8224E314;
loc_8224E308:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82132e30
	ctx.lr = 0x8224E310;
	sub_82132E30(ctx, base);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
loc_8224E314:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224e308
	if (!ctx.cr6.eq) goto loc_8224E308;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224E32C"))) PPC_WEAK_FUNC(sub_8224E32C);
PPC_FUNC_IMPL(__imp__sub_8224E32C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235d080
	ctx.lr = 0x8224E344;
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

__attribute__((alias("__imp__sub_8224E354"))) PPC_WEAK_FUNC(sub_8224E354);
PPC_FUNC_IMPL(__imp__sub_8224E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E358"))) PPC_WEAK_FUNC(sub_8224E358);
PPC_FUNC_IMPL(__imp__sub_8224E358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224E360;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,-368
	ctx.r3.s64 = ctx.r31.s64 + -368;
	// bl 0x82373ba8
	ctx.lr = 0x8224E374;
	sub_82373BA8(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15660
	ctx.r6.s64 = ctx.r11.s64 + 15660;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = ctx.r11.s64 + 920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239c500
	ctx.lr = 0x8224E394;
	sub_8239C500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224e46c
	if (ctx.cr0.eq) goto loc_8224E46C;
	// lfs f0,472(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,568
	ctx.r4.s64 = ctx.r30.s64 + 568;
	// stfs f0,-364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -364, temp.u32);
	// addi r3,r31,-268
	ctx.r3.s64 = ctx.r31.s64 + -268;
	// lfs f0,504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -332, temp.u32);
	// bl 0x82352c28
	ctx.lr = 0x8224E3B8;
	sub_82352C28(ctx, base);
	// lwz r11,-304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -304);
	// b 0x8224e3d0
	goto loc_8224E3D0;
loc_8224E3C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224E3D0:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224e3c0
	if (!ctx.cr0.eq) goto loc_8224E3C0;
	// addi r4,r30,524
	ctx.r4.s64 = ctx.r30.s64 + 524;
	// addi r3,r31,-312
	ctx.r3.s64 = ctx.r31.s64 + -312;
	// bl 0x8220bbe8
	ctx.lr = 0x8224E3F0;
	sub_8220BBE8(ctx, base);
	// lwz r11,-304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -304);
	// b 0x8224e408
	goto loc_8224E408;
loc_8224E3F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8224E408:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224e3f8
	if (!ctx.cr0.eq) goto loc_8224E3F8;
	// addi r29,r31,-324
	ctx.r29.s64 = ctx.r31.s64 + -324;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224e228
	ctx.lr = 0x8224E42C;
	sub_8224E228(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8224e44c
	goto loc_8224E44C;
loc_8224E434:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224e448
	if (ctx.cr0.eq) goto loc_8224E448;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x821d61d8
	ctx.lr = 0x8224E448;
	sub_821D61D8(ctx, base);
loc_8224E448:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8224E44C:
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
	// bne 0x8224e434
	if (!ctx.cr0.eq) goto loc_8224E434;
	// addi r3,r31,-836
	ctx.r3.s64 = ctx.r31.s64 + -836;
	// bl 0x8224a6c8
	ctx.lr = 0x8224E46C;
	sub_8224A6C8(ctx, base);
loc_8224E46C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224E474"))) PPC_WEAK_FUNC(sub_8224E474);
PPC_FUNC_IMPL(__imp__sub_8224E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E478"))) PPC_WEAK_FUNC(sub_8224E478);
PPC_FUNC_IMPL(__imp__sub_8224E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,432(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224E488;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E4A8;
	sub_82359028(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8224e5e8
	if (ctx.cr6.gt) goto loc_8224E5E8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8224e510
	if (ctx.cr6.gt) goto loc_8224E510;
	// addic. r11,r29,-836
	ctx.xer.ca = ctx.r29.u32 > 835;
	ctx.r11.s64 = ctx.r29.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e4d0
	if (!ctx.cr0.eq) goto loc_8224E4D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8224e4e0
	goto loc_8224E4E0;
loc_8224E4D0:
	// lwz r11,-832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
loc_8224E4E0:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a840
	ctx.lr = 0x8224E504;
	sub_8213A840(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8213a078
	ctx.lr = 0x8224E50C;
	sub_8213A078(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E510:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8224e53c
	if (!ctx.cr6.gt) goto loc_8224E53C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,-364
	ctx.r4.s64 = ctx.r29.s64 + -364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E528;
	sub_82359028(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,-332
	ctx.r4.s64 = ctx.r29.s64 + -332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E538;
	sub_82359028(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E53C:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8224e558
	if (!ctx.cr6.gt) goto loc_8224E558;
	// addi r4,r29,-268
	ctx.r4.s64 = ctx.r29.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82132e30
	ctx.lr = 0x8224E550;
	sub_82132E30(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
loc_8224E558:
	// bge cr6,0x8224e5a0
	if (!ctx.cr6.lt) goto loc_8224E5A0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8224e584
	if (!ctx.cr6.gt) goto loc_8224E584;
	// addi r3,r29,-836
	ctx.r3.s64 = ctx.r29.s64 + -836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224e59c
	goto loc_8224E59C;
loc_8224E584:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8224e5a0
	if (!ctx.cr6.gt) goto loc_8224E5A0;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13128
	ctx.r4.s64 = ctx.r11.s64 + 13128;
	// bl 0x8224e2b0
	ctx.lr = 0x8224E59C;
	sub_8224E2B0(ctx, base);
loc_8224E59C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E5A0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bge cr6,0x8224e5b8
	if (!ctx.cr6.lt) goto loc_8224E5B8;
	// addi r3,r29,-396
	ctx.r3.s64 = ctx.r29.s64 + -396;
	// bl 0x821ba350
	ctx.lr = 0x8224E5B4;
	sub_821BA350(ctx, base);
	// b 0x8224e5c0
	goto loc_8224E5C0;
loc_8224E5B8:
	// addi r3,r29,-368
	ctx.r3.s64 = ctx.r29.s64 + -368;
	// bl 0x823740d8
	ctx.lr = 0x8224E5C0;
	sub_823740D8(ctx, base);
loc_8224E5C0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-6640
	ctx.r4.s64 = ctx.r11.s64 + -6640;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82128228
	ctx.lr = 0x8224E5E8;
	sub_82128228(ctx, base);
loc_8224E5E8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224E480"))) PPC_WEAK_FUNC(sub_8224E480);
PPC_FUNC_IMPL(__imp__sub_8224E480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224E488;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E4A8;
	sub_82359028(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8224e5e8
	if (ctx.cr6.gt) goto loc_8224E5E8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8224e510
	if (ctx.cr6.gt) goto loc_8224E510;
	// addic. r11,r29,-836
	ctx.xer.ca = ctx.r29.u32 > 835;
	ctx.r11.s64 = ctx.r29.s64 + -836;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e4d0
	if (!ctx.cr0.eq) goto loc_8224E4D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8224e4e0
	goto loc_8224E4E0;
loc_8224E4D0:
	// lwz r11,-832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -832);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
loc_8224E4E0:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a840
	ctx.lr = 0x8224E504;
	sub_8213A840(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8213a078
	ctx.lr = 0x8224E50C;
	sub_8213A078(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E510:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8224e53c
	if (!ctx.cr6.gt) goto loc_8224E53C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,-364
	ctx.r4.s64 = ctx.r29.s64 + -364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E528;
	sub_82359028(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,-332
	ctx.r4.s64 = ctx.r29.s64 + -332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224E538;
	sub_82359028(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E53C:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8224e558
	if (!ctx.cr6.gt) goto loc_8224E558;
	// addi r4,r29,-268
	ctx.r4.s64 = ctx.r29.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82132e30
	ctx.lr = 0x8224E550;
	sub_82132E30(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
loc_8224E558:
	// bge cr6,0x8224e5a0
	if (!ctx.cr6.lt) goto loc_8224E5A0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8224e584
	if (!ctx.cr6.gt) goto loc_8224E584;
	// addi r3,r29,-836
	ctx.r3.s64 = ctx.r29.s64 + -836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224e59c
	goto loc_8224E59C;
loc_8224E584:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8224e5a0
	if (!ctx.cr6.gt) goto loc_8224E5A0;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13128
	ctx.r4.s64 = ctx.r11.s64 + 13128;
	// bl 0x8224e2b0
	ctx.lr = 0x8224E59C;
	sub_8224E2B0(ctx, base);
loc_8224E59C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8224E5A0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bge cr6,0x8224e5b8
	if (!ctx.cr6.lt) goto loc_8224E5B8;
	// addi r3,r29,-396
	ctx.r3.s64 = ctx.r29.s64 + -396;
	// bl 0x821ba350
	ctx.lr = 0x8224E5B4;
	sub_821BA350(ctx, base);
	// b 0x8224e5c0
	goto loc_8224E5C0;
loc_8224E5B8:
	// addi r3,r29,-368
	ctx.r3.s64 = ctx.r29.s64 + -368;
	// bl 0x823740d8
	ctx.lr = 0x8224E5C0;
	sub_823740D8(ctx, base);
loc_8224E5C0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-6640
	ctx.r4.s64 = ctx.r11.s64 + -6640;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82128228
	ctx.lr = 0x8224E5E8;
	sub_82128228(ctx, base);
loc_8224E5E8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224E5F0"))) PPC_WEAK_FUNC(sub_8224E5F0);
PPC_FUNC_IMPL(__imp__sub_8224E5F0) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82126720
	ctx.lr = 0x8224E608;
	sub_82126720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E618"))) PPC_WEAK_FUNC(sub_8224E618);
PPC_FUNC_IMPL(__imp__sub_8224E618) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8213a590
	ctx.lr = 0x8224E630;
	sub_8213A590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E640"))) PPC_WEAK_FUNC(sub_8224E640);
PPC_FUNC_IMPL(__imp__sub_8224E640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224e480
	sub_8224E480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224E64C"))) PPC_WEAK_FUNC(sub_8224E64C);
PPC_FUNC_IMPL(__imp__sub_8224E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E650"))) PPC_WEAK_FUNC(sub_8224E650);
PPC_FUNC_IMPL(__imp__sub_8224E650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224e358
	sub_8224E358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224E65C"))) PPC_WEAK_FUNC(sub_8224E65C);
PPC_FUNC_IMPL(__imp__sub_8224E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E660"))) PPC_WEAK_FUNC(sub_8224E660);
PPC_FUNC_IMPL(__imp__sub_8224E660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,520(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224E670;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224E69C;
	sub_82317D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821b1098
	ctx.lr = 0x8224E6B0;
	sub_821B1098(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e6e0
	if (ctx.cr6.eq) goto loc_8224E6E0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E6C8;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224E6D8:
	// bl 0x82120818
	ctx.lr = 0x8224E6DC;
	sub_82120818(ctx, base);
	// b 0x8224e778
	goto loc_8224E778;
loc_8224E6E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821b37c8
	ctx.lr = 0x8224E6F4;
	sub_821B37C8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e720
	if (ctx.cr6.eq) goto loc_8224E720;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E70C;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224e6d8
	goto loc_8224E6D8;
loc_8224E720:
	// lwz r11,-252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -252);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = ctx.r11.s64 + -252;
	// bl 0x82316160
	ctx.lr = 0x8224E740;
	sub_82316160(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e76c
	if (ctx.cr6.eq) goto loc_8224E76C;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E758;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8224e6d8
	goto loc_8224E6D8;
loc_8224E76C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8224E778:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224E668"))) PPC_WEAK_FUNC(sub_8224E668);
PPC_FUNC_IMPL(__imp__sub_8224E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224E670;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224E69C;
	sub_82317D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821b1098
	ctx.lr = 0x8224E6B0;
	sub_821B1098(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e6e0
	if (ctx.cr6.eq) goto loc_8224E6E0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E6C8;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224E6D8:
	// bl 0x82120818
	ctx.lr = 0x8224E6DC;
	sub_82120818(ctx, base);
	// b 0x8224e778
	goto loc_8224E778;
loc_8224E6E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821b37c8
	ctx.lr = 0x8224E6F4;
	sub_821B37C8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e720
	if (ctx.cr6.eq) goto loc_8224E720;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E70C;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224e6d8
	goto loc_8224E6D8;
loc_8224E720:
	// lwz r11,-252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -252);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = ctx.r11.s64 + -252;
	// bl 0x82316160
	ctx.lr = 0x8224E740;
	sub_82316160(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224e76c
	if (ctx.cr6.eq) goto loc_8224E76C;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224E758;
	sub_82317720(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e778
	if (ctx.cr0.eq) goto loc_8224E778;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8224e6d8
	goto loc_8224E6D8;
loc_8224E76C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8224E778:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224E784"))) PPC_WEAK_FUNC(sub_8224E784);
PPC_FUNC_IMPL(__imp__sub_8224E784) {
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
	ctx.lr = 0x8224E79C;
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

__attribute__((alias("__imp__sub_8224E7AC"))) PPC_WEAK_FUNC(sub_8224E7AC);
PPC_FUNC_IMPL(__imp__sub_8224E7AC) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x8224E7C4;
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

__attribute__((alias("__imp__sub_8224E7D4"))) PPC_WEAK_FUNC(sub_8224E7D4);
PPC_FUNC_IMPL(__imp__sub_8224E7D4) {
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
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82120868
	ctx.lr = 0x8224E7EC;
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

__attribute__((alias("__imp__sub_8224E7FC"))) PPC_WEAK_FUNC(sub_8224E7FC);
PPC_FUNC_IMPL(__imp__sub_8224E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E800"))) PPC_WEAK_FUNC(sub_8224E800);
PPC_FUNC_IMPL(__imp__sub_8224E800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,664(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba04
	ctx.lr = 0x8224E810;
	sub_8239BA04(ctx, base);
	// addi r31,r1,-384
	ctx.r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32137
	ctx.r29.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13156);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r23,r10,13148
	ctx.r23.s64 = ctx.r10.s64 + 13148;
	// bne 0x8224e86c
	if (!ctx.cr0.eq) goto loc_8224E86C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13156, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// bl 0x823559d8
	ctx.lr = 0x8224E84C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x8224E85C;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// bl 0x8239d4b8
	ctx.lr = 0x8224E868;
	sub_8239D4B8(ctx, base);
	// lwz r11,13156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13156);
loc_8224E86C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r24,r10,13140
	ctx.r24.s64 = ctx.r10.s64 + 13140;
	// bne 0x8224e8b0
	if (!ctx.cr0.eq) goto loc_8224E8B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13156, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// bl 0x823559d8
	ctx.lr = 0x8224E894;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x8224E8A4;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// bl 0x8239d4b8
	ctx.lr = 0x8224E8B0;
	sub_8239D4B8(ctx, base);
loc_8224E8B0:
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lwz r27,9828(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8224e8c8
	if (!ctx.cr0.eq) goto loc_8224E8C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8224e8d8
	goto loc_8224E8D8;
loc_8224E8C8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8224E8D8:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x821af8c8
	ctx.lr = 0x8224E908;
	sub_821AF8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239cb70
	ctx.lr = 0x8224E918;
	sub_8239CB70(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x821294a8
	ctx.lr = 0x8224E924;
	sub_821294A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// bl 0x8226a5d8
	ctx.lr = 0x8224E97C;
	sub_8226A5D8(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8226a5d8
	ctx.lr = 0x8224E98C;
	sub_8226A5D8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821294a8
	ctx.lr = 0x8224E998;
	sub_821294A8(ctx, base);
	// lwz r29,248(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821af740
	ctx.lr = 0x8224E9A4;
	sub_821AF740(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// bl 0x821af8c8
	ctx.lr = 0x8224E9B4;
	sub_821AF8C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8226a5d8
	ctx.lr = 0x8224E9C0;
	sub_8226A5D8(ctx, base);
	// lwz r3,248(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,224(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224eacc
	if (ctx.cr0.eq) goto loc_8224EACC;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r26,r11,1204
	ctx.r26.s64 = ctx.r11.s64 + 1204;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r25,r11,1640
	ctx.r25.s64 = ctx.r11.s64 + 1640;
loc_8224E9FC:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239c500
	ctx.lr = 0x8224EA18;
	sub_8239C500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224eaac
	if (ctx.cr0.eq) goto loc_8224EAAC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ea60
	if (ctx.cr0.eq) goto loc_8224EA60;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x8224EA60;
	sub_82120818(ctx, base);
loc_8224EA60:
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x821b2740
	ctx.lr = 0x8224EA68;
	sub_821B2740(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224eab4
	if (ctx.cr0.eq) goto loc_8224EAB4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x8224EAA8;
	sub_82120818(ctx, base);
	// b 0x8224eab4
	goto loc_8224EAB4;
loc_8224EAAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b2740
	ctx.lr = 0x8224EAB4;
	sub_821B2740(ctx, base);
loc_8224EAB4:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e9fc
	if (!ctx.cr0.eq) goto loc_8224E9FC;
loc_8224EACC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,384
	ctx.r1.s64 = ctx.r31.s64 + 384;
	// b 0x8239ba54
	// ERROR 8239BA54
	return;
}

__attribute__((alias("__imp__sub_8224E808"))) PPC_WEAK_FUNC(sub_8224E808);
PPC_FUNC_IMPL(__imp__sub_8224E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba04
	ctx.lr = 0x8224E810;
	sub_8239BA04(ctx, base);
	// addi r31,r1,-384
	ctx.r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32137
	ctx.r29.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13156);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r23,r10,13148
	ctx.r23.s64 = ctx.r10.s64 + 13148;
	// bne 0x8224e86c
	if (!ctx.cr0.eq) goto loc_8224E86C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13156, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// bl 0x823559d8
	ctx.lr = 0x8224E84C;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x8224E85C;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// bl 0x8239d4b8
	ctx.lr = 0x8224E868;
	sub_8239D4B8(ctx, base);
	// lwz r11,13156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13156);
loc_8224E86C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r24,r10,13140
	ctx.r24.s64 = ctx.r10.s64 + 13140;
	// bne 0x8224e8b0
	if (!ctx.cr0.eq) goto loc_8224E8B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13156, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// bl 0x823559d8
	ctx.lr = 0x8224E894;
	sub_823559D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82142658
	ctx.lr = 0x8224E8A4;
	sub_82142658(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// bl 0x8239d4b8
	ctx.lr = 0x8224E8B0;
	sub_8239D4B8(ctx, base);
loc_8224E8B0:
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lwz r27,9828(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8224e8c8
	if (!ctx.cr0.eq) goto loc_8224E8C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8224e8d8
	goto loc_8224E8D8;
loc_8224E8C8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8224E8D8:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x821af8c8
	ctx.lr = 0x8224E908;
	sub_821AF8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239cb70
	ctx.lr = 0x8224E918;
	sub_8239CB70(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x821294a8
	ctx.lr = 0x8224E924;
	sub_821294A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// bl 0x8226a5d8
	ctx.lr = 0x8224E97C;
	sub_8226A5D8(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8226a5d8
	ctx.lr = 0x8224E98C;
	sub_8226A5D8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821294a8
	ctx.lr = 0x8224E998;
	sub_821294A8(ctx, base);
	// lwz r29,248(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821af740
	ctx.lr = 0x8224E9A4;
	sub_821AF740(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// bl 0x821af8c8
	ctx.lr = 0x8224E9B4;
	sub_821AF8C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8226a5d8
	ctx.lr = 0x8224E9C0;
	sub_8226A5D8(ctx, base);
	// lwz r3,248(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,224(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224eacc
	if (ctx.cr0.eq) goto loc_8224EACC;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r26,r11,1204
	ctx.r26.s64 = ctx.r11.s64 + 1204;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r25,r11,1640
	ctx.r25.s64 = ctx.r11.s64 + 1640;
loc_8224E9FC:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239c500
	ctx.lr = 0x8224EA18;
	sub_8239C500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224eaac
	if (ctx.cr0.eq) goto loc_8224EAAC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ea60
	if (ctx.cr0.eq) goto loc_8224EA60;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120818
	ctx.lr = 0x8224EA60;
	sub_82120818(ctx, base);
loc_8224EA60:
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x821b2740
	ctx.lr = 0x8224EA68;
	sub_821B2740(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224eab4
	if (ctx.cr0.eq) goto loc_8224EAB4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82120818
	ctx.lr = 0x8224EAA8;
	sub_82120818(ctx, base);
	// b 0x8224eab4
	goto loc_8224EAB4;
loc_8224EAAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b2740
	ctx.lr = 0x8224EAB4;
	sub_821B2740(ctx, base);
loc_8224EAB4:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e9fc
	if (!ctx.cr0.eq) goto loc_8224E9FC;
loc_8224EACC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,384
	ctx.r1.s64 = ctx.r31.s64 + 384;
	// b 0x8239ba54
	// ERROR 8239BA54
	return;
}

__attribute__((alias("__imp__sub_8224EAE8"))) PPC_WEAK_FUNC(sub_8224EAE8);
PPC_FUNC_IMPL(__imp__sub_8224EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13156
	ctx.r11.s64 = ctx.r11.s64 + 13156;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13156
	ctx.r10.s64 = ctx.r10.s64 + 13156;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224EB10"))) PPC_WEAK_FUNC(sub_8224EB10);
PPC_FUNC_IMPL(__imp__sub_8224EB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13156
	ctx.r11.s64 = ctx.r11.s64 + 13156;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13156
	ctx.r10.s64 = ctx.r10.s64 + 13156;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224EB38"))) PPC_WEAK_FUNC(sub_8224EB38);
PPC_FUNC_IMPL(__imp__sub_8224EB38) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82359068
	ctx.lr = 0x8224EB6C;
	sub_82359068(ctx, base);
	// lwz r11,-252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -252);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// bl 0x82314d30
	ctx.lr = 0x8224EB84;
	sub_82314D30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x821afac0
	ctx.lr = 0x8224EB90;
	sub_821AFAC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-216
	ctx.r3.s64 = ctx.r31.s64 + -216;
	// bl 0x821b2958
	ctx.lr = 0x8224EB9C;
	sub_821B2958(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359068
	ctx.lr = 0x8224EBB4;
	sub_82359068(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220b8e0
	ctx.lr = 0x8224EBC0;
	sub_8220B8E0(ctx, base);
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

__attribute__((alias("__imp__sub_8224EBD8"))) PPC_WEAK_FUNC(sub_8224EBD8);
PPC_FUNC_IMPL(__imp__sub_8224EBD8) {
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
	// b 0x8224ec08
	goto loc_8224EC08;
loc_8224EBF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354cb0
	ctx.lr = 0x8224EC08;
	sub_82354CB0(ctx, base);
loc_8224EC08:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224ebf8
	if (!ctx.cr6.eq) goto loc_8224EBF8;
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

__attribute__((alias("__imp__sub_8224EC30"))) PPC_WEAK_FUNC(sub_8224EC30);
PPC_FUNC_IMPL(__imp__sub_8224EC30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,13160
	ctx.r4.s64 = ctx.r11.s64 + 13160;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224EC60;
	sub_82359028(ctx, base);
	// lwz r11,-252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -252);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// bl 0x82315088
	ctx.lr = 0x8224EC78;
	sub_82315088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x821b0968
	ctx.lr = 0x8224EC84;
	sub_821B0968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-216
	ctx.r3.s64 = ctx.r31.s64 + -216;
	// bl 0x821b3600
	ctx.lr = 0x8224EC90;
	sub_821B3600(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359028
	ctx.lr = 0x8224ECA0;
	sub_82359028(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821539e0
	ctx.lr = 0x8224ECAC;
	sub_821539E0(ctx, base);
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

__attribute__((alias("__imp__sub_8224ECC4"))) PPC_WEAK_FUNC(sub_8224ECC4);
PPC_FUNC_IMPL(__imp__sub_8224ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224ECC8"))) PPC_WEAK_FUNC(sub_8224ECC8);
PPC_FUNC_IMPL(__imp__sub_8224ECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,784(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224ECD8;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x8224ED00;
	sub_82317D30(ctx, base);
	// lis r30,-32137
	ctx.r30.s64 = -2106130432;
	// lwz r11,13172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13172);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13168
	ctx.r28.s64 = ctx.r10.s64 + 13168;
	// bne 0x8224ed34
	if (!ctx.cr0.eq) goto loc_8224ED34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13172, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// bl 0x823559d8
	ctx.lr = 0x8224ED30;
	sub_823559D8(ctx, base);
	// lwz r11,13172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13172);
loc_8224ED34:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224ed68
	if (ctx.cr0.eq) goto loc_8224ED68;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = ctx.r27.s64 + -20;
	// bl 0x8212de08
	ctx.lr = 0x8224ED64;
	sub_8212DE08(ctx, base);
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224ED68:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13164
	ctx.r28.s64 = ctx.r10.s64 + 13164;
	// bne 0x8224ed90
	if (!ctx.cr0.eq) goto loc_8224ED90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13172, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// bl 0x823559d8
	ctx.lr = 0x8224ED90;
	sub_823559D8(ctx, base);
loc_8224ED90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224edc4
	if (ctx.cr0.eq) goto loc_8224EDC4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,-40
	ctx.r3.s64 = ctx.r27.s64 + -40;
	// bl 0x8220bcb8
	ctx.lr = 0x8224EDC0;
	sub_8220BCB8(ctx, base);
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224EDC4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,-36
	ctx.r3.s64 = ctx.r27.s64 + -36;
	// bl 0x821aeb88
	ctx.lr = 0x8224EDD8;
	sub_821AEB88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ede8
	if (ctx.cr0.eq) goto loc_8224EDE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224EDE8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,-216
	ctx.r3.s64 = ctx.r27.s64 + -216;
	// bl 0x821b3360
	ctx.lr = 0x8224EDFC;
	sub_821B3360(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8224EE0C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224ECD0"))) PPC_WEAK_FUNC(sub_8224ECD0);
PPC_FUNC_IMPL(__imp__sub_8224ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba0c
	ctx.lr = 0x8224ECD8;
	sub_8239BA0C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82317d30
	ctx.lr = 0x8224ED00;
	sub_82317D30(ctx, base);
	// lis r30,-32137
	ctx.r30.s64 = -2106130432;
	// lwz r11,13172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13172);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13168
	ctx.r28.s64 = ctx.r10.s64 + 13168;
	// bne 0x8224ed34
	if (!ctx.cr0.eq) goto loc_8224ED34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13172, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// bl 0x823559d8
	ctx.lr = 0x8224ED30;
	sub_823559D8(ctx, base);
	// lwz r11,13172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13172);
loc_8224ED34:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224ed68
	if (ctx.cr0.eq) goto loc_8224ED68;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = ctx.r27.s64 + -20;
	// bl 0x8212de08
	ctx.lr = 0x8224ED64;
	sub_8212DE08(ctx, base);
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224ED68:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r28,r10,13164
	ctx.r28.s64 = ctx.r10.s64 + 13164;
	// bne 0x8224ed90
	if (!ctx.cr0.eq) goto loc_8224ED90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,13172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13172, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// bl 0x823559d8
	ctx.lr = 0x8224ED90;
	sub_823559D8(ctx, base);
loc_8224ED90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224edc4
	if (ctx.cr0.eq) goto loc_8224EDC4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,-40
	ctx.r3.s64 = ctx.r27.s64 + -40;
	// bl 0x8220bcb8
	ctx.lr = 0x8224EDC0;
	sub_8220BCB8(ctx, base);
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224EDC4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,-36
	ctx.r3.s64 = ctx.r27.s64 + -36;
	// bl 0x821aeb88
	ctx.lr = 0x8224EDD8;
	sub_821AEB88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ede8
	if (ctx.cr0.eq) goto loc_8224EDE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224ee0c
	goto loc_8224EE0C;
loc_8224EDE8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,-216
	ctx.r3.s64 = ctx.r27.s64 + -216;
	// bl 0x821b3360
	ctx.lr = 0x8224EDFC;
	sub_821B3360(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8224EE0C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba5c
	// ERROR 8239BA5C
	return;
}

__attribute__((alias("__imp__sub_8224EE14"))) PPC_WEAK_FUNC(sub_8224EE14);
PPC_FUNC_IMPL(__imp__sub_8224EE14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13172
	ctx.r11.s64 = ctx.r11.s64 + 13172;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13172
	ctx.r10.s64 = ctx.r10.s64 + 13172;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224EE3C"))) PPC_WEAK_FUNC(sub_8224EE3C);
PPC_FUNC_IMPL(__imp__sub_8224EE3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13172
	ctx.r11.s64 = ctx.r11.s64 + 13172;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13172
	ctx.r10.s64 = ctx.r10.s64 + 13172;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224EE64"))) PPC_WEAK_FUNC(sub_8224EE64);
PPC_FUNC_IMPL(__imp__sub_8224EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EE68"))) PPC_WEAK_FUNC(sub_8224EE68);
PPC_FUNC_IMPL(__imp__sub_8224EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224EE70;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// bl 0x82314f90
	ctx.lr = 0x8224EE94;
	sub_82314F90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x821b0848
	ctx.lr = 0x8224EEA4;
	sub_821B0848(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-216
	ctx.r3.s64 = ctx.r31.s64 + -216;
	// bl 0x821b2878
	ctx.lr = 0x8224EEB4;
	sub_821B2878(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,16928
	ctx.r6.s64 = ctx.r11.s64 + 16928;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = ctx.r11.s64 + 920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239c500
	ctx.lr = 0x8224EED4;
	sub_8239C500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224eef0
	if (ctx.cr0.eq) goto loc_8224EEF0;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// lfs f0,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// bl 0x8220bbe8
	ctx.lr = 0x8224EEF0;
	sub_8220BBE8(ctx, base);
loc_8224EEF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224EEF8"))) PPC_WEAK_FUNC(sub_8224EEF8);
PPC_FUNC_IMPL(__imp__sub_8224EEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224ebd8
	sub_8224EBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224EEFC"))) PPC_WEAK_FUNC(sub_8224EEFC);
PPC_FUNC_IMPL(__imp__sub_8224EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EF00"))) PPC_WEAK_FUNC(sub_8224EF00);
PPC_FUNC_IMPL(__imp__sub_8224EF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1048(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224EF10;
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
	// beq cr6,0x8224ef8c
	if (ctx.cr6.eq) goto loc_8224EF8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,1004
	ctx.r11.s64 = ctx.r11.s64 + 1004;
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// addi r9,r9,984
	ctx.r9.s64 = ctx.r9.s64 + 984;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// bl 0x82317430
	ctx.lr = 0x8224EF5C;
	sub_82317430(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
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
loc_8224EF8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2d10
	ctx.lr = 0x8224EF98;
	sub_821B2D10(ctx, base);
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b20e0
	ctx.lr = 0x8224EFA8;
	sub_821B20E0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// addi r10,r10,940
	ctx.r10.s64 = ctx.r10.s64 + 940;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,876
	ctx.r9.s64 = ctx.r9.s64 + 876;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r8,r8,868
	ctx.r8.s64 = ctx.r8.s64 + 868;
	// addi r10,r11,-21064
	ctx.r10.s64 = ctx.r11.s64 + -21064;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,-252
	ctx.r9.s64 = ctx.r11.s64 + -252;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r11,-296
	ctx.r9.s64 = ctx.r11.s64 + -296;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r29.u32);
	// stw r29,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r29.u32);
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r30,240
	ctx.r11.s64 = ctx.r30.s64 + 240;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lfs f0,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-4704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4704);
	// bl 0x821e48c8
	ctx.lr = 0x8224F078;
	sub_821E48C8(ctx, base);
	// stw r3,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224EF08"))) PPC_WEAK_FUNC(sub_8224EF08);
PPC_FUNC_IMPL(__imp__sub_8224EF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba18
	ctx.lr = 0x8224EF10;
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
	// beq cr6,0x8224ef8c
	if (ctx.cr6.eq) goto loc_8224EF8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,1004
	ctx.r11.s64 = ctx.r11.s64 + 1004;
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// addi r9,r9,984
	ctx.r9.s64 = ctx.r9.s64 + 984;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// bl 0x82317430
	ctx.lr = 0x8224EF5C;
	sub_82317430(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
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
loc_8224EF8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2d10
	ctx.lr = 0x8224EF98;
	sub_821B2D10(ctx, base);
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b20e0
	ctx.lr = 0x8224EFA8;
	sub_821B20E0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// addi r10,r10,940
	ctx.r10.s64 = ctx.r10.s64 + 940;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,876
	ctx.r9.s64 = ctx.r9.s64 + 876;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r8,r8,868
	ctx.r8.s64 = ctx.r8.s64 + 868;
	// addi r10,r11,-21064
	ctx.r10.s64 = ctx.r11.s64 + -21064;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,-252
	ctx.r9.s64 = ctx.r11.s64 + -252;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r11,-296
	ctx.r9.s64 = ctx.r11.s64 + -296;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r29.u32);
	// stw r29,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r29.u32);
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r30,240
	ctx.r11.s64 = ctx.r30.s64 + 240;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lfs f0,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,-4704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4704);
	// bl 0x821e48c8
	ctx.lr = 0x8224F078;
	sub_821E48C8(ctx, base);
	// stw r3,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8239ba68
	// ERROR 8239BA68
	return;
}

__attribute__((alias("__imp__sub_8224F088"))) PPC_WEAK_FUNC(sub_8224F088);
PPC_FUNC_IMPL(__imp__sub_8224F088) {
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
	// beq 0x8224f0bc
	if (ctx.cr0.eq) goto loc_8224F0BC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// bl 0x82317498
	ctx.lr = 0x8224F0BC;
	sub_82317498(ctx, base);
loc_8224F0BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F0CC"))) PPC_WEAK_FUNC(sub_8224F0CC);
PPC_FUNC_IMPL(__imp__sub_8224F0CC) {
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
	// addi r3,r11,220
	ctx.r3.s64 = ctx.r11.s64 + 220;
	// bl 0x821b2438
	ctx.lr = 0x8224F0E8;
	sub_821B2438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F0F8"))) PPC_WEAK_FUNC(sub_8224F0F8);
PPC_FUNC_IMPL(__imp__sub_8224F0F8) {
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
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// bl 0x82153810
	ctx.lr = 0x8224F114;
	sub_82153810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F124"))) PPC_WEAK_FUNC(sub_8224F124);
PPC_FUNC_IMPL(__imp__sub_8224F124) {
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
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x8224eef8
	ctx.lr = 0x8224F140;
	sub_8224EEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F150"))) PPC_WEAK_FUNC(sub_8224F150);
PPC_FUNC_IMPL(__imp__sub_8224F150) {
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
	// bl 0x82224328
	ctx.lr = 0x8224F168;
	sub_82224328(ctx, base);
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

__attribute__((alias("__imp__sub_8224F180"))) PPC_WEAK_FUNC(sub_8224F180);
PPC_FUNC_IMPL(__imp__sub_8224F180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224f530
	sub_8224F530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F18C"))) PPC_WEAK_FUNC(sub_8224F18C);
PPC_FUNC_IMPL(__imp__sub_8224F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F190"))) PPC_WEAK_FUNC(sub_8224F190);
PPC_FUNC_IMPL(__imp__sub_8224F190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x8224f150
	sub_8224F150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F19C"))) PPC_WEAK_FUNC(sub_8224F19C);
PPC_FUNC_IMPL(__imp__sub_8224F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F1A0"))) PPC_WEAK_FUNC(sub_8224F1A0);
PPC_FUNC_IMPL(__imp__sub_8224F1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82129b70
	sub_82129B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F1AC"))) PPC_WEAK_FUNC(sub_8224F1AC);
PPC_FUNC_IMPL(__imp__sub_8224F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F1B0"))) PPC_WEAK_FUNC(sub_8224F1B0);
PPC_FUNC_IMPL(__imp__sub_8224F1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1120(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224F1C0;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224f234
	if (!ctx.cr0.eq) goto loc_8224F234;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13180, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224F1FC;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82224328
	ctx.lr = 0x8224F208;
	sub_82224328(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224F21C;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224F22C;
	sub_82270D08(ctx, base);
	// stw r3,13176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13176, ctx.r3.u32);
	// b 0x8224f238
	goto loc_8224F238;
loc_8224F234:
	// lwz r3,13176(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13176);
loc_8224F238:
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
	// beq 0x8224f274
	if (ctx.cr0.eq) goto loc_8224F274;
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224f2f0
	goto loc_8224F2F0;
loc_8224F274:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224F280;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224f2d4
	if (!ctx.cr0.eq) goto loc_8224F2D4;
	// addic. r11,r30,-256
	ctx.xer.ca = ctx.r30.u32 > 255;
	ctx.r11.s64 = ctx.r30.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f298
	if (!ctx.cr0.eq) goto loc_8224F298;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224f2a8
	goto loc_8224F2A8;
loc_8224F298:
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
loc_8224F2A8:
	// bl 0x8231c700
	ctx.lr = 0x8224F2AC;
	sub_8231C700(ctx, base);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224F2D4:
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224F2F0:
	// bctrl 
	ctx.lr = 0x8224F2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224F1B8"))) PPC_WEAK_FUNC(sub_8224F1B8);
PPC_FUNC_IMPL(__imp__sub_8224F1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224F1C0;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224f234
	if (!ctx.cr0.eq) goto loc_8224F234;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13180, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224F1FC;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82224328
	ctx.lr = 0x8224F208;
	sub_82224328(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224F21C;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224F22C;
	sub_82270D08(ctx, base);
	// stw r3,13176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13176, ctx.r3.u32);
	// b 0x8224f238
	goto loc_8224F238;
loc_8224F234:
	// lwz r3,13176(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13176);
loc_8224F238:
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
	// beq 0x8224f274
	if (ctx.cr0.eq) goto loc_8224F274;
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224f2f0
	goto loc_8224F2F0;
loc_8224F274:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224F280;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224f2d4
	if (!ctx.cr0.eq) goto loc_8224F2D4;
	// addic. r11,r30,-256
	ctx.xer.ca = ctx.r30.u32 > 255;
	ctx.r11.s64 = ctx.r30.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f298
	if (!ctx.cr0.eq) goto loc_8224F298;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224f2a8
	goto loc_8224F2A8;
loc_8224F298:
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
loc_8224F2A8:
	// bl 0x8231c700
	ctx.lr = 0x8224F2AC;
	sub_8231C700(ctx, base);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224F2D4:
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224F2F0:
	// bctrl 
	ctx.lr = 0x8224F2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224F2FC"))) PPC_WEAK_FUNC(sub_8224F2FC);
PPC_FUNC_IMPL(__imp__sub_8224F2FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13180
	ctx.r11.s64 = ctx.r11.s64 + 13180;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13180
	ctx.r10.s64 = ctx.r10.s64 + 13180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F324"))) PPC_WEAK_FUNC(sub_8224F324);
PPC_FUNC_IMPL(__imp__sub_8224F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F328"))) PPC_WEAK_FUNC(sub_8224F328);
PPC_FUNC_IMPL(__imp__sub_8224F328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224f1b8
	sub_8224F1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F334"))) PPC_WEAK_FUNC(sub_8224F334);
PPC_FUNC_IMPL(__imp__sub_8224F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F338"))) PPC_WEAK_FUNC(sub_8224F338);
PPC_FUNC_IMPL(__imp__sub_8224F338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x8224e668
	sub_8224E668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F344"))) PPC_WEAK_FUNC(sub_8224F344);
PPC_FUNC_IMPL(__imp__sub_8224F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F348"))) PPC_WEAK_FUNC(sub_8224F348);
PPC_FUNC_IMPL(__imp__sub_8224F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224eb38
	sub_8224EB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F354"))) PPC_WEAK_FUNC(sub_8224F354);
PPC_FUNC_IMPL(__imp__sub_8224F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F358"))) PPC_WEAK_FUNC(sub_8224F358);
PPC_FUNC_IMPL(__imp__sub_8224F358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224ec30
	sub_8224EC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F364"))) PPC_WEAK_FUNC(sub_8224F364);
PPC_FUNC_IMPL(__imp__sub_8224F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F368"))) PPC_WEAK_FUNC(sub_8224F368);
PPC_FUNC_IMPL(__imp__sub_8224F368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224ecd0
	sub_8224ECD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F374"))) PPC_WEAK_FUNC(sub_8224F374);
PPC_FUNC_IMPL(__imp__sub_8224F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F378"))) PPC_WEAK_FUNC(sub_8224F378);
PPC_FUNC_IMPL(__imp__sub_8224F378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8224ee68
	sub_8224EE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F384"))) PPC_WEAK_FUNC(sub_8224F384);
PPC_FUNC_IMPL(__imp__sub_8224F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F388"))) PPC_WEAK_FUNC(sub_8224F388);
PPC_FUNC_IMPL(__imp__sub_8224F388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1208(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224F398;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r30,-220
	ctx.r29.s64 = ctx.r30.s64 + -220;
	// addi r10,r10,940
	ctx.r10.s64 = ctx.r10.s64 + 940;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,-256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -256, ctx.r11.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// addi r9,r9,876
	ctx.r9.s64 = ctx.r9.s64 + 876;
	// addi r8,r8,868
	ctx.r8.s64 = ctx.r8.s64 + 868;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r9.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r8.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-252
	ctx.r10.s64 = ctx.r11.s64 + -252;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-296
	ctx.r10.s64 = ctx.r11.s64 + -296;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224f44c
	if (ctx.cr0.eq) goto loc_8224F44C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F44C:
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8224ebd8
	ctx.lr = 0x8224F454;
	sub_8224EBD8(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x82153810
	ctx.lr = 0x8224F45C;
	sub_82153810(ctx, base);
	// addic. r11,r30,-256
	ctx.xer.ca = ctx.r30.u32 > 255;
	ctx.r11.s64 = ctx.r30.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f468
	if (!ctx.cr0.eq) goto loc_8224F468;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8224F468:
	// addi r3,r29,184
	ctx.r3.s64 = ctx.r29.s64 + 184;
	// bl 0x821b2438
	ctx.lr = 0x8224F470;
	sub_821B2438(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224F390"))) PPC_WEAK_FUNC(sub_8224F390);
PPC_FUNC_IMPL(__imp__sub_8224F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224F398;
	sub_8239BA1C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r30,-220
	ctx.r29.s64 = ctx.r30.s64 + -220;
	// addi r10,r10,940
	ctx.r10.s64 = ctx.r10.s64 + 940;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,-256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -256, ctx.r11.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// addi r9,r9,876
	ctx.r9.s64 = ctx.r9.s64 + 876;
	// addi r8,r8,868
	ctx.r8.s64 = ctx.r8.s64 + 868;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r9.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r8.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-252
	ctx.r10.s64 = ctx.r11.s64 + -252;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-296
	ctx.r10.s64 = ctx.r11.s64 + -296;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224f44c
	if (ctx.cr0.eq) goto loc_8224F44C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F44C:
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8224ebd8
	ctx.lr = 0x8224F454;
	sub_8224EBD8(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x82153810
	ctx.lr = 0x8224F45C;
	sub_82153810(ctx, base);
	// addic. r11,r30,-256
	ctx.xer.ca = ctx.r30.u32 > 255;
	ctx.r11.s64 = ctx.r30.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f468
	if (!ctx.cr0.eq) goto loc_8224F468;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8224F468:
	// addi r3,r29,184
	ctx.r3.s64 = ctx.r29.s64 + 184;
	// bl 0x821b2438
	ctx.lr = 0x8224F470;
	sub_821B2438(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224F478"))) PPC_WEAK_FUNC(sub_8224F478);
PPC_FUNC_IMPL(__imp__sub_8224F478) {
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f4a8
	if (ctx.cr0.eq) goto loc_8224F4A8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x8224f4b0
	goto loc_8224F4B0;
loc_8224F4A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8224F4B0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x821b2438
	ctx.lr = 0x8224F4BC;
	sub_821B2438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F4CC"))) PPC_WEAK_FUNC(sub_8224F4CC);
PPC_FUNC_IMPL(__imp__sub_8224F4CC) {
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// bl 0x82153810
	ctx.lr = 0x8224F4EC;
	sub_82153810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F4FC"))) PPC_WEAK_FUNC(sub_8224F4FC);
PPC_FUNC_IMPL(__imp__sub_8224F4FC) {
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x8224eef8
	ctx.lr = 0x8224F51C;
	sub_8224EEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F52C"))) PPC_WEAK_FUNC(sub_8224F52C);
PPC_FUNC_IMPL(__imp__sub_8224F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F530"))) PPC_WEAK_FUNC(sub_8224F530);
PPC_FUNC_IMPL(__imp__sub_8224F530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba1c
	ctx.lr = 0x8224F538;
	sub_8239BA1C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-256
	ctx.r30.s64 = ctx.r3.s64 + -256;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,256
	ctx.r31.s64 = ctx.r30.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f390
	ctx.lr = 0x8224F550;
	sub_8224F390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317498
	ctx.lr = 0x8224F558;
	sub_82317498(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f568
	if (ctx.cr0.eq) goto loc_8224F568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823547d8
	ctx.lr = 0x8224F568;
	sub_823547D8(ctx, base);
loc_8224F568:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239ba6c
	// ERROR 8239BA6C
	return;
}

__attribute__((alias("__imp__sub_8224F574"))) PPC_WEAK_FUNC(sub_8224F574);
PPC_FUNC_IMPL(__imp__sub_8224F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F578"))) PPC_WEAK_FUNC(sub_8224F578);
PPC_FUNC_IMPL(__imp__sub_8224F578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1312(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1292
	ctx.r11.s64 = ctx.r11.s64 + 1292;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224f5d0
	if (ctx.cr0.eq) goto loc_8224F5D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823160b0
	ctx.lr = 0x8224F5D0;
	sub_823160B0(ctx, base);
loc_8224F5D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8268
	ctx.r11.s64 = ctx.r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8224F580"))) PPC_WEAK_FUNC(sub_8224F580);
PPC_FUNC_IMPL(__imp__sub_8224F580) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1292
	ctx.r11.s64 = ctx.r11.s64 + 1292;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224f5d0
	if (ctx.cr0.eq) goto loc_8224F5D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823160b0
	ctx.lr = 0x8224F5D0;
	sub_823160B0(ctx, base);
loc_8224F5D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8268
	ctx.r11.s64 = ctx.r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8224F5F4"))) PPC_WEAK_FUNC(sub_8224F5F4);
PPC_FUNC_IMPL(__imp__sub_8224F5F4) {
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
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82126720
	ctx.lr = 0x8224F60C;
	sub_82126720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F61C"))) PPC_WEAK_FUNC(sub_8224F61C);
PPC_FUNC_IMPL(__imp__sub_8224F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F620"))) PPC_WEAK_FUNC(sub_8224F620);
PPC_FUNC_IMPL(__imp__sub_8224F620) {
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
	// bl 0x8224f580
	ctx.lr = 0x8224F640;
	sub_8224F580(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f650
	if (ctx.cr0.eq) goto loc_8224F650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1b98
	ctx.lr = 0x8224F650;
	sub_821E1B98(ctx, base);
loc_8224F650:
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

__attribute__((alias("__imp__sub_8224F66C"))) PPC_WEAK_FUNC(sub_8224F66C);
PPC_FUNC_IMPL(__imp__sub_8224F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F670"))) PPC_WEAK_FUNC(sub_8224F670);
PPC_FUNC_IMPL(__imp__sub_8224F670) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f6dc
	if (ctx.cr6.eq) goto loc_8224F6DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224f6b8
	if (ctx.cr6.eq) goto loc_8224F6B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823160b0
	ctx.lr = 0x8224F6B8;
	sub_823160B0(ctx, base);
loc_8224F6B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8224f6dc
	if (ctx.cr6.eq) goto loc_8224F6DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823171b8
	ctx.lr = 0x8224F6DC;
	sub_823171B8(ctx, base);
loc_8224F6DC:
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

__attribute__((alias("__imp__sub_8224F6F4"))) PPC_WEAK_FUNC(sub_8224F6F4);
PPC_FUNC_IMPL(__imp__sub_8224F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F6F8"))) PPC_WEAK_FUNC(sub_8224F6F8);
PPC_FUNC_IMPL(__imp__sub_8224F6F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f580
	sub_8224F580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F6FC"))) PPC_WEAK_FUNC(sub_8224F6FC);
PPC_FUNC_IMPL(__imp__sub_8224F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F700"))) PPC_WEAK_FUNC(sub_8224F700);
PPC_FUNC_IMPL(__imp__sub_8224F700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1496(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1428
	ctx.r11.s64 = ctx.r11.s64 + 1428;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,1364
	ctx.r10.s64 = ctx.r10.s64 + 1364;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,-112(r30)
	PPC_STORE_U32(ctx.r30.u32 + -112, ctx.r11.u32);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r10.u32);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-108
	ctx.r10.s64 = ctx.r11.s64 + -108;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -112, ctx.r10.u32);
	// lwz r3,-104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f780
	if (ctx.cr0.eq) goto loc_8224F780;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F780:
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f7a0
	if (ctx.cr0.eq) goto loc_8224F7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F7A0:
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x821c5490
	ctx.lr = 0x8224F7A8;
	sub_821C5490(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x8213d670
	ctx.lr = 0x8224F7B0;
	sub_8213D670(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x82129760
	ctx.lr = 0x8224F7B8;
	sub_82129760(ctx, base);
	// addi r3,r30,-76
	ctx.r3.s64 = ctx.r30.s64 + -76;
	// bl 0x8224f580
	ctx.lr = 0x8224F7C0;
	sub_8224F580(ctx, base);
	// addi r3,r30,-88
	ctx.r3.s64 = ctx.r30.s64 + -88;
	// bl 0x8224f580
	ctx.lr = 0x8224F7C8;
	sub_8224F580(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = ctx.r30.s64 + -100;
	// bl 0x82126780
	ctx.lr = 0x8224F7D0;
	sub_82126780(ctx, base);
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

__attribute__((alias("__imp__sub_8224F708"))) PPC_WEAK_FUNC(sub_8224F708);
PPC_FUNC_IMPL(__imp__sub_8224F708) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1428
	ctx.r11.s64 = ctx.r11.s64 + 1428;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,1364
	ctx.r10.s64 = ctx.r10.s64 + 1364;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,-112(r30)
	PPC_STORE_U32(ctx.r30.u32 + -112, ctx.r11.u32);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r10.u32);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-108
	ctx.r10.s64 = ctx.r11.s64 + -108;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -112, ctx.r10.u32);
	// lwz r3,-104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f780
	if (ctx.cr0.eq) goto loc_8224F780;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F780:
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f7a0
	if (ctx.cr0.eq) goto loc_8224F7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F7A0:
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x821c5490
	ctx.lr = 0x8224F7A8;
	sub_821C5490(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x8213d670
	ctx.lr = 0x8224F7B0;
	sub_8213D670(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x82129760
	ctx.lr = 0x8224F7B8;
	sub_82129760(ctx, base);
	// addi r3,r30,-76
	ctx.r3.s64 = ctx.r30.s64 + -76;
	// bl 0x8224f580
	ctx.lr = 0x8224F7C0;
	sub_8224F580(ctx, base);
	// addi r3,r30,-88
	ctx.r3.s64 = ctx.r30.s64 + -88;
	// bl 0x8224f580
	ctx.lr = 0x8224F7C8;
	sub_8224F580(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = ctx.r30.s64 + -100;
	// bl 0x82126780
	ctx.lr = 0x8224F7D0;
	sub_82126780(ctx, base);
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

__attribute__((alias("__imp__sub_8224F7E8"))) PPC_WEAK_FUNC(sub_8224F7E8);
PPC_FUNC_IMPL(__imp__sub_8224F7E8) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82126f00
	ctx.lr = 0x8224F808;
	sub_82126F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F818"))) PPC_WEAK_FUNC(sub_8224F818);
PPC_FUNC_IMPL(__imp__sub_8224F818) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8224f6f8
	ctx.lr = 0x8224F838;
	sub_8224F6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F848"))) PPC_WEAK_FUNC(sub_8224F848);
PPC_FUNC_IMPL(__imp__sub_8224F848) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x8224f6f8
	ctx.lr = 0x8224F868;
	sub_8224F6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F878"))) PPC_WEAK_FUNC(sub_8224F878);
PPC_FUNC_IMPL(__imp__sub_8224F878) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82129990
	ctx.lr = 0x8224F898;
	sub_82129990(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F8A8"))) PPC_WEAK_FUNC(sub_8224F8A8);
PPC_FUNC_IMPL(__imp__sub_8224F8A8) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x8213df70
	ctx.lr = 0x8224F8C8;
	sub_8213DF70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F8D8"))) PPC_WEAK_FUNC(sub_8224F8D8);
PPC_FUNC_IMPL(__imp__sub_8224F8D8) {
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
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x821c7408
	ctx.lr = 0x8224F8F8;
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224F908"))) PPC_WEAK_FUNC(sub_8224F908);
PPC_FUNC_IMPL(__imp__sub_8224F908) {
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
	// bl 0x822243b0
	ctx.lr = 0x8224F920;
	sub_822243B0(ctx, base);
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

__attribute__((alias("__imp__sub_8224F938"))) PPC_WEAK_FUNC(sub_8224F938);
PPC_FUNC_IMPL(__imp__sub_8224F938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82250ed0
	sub_82250ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F944"))) PPC_WEAK_FUNC(sub_8224F944);
PPC_FUNC_IMPL(__imp__sub_8224F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F948"))) PPC_WEAK_FUNC(sub_8224F948);
PPC_FUNC_IMPL(__imp__sub_8224F948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x8224f908
	sub_8224F908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F954"))) PPC_WEAK_FUNC(sub_8224F954);
PPC_FUNC_IMPL(__imp__sub_8224F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F958"))) PPC_WEAK_FUNC(sub_8224F958);
PPC_FUNC_IMPL(__imp__sub_8224F958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1600(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224F968;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224f9dc
	if (!ctx.cr0.eq) goto loc_8224F9DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13188, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224F9A4;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822243b0
	ctx.lr = 0x8224F9B0;
	sub_822243B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224F9C4;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224F9D4;
	sub_82270D08(ctx, base);
	// stw r3,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r3.u32);
	// b 0x8224f9e0
	goto loc_8224F9E0;
loc_8224F9DC:
	// lwz r3,13184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
loc_8224F9E0:
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
	// beq 0x8224fa1c
	if (ctx.cr0.eq) goto loc_8224FA1C;
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224fa98
	goto loc_8224FA98;
loc_8224FA1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224FA28;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224fa7c
	if (!ctx.cr0.eq) goto loc_8224FA7C;
	// addic. r11,r30,-112
	ctx.xer.ca = ctx.r30.u32 > 111;
	ctx.r11.s64 = ctx.r30.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224fa40
	if (!ctx.cr0.eq) goto loc_8224FA40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224fa50
	goto loc_8224FA50;
loc_8224FA40:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
loc_8224FA50:
	// bl 0x8231c700
	ctx.lr = 0x8224FA54;
	sub_8231C700(ctx, base);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224FA7C:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224FA98:
	// bctrl 
	ctx.lr = 0x8224FA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224F960"))) PPC_WEAK_FUNC(sub_8224F960);
PPC_FUNC_IMPL(__imp__sub_8224F960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba10
	ctx.lr = 0x8224F968;
	sub_8239BA10(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// lwz r11,13188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224f9dc
	if (!ctx.cr0.eq) goto loc_8224F9DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13188, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x823559d8
	ctx.lr = 0x8224F9A4;
	sub_823559D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x822243b0
	ctx.lr = 0x8224F9B0;
	sub_822243B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823559d8
	ctx.lr = 0x8224F9C4;
	sub_823559D8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d08
	ctx.lr = 0x8224F9D4;
	sub_82270D08(ctx, base);
	// stw r3,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r3.u32);
	// b 0x8224f9e0
	goto loc_8224F9E0;
loc_8224F9DC:
	// lwz r3,13184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
loc_8224F9E0:
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
	// beq 0x8224fa1c
	if (ctx.cr0.eq) goto loc_8224FA1C;
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8224fa98
	goto loc_8224FA98;
loc_8224FA1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82319250
	ctx.lr = 0x8224FA28;
	sub_82319250(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8224fa7c
	if (!ctx.cr0.eq) goto loc_8224FA7C;
	// addic. r11,r30,-112
	ctx.xer.ca = ctx.r30.u32 > 111;
	ctx.r11.s64 = ctx.r30.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224fa40
	if (!ctx.cr0.eq) goto loc_8224FA40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224fa50
	goto loc_8224FA50;
loc_8224FA40:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
loc_8224FA50:
	// bl 0x8231c700
	ctx.lr = 0x8224FA54;
	sub_8231C700(ctx, base);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224FA7C:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224FA98:
	// bctrl 
	ctx.lr = 0x8224FA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba60
	// ERROR 8239BA60
	return;
}

__attribute__((alias("__imp__sub_8224FAA4"))) PPC_WEAK_FUNC(sub_8224FAA4);
PPC_FUNC_IMPL(__imp__sub_8224FAA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13188
	ctx.r11.s64 = ctx.r11.s64 + 13188;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r10,r10,13188
	ctx.r10.s64 = ctx.r10.s64 + 13188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224FACC"))) PPC_WEAK_FUNC(sub_8224FACC);
PPC_FUNC_IMPL(__imp__sub_8224FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FAD0"))) PPC_WEAK_FUNC(sub_8224FAD0);
PPC_FUNC_IMPL(__imp__sub_8224FAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-19104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19104);
	// lwz r16,1680(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1680);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224FAE0;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224FB0C;
	sub_82317D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821b3d58
	ctx.lr = 0x8224FB20;
	sub_821B3D58(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224fb50
	if (ctx.cr6.eq) goto loc_8224FB50;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224FB38;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fba8
	if (ctx.cr0.eq) goto loc_8224FBA8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224FB48:
	// bl 0x82120818
	ctx.lr = 0x8224FB4C;
	sub_82120818(ctx, base);
	// b 0x8224fba8
	goto loc_8224FBA8;
loc_8224FB50:
	// lwz r11,-108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x82316160
	ctx.lr = 0x8224FB70;
	sub_82316160(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224fb9c
	if (ctx.cr6.eq) goto loc_8224FB9C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224FB88;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fba8
	if (ctx.cr0.eq) goto loc_8224FBA8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224fb48
	goto loc_8224FB48;
loc_8224FB9C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8224FBA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224FAD8"))) PPC_WEAK_FUNC(sub_8224FAD8);
PPC_FUNC_IMPL(__imp__sub_8224FAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8239ba14
	ctx.lr = 0x8224FAE0;
	sub_8239BA14(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82317d30
	ctx.lr = 0x8224FB0C;
	sub_82317D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821b3d58
	ctx.lr = 0x8224FB20;
	sub_821B3D58(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224fb50
	if (ctx.cr6.eq) goto loc_8224FB50;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224FB38;
	sub_82317720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fba8
	if (ctx.cr0.eq) goto loc_8224FBA8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8224FB48:
	// bl 0x82120818
	ctx.lr = 0x8224FB4C;
	sub_82120818(ctx, base);
	// b 0x8224fba8
	goto loc_8224FBA8;
loc_8224FB50:
	// lwz r11,-108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x82316160
	ctx.lr = 0x8224FB70;
	sub_82316160(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8224fb9c
	if (ctx.cr6.eq) goto loc_8224FB9C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82317720
	ctx.lr = 0x8224FB88;
	sub_82317720(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fba8
	if (ctx.cr0.eq) goto loc_8224FBA8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8224fb48
	goto loc_8224FB48;
loc_8224FB9C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8224FBA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8239ba64
	// ERROR 8239BA64
	return;
}

__attribute__((alias("__imp__sub_8224FBB4"))) PPC_WEAK_FUNC(sub_8224FBB4);
PPC_FUNC_IMPL(__imp__sub_8224FBB4) {
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
	ctx.lr = 0x8224FBCC;
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

__attribute__((alias("__imp__sub_8224FBDC"))) PPC_WEAK_FUNC(sub_8224FBDC);
PPC_FUNC_IMPL(__imp__sub_8224FBDC) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82120868
	ctx.lr = 0x8224FBF4;
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

__attribute__((alias("__imp__sub_8224FC04"))) PPC_WEAK_FUNC(sub_8224FC04);
PPC_FUNC_IMPL(__imp__sub_8224FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FC08"))) PPC_WEAK_FUNC(sub_8224FC08);
PPC_FUNC_IMPL(__imp__sub_8224FC08) {
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
	// bl 0x8224f580
	ctx.lr = 0x8224FC28;
	sub_8224F580(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fc38
	if (ctx.cr0.eq) goto loc_8224FC38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1b98
	ctx.lr = 0x8224FC38;
	sub_821E1B98(ctx, base);
loc_8224FC38:
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

__attribute__((alias("__imp__sub_8224FC54"))) PPC_WEAK_FUNC(sub_8224FC54);
PPC_FUNC_IMPL(__imp__sub_8224FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

