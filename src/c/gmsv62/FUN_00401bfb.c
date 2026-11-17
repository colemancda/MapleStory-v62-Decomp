/* FUN_00401bfb - 0x00401bfb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00401bfb(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_14 [16];
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x28) = 1;
    (*DAT_0097b508)(iVar1);
    uVar4 = *(uint *)(param_1 + 0x10);
    while (uVar4 != 0) {
      iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      iVar3 = *(int *)(uVar4 + 4);
      (*DAT_0097b504)(local_14,*(int *)(iVar3 + 0xc),*(int *)(iVar3 + 0x10),
                      *(int *)(*(int *)(iVar3 + 0x20) + 0x1c) + *(int *)(iVar3 + 0xc),
                      *(int *)(*(int *)(iVar3 + 0x20) + 0x20) + *(int *)(iVar3 + 0x10));
      (*DAT_0097b500)(iVar1,iVar1,local_14);
      uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    }
  }
  return;
}


