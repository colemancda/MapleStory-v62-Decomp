/* FUN_007ec3b7 - 0x007ec3b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ec3b7(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_3 + 0x11) =
         *(undefined4 *)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xec) * 4);
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_3 + 0x19) =
         *(undefined4 *)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xec) * 4);
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_3 + 0xd) =
         *(undefined4 *)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xec) * 4);
  }
  if (param_3 != 0) {
    FUN_007eeab2(0);
  }
  return;
}


