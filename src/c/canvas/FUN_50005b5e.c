/* FUN_50005b5e - 0x50005b5e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50005b5e(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_50006511(param_1,*(int *)((int)param_1 + 0x10),0);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 == 0) {
    *(uint *)((int)param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  *(uint *)((int)param_1 + 0x10) = uVar2;
  return;
}


