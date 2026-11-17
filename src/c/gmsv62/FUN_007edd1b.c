/* FUN_007edd1b - 0x007edd1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007edd1b(int *param_1,int param_2,uint param_3,int param_4)

{
  if (((param_2 == 0x3e9) && (299 < param_3)) && (param_3 < 0x131)) {
    param_1[0x22] = param_4 << 3;
    FUN_0074d6fb();
    param_1[0x36] = -1;
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


