/* ptr_004da8f4 - 0x004da8f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004da8f4(int *param_1,undefined4 param_2)

{
  FUN_0060daad(param_2);
  (**(code **)(*param_1 + 100))();
  if (param_1[0x30] == 0) {
    FUN_004daa95();
  }
  return;
}


