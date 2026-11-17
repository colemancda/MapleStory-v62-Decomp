/* FUN_007f8025 - 0x007f8025 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f8025(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  if (0 < *(int *)(param_1 + 0x474)) {
    *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + -1;
    return;
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0x474) = (uVar1 % 400 + 800) / 0x5a;
    fVar6 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    local_c = (double)fVar6;
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    if (local_c <= (double)*piVar2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 4))
                      (uVar3,0,*(undefined4 *)(param_1 + 0x140),param_1);
    *(undefined4 *)(param_1 + 0x140) = uVar3;
    if (*(int *)(param_1 + 0x244) == 0) {
      if (((*(int **)(param_1 + 0x14) == (int *)0x0) ||
          (iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(&DAT_0097946c), iVar4 == 0)) ||
         (*(int *)(param_1 + 0x14) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x14) + -4;
      }
      if (((iVar4 == 0) || (*(int *)(iVar4 + 0x15c) == 0)) ||
         (*(int *)(*(int *)(iVar4 + 0x15c) + 0x1e8) == 0)) {
        local_1c = 0xfffffc18;
        local_18 = 0xfffffda8;
        local_14 = 1000;
        local_10 = 600;
        fVar6 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
        local_c = (double)fVar6;
        FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
        uVar3 = __ftol();
        uVar3 = __ftol(uVar3);
        (*DAT_0097b54c)(&local_1c,uVar3);
        puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
        iVar4 = (*DAT_0097b57c)(&local_1c,*puVar5,puVar5[1]);
      }
      else {
        uVar3 = FUN_005cb531(0,0,0,0);
        local_c = (double)CONCAT44(uVar3,(undefined4)local_c);
        iVar4 = FUN_005d053d();
        if (iVar4 == 0) {
          if (local_c._4_4_ != 0) {
            return;
          }
          uVar3 = 2;
        }
        else {
          if (local_c._4_4_ != 0) {
            return;
          }
          uVar3 = 1;
        }
        iVar4 = FUN_005cb531(uVar3,0,0,0);
      }
      if (iVar4 == 0) {
        FUN_007f73d8(0,0,0);
      }
      return;
    }
    return;
  }
  return;
}


