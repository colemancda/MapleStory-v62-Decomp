/* FUN_0049967b - 0x0049967b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049967b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414edd(param_2,0xffffffff);
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(param_1 + 0x80) = param_3;
  *(undefined4 *)(param_1 + 0x84) = param_4;
  return;
}


