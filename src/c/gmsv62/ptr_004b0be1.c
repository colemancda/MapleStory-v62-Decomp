/* ptr_004b0be1 - 0x004b0be1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004b0be1(int param_1,int param_2)

{
  FUN_004b3b3e(param_2);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  else if (1 < *(int *)(param_1 + 0x34)) {
    FUN_00526a75(8);
  }
  return;
}


