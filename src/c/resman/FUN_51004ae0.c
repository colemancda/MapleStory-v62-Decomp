/* FUN_51004ae0 - 0x51004ae0 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint __thiscall FUN_51004ae0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = param_1 * 2;
  uVar7 = iVar4 + 1;
  if (uVar7 < *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)((int)this + 0x10);
    iVar2 = *(int *)(iVar1 + param_1 * 4);
    iVar3 = *(int *)(iVar1 + uVar7 * 4);
    uVar5 = -(uint)(iVar3 != 0) & iVar3 - 0x10U;
    uVar6 = -(uint)(iVar2 != 0) & iVar2 - 0x10U;
    if (*(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 0x10) -
        *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 0x10) < 0) {
      if ((uVar7 < *(int *)((int)this + 0xc) - 1U) &&
         (iVar1 = *(int *)(iVar1 + 4 + uVar7 * 4), uVar5 = -(uint)(iVar1 != 0) & iVar1 - 0x10U,
         uVar6 = -(uint)(iVar3 != 0) & iVar3 - 0x10U,
         *(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 0x10) -
         *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 0x10) < 0)) {
        uVar7 = iVar4 + 2;
      }
    }
    else {
      uVar7 = iVar4 + 2;
      if ((*(uint *)((int)this + 0xc) <= uVar7) ||
         (iVar4 = *(int *)(iVar1 + uVar7 * 4), uVar5 = -(uint)(iVar4 != 0) & iVar4 - 0x10U,
         uVar6 = -(uint)(iVar2 != 0) & iVar2 - 0x10U,
         -1 < *(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 0x10) -
              *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 0x10))) goto LAB_51004bd8;
    }
    FUN_51004d80(this,param_1,uVar7);
  }
  else {
LAB_51004bd8:
    uVar7 = 0;
  }
  return uVar7;
}


