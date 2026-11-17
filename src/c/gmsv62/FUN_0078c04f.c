/* FUN_0078c04f - 0x0078c04f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0078c04f(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x1744) + 4 + param_3 * 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0061411c(0);
  }
  *(int *)(param_2 + 4) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_2;
}


