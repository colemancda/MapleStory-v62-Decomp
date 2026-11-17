/* FUN_0057e22d - 0x0057e22d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0057e22d(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 == 0x1f44) && (param_3 == 600)) {
    FUN_0057e26b(param_4);
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


