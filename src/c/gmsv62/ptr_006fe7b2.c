/* ptr_006fe7b2 - 0x006fe7b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006fe7b2(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if (param_2 == 2000) {
    if (param_3 == 500) {
      FUN_006fe97a(param_4);
      return;
    }
  }
  else if (((param_2 == 0x7d1) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


