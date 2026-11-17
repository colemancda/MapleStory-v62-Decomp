/* FUN_004657d7 - 0x004657d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004657d7(int *param_1,int param_2)

{
  FUN_0087a3a0(param_2,param_2 + 0x37,
               (((*(int *)(*param_1 + -4) * 0x37 - param_2) + -0x37 + *param_1) / 0x37) * 0x37);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


