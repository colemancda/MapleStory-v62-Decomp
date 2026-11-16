/* FUN_5000c753 - 0x5000c753 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_5000c753(void *this,uint param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar1 + -4);
  }
  if (uVar8 < param_1) {
    uVar4 = FUN_5000cda3(this);
    if (uVar4 < param_1) {
      puVar6 = FUN_500023f6();
      puVar6 = puVar6 + 1;
      if ((param_2 & 2) == 0) {
        puVar2 = puVar6 + uVar8;
        while (puVar7 = puVar2, puVar7 < puVar6 + param_1) {
          puVar2 = puVar7 + 1;
          if (puVar7 != (uint *)0x0) {
            *puVar7 = 0;
          }
        }
      }
      if (*(void **)this != (void *)0x0) {
        if ((param_2 & 1) == 0) {
          memcpy(puVar6,*(void **)this,uVar8 << 2);
        }
        FUN_5000257e(&DAT_50081f98,(undefined4 *)(*(int *)this + -4));
      }
      *(uint **)this = puVar6;
    }
    else if ((param_2 & 2) == 0) {
      iVar1 = *(int *)this;
      puVar3 = (undefined4 *)(iVar1 + uVar8 * 4);
      while (puVar5 = puVar3, puVar5 < (undefined4 *)(iVar1 + param_1 * 4)) {
        puVar3 = puVar5 + 1;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
      }
    }
  }
  else {
    for (piVar9 = (int *)(iVar1 + param_1 * 4); piVar9 < (int *)(iVar1 + uVar8 * 4);
        piVar9 = piVar9 + 1) {
      FUN_500122dd(piVar9);
    }
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


