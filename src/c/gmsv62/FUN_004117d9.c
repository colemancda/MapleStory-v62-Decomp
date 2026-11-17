/* FUN_004117d9 - 0x004117d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004117d9(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 4));
  }
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2;
  if (iVar1 != 0) {
    FUN_00412f73(0);
  }
  return param_1;
}


