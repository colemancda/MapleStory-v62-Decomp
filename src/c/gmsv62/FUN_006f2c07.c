/* FUN_006f2c07 - 0x006f2c07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2c07(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 < 2) && (-1 < param_2)) {
    *(undefined4 *)(param_1 + 0xb0c + param_2 * 4) = param_3;
    *(undefined4 *)(param_1 + 0xb14 + param_2 * 4) = param_4;
    FUN_008161f1(0);
  }
  return;
}


