/* FUN_5140809f - 0x5140809f in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_5140809f(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x18);
  iVar1 = *(int *)((int)this + 0x1c);
  iVar3 = *(int *)((int)this + 8);
  if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
    if (iVar1 == param_2 || iVar1 - param_2 < 0) {
      if (*(int *)((int)this + 0x20) == 0) goto LAB_514080d6;
      local_8 = iVar2;
      do {
        iVar2 = iVar1;
        iVar3 = iVar3 + *(int *)((int)this + 0x10);
        local_c = local_c + *(int *)((int)this + 0x14);
        iVar1 = iVar2 * 2 - local_8;
        local_8 = iVar2;
      } while (iVar1 == param_2 || iVar1 - param_2 < 0);
    }
    else if (-1 < iVar2 - param_2) {
      return 0;
    }
    *param_1 = *param_1 + iVar3;
    param_1[1] = param_1[1] + local_c;
    *param_1 = (*(int *)((int)this + 0x10) * (param_2 - iVar2)) / (iVar1 - iVar2) + *param_1;
    param_1[1] = (*(int *)((int)this + 0x14) * (param_2 - iVar2)) / (iVar1 - iVar2) + param_1[1];
    if (param_3 != 0) {
      *(int *)((int)this + 0x18) = iVar2;
      *(int *)((int)this + 8) = iVar3;
      *(int *)((int)this + 0x1c) = iVar1;
      *(int *)((int)this + 0xc) = local_c;
    }
    return 0;
  }
LAB_514080d6:
  *param_1 = *param_1 + *(int *)((int)this + 0x10);
  param_1[1] = param_1[1] + *(int *)((int)this + 0x14);
  return 1;
}


