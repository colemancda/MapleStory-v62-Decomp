/* FUN_008017ba - 0x008017ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_008017ba(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x248) == 4) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x25c) != 0) {
      iVar4 = param_1 + 0x20;
      local_8 = 0;
      local_c = 0;
      FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
      uVar2 = __ftol();
      iVar3 = FUN_0087a90a(uVar2);
      if (9 < iVar3) {
        fVar7 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
        if (fVar7 <= (float10)*(int *)(param_1 + 0x254)) {
          local_8 = 1;
        }
        else {
          local_8 = 0xffffffff;
        }
      }
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      uVar2 = __ftol();
      iVar3 = FUN_0087a90a(uVar2);
      if (iVar3 < 10) {
        local_c = 0xffffffff;
      }
      else {
        fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
        if ((float10)*(int *)(param_1 + 600) < fVar7) {
          FUN_007f1fec();
        }
      }
      *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + -1;
      FUN_007f7fd3(local_8,local_c);
      FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
      local_10 = __ftol();
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      uVar2 = __ftol();
      local_20 = 0xfffffff6;
      local_1c = 0xfffffff6;
      local_18 = 10;
      local_14 = 10;
      (*DAT_0097b54c)(&local_20,*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600));
      uVar1 = (*DAT_0097b57c)(&local_20,local_10,uVar2);
      if ((uVar1 != 0) || (*(int *)(param_1 + 0x264) == 0)) {
        *(undefined4 *)(param_1 + 0x25c) = 0;
      }
    }
    if (*(int *)(param_1 + 0x25c) != 0) {
      return uVar1;
    }
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0x264) = uVar1 % 0x3c + 0x3c;
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0x254) = (uVar1 % 800 - 400) + *(int *)(param_1 + 0x268);
    uVar1 = FUN_004133f0();
    *(undefined4 *)(param_1 + 0x25c) = 1;
    uVar1 = (uVar1 % 0x96 - 0x96) + *(int *)(param_1 + 0x26c);
    *(uint *)(param_1 + 600) = uVar1;
    goto LAB_00801b94;
  }
  if (*(int *)(param_1 + 0x25c) != 0) {
    iVar4 = param_1 + 0x20;
    local_8 = 0;
    local_c = 0;
    FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
    uVar2 = __ftol();
    iVar3 = FUN_0087a90a(uVar2);
    if (9 < iVar3) {
      fVar7 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
      if (fVar7 <= (float10)*(int *)(param_1 + 0x254)) {
        local_8 = 1;
      }
      else {
        local_8 = 0xffffffff;
      }
    }
    FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    uVar2 = __ftol();
    iVar3 = FUN_0087a90a(uVar2);
    if (iVar3 < 10) {
      local_c = 0xffffffff;
    }
    else {
      fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      if ((float10)*(int *)(param_1 + 600) < fVar7) {
        FUN_007f1fec();
      }
    }
    FUN_007f7fd3(local_8,local_c);
    FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
    local_10 = __ftol();
    FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    uVar2 = __ftol();
    local_20 = 0xfffffff6;
    local_1c = 0xfffffff6;
    local_18 = 10;
    local_14 = 10;
    local_30 = 0xffffff88;
    local_2c = 0xffffff88;
    local_28 = 0x78;
    local_24 = 0x78;
    (*DAT_0097b54c)(&local_20,*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600));
    (*DAT_0097b54c)(&local_30,*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600));
    iVar4 = (*DAT_0097b57c)(&local_20,local_10,uVar2);
    if (iVar4 == 0) {
      if (*(int **)(param_1 + 0x244) != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x244) + 0x10))();
        iVar4 = (*DAT_0097b57c)(&local_30,*puVar5,puVar5[1]);
        if (iVar4 == 0) goto LAB_00801af4;
      }
    }
    else {
LAB_00801af4:
      *(undefined4 *)(param_1 + 0x25c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x25c) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x244) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x264) == 0) {
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0x264) = uVar1 % 0x3c + 0x3c;
  }
  puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x244) + 0x10))();
  *(undefined4 *)(param_1 + 0x254) = *puVar5;
  *(undefined4 *)(param_1 + 600) = puVar5[1];
  uVar1 = FUN_004133f0();
  *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + (uVar1 % 0x78 - 0x3c);
  uVar6 = FUN_004133f0();
  uVar1 = uVar6 / 0x3c;
  *(undefined4 *)(param_1 + 0x25c) = 1;
  *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + (uVar6 % 0x3c - 0x1e);
  *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + -1;
LAB_00801b94:
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  return uVar1;
}


