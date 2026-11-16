/* FUN_50813d69 - 0x50813d69 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50813d69(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(-(uint)(param_1 != 0) & param_1 - 0x10U);
  iVar1 = puVar5[2];
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    iVar1 = puVar5[1];
    if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    else {
      *(uint *)((int)this + 0xc) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar3 = -(uint)(puVar5[1] != 0) & puVar5[1] + 0x10;
      *(undefined4 *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 8) = 0;
    }
  }
  else {
    iVar2 = puVar5[1];
    if ((iVar2 + 0x10U & -(uint)(iVar2 != 0)) == 0) {
      *(uint *)((int)this + 0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar3 = -(uint)(puVar5[2] != 0) & puVar5[2] + 0x10;
      *(undefined4 *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4) = 0;
    }
    else {
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
      uVar3 = -(uint)(puVar5[2] != 0) & puVar5[2] + 0x10;
      uVar4 = -(uint)(puVar5[1] != 0) & puVar5[1] + 0x10;
      *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 8) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  FUN_5080254f(puVar5);
  return;
}


