/* FUN_004903a3 - 0x004903a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004903a3(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3278) + 4 + param_3 * 8);
  *(int *)(param_2 + 4) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_2;
}


