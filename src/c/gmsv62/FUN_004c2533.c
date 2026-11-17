/* FUN_004c2533 - 0x004c2533 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004c2533(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 4) = param_2;
  if ((param_3 != 0) && (param_2 != 0)) {
    InterlockedIncrement((LONG *)(param_2 + 4));
  }
  return param_1;
}


