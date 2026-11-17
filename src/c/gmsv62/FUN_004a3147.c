/* FUN_004a3147 - 0x004a3147 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a3147(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar4 = param_3;
    if (param_3 == 0) {
      uVar4 = *(uint *)(param_2 + 0xc);
    }
    if (param_4 == 0) {
      param_4 = *(uint *)(param_2 + 0x10);
    }
    if (uVar4 == param_4) {
      param_3 = 1;
    }
    else {
      param_3 = 1;
      uVar6 = uVar4;
      do {
        iVar1 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
        uVar6 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
        param_3 = param_3 + 1;
      } while (uVar6 != param_4);
    }
    uVar6 = -(uint)(uVar4 != 0) & uVar4 - 0x10;
    iVar1 = *(int *)(uVar6 + 8);
    if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
      uVar2 = -(uint)(param_4 != 0) & param_4 - 0x10;
      *(uint *)(param_2 + 0xc) = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
    }
    else {
      uVar2 = -(uint)(param_4 != 0) & param_4 - 0x10;
      uVar3 = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
      uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
    iVar1 = *(int *)(uVar6 + 8);
    if ((*(int *)(uVar2 + 4) + 0x10U & -(uint)(*(int *)(uVar2 + 4) != 0)) == 0) {
      *(uint *)(param_2 + 0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    }
    else {
      uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar5 = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
      *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 8) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - param_3;
    if ((param_5 == 0) && (param_5 = *(uint *)(param_1 + 0x10), param_5 == 0)) {
      *(uint *)(param_1 + 0xc) = uVar4;
      *(uint *)(param_1 + 0x10) = param_4;
      *(uint *)(param_1 + 8) = param_3;
      *(undefined4 *)(uVar6 + 8) = 0;
      *(undefined4 *)(uVar2 + 4) = 0;
    }
    else {
      uVar4 = -(uint)(*(int *)(param_5 - 0xc) != 0) & *(int *)(param_5 - 0xc) + 0x10U;
      if (uVar4 == 0) {
        *(uint *)(param_1 + 0x10) = param_4;
        *(undefined4 *)(uVar2 + 4) = 0;
      }
      else {
        *(uint *)(uVar4 - 8) = uVar2;
        uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
        *(uint *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4) = uVar4 - 0x10;
      }
      *(uint *)(uVar6 + 8) = param_5 - 0x10;
      param_5 = -(uint)(param_5 - 0x10 != 0) & param_5;
      *(uint *)((-(uint)(param_5 != 0) & param_5 - 0x10) + 4) = uVar6;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
    }
  }
  return;
}


