/* FUN_00472621 - 0x00472621 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00472621(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_2 + 4; uVar1 = uVar1 + 4) {
    FUN_00414ebb();
  }
  FUN_0087a3a0(param_2,param_2 + 4,
               ((int)((*(int *)(*param_1 + -4) * 4 - param_2) + -4 + *param_1) >> 2) << 2);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


