/* FUN_005354ab - 0x005354ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005354ab(int param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(param_1,1000,1,3,0xe5,0x47,0xa8,0);
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x34) = 0x9a;
  iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0x50);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -4);
  }
  iVar2 = iVar1 * 0x15 + -0x95;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 / 0x15 + 2;
  }
  FUN_004ad003(iVar2);
  return;
}


