/* FUN_00445c3c - 0x00445c3c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00445c3c(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00445c00();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 8 + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar1 = *param_1;
    uVar3 = param_2 * 8 + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 8) {
      FUN_00446ba6(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


