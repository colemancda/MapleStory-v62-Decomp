/* FUN_0078290f - 0x0078290f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0078290f(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_2 + 0x14; uVar1 = uVar1 + 0x14) {
    thunk_FUN_00414ebb();
  }
  FUN_0087a3a0(param_2,param_2 + 0x14,
               ((int)((*(int *)(*param_1 + -4) * 0x14 - param_2) + -0x14 + *param_1) / 0x14) * 0x14)
  ;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


