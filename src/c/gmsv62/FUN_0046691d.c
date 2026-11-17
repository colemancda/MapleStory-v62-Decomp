/* FUN_0046691d - 0x0046691d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0046691d(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2;
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar4 + -4);
  }
  if (uVar5 < param_2) {
    uVar3 = FUN_00467ea6();
    if (uVar3 < param_2) {
      iVar4 = FUN_004029b9(param_2 * 4 + 4);
      iVar4 = iVar4 + 4;
      if (((param_3 & 2) == 0) &&
         (uVar3 = iVar4 + uVar5 * 4, iVar1 = param_2 * 4, param_2 = uVar3,
         uVar3 < (uint)(iVar4 + iVar1))) {
        do {
          uVar3 = param_2 + 4;
          FUN_00466adf(param_2);
          param_2 = uVar3;
        } while (uVar3 < iVar4 + uVar2 * 4);
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar4,*param_1,uVar5 << 2);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar4;
    }
    else if ((param_3 & 2) == 0) {
      iVar4 = *param_1;
      for (uVar5 = iVar4 + uVar5 * 4; uVar5 < iVar4 + param_2 * 4; uVar5 = uVar5 + 4) {
        FUN_00466adf(uVar5);
      }
    }
  }
  else {
    FUN_00466a17(iVar4 + param_2 * 4,iVar4 + uVar5 * 4);
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = uVar2;
  }
  return *param_1;
}


