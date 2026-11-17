/* FUN_0044f48d - 0x0044f48d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0044f48d(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x2c))();
  iVar2 = FUN_00424ee1();
  return iVar2 + iVar1;
}


