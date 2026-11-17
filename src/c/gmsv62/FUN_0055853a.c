/* FUN_0055853a - 0x0055853a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0055853a(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  uVar3 = *(uint *)(param_1 + 0x10c);
  while (uVar3 != 0) {
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    puVar6 = (undefined4 *)(uVar3 + 0x10);
    local_8 = 0x31;
    do {
      if (puVar6[-1] != 0) {
        puVar5 = (undefined4 *)*puVar6;
        while (puVar5 != (undefined4 *)0x0) {
          iVar2 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
          puVar4 = (undefined4 *)FUN_0045f1e3(0xffffffff);
          *puVar4 = *puVar5;
          puVar5 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
        }
      }
      puVar6 = puVar6 + 5;
      local_8 = local_8 + -1;
      uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    } while (local_8 != 0);
  }
  return;
}


