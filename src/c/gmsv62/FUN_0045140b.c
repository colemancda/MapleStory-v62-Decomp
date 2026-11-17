/* FUN_0045140b - 0x0045140b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0045140b(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2;
  iVar3 = *param_1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar3 + -4);
  }
  if (uVar4 < param_2) {
    uVar5 = FUN_00452046();
    if (uVar5 < param_2) {
      iVar3 = FUN_004029b9(param_2 * 4 + 4);
      iVar3 = iVar3 + 4;
      if (((param_3 & 2) == 0) &&
         (uVar5 = iVar3 + uVar4 * 4, iVar1 = param_2 * 4, param_2 = uVar5,
         uVar5 < (uint)(iVar3 + iVar1))) {
        do {
          uVar5 = param_2 + 4;
          FUN_0045150f(param_2);
          param_2 = uVar5;
        } while (uVar5 < iVar3 + uVar2 * 4);
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar3,*param_1,uVar4 << 2);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar3;
    }
    else if ((param_3 & 2) == 0) {
      iVar3 = *param_1;
      for (uVar4 = iVar3 + uVar4 * 4; uVar4 < iVar3 + param_2 * 4; uVar4 = uVar4 + 4) {
        FUN_0045150f(uVar4);
      }
    }
  }
  else {
    for (uVar5 = iVar3 + param_2 * 4; uVar5 < iVar3 + uVar4 * 4; uVar5 = uVar5 + 4) {
      FUN_004505d7();
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = uVar2;
  }
  return *param_1;
}


