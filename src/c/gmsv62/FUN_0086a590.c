/* FUN_0086a590 - 0x0086a590 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0086a590(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*param_1 < 0x80) {
    param_1[*param_1 + 1] = *param_2;
    FUN_0087b372(param_1 + *param_1 * 8 + 0x81,param_3,0x1f);
    *(undefined1 *)(*param_1 * 0x20 + 0x223 + (int)param_1) = 0;
    FUN_0087b372(param_1 + *param_1 * 8 + 0x481,param_4,0x1f);
    *(undefined1 *)(*param_1 * 0x20 + 0x1223 + (int)param_1) = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}


