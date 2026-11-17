/* FUN_005346a0 - 0x005346a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005346a0(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(param_1,1000,1,3,0xe5,0x47,0xa8,0);
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x34) = 0x9a;
  iVar1 = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + -4);
  }
  iVar1 = iVar1 * 0x15 + -0x95;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 / 0x15 + 2;
  }
  FUN_004ad003(iVar1);
  return;
}


