/* FUN_00416f7b - 0x00416f7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00416f7b(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00416f40();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 100 + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar1 = *param_1;
    uVar3 = param_2 * 100 + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 100) {
      FUN_0041aabf(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


