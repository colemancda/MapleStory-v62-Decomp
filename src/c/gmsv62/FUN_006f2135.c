/* FUN_006f2135 - 0x006f2135 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2135(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 == 0) && (param_3 == 500)) {
    FUN_006f290f(param_4);
  }
  else {
    FUN_008161f1(0);
    if (param_3 == 100) {
      (**(code **)(*param_1 + 0x20))(param_2);
    }
  }
  return;
}


