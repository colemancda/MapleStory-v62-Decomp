/* FUN_00465774 - 0x00465774 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00465774(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if (param_2 == -1) {
    param_2 = iVar1;
  }
  uStack_8 = param_1;
  FUN_00466a30(iVar1 + 1,2,(int)&uStack_8 + 3);
  FUN_0087a3a0((param_2 + 1) * 0x37 + *param_1,param_2 * 0x37 + *param_1,
               iVar1 * 0x37 + param_2 * -0x37);
  return;
}


