/* FUN_004a6aba - 0x004a6aba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a6aba(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004a6b1c();
  FUN_00414edd(param_2,0xffffffff);
  *(undefined4 *)(iVar1 + 4) = param_3;
  if (param_4 == -1) {
    param_4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x60);
  }
  *(int *)(iVar1 + 8) = param_4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_4;
  return;
}


