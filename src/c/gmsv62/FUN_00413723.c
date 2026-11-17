/* FUN_00413723 - 0x00413723 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint * __thiscall FUN_00413723(uint *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    FUN_00413793();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 - 4), iVar1 != 0)) {
      piVar2 = (int *)FUN_004029b9(iVar1 * 8 + 4);
      *param_1 = (uint)(piVar2 + 1);
      *piVar2 = iVar1;
      uVar3 = *param_2;
      uVar4 = iVar1 * 8 + uVar3;
      param_2 = (uint *)*param_1;
      for (; uVar3 < uVar4; uVar3 = uVar3 + 8) {
        FUN_004194b5(param_2,uVar3);
        param_2 = (uint *)((int)param_2 + 8);
      }
    }
  }
  return param_1;
}


