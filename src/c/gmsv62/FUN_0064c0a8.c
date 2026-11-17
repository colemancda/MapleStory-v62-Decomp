/* FUN_0064c0a8 - 0x0064c0a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0064c0a8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_006509a1(param_3);
  iVar1 = *(int *)(iVar1 + 0x1ac);
  if (((iVar1 == 0) || (*(int *)(iVar1 + -4) == 0)) &&
     ((iVar1 = *(int *)(param_1 + 0x60), iVar1 == 0 || (*(int *)(iVar1 + -4) == 0)))) {
    *param_2 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + param_4 * 4);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 8));
    }
  }
  return param_2;
}


