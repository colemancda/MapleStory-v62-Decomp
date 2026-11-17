/* FUN_005aa755 - 0x005aa755 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005aa755(int *param_1,int param_2)

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
  FUN_005ac1da(iVar1 + 1,2,(int)&uStack_8 + 3);
  FUN_0087a3a0((param_2 + 1) * 0x1c + *param_1,param_2 * 0x1c + *param_1,
               iVar1 * 0x1c + param_2 * -0x1c);
  return;
}


