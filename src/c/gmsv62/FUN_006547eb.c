/* FUN_006547eb - 0x006547eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_006547eb(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_006568ef();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 0x1cc + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_2;
    uVar1 = *param_1;
    uVar3 = param_2 * 0x1cc + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 0x1cc) {
      FUN_006571ae(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


