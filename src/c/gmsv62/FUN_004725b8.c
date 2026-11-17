/* FUN_004725b8 - 0x004725b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint * __thiscall FUN_004725b8(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    FUN_0045f10c();
    if ((*param_2 != 0) && (iVar2 = *(int *)(*param_2 - 4), iVar2 != 0)) {
      piVar3 = (int *)FUN_004029b9(iVar2 * 4 + 4);
      *param_1 = (uint)(piVar3 + 1);
      *piVar3 = iVar2;
      uVar4 = *param_2;
      uVar1 = uVar4 + iVar2 * 4;
      param_2 = (uint *)*param_1;
      for (; uVar4 < uVar1; uVar4 = uVar4 + 4) {
        FUN_00472f90(param_2,uVar4);
        param_2 = (uint *)((int)param_2 + 4);
      }
    }
  }
  return param_1;
}


