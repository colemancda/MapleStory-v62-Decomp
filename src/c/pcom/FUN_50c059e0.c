/* FUN_50c059e0 - 0x50c059e0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c059e0(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_LAB_50c134e0;
  iVar1 = *param_1;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_FUN_50c134dc;
  return this;
}


