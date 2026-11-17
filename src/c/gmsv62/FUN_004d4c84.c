/* FUN_004d4c84 - 0x004d4c84 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004d4c84(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_2 + 4);
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = 0;
    }
  }
  else if (*(int *)(param_2 + 4) == 0) {
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  }
  else {
    *(int *)(iVar1 + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  FUN_0040294d(param_2);
  return;
}


