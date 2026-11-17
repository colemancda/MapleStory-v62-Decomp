/* FUN_005fe2a8 - 0x005fe2a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005fe2a8(int param_1)

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
  *(undefined4 *)(param_1 + 0xaa8) = 0;
  *(undefined4 *)(param_1 + 0xaa4) = 0;
  *(undefined4 *)(param_1 + 0xa9c) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  return;
}


