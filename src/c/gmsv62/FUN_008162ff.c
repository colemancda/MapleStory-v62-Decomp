/* FUN_008162ff - 0x008162ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008162ff(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x54);
  while (uVar3 != 0) {
    puVar1 = *(undefined4 **)(uVar3 + 4);
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = (**(code **)(puVar1[1] + 0x20))();
    if (iVar2 != 0) {
      (**(code **)*puVar1)();
    }
  }
  return;
}


