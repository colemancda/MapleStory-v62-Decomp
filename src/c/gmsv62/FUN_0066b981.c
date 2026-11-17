/* FUN_0066b981 - 0x0066b981 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0066b981(int param_1,int param_2)

{
  if (param_2 == 0x205d2b) {
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if (param_2 != 0x21e3cb) {
      return;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


