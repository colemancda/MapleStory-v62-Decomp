/* FUN_006ea71c - 0x006ea71c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006ea71c(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if ((((param_3 != 9) && (-1 < (int)param_4)) &&
      (iVar1 = *(int *)(param_1 + 0xd98 + param_3 * 4), iVar1 != 0)) &&
     (((param_4 < *(uint *)(iVar1 + -4) && (-1 < (int)param_5)) &&
      ((iVar1 = *(int *)(iVar1 + param_4 * 4), iVar1 != 0 && (param_5 < *(uint *)(iVar1 + -4)))))))
  {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 4 + param_5 * 8);
    FUN_005e05a2();
    return param_2;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return param_2;
}


