/* FUN_0047ca09 - 0x0047ca09 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0047ca09(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    *(undefined4 *)(param_1 + 0x118) = param_4;
    *(undefined4 *)(param_1 + 0x174) = param_5;
    FUN_0047cf1f(param_6);
  }
  return;
}


