/* FUN_0056bbf2 - 0x0056bbf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0056bbf2(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + -4);
  }
  if (uVar2 < param_2) {
    uVar3 = FUN_0056d271();
    if (uVar3 < param_2) {
      iVar1 = FUN_004029b9(param_2 * 0x14 + 4);
      iVar1 = iVar1 + 4;
      if ((param_3 & 2) == 0) {
        for (uVar3 = iVar1 + uVar2 * 0x14; uVar3 < param_2 * 0x14 + iVar1; uVar3 = uVar3 + 0x14) {
          FUN_0056bfa3(uVar3);
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar1,*param_1,uVar2 * 0x14);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar1;
    }
    else if ((param_3 & 2) == 0) {
      iVar1 = *param_1;
      for (uVar2 = iVar1 + uVar2 * 0x14; uVar2 < iVar1 + param_2 * 0x14; uVar2 = uVar2 + 0x14) {
        FUN_0056bfa3(uVar2);
      }
    }
  }
  else {
    for (uVar3 = iVar1 + param_2 * 0x14; uVar3 < iVar1 + uVar2 * 0x14; uVar3 = uVar3 + 0x14) {
      FUN_0056d2be();
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


