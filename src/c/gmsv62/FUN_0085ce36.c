/* FUN_0085ce36 - 0x0085ce36 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085ce36(int *param_1,int param_2)

{
  FUN_0087a3a0(param_2,param_2 + 0x16,
               (((*(int *)(*param_1 + -4) * 0x16 - param_2) + -0x16 + *param_1) / 0x16) * 0x16);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


