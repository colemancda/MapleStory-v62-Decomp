/* FUN_0041358f - 0x0041358f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0041358f(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_0041927c();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 4 + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar3 = *param_1;
    uVar1 = uVar3 + param_2 * 4;
    for (; uVar3 < uVar1; uVar3 = uVar3 + 4) {
      FUN_0041aaa0(uVar3);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


