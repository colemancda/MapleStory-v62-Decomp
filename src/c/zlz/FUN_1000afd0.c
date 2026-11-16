/* FUN_1000afd0 - 0x1000afd0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall FUN_1000afd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c686;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffbc;
  piVar1 = (int *)(param_1 + 0xc);
  local_1c = (undefined4 *)param_1;
  puVar3 = FUN_1000b870(piVar1);
  local_18 = *(int *)(param_1 + 0x1c) - (int)puVar3;
  if (local_18 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    if (*(int *)(param_1 + 0x4c) == 0) {
      local_8 = 3;
      if (*piVar1 == 0) {
        puVar3 = (undefined4 *)FUN_1000ba40(DAT_10017010);
        local_8._0_1_ = 4;
        if (puVar3 == (undefined4 *)0x0) {
          *piVar1 = 0;
          local_8 = CONCAT31(local_8._1_3_,3);
          iVar6 = 4;
        }
        else {
          iVar6 = FUN_1000b940(puVar3);
          *piVar1 = iVar6;
          local_8 = CONCAT31(local_8._1_3_,3);
          iVar6 = iVar6 + 4;
        }
      }
      else {
        iVar6 = *piVar1 + 4;
      }
      uVar2 = local_18;
      if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
        local_30 = 5;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_30,(ThrowInfo *)&DAT_1000eff8);
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
      uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(iVar6,local_18);
      if (uVar2 != uVar7) {
        local_34 = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_34,(ThrowInfo *)&DAT_1000eff8);
      }
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      local_8 = 0xffffffff;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_1000ba40(DAT_10017010);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_FUN_1000ee60;
        }
        *(undefined4 **)(param_1 + 0xc) = puVar3;
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar3 + 1;
      *(undefined4 *)(param_1 + 0x20) = 0x10000;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    local_8 = 0;
    puVar4 = FUN_1000b870(piVar1);
    puVar5 = FUN_1000b870((int *)(param_1 + 0x50));
    FUN_10001130(puVar5,puVar4,local_18,(undefined4 *)&DAT_10010040);
    if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
      local_20 = 5;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_20,(ThrowInfo *)&DAT_1000eff8);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(&local_18,4);
    if (iVar6 != 4) {
      local_24 = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_24,(ThrowInfo *)&DAT_1000eff8);
    }
    puVar3 = FUN_1000b870((int *)(param_1 + 0x50));
    uVar2 = local_18;
    if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
      local_28 = 5;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_28,(ThrowInfo *)&DAT_1000eff8);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(puVar3,local_18);
    if (uVar2 != uVar7) {
      local_2c = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_2c,(ThrowInfo *)&DAT_1000eff8);
    }
    iVar6 = *(int *)(param_1 + 0xc);
    local_8 = 0xffffffff;
    if (iVar6 == 0) {
      local_1c = (undefined4 *)FUN_1000ba40(DAT_10017010);
      local_8 = 2;
      if (local_1c == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_1000b940(local_1c);
      }
      *(int *)(param_1 + 0xc) = iVar6;
    }
    *(int *)(param_1 + 0x1c) = iVar6 + 4;
    *(undefined4 *)(param_1 + 0x20) = 0xffff;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


