/* FUN_006efa7e - 0x006efa7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006efa7e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x55c) + 0x578);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  if (*(int **)(param_1 + 0x558) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x558) + 0xc))();
  }
  (**(code **)(**(int **)(param_1 + 0x558) + 0x20))(param_1,0,1,3,0x6b,8,0x5c,0);
  iVar1 = 0;
  if (5 < iVar2) {
    iVar1 = iVar2 + -4;
  }
  FUN_004ad003(iVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x558) + 0x34) = 100;
  return;
}


