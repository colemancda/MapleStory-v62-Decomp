/* FUN_00609419 - 0x00609419 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00609419(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 0xf4) + 0xc))();
  iVar3 = 0x10b;
  iVar2 = 3;
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x20))(param_1,0x7d4,1,3,0x10b,0xd2,0x55,0);
  *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x34) = 0xfa;
  if (iVar2 < 4) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar2 + -2;
  }
  FUN_004ad003(iVar1);
  iVar1 = iVar2 + -1;
  if (iVar3 < iVar2 + -1) {
    iVar1 = iVar3;
  }
  FUN_004acfe9(iVar1);
  return;
}


