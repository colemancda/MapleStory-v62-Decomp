/* FUN_0048f952 - 0x0048f952 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0048f952(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 1000) {
    if (param_3 == 600) {
      FUN_0045c301(param_4);
      return;
    }
    if (param_3 == 800) {
      FUN_004586c2(param_4);
      return;
    }
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


