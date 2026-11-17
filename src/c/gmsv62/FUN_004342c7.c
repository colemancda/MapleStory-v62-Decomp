/* FUN_004342c7 - 0x004342c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004342c7(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2;
  if (param_2 == -1) {
    iVar5 = *(int *)(param_1 + 0x18);
  }
  iVar3 = (*DAT_0097b704)();
  while ((*(int *)(param_1 + 0x40) != 0 &&
         (iVar1 = **(int **)(param_1 + 0x44), uVar4 = -(uint)(iVar1 != 0) & iVar1 - 0x10U,
         *(int *)((-(uint)(uVar4 != 0) & uVar4 + 0x10) + 8) - (iVar3 - iVar5) < 0))) {
    uVar4 = -(uint)(iVar1 != 0) & iVar1 - 0x10U;
    puVar2 = *(undefined4 **)(*(int *)((-(uint)(uVar4 != 0) & uVar4 + 0x10) + 4) + 8);
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = *puVar2;
    }
    FUN_004350ce(&param_2);
    FUN_00435151();
  }
  return;
}


