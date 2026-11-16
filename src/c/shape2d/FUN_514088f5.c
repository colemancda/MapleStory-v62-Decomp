/* FUN_514088f5 - 0x514088f5 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Removing unreachable block (ram,0x51408908) */
/* WARNING: Removing unreachable block (ram,0x51408941) */

undefined4 __thiscall FUN_514088f5(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  iVar2 = *(int *)((int)this + 0xc);
  if (*(int *)((int)this + 8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_51405cd9(*(int **)((int)this + 8));
  }
  uVar4 = (**(code **)((int)this + 0x1c))
                    (*param_1,*(int *)((int)this + 0xc) + (int)piVar3,iVar1 - iVar2);
  *param_1 = uVar4;
  iVar1 = *(int *)((int)this + 0x18);
  iVar2 = *(int *)((int)this + 0x10);
  if (*(int *)((int)this + 8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_51405d00(*(int **)((int)this + 8));
  }
  uVar4 = (**(code **)((int)this + 0x1c))
                    (param_1[1],*(int *)((int)this + 0x10) + (int)piVar3,iVar1 - iVar2);
  param_1[1] = uVar4;
  return 0;
}


