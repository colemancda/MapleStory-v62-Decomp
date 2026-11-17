/* FUN_006f1684 - 0x006f1684 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006f1684(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x5d0 + *(int *)(param_1 + 0x5a8) * 4) + 8);
  if (iVar2 == 0) {
    iVar2 = 0;
    iVar1 = iVar2;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
    iVar1 = iVar2;
    if (0xc < iVar2) {
      iVar1 = 0xc;
    }
  }
  if (*(int **)(param_1 + 0x588) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x588) + 0xc))();
  }
  if (*(int *)(param_1 + 0x5bc) != 0) {
    (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(param_1,1,1,3,0x8e,0x80,iVar1 * 0xd + 0x13,0);
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 100;
    iVar1 = 0;
    if (0xc < iVar2) {
      iVar1 = iVar2 + -0xb;
    }
    FUN_004ad003(iVar1);
  }
  return;
}


