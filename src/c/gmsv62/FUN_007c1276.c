/* FUN_007c1276 - 0x007c1276 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007c1276(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  
  if (param_3 != 0) {
    iVar5 = *(int *)(param_1 + 8);
    local_8 = param_3;
    if (param_2 != *(int *)(iVar5 + 0x1794)) {
      uVar4 = *(uint *)(param_1 + 0x30);
      do {
        if (uVar4 == 0) {
          return;
        }
        iVar5 = *(int *)(*(int *)(uVar4 + 4) + 0x10);
        iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar4 = iVar2 + 0x10U & -(uint)(iVar2 != 0);
      } while (param_2 != *(int *)(iVar5 + 0x1794));
    }
    if (iVar5 != 0) {
      puVar1 = (uint *)(param_3 + 0xd78);
      param_3 = iVar5;
      if (*(uint *)(iVar5 + 0xd78) < *puVar1) {
        FUN_007c20ba(&local_8,&param_3);
      }
      puVar6 = (undefined4 *)FUN_007c1f30();
      *puVar6 = *(undefined4 *)(local_8 + 0xd78);
      uVar3 = *(undefined4 *)(param_3 + 0xd78);
      puVar6[3] = 0;
      puVar6[1] = uVar3;
      puVar6[2] = param_4;
    }
  }
  return;
}


