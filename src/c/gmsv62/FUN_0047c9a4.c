/* FUN_0047c9a4 - 0x0047c9a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0047c9a4(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  if (param_2 == 6) {
    *param_3 = *(undefined4 *)(param_1 + 0xbc);
    *param_4 = *(undefined4 *)(param_1 + 0x118);
    *param_5 = *(undefined4 *)(param_1 + 0x174);
    FUN_0047cf1f(param_1 + 0x1b8);
  }
  return;
}


