/* FUN_0049e696 - 0x0049e696 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0049e696(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 2) {
    FUN_0045b90e(param_2);
  }
  else {
    uVar1 = FUN_0049ea6b(*(undefined4 *)(param_1 + 0x60));
    *param_2 = 0;
    FUN_00414f8b(uVar1);
  }
  return param_2;
}


