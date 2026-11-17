/* FUN_005de1f7 - 0x005de1f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005de1f7(int *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + -4);
  }
  if (uVar3 < param_2) {
    uVar1 = FUN_005ded4e();
    if (uVar1 < param_2) {
      iVar2 = FUN_004029b9(param_2 * 0x1c + 4);
      iVar2 = iVar2 + 4;
      if ((param_3 & 2) == 0) {
        for (uVar1 = uVar3 * 0x1c + iVar2; uVar1 < param_2 * 0x1c + iVar2; uVar1 = uVar1 + 0x1c) {
          FUN_005de3f8(uVar1);
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar2,*param_1,uVar3 * 0x1c);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar2;
    }
    else if ((param_3 & 2) == 0) {
      iVar2 = *param_1;
      for (uVar3 = uVar3 * 0x1c + iVar2; uVar3 < param_2 * 0x1c + iVar2; uVar3 = uVar3 + 0x1c) {
        FUN_005de3f8(uVar3);
      }
    }
  }
  else {
    for (puVar4 = (undefined4 *)(param_2 * 0x1c + iVar2);
        puVar4 < (undefined4 *)(uVar3 * 0x1c + iVar2); puVar4 = puVar4 + 7) {
      (**(code **)*puVar4)(0);
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


