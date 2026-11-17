/* FUN_00820e75 - 0x00820e75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00820e75(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00820e38();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 0xc + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar1 = *param_1;
    uVar3 = param_2 * 0xc + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 0xc) {
      FUN_00822006(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


