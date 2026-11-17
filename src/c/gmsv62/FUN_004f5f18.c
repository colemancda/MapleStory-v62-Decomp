/* FUN_004f5f18 - 0x004f5f18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004f5f18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = 0;
  for (local_8 = 0;
      (iVar1 = *(int *)(param_1 + 0x728), iVar1 != 0 && (local_8 < *(uint *)(iVar1 + -4)));
      local_8 = local_8 + 1) {
    iVar1 = FUN_0045ec92(param_2);
    if (iVar1 != 0) {
      FUN_004f6ee5(*(int *)(param_1 + 0x728) + iVar2);
    }
    iVar2 = iVar2 + 0xc;
  }
  FUN_004f5f6c();
  return;
}


