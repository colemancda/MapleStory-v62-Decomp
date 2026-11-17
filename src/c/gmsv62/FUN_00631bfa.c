/* FUN_00631bfa - 0x00631bfa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00631bfa(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*param_1 + -4);
  }
  if (uVar3 < param_2) {
    uVar1 = FUN_0063391e();
    if (uVar1 < param_2) {
      iVar2 = FUN_004029b9(param_2 * 0xc + 4);
      iVar2 = iVar2 + 4;
      if ((param_3 & 2) == 0) {
        for (uVar1 = iVar2 + uVar3 * 0xc; uVar1 < param_2 * 0xc + iVar2; uVar1 = uVar1 + 0xc) {
          FUN_006324f2(uVar1);
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar2,*param_1,uVar3 * 0xc);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar2;
    }
    else if ((param_3 & 2) == 0) {
      iVar2 = *param_1;
      for (uVar3 = iVar2 + uVar3 * 0xc; uVar3 < iVar2 + param_2 * 0xc; uVar3 = uVar3 + 0xc) {
        FUN_006324f2(uVar3);
      }
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


