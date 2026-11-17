/* FUN_006cc02c - 0x006cc02c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006cc02c(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00815f0f(param_1,param_2,param_3);
  if ((iVar1 != 0) && ((param_3 == (int *)0x0 || (*param_3 == 0)))) {
    if ((param_2 < 1) || (0x13 < param_2)) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}


