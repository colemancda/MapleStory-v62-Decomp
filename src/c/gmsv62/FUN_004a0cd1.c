/* FUN_004a0cd1 - 0x004a0cd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a0cd1(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x28))();
  if (iVar1 != 0) {
    iVar1 = FUN_004b3d90();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_004a0cf3;
    }
  }
  uVar2 = 0;
LAB_004a0cf3:
  FUN_0049fde4(uVar2);
  return;
}


