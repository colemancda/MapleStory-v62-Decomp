/* FUN_50c0b969 - 0x50c0b969 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint __thiscall FUN_50c0b969(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = -(uint)(param_1 != 0) & param_1 - 0x10U;
  iVar1 = *(int *)(uVar3 + 8);
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    uVar3 = FUN_50c0c7d3(this,0,*(int *)((int)this + 0xc));
    uVar3 = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    *(uint *)((-(uint)(*(int *)((int)this + 0xc) != 0) & *(int *)((int)this + 0xc) - 0x10U) + 8) =
         uVar3;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
    *(uint *)((int)this + 0xc) = uVar3;
  }
  else {
    uVar2 = FUN_50c0c7d3(this,-(uint)(iVar1 != 0) & iVar1 + 0x10U,param_1);
    uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)(uVar3 + 8) = uVar2;
    uVar3 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  return uVar3;
}


