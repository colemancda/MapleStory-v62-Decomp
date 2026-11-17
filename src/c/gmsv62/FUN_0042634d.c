/* FUN_0042634d - 0x0042634d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0042634d(int *param_1,uint param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar2 + -4);
  }
  if (uVar4 < param_2) {
    uVar5 = FUN_00426eaa();
    if (uVar5 < param_2) {
      iVar2 = FUN_004029b9(param_2 * 4 + 4);
      iVar2 = iVar2 + 4;
      if ((param_3 & 2) == 0) {
        puVar1 = (undefined4 *)(iVar2 + uVar4 * 4);
        while (puVar3 = puVar1, puVar3 < (undefined4 *)(iVar2 + param_2 * 4)) {
          puVar1 = puVar3 + 1;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
          }
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar2,*param_1,uVar4 << 2);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar2;
    }
    else if ((param_3 & 2) == 0) {
      iVar2 = *param_1;
      puVar1 = (undefined4 *)(iVar2 + uVar4 * 4);
      while (puVar3 = puVar1, puVar3 < (undefined4 *)(iVar2 + param_2 * 4)) {
        puVar1 = puVar3 + 1;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
        }
      }
    }
  }
  else {
    for (uVar5 = iVar2 + param_2 * 4; uVar5 < iVar2 + uVar4 * 4; uVar5 = uVar5 + 4) {
      FUN_00412600();
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


