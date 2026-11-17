/* FUN_0063439e - 0x0063439e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0063439e(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  
  FUN_00402aba();
  *param_1 = param_2 | 0x100000;
  param_1[3] = param_2 | 0x100000;
  param_1[1] = param_3 | 0x1000;
  param_1[4] = param_3 | 0x1000;
  param_1[2] = param_4 | 0x10;
  param_1[5] = param_4 | 0x10;
  puVar1 = param_1 + 7;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    param_1[6] = 0;
  }
  return;
}


