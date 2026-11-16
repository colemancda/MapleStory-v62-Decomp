/* FUN_50403be8 - 0x50403be8 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint __thiscall FUN_50403be8(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < 0x65) {
    if (*(int *)((int)this + 0xa4) < 0x28) {
      *(uint *)((int)this + *(int *)((int)this + 0xa4) * 4) = param_1;
      *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + 1;
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + param_1;
      uVar3 = param_1;
    }
    else {
      iVar2 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4);
      piVar1 = (int *)((int)this + 0xa8);
      *(uint *)((int)this + *(int *)((int)this + 0xa8) * 4) = param_1;
      *piVar1 = *piVar1 + 1;
      if (0x27 < *piVar1) {
        *piVar1 = 0;
      }
      piVar1 = (int *)((int)this + 0xa0);
      *piVar1 = *piVar1 + (param_1 - iVar2);
      uVar3 = (uint)((int)*(uint *)((int)this + 0xa4) / 2 + *piVar1) / *(uint *)((int)this + 0xa4);
    }
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + (uVar3 - param_1);
    iVar2 = *(int *)((int)this + 0xac);
    param_1 = iVar2 / -10 + uVar3;
    if ((int)param_1 < 0) {
      *(uint *)((int)this + 0xac) = iVar2 - uVar3;
      param_1 = 0;
    }
    else {
      *(int *)((int)this + 0xac) = iVar2 + iVar2 / -10;
    }
  }
  return param_1;
}


