/* FUN_00434530 - 0x00434530 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00434530(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  while (uVar1 = uVar3, uVar1 != 0) {
    iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = FUN_0042ee26(param_2);
    if (iVar2 != 0) {
      FUN_00435e0e(uVar1);
    }
  }
  return;
}


