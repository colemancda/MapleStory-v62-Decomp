/* FUN_504053da - 0x504053da in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint __thiscall FUN_504053da(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = -(uint)(param_1 != 0) & param_1 - 0x10U;
  iVar1 = *(int *)(uVar3 + 4);
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    uVar3 = FUN_50405efe(this,*(int *)((int)this + 0x10),0);
    uVar3 = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    *(uint *)((-(uint)(*(int *)((int)this + 0x10) != 0) & *(int *)((int)this + 0x10) - 0x10U) + 4) =
         uVar3;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
    *(uint *)((int)this + 0x10) = uVar3;
  }
  else {
    uVar2 = FUN_50405efe(this,param_1,-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 8) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)(uVar3 + 4) = uVar2;
    uVar3 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  return uVar3;
}


