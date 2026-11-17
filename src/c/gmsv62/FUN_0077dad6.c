/* FUN_0077dad6 - 0x0077dad6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0077dad6(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if (param_2 == 0x7d1) {
    if (param_3 == 500) {
      FUN_0077e342(param_4);
      return;
    }
  }
  else if (((param_2 == 2000) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_0077efbd(0xffffffff);
    FUN_0077f2b3(0xffffffff);
    FUN_008161f1(0);
  }
  FUN_008161f1(0);
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


