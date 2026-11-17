/* FUN_005f12c8 - 0x005f12c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_005f12c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 0x30) + 1;
  uVar4 = iVar3 / 0x21;
  iVar3 = iVar3 % 0x21;
  *(int *)(param_1 + 0x30) = iVar3;
  uVar1 = uStack_18;
  if (iVar3 == 0) {
    puVar6 = local_2c;
    FUN_00429303(puVar6);
    puVar5 = (undefined4 *)FUN_004f0de4(puVar6);
    local_1c = *puVar5;
    uVar1 = puVar5[1];
    uStack_14 = puVar5[2];
    uStack_10 = puVar5[3];
    uStack_18._2_2_ = (ushort)((uint)uVar1 >> 0x10);
    uVar4 = (uint)uStack_18._2_2_;
    if (uStack_18._2_2_ != *(ushort *)(param_1 + 0x34)) {
      local_8 = 1;
      *(ushort *)(param_1 + 0x34) = uStack_18._2_2_;
    }
  }
  uStack_18 = uVar1;
  iVar3 = *(int *)(param_1 + 0x28);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    local_c = iVar3;
    uVar4 = (**(code **)**(undefined4 **)(iVar3 + 0x10))();
    iVar3 = iVar2;
    if (local_8 != 0) {
      uVar4 = FUN_005ec8d4(local_1c,uStack_18,uStack_14,uStack_10);
    }
  }
  return uVar4;
}


