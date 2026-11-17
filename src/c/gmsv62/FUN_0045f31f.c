/* FUN_0045f31f - 0x0045f31f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0045f31f(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_2 + 8; uVar1 = uVar1 + 8) {
    FUN_004607a4(0);
  }
  FUN_0087a3a0(param_2,param_2 + 8,
               ((int)((*(int *)(*param_1 + -4) * 8 - param_2) + -8 + *param_1) >> 3) << 3);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


