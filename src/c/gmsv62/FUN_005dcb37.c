/* FUN_005dcb37 - 0x005dcb37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_005dcb37(int param_1)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined8 local_18;
  undefined4 *local_10;
  uint *local_c;
  uint local_8;
  
  local_8 = FUN_0047f584(&stack0x00000004,4,0,0,0);
  local_18._4_4_ = FUN_004cd670(param_1 + 0x58,*(undefined4 *)(param_1 + 0x60));
  local_10 = (undefined4 *)FUN_00413367(param_1 + 0x70,*(undefined4 *)(param_1 + 0x78));
  local_c = (uint *)FUN_00413367(param_1 + 0x7c,*(undefined4 *)(param_1 + 0x84));
  local_1c = local_18._4_4_;
  local_18 = CONCAT44(local_10,(undefined4)local_18);
  local_20 = (undefined4 *)FUN_0047f584((int)&local_18 + 4,4,0,0,0);
  local_10 = local_c;
  local_c = (uint *)FUN_0047f584(&local_10,4,0,0,0);
  uVar1 = FUN_0047f584(&local_1c,4,0,0,0);
  local_8 = local_8 | uVar1 & (uint)local_c & (uint)local_20;
  local_20 = (undefined4 *)FUN_00413367(param_1 + 0x88,*(undefined4 *)(param_1 + 0x90));
  local_1c = FUN_00413367(param_1 + 0x94,*(undefined4 *)(param_1 + 0x9c));
  uVar1 = FUN_00413367(param_1 + 0xa0,*(undefined4 *)(param_1 + 0xa8));
  local_18._4_4_ = uVar1;
  local_10 = (undefined4 *)FUN_004cd670(param_1 + 0x24c,*(undefined4 *)(param_1 + 0x254));
  local_c = local_20;
  local_20 = (undefined4 *)local_1c;
  local_28 = FUN_0047f584(&local_20,4,0,0,0);
  local_1c = local_18._4_4_;
  local_24 = FUN_0047f584(&local_1c,4,0,0,0);
  local_18 = CONCAT44(local_10,(undefined4)local_18);
  local_10 = (undefined4 *)FUN_0047f584((int)&local_18 + 4,4,0,0,0);
  uVar1 = FUN_0047f584(&local_c,4,0,0,0);
  local_8 = local_8 | uVar1 & (uint)local_10 & local_24 & local_28;
  local_28 = FUN_00413367(param_1 + 0xac,*(undefined4 *)(param_1 + 0xb4));
  local_24 = FUN_00413367(param_1 + 0xb8,*(undefined4 *)(param_1 + 0xc0));
  local_20 = (undefined4 *)FUN_00413367(param_1 + 0xc4,*(undefined4 *)(param_1 + 0xcc));
  local_1c = FUN_004cd670(param_1 + 0x198,*(undefined4 *)(param_1 + 0x1a0));
  local_18 = CONCAT44(local_28,(undefined4)local_18);
  local_28 = local_24;
  local_c = (uint *)FUN_0047f584(&local_28,4,0,0,0);
  local_24 = (uint)local_20;
  local_10 = (undefined4 *)FUN_0047f584(&local_24,4,0,0,0);
  local_20 = (undefined4 *)local_1c;
  local_1c = FUN_0047f584(&local_20,4,0,0,0);
  uVar1 = FUN_0047f584((int)&local_18 + 4,4,0,0,0);
  local_8 = local_8 | uVar1 & local_1c & (uint)local_10 & (uint)local_c;
  local_28 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  local_24 = FUN_00413367(param_1 + 0xdc,*(undefined4 *)(param_1 + 0xe4));
  local_20 = (undefined4 *)FUN_00413367(param_1 + 0xe8,*(undefined4 *)(param_1 + 0xf0));
  local_1c = FUN_004cd670(param_1 + 0x158,*(undefined4 *)(param_1 + 0x160));
  local_18 = CONCAT44(local_28,(undefined4)local_18);
  local_28 = local_24;
  local_c = (uint *)FUN_0047f584(&local_28,4,0,0,0);
  local_24 = (uint)local_20;
  local_10 = (undefined4 *)FUN_0047f584(&local_24,4,0,0,0);
  local_20 = (undefined4 *)local_1c;
  local_1c = FUN_0047f584(&local_20,4,0,0,0);
  uVar1 = FUN_0047f584((int)&local_18 + 4,4,0,0,0);
  local_8 = local_8 | uVar1 & local_1c & (uint)local_10 & (uint)local_c;
  local_28 = FUN_00413367(param_1 + 0xf4,*(undefined4 *)(param_1 + 0xfc));
  local_24 = FUN_00413367(param_1 + 0x100,*(undefined4 *)(param_1 + 0x108));
  local_20 = (undefined4 *)FUN_00413367(param_1 + 0x10c,*(undefined4 *)(param_1 + 0x114));
  local_1c = FUN_004cd670(param_1 + 0x170,*(undefined4 *)(param_1 + 0x178));
  local_18 = CONCAT44(local_28,(undefined4)local_18);
  local_28 = local_24;
  local_c = (uint *)FUN_0047f584(&local_28,4,0,0,0);
  local_24 = (uint)local_20;
  local_10 = (undefined4 *)FUN_0047f584(&local_24,4,0,0,0);
  local_20 = (undefined4 *)local_1c;
  local_1c = FUN_0047f584(&local_20,4,0,0,0);
  uVar1 = FUN_0047f584((int)&local_18 + 4,4,0,0,0);
  uVar1 = uVar1 & local_1c & (uint)local_10;
  local_10 = (undefined4 *)0x0;
  local_8 = local_8 | uVar1 & (uint)local_c;
  local_c = (uint *)(param_1 + 0x118);
  local_18._4_4_ = 8;
  do {
    local_28 = *local_c;
    uVar1 = FUN_0047f584(&local_28,4,0,0,0);
    local_10 = (undefined4 *)((uint)local_10 | uVar1);
    local_c = local_c + 1;
    local_18._4_4_ = local_18._4_4_ + -1;
  } while (local_18._4_4_ != 0);
  local_24 = FUN_004cd670(param_1 + 0x17c,*(undefined4 *)(param_1 + 0x184));
  local_20 = *(undefined4 **)(param_1 + 0x138);
  local_28 = *(uint *)(param_1 + 0x13c);
  local_18._4_4_ = FUN_0047f584(&local_28,4,0,0,0);
  local_1c = FUN_0047f584(&local_24,4,0,0,0);
  uVar1 = FUN_0047f584(&local_20,4,0,0,0);
  local_8 = local_8 | uVar1 & local_1c & local_18._4_4_ | (uint)local_10;
  local_28 = FUN_004cd670(param_1 + 0x188,*(undefined4 *)(param_1 + 400));
  local_24 = FUN_00413367(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x1ac));
  local_18 = *(undefined8 *)(param_1 + 0x150);
  local_1c = FUN_0047f584(&local_28,4,0,0,0);
  local_20 = (undefined4 *)FUN_0047f584(&local_24,4,0,0,0);
  uVar1 = FUN_0047f584(&local_18,8,0,0,0);
  local_8 = local_8 | uVar1 & (uint)local_20 & local_1c;
  local_28 = FUN_004b8c9b(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14));
  uVar1 = FUN_0047f584(&local_28,4,0,0,0);
  local_8 = local_8 | uVar1;
  if (local_8 != 0xffffffff) {
    local_8 = local_8 + 1;
  }
  return local_8;
}


