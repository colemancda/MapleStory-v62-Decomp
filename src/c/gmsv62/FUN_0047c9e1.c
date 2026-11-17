/* FUN_0047c9e1 - 0x0047c9e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0047c9e1(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0xa4 + param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x100 + param_2 * 4) = param_4;
  *(undefined4 *)(param_1 + 0x15c + param_2 * 4) = param_5;
  return;
}


