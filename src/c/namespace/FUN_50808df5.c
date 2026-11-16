/* FUN_50808df5 - 0x50808df5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_50808df5(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar1 + -4);
  }
  if (uVar6 < param_1) {
    uVar2 = FUN_50809656(this);
    if (uVar2 < param_1) {
      puVar3 = FUN_50803b07();
      puVar3 = puVar3 + 1;
      if ((param_2 & 2) == 0) {
        for (puVar4 = puVar3 + uVar6 * 2; puVar4 < puVar3 + param_1 * 2; puVar4 = puVar4 + 2) {
          FUN_508095bf(puVar4);
        }
      }
      if (*(void **)this != (void *)0x0) {
        if ((param_2 & 1) == 0) {
          memcpy(puVar3,*(void **)this,uVar6 << 3);
        }
        FUN_50803c7e(&DAT_5081e9e0,(undefined4 *)(*(int *)this + -4));
      }
      *(uint **)this = puVar3;
    }
    else if ((param_2 & 2) == 0) {
      iVar1 = *(int *)this;
      for (puVar5 = (undefined4 *)(iVar1 + uVar6 * 8); puVar5 < (undefined4 *)(iVar1 + param_1 * 8);
          puVar5 = puVar5 + 2) {
        FUN_508095bf(puVar5);
      }
    }
  }
  else {
    for (piVar7 = (int *)(iVar1 + param_1 * 8); piVar7 < (int *)(iVar1 + uVar6 * 8);
        piVar7 = piVar7 + 2) {
      FUN_50808606(piVar7);
    }
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


