/* FUN_004033b3 - 0x004033b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004033b3(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00404b90(*(undefined4 *)(param_1 + 0x10),0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  return;
}


