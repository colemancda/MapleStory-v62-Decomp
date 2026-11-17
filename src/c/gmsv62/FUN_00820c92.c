/* FUN_00820c92 - 0x00820c92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00820c92(int param_1,int param_2,uint param_3)

{
  if ((param_3 & 0x80000000) == 0) {
    if (param_3._2_1_ == '\x11') {
      (**(code **)(*(int *)(param_1 + -4) + 0x34))(1);
      return;
    }
    if (((param_2 == 0x1b) && (*(short **)(param_1 + 0x70) != (short *)0x0)) &&
       (**(short **)(param_1 + 0x70) != 0)) {
      FUN_00820a6f();
      return;
    }
  }
  FUN_004bc822(param_2,param_3);
  return;
}


