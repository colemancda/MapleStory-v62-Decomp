/* FUN_00455ece - 0x00455ece in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00455ece(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00815f0f(param_2,param_3,param_4);
  if ((iVar1 != 0) &&
     (((param_4 == (int *)0x0 || (*param_4 == 0)) && (*(int *)(param_1 + 0x34) != 0)))) {
    iVar1 = 1;
  }
  return iVar1;
}


