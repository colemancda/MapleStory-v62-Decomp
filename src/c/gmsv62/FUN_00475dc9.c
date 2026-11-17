/* FUN_00475dc9 - 0x00475dc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00475dc9(int *param_1,int param_2)

{
  FUN_0087a3a0(param_2,param_2 + 4,
               ((*(int *)(*param_1 + -4) * 4 - param_2) + -4 + *param_1 >> 2) << 2);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  return;
}


