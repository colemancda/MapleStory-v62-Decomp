/* FUN_0044f4be - 0x0044f4be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0044f4be(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x30))();
  iVar2 = FUN_00424f08();
  return iVar2 + iVar1;
}


