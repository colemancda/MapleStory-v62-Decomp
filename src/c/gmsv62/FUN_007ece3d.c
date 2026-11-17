/* FUN_007ece3d - 0x007ece3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007ece3d(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  DAT_0096c3c0 = iVar1 + *(int *)(param_1 + 0x1c) / 2;
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
  DAT_0096c3c4 = iVar1 + *(int *)(param_1 + 0x20) / 2;
  return;
}


