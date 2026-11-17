/* FUN_007e12b2 - 0x007e12b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007e12b2(int param_1,int param_2,uint param_3)

{
  if ((param_3 & 0x80000000) != 0) {
    FUN_004bc822(param_2,param_3);
  }
  if (param_2 == 0x1b) {
    (**(code **)(*(int *)(param_1 + -4) + 0x34))(2);
  }
  FUN_004bc822(param_2,param_3);
  return;
}


