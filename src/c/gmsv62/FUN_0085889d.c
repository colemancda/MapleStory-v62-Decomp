/* FUN_0085889d - 0x0085889d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085889d(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_2 + 0x2a; uVar1 = uVar1 + 0x2a) {
    FUN_0082f98f();
  }
  FUN_0087a3a0(param_2,param_2 + 0x2a,
               ((int)((*(int *)(*param_1 + -4) * 0x2a - param_2) + -0x2a + *param_1) / 0x2a) * 0x2a)
  ;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


