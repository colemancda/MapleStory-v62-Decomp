/* FUN_004026c7 - 0x004026c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004026c7(int param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_2 + 4) + 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0040295c(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}


