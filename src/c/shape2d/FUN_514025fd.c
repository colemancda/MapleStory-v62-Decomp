/* FUN_514025fd - 0x514025fd in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_514025fd(void *this,int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = param_2;
    if (param_2 == 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (param_3 == 0) {
      param_3 = *(uint *)(param_1 + 0x10);
    }
    if (uVar4 == param_3) {
      param_2 = 1;
    }
    else {
      param_2 = 1;
      uVar6 = uVar4;
      do {
        iVar1 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
        uVar6 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
        param_2 = param_2 + 1;
      } while (uVar6 != param_3);
    }
    uVar6 = -(uint)(uVar4 != 0) & uVar4 - 0x10;
    iVar1 = *(int *)(uVar6 + 8);
    if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
      uVar2 = -(uint)(param_3 != 0) & param_3 - 0x10;
      *(uint *)(param_1 + 0xc) = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
    }
    else {
      uVar2 = -(uint)(param_3 != 0) & param_3 - 0x10;
      uVar3 = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
      uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
    iVar1 = *(int *)(uVar6 + 8);
    if ((*(int *)(uVar2 + 4) + 0x10U & -(uint)(*(int *)(uVar2 + 4) != 0)) == 0) {
      *(uint *)(param_1 + 0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    }
    else {
      uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar5 = -(uint)(*(int *)(uVar2 + 4) != 0) & *(int *)(uVar2 + 4) + 0x10U;
      *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 8) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
    if ((param_4 == 0) && (param_4 = *(uint *)((int)this + 0x10), param_4 == 0)) {
      *(uint *)((int)this + 0xc) = uVar4;
      *(uint *)((int)this + 0x10) = param_3;
      *(uint *)((int)this + 8) = param_2;
      *(undefined4 *)(uVar6 + 8) = 0;
      *(undefined4 *)(uVar2 + 4) = 0;
    }
    else {
      uVar4 = -(uint)(*(int *)(param_4 - 0xc) != 0) & *(int *)(param_4 - 0xc) + 0x10U;
      if (uVar4 == 0) {
        *(uint *)((int)this + 0x10) = param_3;
        *(undefined4 *)(uVar2 + 4) = 0;
      }
      else {
        *(uint *)(uVar4 - 8) = uVar2;
        uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
        *(uint *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4) = uVar4 - 0x10;
      }
      *(uint *)(uVar6 + 8) = param_4 - 0x10;
      uVar4 = -(uint)(param_4 - 0x10 != 0) & param_4;
      *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4) = uVar6;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
    }
  }
  return;
}


