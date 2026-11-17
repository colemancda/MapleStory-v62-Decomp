/* FUN_005b9c24 - 0x005b9c24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005b9c24(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0xc0) != 0;
  if (bVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 4);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 4);
  }
  (**(code **)(iVar1 + 0x1c))(bVar2);
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x748) = 0;
  return;
}


