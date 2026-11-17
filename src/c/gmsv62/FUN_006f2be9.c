/* FUN_006f2be9 - 0x006f2be9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2be9(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xb04) = param_2;
  *(undefined4 *)(param_1 + 0xb08) = param_3;
  FUN_008161f1(0);
  return;
}


