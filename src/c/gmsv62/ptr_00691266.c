/* ptr_00691266 - 0x00691266 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00691266(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if ((param_2 == 0x3ee) || (param_2 == 0x3ef)) {
    if ((299 < param_3) && (param_3 < 0x131)) {
      FUN_008161f1(0);
      return;
    }
  }
  else if ((param_2 == 0x3ed) && (param_3 == 500)) {
    FUN_00691311(param_4);
    return;
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


