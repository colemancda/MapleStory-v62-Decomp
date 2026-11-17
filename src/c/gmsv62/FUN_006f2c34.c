/* FUN_006f2c34 - 0x006f2c34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2c34(int param_1,int param_2)

{
  if ((param_2 < 2) && (-1 < param_2)) {
    *(int *)(param_1 + 0xb1c) = param_2;
    FUN_008161f1(0);
  }
  return;
}


