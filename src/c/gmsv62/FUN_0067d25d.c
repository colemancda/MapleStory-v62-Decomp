/* FUN_0067d25d - 0x0067d25d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0067d25d(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc + param_3 * 4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_2;
}


