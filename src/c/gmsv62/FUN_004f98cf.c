/* FUN_004f98cf - 0x004f98cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f98cf(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_3 = param_3 - param_2;
  for (iVar1 = param_3 / 2; 0 < iVar1; iVar1 = iVar1 + -1) {
    FUN_004f99fd(param_1,iVar1,param_3,param_2);
  }
  if (1 < param_3) {
    iVar1 = (param_3 + param_2) * 0xc;
    do {
      FUN_004f9ac0(*param_1 + param_2 * 0xc,iVar1 + -0xc + *param_1);
      param_3 = param_3 + -1;
      FUN_004f99fd(param_1,1,param_3,param_2);
      iVar1 = iVar1 + -0xc;
    } while (1 < param_3);
  }
  return;
}


