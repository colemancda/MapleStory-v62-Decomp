/* FUN_004b2699 - 0x004b2699 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b2699(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) {
    *(int *)(param_1 + 0x3c) = param_2;
    FUN_004b3daf();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),500,*(undefined4 *)(param_1 + 0x3c));
  }
  return;
}


