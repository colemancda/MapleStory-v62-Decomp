/* FUN_0049088f - 0x0049088f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049088f(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 == 1000) && (param_3 == 800)) {
    FUN_004586f2(param_4);
  }
  else if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


