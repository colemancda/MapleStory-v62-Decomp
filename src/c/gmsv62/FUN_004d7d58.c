/* FUN_004d7d58 - 0x004d7d58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004d7d58(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + -4);
  }
  if (uVar3 < param_2) {
    uVar4 = FUN_004d89c7();
    if (uVar4 < param_2) {
      iVar1 = FUN_004029b9(param_2 * 4 + 4);
      iVar1 = iVar1 + 4;
      if ((param_3 & 2) == 0) {
        uVar4 = iVar1 + uVar3 * 4;
        while (uVar4 < iVar1 + param_2 * 4) {
          uVar2 = uVar4 + 4;
          bVar5 = uVar4 != 0;
          uVar4 = uVar2;
          if (bVar5) {
            FUN_0044cba3();
          }
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar1,*param_1,uVar3 << 2);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar1;
    }
    else if ((param_3 & 2) == 0) {
      iVar1 = *param_1;
      uVar3 = iVar1 + uVar3 * 4;
      while (uVar3 < iVar1 + param_2 * 4) {
        uVar4 = uVar3 + 4;
        bVar5 = uVar3 != 0;
        uVar3 = uVar4;
        if (bVar5) {
          FUN_0044cba3();
        }
      }
    }
  }
  else {
    for (uVar4 = iVar1 + param_2 * 4; uVar4 < iVar1 + uVar3 * 4; uVar4 = uVar4 + 4) {
      FUN_00403621();
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


