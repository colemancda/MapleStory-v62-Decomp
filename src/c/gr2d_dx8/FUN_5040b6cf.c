/* FUN_5040b6cf - 0x5040b6cf in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_5040b6cf(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 100))(param_1,param_2,param_2 + 1,0,0,0,0);
    if (iVar1 < 0) {
      FUN_5042a366(iVar1,param_1,&DAT_50435388);
    }
    piVar2 = FUN_5040d235(param_1);
    *param_3 = piVar2;
    piVar2 = FUN_5040d25c(param_1);
    param_3[1] = piVar2;
  }
  return;
}


