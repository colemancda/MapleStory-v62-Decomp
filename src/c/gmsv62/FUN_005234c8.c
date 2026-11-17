/* FUN_005234c8 - 0x005234c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint * __thiscall FUN_005234c8(uint *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    FUN_00523535();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 - 4), iVar1 != 0)) {
      piVar2 = (int *)FUN_004029b9(iVar1 * 0x18 + 4);
      *param_1 = (uint)(piVar2 + 1);
      *piVar2 = iVar1;
      uVar4 = *param_2;
      uVar3 = iVar1 * 0x18 + uVar4;
      param_2 = (uint *)*param_1;
      for (; uVar4 < uVar3; uVar4 = uVar4 + 0x18) {
        FUN_00523e0b(param_2,uVar4);
        param_2 = (uint *)((int)param_2 + 0x18);
      }
    }
  }
  return param_1;
}


