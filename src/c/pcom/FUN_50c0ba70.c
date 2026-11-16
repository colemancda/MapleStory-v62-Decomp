/* FUN_50c0ba70 - 0x50c0ba70 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c0ba70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  if (*(int *)this == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)this + -4);
  }
  if (param_1 == -1) {
    param_1 = local_8;
  }
  FUN_50c0bba1(this,local_8 + 1,2);
  iVar1 = param_1 * 8 + 8;
  iVar3 = param_1 * 8;
  memmove((void *)(*(int *)this + iVar1),(void *)(iVar3 + *(int *)this),
          (param_1 * 0x1fffffff + local_8) * 8);
  iVar2 = *(int *)this;
  for (uVar4 = iVar3 + iVar2; uVar4 < (uint)(iVar1 + iVar2); uVar4 = uVar4 + 8) {
    FUN_50c0c914(uVar4);
  }
  return iVar3 + *(int *)this;
}


