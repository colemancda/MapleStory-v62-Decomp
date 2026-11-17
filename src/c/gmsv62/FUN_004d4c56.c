/* FUN_004d4c56 - 0x004d4c56 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004d4c56(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_004d6439(0);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}


