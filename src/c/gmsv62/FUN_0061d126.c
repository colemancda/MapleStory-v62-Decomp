/* FUN_0061d126 - 0x0061d126 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0061d126(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + param_3 * 4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_2;
}


