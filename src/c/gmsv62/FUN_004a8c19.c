/* FUN_004a8c19 - 0x004a8c19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a8c19(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x28))();
  if (iVar1 != 0) {
    iVar1 = FUN_004b3d90();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_004a8c3b;
    }
  }
  uVar2 = 0;
LAB_004a8c3b:
  FUN_004a7dcc(uVar2);
  return;
}


