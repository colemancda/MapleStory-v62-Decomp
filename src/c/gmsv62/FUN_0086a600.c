/* FUN_0086a600 - 0x0086a600 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0086a600(int *param_1,int param_2,undefined4 param_3)

{
  if (*param_1 < 0x100) {
    param_1[*param_1 + 1] = param_2;
    FUN_0087b372(param_1 + *param_1 * 8 + 0x101,param_3,0x1f);
    *(undefined1 *)(*param_1 * 0x20 + 0x423 + (int)param_1) = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}


