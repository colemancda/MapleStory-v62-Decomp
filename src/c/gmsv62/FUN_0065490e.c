/* FUN_0065490e - 0x0065490e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0065490e(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00656a2b();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 0x5c + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar1 = *param_1;
    uVar3 = param_2 * 0x5c + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 0x5c) {
      FUN_006571da(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


