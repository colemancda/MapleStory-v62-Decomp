/* FUN_005698d5 - 0x005698d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005698d5(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x13c) <= *(int *)(param_1 + 0x150)) && (*(int *)(param_1 + 0x140) == 0))
  {
    if (param_2 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_00579f8f(0x35,param_1 + 0x1ac);
    }
    if (iVar1 == 0) {
      if ((param_3 != 0) && (DAT_00978364 != 0)) {
        FUN_00817f6e(param_3);
      }
    }
    else {
      (*DAT_0097b514)(0);
    }
  }
  return;
}


