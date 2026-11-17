/* FUN_006d25f8 - 0x006d25f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006d25f8(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00815f0f(param_2,param_3,param_4);
  if ((iVar1 != 0) && ((param_4 == (int *)0x0 || (*param_4 == 0)))) {
    iVar1 = 2;
    if ((-1 < param_3) &&
       (param_3 < (int)(((*(int *)(param_1 + 100) != 2) - 1 & 0xffffffdb) + 0x32))) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


