/* FUN_007de276 - 0x007de276 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007de276(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00815f0f(param_1,param_2,param_3);
  if ((iVar1 != 0) && ((param_3 == (int *)0x0 || (*param_3 == 0)))) {
    iVar1 = (0x42 < param_2) + 1;
  }
  return iVar1;
}


