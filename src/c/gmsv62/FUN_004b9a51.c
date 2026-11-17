/* FUN_004b9a51 - 0x004b9a51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b9a51(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_2 + 0xc; uVar1 = uVar1 + 0xc) {
    FUN_004ba7cb();
  }
  FUN_0087a3a0(param_2,param_2 + 0xc,
               ((int)((*(int *)(*param_1 + -4) * 0xc - param_2) + -0xc + *param_1) / 0xc) * 0xc);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


