/* FUN_0055ea08 - 0x0055ea08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0055ea08(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00815f0f(param_1,param_2,param_3);
  if (iVar1 != 0) {
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      iVar1 = FUN_0055f1c8(param_1,param_2);
      iVar1 = (iVar1 != 0) + 1;
    }
    else {
      iVar2 = (**(code **)(*(int *)(*param_3 + 4) + 0x28))();
      if (iVar2 == 0) {
        *param_3 = 0;
      }
    }
  }
  return iVar1;
}


