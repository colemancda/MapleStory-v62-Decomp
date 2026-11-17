/* FUN_005945ec - 0x005945ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint * __thiscall FUN_005945ec(uint *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    FUN_0056ac65();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 - 4), iVar1 != 0)) {
      piVar2 = (int *)FUN_004029b9(iVar1 * 0xc + 4);
      *param_1 = (uint)(piVar2 + 1);
      *piVar2 = iVar1;
      uVar4 = *param_2;
      uVar3 = iVar1 * 0xc + uVar4;
      param_2 = (uint *)*param_1;
      for (; uVar4 < uVar3; uVar4 = uVar4 + 0xc) {
        FUN_005954c3(param_2,uVar4);
        param_2 = (uint *)((int)param_2 + 0xc);
      }
    }
  }
  return param_1;
}


