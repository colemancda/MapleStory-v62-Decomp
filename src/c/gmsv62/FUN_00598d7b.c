/* FUN_00598d7b - 0x00598d7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00598d7b(int param_1,uint param_2,int param_3)

{
  if ((((-1 < (int)param_2) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (param_2 < *(uint *)(*(int *)(param_1 + 0x2c) + -4))) && ((-1 < param_3 && (param_3 < 3)))) {
    *(undefined4 *)(param_2 * 0x1d + param_3 * 4 + *(int *)(param_1 + 0x2c)) = 0;
  }
  return;
}


