/* FUN_50c0bba1 - 0x50c0bba1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c0bba1(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar1 + -4);
  }
  if (uVar4 < param_1) {
    uVar5 = FUN_50c0c713(this);
    if (uVar5 < param_1) {
      puVar2 = FUN_50c025fb();
      puVar2 = puVar2 + 1;
      if ((param_2 & 2) == 0) {
        for (puVar3 = puVar2 + uVar4 * 2; puVar3 < puVar2 + param_1 * 2; puVar3 = puVar3 + 2) {
          FUN_50c0c914((int)puVar3);
        }
      }
      if (*(void **)this != (void *)0x0) {
        if ((param_2 & 1) == 0) {
          memcpy(puVar2,*(void **)this,uVar4 << 3);
        }
        FUN_50c02783(&DAT_50c21310,(undefined4 *)(*(int *)this + -4));
      }
      *(uint **)this = puVar2;
    }
    else if ((param_2 & 2) == 0) {
      iVar1 = *(int *)this;
      for (uVar4 = iVar1 + uVar4 * 8; uVar4 < iVar1 + param_1 * 8; uVar4 = uVar4 + 8) {
        FUN_50c0c914(uVar4);
      }
    }
  }
  else {
    for (uVar5 = iVar1 + param_1 * 8; uVar5 < iVar1 + uVar4 * 8; uVar5 = uVar5 + 8) {
      FUN_50c0bc9b(uVar5);
    }
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


