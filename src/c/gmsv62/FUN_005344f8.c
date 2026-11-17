/* FUN_005344f8 - 0x005344f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005344f8(int *param_1,int param_2,uint param_3)

{
  if (((param_2 == 1000) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_0074d6fb();
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


