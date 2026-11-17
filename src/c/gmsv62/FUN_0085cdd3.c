/* FUN_0085cdd3 - 0x0085cdd3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085cdd3(int *param_1,int param_2)

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
  FUN_0085ce6f(iVar1 + 1,2,(int)&uStack_8 + 3);
  FUN_0087a3a0((param_2 + 1) * 0x16 + *param_1,param_2 * 0x16 + *param_1,
               iVar1 * 0x16 + param_2 * -0x16);
  return;
}


