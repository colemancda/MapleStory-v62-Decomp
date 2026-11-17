/* FUN_004b3ff6 - 0x004b3ff6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b3ff6(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004b48d4(0,*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x10) == 0) {
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
    return;
  }
  uVar2 = -(uint)(iVar1 != 0) & iVar1 - 0x10U;
  *(uint *)((-(uint)(*(int *)(param_1 + 0xc) != 0) & *(int *)(param_1 + 0xc) - 0x10U) + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  return;
}


